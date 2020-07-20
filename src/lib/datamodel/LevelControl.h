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
    static const AttrId kCurrentLevel        = 0x0000;
    static const AttrId kRemainingTime       = 0x0001;
    static const AttrId kOnOffTransitionTime = 0x0010;
    static const AttrId kOnLevel             = 0x0011;
    static const AttrId kOnTransitionTime    = 0x0012;
    static const AttrId kOffTransitionTime   = 0x0013;
    static const AttrId kDefaultMoveRate     = 0x0014;

    /* Command IDs */
    static const CmdId kOff            = 0x00;
    static const CmdId kOn             = 0x01;
    static const CmdId kToggle         = 0x02;
    static const CmdId kOffWithEffect  = 0x40;
    static const CmdId kOffWithRecall  = 0x41;
    static const CmdId kOnWithTimedOff = 0x42;

    LevelControl() :
        mCurrentLevel(kCurrentLevel, kValueType_UInt8, 0, 0xfe), mRemainingTime(kRemainingTime, kValueType_UInt16),
        mOnOffTransitionTime(kOnOffTransitionTime, kValueType_UInt16), mOnLevel(kOnLevel, kValueType_UInt8, 0x01, 0xff),
        mOnTransitionTime(kOnTransitionTime, kValueType_UInt16, 0x0, 0xfffe),
        mOffTransitionTime(kOffTransitionTime, kValueType_UInt16, 0x0, 0xfffe),
        mDefaultMoveRate(kDefaultMoveRate, kValueType_UInt16, 0x0, 0xfe)
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
    virtual ClusterId Id() const { return kId; }

    /**
     * @brief
     *   Return the ClusterId of this cluster
     *
     */

    /**
     * @brief
     *   Handle commands for LevelControl. Applications may choose to override this
     *   handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommand(const Command & cmd)
    {
        switch (cmd.mId)
        {
        case kOff:
        case kOn:
        case kToggle:
        case kOffWithEffect:
        case kOffWithRecall:
        case kOnWithTimedOff:
            return CHIP_ERROR_INTERNAL;

        default:
            /* Unsupported */
            return CHIP_ERROR_INTERNAL;
        }
    }
};

} // namespace DataModel
} // namespace chip

#endif /* CHIPLEVELCONTROL_H_ */
