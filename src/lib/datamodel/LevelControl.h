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

/*****************************************************************************
 * @file
 * @brief APIs and defines for the Level Control
 *plugin, which implements the Level Control cluster.
 *******************************************************************************
 ******************************************************************************/

/**
 *    @file
 *      This file contains definitions for CHIP Cluster LevelControl
 *
 */

#ifndef CHIPLEVELCONTROL_H_
#define CHIPLEVELCONTROL_H_

#include <datamodel/Cluster.h>

#include <core/CHIPCallback.h>
#include <system/SystemLayer.h>

namespace chip {
namespace DataModel {

/**
 * @brief
 *   This class implements the LevelControl cluster as defined in the CHIP specification.
 */
class LevelControl : public Cluster
{
private:
    Attribute mCurrentLevel;
    Attribute mRemainingTime;
    Attribute mOnOffTransitionTime;
    Attribute mOnLevel;
    Attribute mOnTransitionTime;
    Attribute mOffTransitionTime;
    Attribute mDefaultMoveRate;

    // internal state for level control transitions
    struct
    {
        CmdId commandId;           // command that initated the transition
        uint8_t moveToLevel;       // target level
        bool increasing;           // increasing or decreasing
        bool useOnLevel;           // whether onLevel should be considered (TODO: always false)
        uint8_t onLevel;           // read from the OnLevel attribute when command is initiated (TODO: but then discarded)
        uint16_t storedLevel;      // stored current level in case of OnOff<->LevelControl effect
        uint32_t eventDurationMs;  // time duration
        uint32_t transitionTimeMs; // total transition time
        uint32_t elapsedTimeMs;    // time since transition was initiated
    } mState;

    // timer stuff
    Callback::Callback<> mCallback;
    static void Timer(LevelControl *);
    void Step();

    System::Layer * mSystemLayer;

    // internal functions
    void updateCoupledColorTemp();
    void tickCallback();
    void schedule(uint32_t durationMs);
    void deactivate();
    void writeRemainingTime(uint16_t remainingTimeMs);
    void setOnOffValue(bool onOff);
    bool shouldExecuteIfOff(CmdId cmdId, uint8_t optionMask, uint8_t optionOverride);

public:
    /* Cluster ID */
    static const ClusterId kId = 0x0008;

    /* Attribute IDs */
    static const AttrId kAttrIdCurrentLevel        = 0x0000;
    static const AttrId kAttrIdRemainingTime       = 0x0001;
    static const AttrId kAttrIdOptions             = 0x000F;
    static const AttrId kAttrIdOnOffTransitionTime = 0x0010;
    static const AttrId kAttrIdOnLevel             = 0x0011;
    static const AttrId kAttrIdOnTransitionTime    = 0x0012;
    static const AttrId kAttrIdOffTransitionTime   = 0x0013;
    static const AttrId kAttrIdDefaultMoveRate     = 0x0014;

    /* Command IDs */
    static const CmdId kCmdIdMoveToLevel          = 0x00;
    static const CmdId kCmdIdMove                 = 0x01;
    static const CmdId kCmdIdStep                 = 0x02;
    static const CmdId kCmdIdStop                 = 0x03;
    static const CmdId kCmdIdMoveToLevelWithOnOff = 0x04;
    static const CmdId kCmdIdMoveWithOnOff        = 0x05;
    static const CmdId kCmdIdStepWithOnOff        = 0x06;
    static const CmdId kCmdIdStopWithOnOff        = 0x07;

    /* options bits */
    static const uint8_t kOptionsExecuteIfOff           = 0x01;
    static const uint8_t kOptionsCoupleColorTempToLevel = 0x02;

    /* other definitions */
    static const uint8_t kMaxLevel            = 0xff;
    static const uint8_t kMinLevel            = 0x00;
    static const uint16_t kInvalidStoredLevel = 0xffff;

    LevelControl(Attribute * options) :
        mCurrentLevel(kAttrIdCurrentLevel, kValueType_UInt8, kMaxLevel, kMinLevel),
        mRemainingTime(kAttrIdRemainingTime, kValueType_UInt16),
        mOnOffTransitionTime(kAttrIdOnOffTransitionTime, kValueType_UInt16), mOnLevel(kAttrIdOnLevel, kValueType_UInt8, 0x01, 0xff),
        mOnTransitionTime(kAttrIdOnTransitionTime, kValueType_UInt16, 0x0, 0xfffe),
        mOffTransitionTime(kAttrIdOffTransitionTime, kValueType_UInt16, 0x0, 0xfffe),
        mDefaultMoveRate(kAttrIdDefaultMoveRate, kValueType_UInt16, 0x0, 0xfe),
        mCallback(reinterpret_cast<Callback::CallFn>(Timer), this)
    {
        AddAttribute(&mCurrentLevel);
        AddAttribute(&mRemainingTime);
        if (nullptr != options)
        {
            AddAttribute(options);
        }
        AddAttribute(&mOnOffTransitionTime);
        AddAttribute(&mOnLevel);
        AddAttribute(&mOnTransitionTime);
        AddAttribute(&mOffTransitionTime);
        AddAttribute(&mDefaultMoveRate);
    }

    LevelControl() : LevelControl(nullptr) {}

    /**
     * @brief
     *   Return the ClusterId of this cluster
     *
     */
    virtual ClusterId Id() const { return kId; }

    /**
     * @brief
     *   Handle commands for LevelControl. Applications may choose to override this
     *   handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommand(const Command & cmd);
};

} // namespace DataModel
} // namespace chip

#endif /* CHIPLEVELCONTROL_H_ */
