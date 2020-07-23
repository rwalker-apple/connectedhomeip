/**
 *
 *    Copyright (c) 2020 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/**
 *
 *    Copyright (c) 2020 Silicon Labs
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

/*****************************************************************************
 * @file
 * @brief Routines for the base Level Control implementation
 *******************************************************************************
 ******************************************************************************/

#include "LevelControl.h"

#include <datamodel/ClusterOnOff.h>
#include <datamodel/Scene.h>
#include <support/logging/CHIPLogging.h>

// Rate of level control tick execution.
// To increase tick frequency (for more granular updates of device state based
// on level), redefine LEVEL_CONTROL_TICKS_PER_SECOND.
#ifndef EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND 32
#endif
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_TICK_TIME (MILLISECOND_TICKS_PER_SECOND / EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND)

#if (EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE == 0)
#define FASTEST_TRANSITION_TIME_MS 0
#else
#define FASTEST_TRANSITION_TIME_MS (MILLISECOND_TICKS_PER_SECOND / EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE)
#endif

#define INVALID_STORED_LEVEL 0xFFFF

#define STARTUP_CURRENT_LEVEL_USE_DEVICE_MINIMUM 0x00
#define STARTUP_CURRENT_LEVEL_USE_PREVIOUS_LEVEL 0xFF

static void moveToLevelHandler(uint8_t commandId, uint8_t level, uint16_t transitionTimeDs, uint8_t optionMask,
                               uint8_t optionOverride, uint16_t storedLevel);
static void moveHandler(uint8_t commandId, uint8_t moveMode, uint8_t rate, uint8_t optionMask, uint8_t optionOverride);
static void stepHandler(uint8_t commandId, uint8_t stepMode, uint8_t stepSize, uint16_t transitionTimeDs, uint8_t optionMask,
                        uint8_t optionOverride);
static void stopHandler(uint8_t commandId, uint8_t optionMask, uint8_t optionOverride);

static void setOnOffValue(uint8_t endpoint, bool onOff);
static void writeRemainingTime(uint8_t endpoint, uint16_t remainingTimeMs);
static bool shouldExecuteIfOff(uint8_t endpoint, uint8_t commandId, uint8_t optionMask, uint8_t optionOverride);

