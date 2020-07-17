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

public:
    /* Cluster ID */
    static const ClusterId kId = 0x0008;

    /* Attribute IDs */
    static const AttributeId kCurrentLevel        = 0x0000;
    static const AttributeId kRemainingTime       = 0x0001;
    static const AttributeId kOnOffTransitionTime = 0x0010;
    static const AttributeId kOnLevel             = 0x0011;
    static const AttributeId kOnTransitionTime    = 0x0012;
    static const AttributeId kOffTransitionTime   = 0x0013;
    static const AttributeId kDefaultMoveRate     = 0x0014;

    /* Command IDs */
    static const uint16_t kOnOffCmdIdOff            = 0x00;
    static const uint16_t kOnOffCmdIdOn             = 0x01;
    static const uint16_t kOnOffCmdIdToggle         = 0x02;
    static const uint16_t kOnOffCmdIdOffWithEffect  = 0x40;
    static const uint16_t kOnOffCmdIdOffWithRecall  = 0x41;
    static const uint16_t kOnOffCmdIdOnWithTimedOff = 0x42;

    LevelControl() :
        mCurrentLevel(kCurrentLevel, kCHIPValueType_Uint8, 0, 0xfe),
        mRemainingTime(kAttributeIdGlobalSceneControl, kCHIPValueType_Uint16),
        mOnOffTransitionTime(kOnOffTransitionTime, kCHIPValueType_UInt16), mOnLevel(kOnLevel, kCHIPValueType_Uint8, 0x01, 0xff),
        mOnTransitionTime(kOnTransitionTime, kCHIPValueType_UInt16, 0x0, 0xfffe),
        mOffTransitionTime(kOffTransitionTime, kCHIPValueType_UInt16, 0x0, 0xfffe),
        mDefaultMoveRate(kDefaultMoveRate, kCHIPValueType_UInt16, 0x0, 0xfe)
    {
        AddAttribute(&mCurrentLevel);
        AddAttribute(&mRemainingTime);
        AddAttribute(&mOnOffTransitionTime);
        AddAttribute(&mOnLevel);
        AddAttribute(&mOnTransitionTime);
        AddAttribute(&mOffTransitionTime);
        AddAttribute(&mDefaultMoveRate);
    }

    /**
     * @brief
     *   Return the ClusterId of this cluster
     *
     */
    virtual ClusterId Id(const Command & cmd) { return kId; }

    /**
     * @brief
     *   Return the ClusterId of this cluster
     *
     */

    //    /**
    //     * @brief
    //     *   Handle the off command. This command is already handled in the ClusterOnOff class, and the
    //     *   Cluster's Set() method will be called with the appropriate value. Applications may choose
    //     *   to override this handling if required.
    //     *
    //     * @param cmd the command to handle
    //     *
    //     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
    //     */
    //    virtual CHIP_ERROR HandleCommandOff(const Command & cmd) { return Set(kAttributeIdOnOff, ValueBool(false)); }
    //
    //    /**
    //     * @brief
    //     *   Handle the on command. This command is already handled in the ClusterOnOff class, and the
    //     *   Cluster's Set() method will be called with the appropriate value. Applications may choose
    //     *   to override this handling if required.
    //     *
    //     * @param cmd the command to handle
    //     *
    //     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
    //     */
    //    virtual CHIP_ERROR HandleCommandOn(const Command & cmd) { return Set(kAttributeIdOnOff, ValueBool(true)); }
    //
    //    /**
    //     * @brief
    //     *   Handle the toggle command. This command is already handled in the ClusterOnOff class, and
    //     *   the Cluster's Set() method will be called with the appropriate value. Applications may
    //     *   choose to override this handling if required.
    //     *
    //     * @param cmd the command to handle
    //     *
    //     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
    //     */
    //    virtual CHIP_ERROR HandleCommandToggle(const Command & cmd)
    //    {
    //        Value currentVal;
    //        Get(kAttributeIdOnOff, currentVal);
    //        return Set(kAttributeIdOnOff, ValueBool(!ValueToBool(currentVal)));
    //    }
    //

    /**
     * @brief
     *   Handle commands for LevelControl. Applications may choose to override this handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommand(const Command & cmd)
    {
        switch (cmd.mId)
        {
        case kOnOffCmdIdOff:
            HandleCommandOff(cmd);
            break;
        case kOnOffCmdIdOn:
            HandleCommandOn(cmd);
            break;
        case kOnOffCmdIdToggle:
            HandleCommandToggle(cmd);
            break;
        default:
            /* Unsupported */
            return CHIP_ERROR_INTERNAL;
            break;
        }
        return CHIP_ERROR_INTERNAL;
    }
};

} // namespace DataModel
} // namespace chip

#endif /* CHIPLEVELCONTROL_H_ */

// Rate of level control tick execution.
// To increase tick frequency (for more granular updates of device state based
// on level), redefine EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND.
#ifndef EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND 32
#endif
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_TICK_TIME (MILLISECOND_TICKS_PER_SECOND / EMBER_AF_PLUGIN_LEVEL_CONTROL_TICKS_PER_SECOND)