namespace chip {
namespace DataModel {

void LevelControl::schedule(uint32_t delayMs)
{
    mSystemLayer->StartTimer(delayMs, &mCallback);
}

void LevelControl::deactivate()
{
    mCallback.Cancel();
}

void LevelControl::updateCoupledColorTemp()
{
    Value optionsValue;

    if (CHIP_NO_ERROR != Get(kAttrIdOptions, optionsValue))
    {
        // options attribute not present
        return;
    }

    if (ValueToUInt8(optionsValue) & kOptionsCoupleColorTempToLevel)
    {
        // TODO: call the ColorControl cluster on this endpoint
        //  emberAfPluginLevelControlCoupledColorTempChangeCallback(endpoint);
    }
}

void LevelControl::Timer(LevelControl * me)
{
    me->tickCallback();
}

void LevelControl::tickCallback()
{

    mState.elapsedTimeMs += mState.eventDurationMs;

    uint8_t currentLevel = ValueToUInt8(mCurrentLevel.Get());
    uint8_t oldLevel     = currentLevel;

    // adjust by the proper amount, either up or down
    if (mState.transitionTimeMs == 0)
    {
        // Immediate, not over a time interval.
        currentLevel = mState.moveToLevel;
    }
    else if (mState.increasing)
    {
        assert(currentLevel < kMaxLevel);
        assert(currentLevel < mState.moveToLevel);
        currentLevel++;
    }
    else
    {
        assert(kMinLevel < currentLevel);
        assert(mState.moveToLevel < currentLevel);
        currentLevel--;
    }

    Log(Logging::kLogModule_Zcl, Logging::kLogCategory_Progress, "Event: move from %d to %d (diff %c1)", oldLevel, currentLevel,
        mState.increasing ? '+' : '-');

    mCurrentLevel.Set(Value(kValueType_UInt8, currentLevel));

    updateCoupledColorTemp();

    // The level has changed, so the scene is no longer valid.
    Scene * scene = reinterpret_cast<Scene *>(Find([](Cluster * item) -> bool { return (item->Id() == Scene::kId); }));
    if (nullptr != scene)
    {
        scene->MakeInvalid();
    }

    // Are we at the requested level?
    if (currentLevel == mState.moveToLevel)
    {
        if (mState.commandId == kCmdIdMoveToLevelWithOnOff || mState.commandId == kCmdIdMoveWithOnOff ||
            mState.commandId == kCmdIdStepWithOnOff)
        {
            setOnOffValue(currentLevel != kMinLevel);
            if (currentLevel == kMinLevel && mState.useOnLevel)
            {
                mCurrentLevel.Set(Value(kValueType_UInt8, mState.onLevel));

                updateCoupledColorTemp();
            }
        }
        else
        {
            if (mState.storedLevel != kInvalidStoredLevel)
            {
                uint8_t storedLevel8u = (uint8_t) mState.storedLevel;
                mCurrentLevel.Set(Value(kValueType_UInt8, storedLevel8u));

                updateCoupledColorTemp();
            }
        }
        writeRemainingTime(0);
    }
    else
    {
        writeRemainingTime(mState.transitionTimeMs - mState.elapsedTimeMs);
        schedule(mState.eventDurationMs);
    }
}

void LevelControl::writeRemainingTime(uint16_t remainingTimeMs)
{
    // Convert milliseconds to tenths of a second, rounding any fractional value
    // up to the nearest whole value.  This means:
    //
    //   0 ms = 0.00 ds = 0 ds
    //   1 ms = 0.01 ds = 1 ds
    //   ...
    //   100 ms = 1.00 ds = 1 ds
    //   101 ms = 1.01 ds = 2 ds
    //   ...
    //   200 ms = 2.00 ds = 2 ds
    //   201 ms = 2.01 ds = 3 ds
    //   ...
    //
    // This is done to ensure that the attribute, in tenths of a second, only
    // goes to zero when the remaining time in milliseconds is actually zero.
    uint16_t remainingTimeDs = (remainingTimeMs + 99) / 100;
    mRemainingTime.Set(Value(kValueType_UInt16, remainingTimeDs));
}

void LevelControl::setOnOffValue(bool onOff)
{
    ClusterOnOff * onoff =
        reinterpret_cast<ClusterOnOff *>(Find([](Cluster * item) -> bool { return (item->Id() == ClusterOnOff::kId); }));
    if (nullptr != onoff)
    {
        Log(Logging::kLogModule_Zcl, Logging::kLogCategory_Progress, "Setting on/off to %p due to level change",
            onOff ? "ON" : "OFF");
        onoff->Set(ClusterOnOff::kAttrIdOnOff, ValueBool(onOff));
    }
}

bool LevelControl::shouldExecuteIfOff(CmdId commandId, uint8_t optionMask, uint8_t optionOverride)
{
    Value optionsValue;

    CHIP_ERROR status = Get(kAttrIdOptions, optionsValue);
    if (CHIP_NO_ERROR != status)
    {
        return true;
    }

    uint8_t options = ValueToUInt8(optionsValue);

    // From 3.10.2.2.8.1 of ZCL7 document 14-0127-20j-zcl-ch-3-general.docx:
    //   "Command execution SHALL NOT continue beyond the Options processing if
    //    all of these criteria are true:
    //      - The command is one of the ‘without On/Off’ commands: Move, Move to
    //        Level, Stop, or Step.
    //      - The On/Off cluster exists on the same endpoint as this cluster.
    //      - The OnOff attribute of the On/Off cluster, on this endpoint, is 0x00
    //        (FALSE).
    //      - The value of the ExecuteIfOff bit is 0."
    if (commandId > kCmdIdStop)
    {
        return true;
    }

    ClusterOnOff * onoff =
        reinterpret_cast<ClusterOnOff *>(Find([](Cluster * item) -> bool { return (item->Id() == ClusterOnOff::kId); }));
    if (nullptr == onoff)
    {
        return true;
    }

    Value onValue;

    status = onoff->Get(ClusterOnOff::kAttrIdOnOff, onValue);
    if (CHIP_NO_ERROR != status)
    {
        Log(Logging::kLogModule_Zcl, Logging::kLogCategory_Error, "Unable to read OnOff attribute: 0x%X", status);
        return true;
    }
    bool on = ValueToBool(onValue);

    // The device is on - hence ExecuteIfOff does not matter
    if (on)
    {
        return true;
    }
    // The OptionsMask & OptionsOverride fields SHALL both be present or both
    // omitted in the command. A temporary Options bitmap SHALL be created from
    // the Options attribute, using the OptionsMask & OptionsOverride fields, if
    // present. Each bit of the temporary Options bitmap SHALL be determined as
    // follows:
    // Each bit in the Options attribute SHALL determine the corresponding bit in
    // the temporary Options bitmap, unless the OptionsMask field is present and
    // has the corresponding bit set to 1, in which case the corresponding bit in
    // the OptionsOverride field SHALL determine the corresponding bit in the
    // temporary Options bitmap.
    // The resulting temporary Options bitmap SHALL then be processed as defined
    // in section 3.10.2.2.3.

    // ---------- The following order is important in decission making -------
    // -----------more readable ----------
    //
    if (optionMask == 0xFF && optionOverride == 0xFF)
    {
        // 0xFF are the default values passed to the command handler when
        // the payload is not present - in that case there is use of option
        // attribute to decide execution of the command
        return options & kOptionsExecuteIfOff;
    }
    // ---------- The above is to distinguish if the payload is present or not

    if (optionMask & kOptionsExecuteIfOff)
    {
        // Mask is present and set in the command payload, this indicates
        // use the over ride as temporary option
        return optionOverride & kOptionsExecuteIfOff;
    }
    // if we are here - use the option bits
    return options & kOptionsExecuteIfOff;
}

bool emberAfLevelControlClusterMoveToLevelCallback(uint8_t level, uint16_t transitionTime, uint8_t optionMask,
                                                   uint8_t optionOverride)
{
    emberAfLevelControlClusterPrintln("%pMOVE_TO_LEVEL %x %2x %x %x", "RX level-control:", level, transitionTime, optionMask,
                                      optionOverride);
    moveToLevelHandler(ZCL_MOVE_TO_LEVEL_COMMAND_ID, level, transitionTime, optionMask, optionOverride,
                       INVALID_STORED_LEVEL); // Don't revert to the stored level
    return true;
}

bool emberAfLevelControlClusterMoveToLevelWithOnOffCallback(uint8_t level, uint16_t transitionTime)
{
    emberAfLevelControlClusterPrintln("%pMOVE_TO_LEVEL_WITH_ON_OFF %x %2x", "RX level-control:", level, transitionTime);
    moveToLevelHandler(ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID, level, transitionTime, 0xFF, 0xFF,
                       INVALID_STORED_LEVEL); // Don't revert to the stored level
    return true;
}

bool emberAfLevelControlClusterMoveCallback(uint8_t moveMode, uint8_t rate, uint8_t optionMask, uint8_t optionOverride)
{
    emberAfLevelControlClusterPrintln("%pMOVE %x %x", "RX level-control:", moveMode, rate);
    moveHandler(ZCL_MOVE_COMMAND_ID, moveMode, rate, optionMask, optionOverride);
    return true;
}

bool emberAfLevelControlClusterMoveWithOnOffCallback(uint8_t moveMode, uint8_t rate)
{
    emberAfLevelControlClusterPrintln("%pMOVE_WITH_ON_OFF %x %x", "RX level-control:", moveMode, rate);
    moveHandler(ZCL_MOVE_WITH_ON_OFF_COMMAND_ID, moveMode, rate, 0xFF, 0xFF);
    return true;
}

bool emberAfLevelControlClusterStepCallback(uint8_t stepMode, uint8_t stepSize, uint16_t transitionTime, uint8_t optionMask,
                                            uint8_t optionOverride)
{
    emberAfLevelControlClusterPrintln("%pSTEP %x %x %2x", "RX level-control:", stepMode, stepSize, transitionTime);
    stepHandler(ZCL_STEP_COMMAND_ID, stepMode, stepSize, transitionTime, optionMask, optionOverride);
    return true;
}

bool emberAfLevelControlClusterStepWithOnOffCallback(uint8_t stepMode, uint8_t stepSize, uint16_t transitionTime)
{
    emberAfLevelControlClusterPrintln("%pSTEP_WITH_ON_OFF %x %x %2x", "RX level-control:", stepMode, stepSize, transitionTime);
    stepHandler(ZCL_STEP_WITH_ON_OFF_COMMAND_ID, stepMode, stepSize, transitionTime, 0xFF, 0xFF);
    return true;
}

bool emberAfLevelControlClusterStopCallback(uint8_t optionMask, uint8_t optionOverride)
{
    emberAfLevelControlClusterPrintln("%pSTOP", "RX level-control:");
    stopHandler(ZCL_STOP_COMMAND_ID, optionMask, optionOverride);
    return true;
}

bool emberAfLevelControlClusterStopWithOnOffCallback(void)
{
    emberAfLevelControlClusterPrintln("%pSTOP_WITH_ON_OFF", "RX level-control:");
    stopHandler(ZCL_STOP_WITH_ON_OFF_COMMAND_ID, 0xFF, 0xFF);
    return true;
}

#define readInt_or(val, buf, buflen, offset, x)                                                                                    \
    do                                                                                                                             \
    {                                                                                                                              \
        if ((buflen) > (offset) + (sizeof(val)))                                                                                   \
        {                                                                                                                          \
            (val) = 0;                                                                                                             \
            for (_int i = 0; i < (sizeof(val)); i++)                                                                               \
            {                                                                                                                      \
                (val) *= 256;                                                                                                      \
                (val) += *(uint8_t *) ((buf) + (offset) + i);                                                                      \
            }                                                                                                                      \
            (offset) += (size);                                                                                                    \
        }                                                                                                                          \
        else                                                                                                                       \
        {                                                                                                                          \
            x;                                                                                                                     \
        }                                                                                                                          \
    } while (0)

// Cluster: Level Control, server, from SiLabs call-command-handler.c
CHIP_ERROR LevelControl::HandleCommand(const Command & cmd)
{
    bool wasHandled = false;
    switch (cmd->commandId)
    {
    case kCmdIdMoveToLevel: {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t level;           // Ver.: always
        uint16_t transitionTime; // Ver.: always
        uint8_t optionMask;      // Ver.: since zcl6-errata-14-0129-15
        uint8_t optionOverride;  // Ver.: since zcl6-errata-14-0129-15
        // Command is not a fixed length

        readInt_or(level, cmd->buf, cmd->bufLen, payloadOffset, return CHIP_ERROR_INVALID_MESSAGE_LENGTH);
        readInt_or(transitionTime, cmd->buf, cmd->bufLen, payloadOffset, return CHIP_ERROR_INVALID_MESSAGE_LENGTH);
        if ((cmd->bufLen < payloadOffset + 1u))
        {
            // Argument is not always present:
            // - it is present only in versions higher than: zcl6-errata-14-0129-15
            optionMask = 0xFF;
        }
        else
        {
            readInt_or(optionMask, cmd->buffer, cmd->bufLen, payloadOffset, return CHIP_ERROR_INVALID_MESSAGE_LENGTH);
        }
        if ((cmd->bufLen < payloadOffset + 1u))
        {
            // Argument is not always present:
            // - it is present only in versions higher than: zcl6-errata-14-0129-15
            optionOverride = 0xFF;
        }
        else
        {
            readInt_or(optionOverride, cmd->buffer, cmd->bufLen, payloadOffset, return CHIP_ERROR_INVALID_MESSAGE_LENGTH);
        }
        return moveToLevelHandler(cmd->commandId, level, transitionTime, optionMask, optionOverride);
    }
        //    case ZCL_MOVE_COMMAND_ID: {
        //        uint16_t payloadOffset = cmd->payloadStartIndex;
        //        uint8_t moveMode;       // Ver.: always
        //        uint8_t rate;           // Ver.: always
        //        uint8_t optionMask;     // Ver.: since zcl6-errata-14-0129-15
        //        uint8_t optionOverride; // Ver.: since zcl6-errata-14-0129-15
        //        // Command is not a fixed length
        //        if (cmd->bufLen < payloadOffset + 1u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        moveMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        if (cmd->bufLen < payloadOffset + 1u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        rate = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        if ((cmd->bufLen < payloadOffset + 1u))
        //        {
        //            // Argument is not always present:
        //            // - it is present only in versions higher than: zcl6-errata-14-0129-15
        //            optionMask = 0xFF;
        //        }
        //        else
        //        {
        //            optionMask = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //            payloadOffset += 1u;
        //        }
        //        if ((cmd->bufLen < payloadOffset + 1u))
        //        {
        //            // Argument is not always present:
        //            // - it is present only in versions higher than: zcl6-errata-14-0129-15
        //            optionOverride = 0xFF;
        //        }
        //        else
        //        {
        //            optionOverride = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        }
        //        wasHandled = emberAfLevelControlClusterMoveCallback(moveMode, rate, optionMask, optionOverride);
        //        break;
        //    }
        //    case ZCL_STEP_COMMAND_ID: {
        //        uint16_t payloadOffset = cmd->payloadStartIndex;
        //        uint8_t stepMode;        // Ver.: always
        //        uint8_t stepSize;        // Ver.: always
        //        uint16_t transitionTime; // Ver.: always
        //        uint8_t optionMask;      // Ver.: since zcl6-errata-14-0129-15
        //        uint8_t optionOverride;  // Ver.: since zcl6-errata-14-0129-15
        //        // Command is not a fixed length
        //        if (cmd->bufLen < payloadOffset + 1u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        stepMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        if (cmd->bufLen < payloadOffset + 1u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        stepSize = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        if (cmd->bufLen < payloadOffset + 2u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 2u;
        //        if ((cmd->bufLen < payloadOffset + 1u))
        //        {
        //            // Argument is not always present:
        //            // - it is present only in versions higher than: zcl6-errata-14-0129-15
        //            optionMask = 0xFF;
        //        }
        //        else
        //        {
        //            optionMask = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //            payloadOffset += 1u;
        //        }
        //        if ((cmd->bufLen < payloadOffset + 1u))
        //        {
        //            // Argument is not always present:
        //            // - it is present only in versions higher than: zcl6-errata-14-0129-15
        //            optionOverride = 0xFF;
        //        }
        //        else
        //        {
        //            optionOverride = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        }
        //        wasHandled = emberAfLevelControlClusterStepCallback(stepMode, stepSize, transitionTime, optionMask,
        //        optionOverride); break;
        //    }
        //    case ZCL_STOP_COMMAND_ID: {
        //        uint16_t payloadOffset = cmd->payloadStartIndex;
        //        uint8_t optionMask;     // Ver.: since zcl6-errata-14-0129-15
        //        uint8_t optionOverride; // Ver.: since zcl6-errata-14-0129-15
        //        // Command is not a fixed length
        //        if ((cmd->bufLen < payloadOffset + 1u))
        //        {
        //            // Argument is not always present:
        //            // - it is present only in versions higher than: zcl6-errata-14-0129-15
        //            optionMask = 0xFF;
        //        }
        //        else
        //        {
        //            optionMask = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //            payloadOffset += 1u;
        //        }
        //        if ((cmd->bufLen < payloadOffset + 1u))
        //        {
        //            // Argument is not always present:
        //            // - it is present only in versions higher than: zcl6-errata-14-0129-15
        //            optionOverride = 0xFF;
        //        }
        //        else
        //        {
        //            optionOverride = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        }
        //        wasHandled = emberAfLevelControlClusterStopCallback(optionMask, optionOverride);
        //        break;
        //    }
        //    case ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID: {
        //        uint16_t payloadOffset = cmd->payloadStartIndex;
        //        uint8_t level;           // Ver.: always
        //        uint16_t transitionTime; // Ver.: always
        //        // Command is fixed length: 3
        //        if (cmd->bufLen < payloadOffset + 3u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        level = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        wasHandled     = emberAfLevelControlClusterMoveToLevelWithOnOffCallback(level, transitionTime);
        //        break;
        //    }
        //    case ZCL_MOVE_WITH_ON_OFF_COMMAND_ID: {
        //        uint16_t payloadOffset = cmd->payloadStartIndex;
        //        uint8_t moveMode; // Ver.: always
        //        uint8_t rate;     // Ver.: always
        //        // Command is fixed length: 2
        //        if (cmd->bufLen < payloadOffset + 2u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        moveMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        rate       = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        wasHandled = emberAfLevelControlClusterMoveWithOnOffCallback(moveMode, rate);
        //        break;
        //    }
        //    case ZCL_STEP_WITH_ON_OFF_COMMAND_ID: {
        //        uint16_t payloadOffset = cmd->payloadStartIndex;
        //        uint8_t stepMode;        // Ver.: always
        //        uint8_t stepSize;        // Ver.: always
        //        uint16_t transitionTime; // Ver.: always
        //        // Command is fixed length: 4
        //        if (cmd->bufLen < payloadOffset + 4u)
        //        {
        //            return CHIP_ERROR_INVALID_MESSAGE_LENGTH;
        //        }
        //        stepMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        stepSize = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        payloadOffset += 1u;
        //        transitionTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        //        wasHandled     = emberAfLevelControlClusterStepWithOnOffCallback(stepMode, stepSize, transitionTime);
        //        break;
        //    }
        //    case ZCL_STOP_WITH_ON_OFF_COMMAND_ID: {
        //        // Command is fixed length: 0
        //        wasHandled = emberAfLevelControlClusterStopWithOnOffCallback();
        //        break;
        //    }
        //    default: {
        //        // Unrecognized command ID, error status will apply.
        //        break;
        // }
    }
    return status;
} // namespace DataModel

CHIP_ERROR LevelControl::moveToLevelHandler(uint8_t commandId, uint8_t level, uint16_t transitionTimeDs, uint8_t optionMask,
                                            uint8_t optionOverride, uint16_t storedLevel)
{
    CHIP_ERROR status;
    uint8_t currentLevel;
    uint8_t actualStepSize;

    if (!shouldExecuteIfOff(commandId, optionMask, optionOverride))
    {
        status = CHIP_NO_ERROR;
        goto send_default_response;
    }

    // Cancel any currently active command before fiddling with the state.
    deactivate(endpoint);

    status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                        (uint8_t *) &currentLevel, sizeof(currentLevel));
    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
        goto send_default_response;
    }

    mState.commandId = commandId;

    // Move To Level commands cause the device to move from its current level to
    // the specified level at the specified rate.
    if (kMaxLevel < level)
    {
        mState.moveToLevel = kMaxLevel;
    }
    else if (level < kMinLevel)
    {
        mState.moveToLevel = kMinLevel;
    }
    else
    {
        mState.moveToLevel = level;
    }

    // If the level is decreasing, the On/Off attribute is left unchanged.  This
    // logic is to prevent a light from transitioning from off to bright to dim.
    // Instead, a light that is off will stay off until the target level is
    // reached.
    if (currentLevel <= mState.moveToLevel)
    {
        if (commandId == ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID)
        {
            setOnOffValue(mState.moveToLevel != kMinLevel);
        }
        if (currentLevel == mState.moveToLevel)
        {
            status = EMBER_ZCL_STATUS_SUCCESS;
            goto send_default_response;
        }
        mState.increasing = true;
        actualStepSize    = mState.moveToLevel - currentLevel;
    }
    else
    {
        mState.increasing = false;
        actualStepSize    = currentLevel - mState.moveToLevel;
    }

    // If the Transition time field takes the value 0xFFFF, then the time taken
    // to move to the new level shall instead be determined by the On/Off
    // Transition Time attribute.  If On/Off Transition Time, which is an
    // optional attribute, is not present, the device shall move to its new level
    // as fast as it is able.
    if (transitionTimeDs == 0xFFFF)
    {
#ifdef ZCL_USING_LEVEL_CONTROL_CLUSTER_ON_OFF_TRANSITION_TIME_ATTRIBUTE
        status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_ON_OFF_TRANSITION_TIME_ATTRIBUTE_ID,
                                            (uint8_t *) &transitionTimeDs, sizeof(transitionTimeDs));
        if (status != EMBER_ZCL_STATUS_SUCCESS)
        {
            emberAfLevelControlClusterPrintln("ERR: reading on/off transition time %x", status);
            goto send_default_response;
        }

        // Transition time comes in (or is stored, in the case of On/Off Transition
        // Time) as tenths of a second, but we work in milliseconds.
        mState.transitionTimeMs = (transitionTimeDs * MILLISECOND_TICKS_PER_SECOND / 10);
#else  // ZCL_USING_LEVEL_CONTROL_CLUSTER_ON_OFF_TRANSITION_TIME_ATTRIBUTE
       // If the Transition Time field is 0xFFFF and On/Off Transition Time,
       // which is an optional attribute, is not present, the device shall move to
       // its new level as fast as it is able.
        mState.transitionTimeMs = FASTEST_TRANSITION_TIME_MS;
#endif // ZCL_USING_LEVEL_CONTROL_CLUSTER_ON_OFF_TRANSITION_TIME_ATTRIBUTE
    }
    else
    {
        // Transition time comes in (or is stored, in the case of On/Off Transition
        // Time) as tenths of a second, but we work in milliseconds.
        mState.transitionTimeMs = (transitionTimeDs * MILLISECOND_TICKS_PER_SECOND / 10);
    }

    // The duration between events will be the transition time divided by the
    // distance we must move.
    mState.eventDurationMs = mState.transitionTimeMs / actualStepSize;
    mState.elapsedTimeMs   = 0;

    // OnLevel is not used for Move commands.
    mState.useOnLevel = false;

    mState.storedLevel = storedLevel;

    // The setup was successful, so mark the new state as active and return.
    schedule(endpoint, mState.eventDurationMs);
    status = EMBER_ZCL_STATUS_SUCCESS;

#ifdef EMBER_AF_PLUGIN_ZLL_LEVEL_CONTROL_SERVER
    if (commandId == ZCL_MOVE_TO_LEVEL_WITH_ON_OFF_COMMAND_ID)
    {
        emberAfPluginZllLevelControlServerMoveToLevelWithOnOffZllExtensions(emberAfCurrentCommand());
    }
#endif

send_default_response:
    if (emberAfCurrentCommand()->apsFrame->clusterId == ZCL_LEVEL_CONTROL_CLUSTER_ID)
    {
        emberAfSendImmediateDefaultResponse(status);
    }
    return status;
}

static void moveHandler(uint8_t commandId, uint8_t moveMode, uint8_t rate, uint8_t optionMask, uint8_t optionOverride)
{
    uint8_t endpoint                 = emberAfCurrentEndpoint();
    EmberAfLevelControlState * state = getState(endpoint);
    EmberAfStatus status;
    uint8_t currentLevel;
    uint8_t difference;

    if (state == NULL)
    {
        status = EMBER_ZCL_STATUS_FAILURE;
        goto send_default_response;
    }

    if (!shouldExecuteIfOff(endpoint, commandId, optionMask, optionOverride))
    {
        status = EMBER_ZCL_STATUS_SUCCESS;
        goto send_default_response;
    }

    // Cancel any currently active command before fiddling with the state.
    deactivate(endpoint);

    status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                        (uint8_t *) &currentLevel, sizeof(currentLevel));
    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
        goto send_default_response;
    }

    mState.commandId = commandId;

    // Move commands cause the device to move from its current level to either
    // the maximum or minimum level at the specified rate.
    switch (moveMode)
    {
    case EMBER_ZCL_MOVE_MODE_UP:
        mState.increasing  = true;
        mState.moveToLevel = kMaxLevel;
        difference         = kMaxLevel - currentLevel;
        break;
    case EMBER_ZCL_MOVE_MODE_DOWN:
        mState.increasing  = false;
        mState.moveToLevel = kMinLevel;
        difference         = currentLevel - kMinLevel;
        break;
    default:
        status = EMBER_ZCL_STATUS_INVALID_FIELD;
        goto send_default_response;
    }

    // If the level is decreasing, the On/Off attribute is left unchanged.  This
    // logic is to prevent a light from transitioning from off to bright to dim.
    // Instead, a light that is off will stay off until the target level is
    // reached.
    if (currentLevel <= mState.moveToLevel)
    {
        if (commandId == ZCL_MOVE_WITH_ON_OFF_COMMAND_ID)
        {
            setOnOffValue(mState.moveToLevel != kMinLevel);
        }
        if (currentLevel == mState.moveToLevel)
        {
            status = EMBER_ZCL_STATUS_SUCCESS;
            goto send_default_response;
        }
    }

    // If the Rate field is 0xFF, the device should move as fast as it is able.
    // Otherwise, the rate is in units per second.
    if (rate == 0xFF)
    {
        mState.eventDurationMs = FASTEST_TRANSITION_TIME_MS;
    }
    else
    {
        mState.eventDurationMs = MILLISECOND_TICKS_PER_SECOND / rate;
    }
    mState.transitionTimeMs = difference * mState.eventDurationMs;
    mState.elapsedTimeMs    = 0;

    // OnLevel is not used for Move commands.
    mState.useOnLevel = false;

    // The setup was successful, so mark the new state as active and return.
    schedule(endpoint, mState.eventDurationMs);
    status = EMBER_ZCL_STATUS_SUCCESS;

send_default_response:
    emberAfSendImmediateDefaultResponse(status);
}

static void stepHandler(uint8_t commandId, uint8_t stepMode, uint8_t stepSize, uint16_t transitionTimeDs, uint8_t optionMask,
                        uint8_t optionOverride)
{
    uint8_t endpoint                 = emberAfCurrentEndpoint();
    EmberAfLevelControlState * state = getState(endpoint);
    EmberAfStatus status;
    uint8_t currentLevel;
    uint8_t actualStepSize = stepSize;

    if (state == NULL)
    {
        status = EMBER_ZCL_STATUS_FAILURE;
        goto send_default_response;
    }

    if (!shouldExecuteIfOff(endpoint, commandId, optionMask, optionOverride))
    {
        status = EMBER_ZCL_STATUS_SUCCESS;
        goto send_default_response;
    }

    // Cancel any currently active command before fiddling with the state.
    deactivate(endpoint);

    status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                        (uint8_t *) &currentLevel, sizeof(currentLevel));
    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
        goto send_default_response;
    }

    mState.commandId = commandId;

    // Step commands cause the device to move from its current level to a new
    // level over the specified transition time.
    switch (stepMode)
    {
    case EMBER_ZCL_STEP_MODE_UP:
        mState.increasing = true;
        if (kMaxLevel - currentLevel < stepSize)
        {
            mState.moveToLevel = kMaxLevel;
            actualStepSize     = (kMaxLevel - currentLevel);
        }
        else
        {
            mState.moveToLevel = currentLevel + stepSize;
        }
        break;
    case EMBER_ZCL_STEP_MODE_DOWN:
        mState.increasing = false;
        if (currentLevel - kMinLevel < stepSize)
        {
            mState.moveToLevel = kMinLevel;
            actualStepSize     = (currentLevel - kMinLevel);
        }
        else
        {
            mState.moveToLevel = currentLevel - stepSize;
        }
        break;
    default:
        status = EMBER_ZCL_STATUS_INVALID_FIELD;
        goto send_default_response;
    }

    // If the level is decreasing, the On/Off attribute is left unchanged.  This
    // logic is to prevent a light from transitioning from off to bright to dim.
    // Instead, a light that is off will stay off until the target level is
    // reached.
    if (currentLevel <= mState.moveToLevel)
    {
        if (commandId == ZCL_STEP_WITH_ON_OFF_COMMAND_ID)
        {
            setOnOffValue(mState.moveToLevel != kMinLevel);
        }
        if (currentLevel == mState.moveToLevel)
        {
            status = EMBER_ZCL_STATUS_SUCCESS;
            goto send_default_response;
        }
    }

    // If the Transition Time field is 0xFFFF, the device should move as fast as
    // it is able.
    if (transitionTimeDs == 0xFFFF)
    {
        mState.transitionTimeMs = FASTEST_TRANSITION_TIME_MS;
    }
    else
    {
        // Transition time comes in as tenths of a second, but we work in
        // milliseconds.
        mState.transitionTimeMs = (transitionTimeDs * MILLISECOND_TICKS_PER_SECOND / 10);
        // If the new level was pegged at the minimum level, the transition time
        // shall be proportionally reduced.  This is done after the conversion to
        // milliseconds to reduce rounding errors in integer division.
        if (stepSize != actualStepSize)
        {
            mState.transitionTimeMs = (mState.transitionTimeMs * actualStepSize / stepSize);
        }
    }

    // The duration between events will be the transition time divided by the
    // distance we must move.
    mState.eventDurationMs = mState.transitionTimeMs / actualStepSize;
    mState.elapsedTimeMs   = 0;

    // OnLevel is not used for Step commands.
    mState.useOnLevel = false;

    // The setup was successful, so mark the new state as active and return.
    schedule(endpoint, mState.eventDurationMs);
    status = EMBER_ZCL_STATUS_SUCCESS;

send_default_response:
    emberAfSendImmediateDefaultResponse(status);
}

static void stopHandler(uint8_t commandId, uint8_t optionMask, uint8_t optionOverride)
{
    uint8_t endpoint                 = emberAfCurrentEndpoint();
    EmberAfLevelControlState * state = getState(endpoint);
    EmberAfStatus status;

    if (state == NULL)
    {
        status = EMBER_ZCL_STATUS_FAILURE;
        goto send_default_response;
    }

    if (!shouldExecuteIfOff(endpoint, commandId, optionMask, optionOverride))
    {
        status = EMBER_ZCL_STATUS_SUCCESS;
        goto send_default_response;
    }

    // Cancel any currently active command.
    deactivate(endpoint);
    writeRemainingTime(endpoint, 0);
    status = EMBER_ZCL_STATUS_SUCCESS;

send_default_response:
    emberAfSendImmediateDefaultResponse(status);
}

// Follows 07-5123-04 (ZigBee Cluster Library doc), section 3.10.2.1.1.
// Quotes are from table 3.46.
void emberAfOnOffClusterLevelControlEffectCallback(uint8_t endpoint, bool newValue)
{
    uint8_t temporaryCurrentLevelCache;
    uint16_t currentOnOffTransitionTime;
    uint8_t resolvedLevel;
    uint8_t minimumLevelAllowedForTheDevice = kMinLevel;
    EmberAfStatus status;

    // "Temporarily store CurrentLevel."
    status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                        (uint8_t *) &temporaryCurrentLevelCache, sizeof(temporaryCurrentLevelCache));
    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
        return;
    }

    // Read the OnLevel attribute.
#ifdef ZCL_USING_LEVEL_CONTROL_CLUSTER_ON_LEVEL_ATTRIBUTE
    status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_ON_LEVEL_ATTRIBUTE_ID,
                                        (uint8_t *) &resolvedLevel, // OnLevel value
                                        sizeof(resolvedLevel));
    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
        return;
    }

    if (resolvedLevel == 0xFF)
    {
        // OnLevel has undefined value; fall back to CurrentLevel.
        resolvedLevel = temporaryCurrentLevelCache;
    }
#else
    resolvedLevel = temporaryCurrentLevelCache;
#endif

    // Read the OnOffTransitionTime attribute.
#ifdef ZCL_USING_LEVEL_CONTROL_CLUSTER_ON_OFF_TRANSITION_TIME_ATTRIBUTE
    status = emberAfReadServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_ON_OFF_TRANSITION_TIME_ATTRIBUTE_ID,
                                        (uint8_t *) &currentOnOffTransitionTime, sizeof(currentOnOffTransitionTime));
    if (status != EMBER_ZCL_STATUS_SUCCESS)
    {
        emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
        return;
    }
#else
    currentOnOffTransitionTime = 0xFFFF;
#endif

    if (newValue)
    {
        // If newValue is ZCL_ON_COMMAND_ID...
        // "Set CurrentLevel to minimum level allowed for the device."
        status = emberAfWriteServerAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                             (uint8_t *) &minimumLevelAllowedForTheDevice, ZCL_INT8U_ATTRIBUTE_TYPE);
        if (status != EMBER_ZCL_STATUS_SUCCESS)
        {
            emberAfLevelControlClusterPrintln("ERR: reading current level %x", status);
            return;
        }

        // "Move CurrentLevel to OnLevel, or to the stored level if OnLevel is not
        // defined, over the time period OnOffTransitionTime."
        moveToLevelHandler(ZCL_MOVE_TO_LEVEL_COMMAND_ID, resolvedLevel, currentOnOffTransitionTime, 0xFF, 0xFF,
                           INVALID_STORED_LEVEL); // Don't revert to stored level
    }
    else
    {
        // ...else if newValue is ZCL_OFF_COMMAND_ID...
        // "Move CurrentLevel to the minimum level allowed for the device over the
        // time period OnOffTransitionTime."
        moveToLevelHandler(ZCL_MOVE_TO_LEVEL_COMMAND_ID, minimumLevelAllowedForTheDevice, currentOnOffTransitionTime, 0xFF, 0xFF,
                           temporaryCurrentLevelCache);

        // "If OnLevel is not defined, set the CurrentLevel to the stored level."
        // The emberAfLevelControlClusterServerTickCallback implementation handles
        // this.
    }
}

void emberAfLevelControlClusterServerInitCallback(uint8_t endpoint)
{
#ifdef ZCL_USING_LEVEL_CONTROL_CLUSTER_START_UP_CURRENT_LEVEL_ATTRIBUTE
    // StartUp behavior relies StartUpCurrentLevel attributes being tokenized.
    if (areStartUpLevelControlServerAttributesTokenized(endpoint))
    {
        // Read the StartUpOnOff attribute and set the OnOff attribute as per
        // following from zcl 7 14-0127-20i-zcl-ch-3-general.doc.
        // 3.10.2.2.14	StartUpCurrentLevel Attribute
        // The StartUpCurrentLevel attribute SHALL define the desired startup level
        // for a device when it is supplied with power and this level SHALL be
        // reflected in the CurrentLevel attribute. The values of the StartUpCurrentLevel
        // attribute are listed below:
        // Table 3 58. Values of the StartUpCurrentLevel Attribute
        // Value      Action on power up
        // 0x00       Set the CurrentLevel attribute to the minimum value permitted on the device.
        // 0x01-0xfe  Set the CurrentLevel attribute to this value.
        // 0xff       Set the CurrentLevel attribute to its previous value.

        // Initialize startUpCurrentLevel to assume previous value for currentLevel.
        uint8_t startUpCurrentLevel = STARTUP_CURRENT_LEVEL_USE_PREVIOUS_LEVEL;
        EmberAfStatus status =
            emberAfReadAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_START_UP_CURRENT_LEVEL_ATTRIBUTE_ID,
                                 CLUSTER_MASK_SERVER, (uint8_t *) &startUpCurrentLevel, sizeof(startUpCurrentLevel), NULL);
        if (status == EMBER_ZCL_STATUS_SUCCESS)
        {
            uint8_t currentLevel = 0;
            status               = emberAfReadAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                          CLUSTER_MASK_SERVER, (uint8_t *) &currentLevel, sizeof(currentLevel), NULL);
            if (status == EMBER_ZCL_STATUS_SUCCESS)
            {
                switch (startUpCurrentLevel)
                {
                case STARTUP_CURRENT_LEVEL_USE_DEVICE_MINIMUM:
                    currentLevel = kMinLevel;
                    break;
                case STARTUP_CURRENT_LEVEL_USE_PREVIOUS_LEVEL:
                    // Just fetched it.
                    break;
                default:
                    // Otherwise set to specified value 0x01-0xFE.
                    // But, need to enforce currentLevel's min/max, right?
                    // Spec doesn't mention this.
                    if (startUpCurrentLevel < kMinLevel)
                    {
                        currentLevel = kMinLevel;
                    }
                    else if (startUpCurrentLevel > kMaxLevel)
                    {
                        currentLevel = kMaxLevel;
                    }
                    else
                    {
                        currentLevel = startUpCurrentLevel;
                    }
                    break;
                }
                status = emberAfWriteAttribute(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                               CLUSTER_MASK_SERVER, (uint8_t *) &currentLevel, ZCL_INT8U_ATTRIBUTE_TYPE);
            }
        }
    }
#endif
    emberAfPluginLevelControlClusterServerPostInitCallback(endpoint);
}

#ifdef ZCL_USING_LEVEL_CONTROL_CLUSTER_START_UP_CURRENT_LEVEL_ATTRIBUTE
static bool areStartUpLevelControlServerAttributesTokenized(uint8_t endpoint)
{
    EmberAfAttributeMetadata * metadata;

    metadata = emberAfLocateAttributeMetadata(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID,
                                              CLUSTER_MASK_SERVER, EMBER_AF_NULL_MANUFACTURER_CODE);
    if (!emberAfAttributeIsTokenized(metadata))
    {
        return false;
    }

    metadata = emberAfLocateAttributeMetadata(endpoint, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_START_UP_CURRENT_LEVEL_ATTRIBUTE_ID,
                                              CLUSTER_MASK_SERVER, EMBER_AF_NULL_MANUFACTURER_CODE);
    if (!emberAfAttributeIsTokenized(metadata))
    {
        return false;
    }

    return true;
}
#endif

} // namespace DataModel
} // namespace chip
