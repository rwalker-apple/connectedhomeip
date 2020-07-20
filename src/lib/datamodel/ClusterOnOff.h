/*
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
 *    @file
 *      This file contains definitions for CHIP Cluster OnOff
 *
 */

#ifndef CHIPCLUSTERONOFF_H_
#define CHIPCLUSTERONOFF_H_

#include <datamodel/Cluster.h>

namespace chip {
namespace DataModel {

/**
 * @brief
 *   This class implements the OnOff cluster as defined in the CHIP specification.
 */
class ClusterOnOff : public Cluster
{
    // TODO: these should
private:
    Attribute mOnOff;
    Attribute mGlobalSceneControl;
    Attribute mOnTime;
    Attribute mOffWaitTime;

public:
    /* Cluster ID */
    static const ClusterId kId = 0x0006;

    /* Attribute IDs */
    static const AttrId kAttrIdOnOff              = 0x0000;
    static const AttrId kAttrIdGlobalSceneControl = 0x4000;
    static const AttrId kAttrIdOnTime             = 0x4001;
    static const AttrId kAttrIdOffWaitTime        = 0x4002;

    /* Command IDs */
    static const CmdId kCmdIdOff            = 0x00;
    static const CmdId kCmdIdOn             = 0x01;
    static const CmdId kCmdIdToggle         = 0x02;
    static const CmdId kCmdIdOffWithEffect  = 0x40;
    static const CmdId kCmdIdOffWithRecall  = 0x41;
    static const CmdId kCmdIdOnWithTimedOff = 0x42;

    ClusterOnOff() :
        mOnOff(kAttrIdOnOff, kValueType_Bool), mGlobalSceneControl(kAttrIdGlobalSceneControl, kValueType_Bool),
        mOnTime(kAttrIdOnTime, kValueType_UInt16), mOffWaitTime(kAttrIdOffWaitTime, kValueType_UInt16)
    {
        AddAttribute(&mOnOff);
        AddAttribute(&mGlobalSceneControl);
        AddAttribute(&mOnTime);
        AddAttribute(&mOffWaitTime);
    }

    /**
     * @brief
     *   Return the ClusterId of this cluster
     *
     */
    virtual ClusterId Id() const { return kId; }

    /**
     * @brief
     *   Handle the off command. This command is already handled in the ClusterOnOff class, and the
     *   Cluster's Set() method will be called with the appropriate value. Applications may choose
     *   to override this handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommandOff(const Command & cmd) { return Set(kAttrIdOnOff, ValueBool(false)); }

    /**
     * @brief
     *   Handle the on command. This command is already handled in the ClusterOnOff class, and the
     *   Cluster's Set() method will be called with the appropriate value. Applications may choose
     *   to override this handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommandOn(const Command & cmd) { return Set(kAttrIdOnOff, ValueBool(true)); }

    /**
     * @brief
     *   Handle the toggle command. This command is already handled in the ClusterOnOff class, and
     *   the Cluster's Set() method will be called with the appropriate value. Applications may
     *   choose to override this handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommandToggle(const Command & cmd)
    {
        Value currentVal;
        Get(kAttrIdOnOff, currentVal);
        return Set(kAttrIdOnOff, ValueBool(!ValueToBool(currentVal)));
    }

    /**
     * @brief
     *   Handle commands for the Cluster OnOff. This is already handled in the ClusterOnOff
     *   class. Applications may choose to override this handling if required.
     *
     * @param cmd the command to handle
     *
     * @return CHIP_NO_ERROR on success or a failure-specific error code otherwise
     */
    virtual CHIP_ERROR HandleCommand(const Command & cmd)
    {
        switch (cmd.mId)
        {
        case kCmdIdOff:
            return HandleCommandOff(cmd);

        case kCmdIdOn:
            return HandleCommandOn(cmd);

        case kCmdIdToggle:
            return HandleCommandToggle(cmd);

        default:
            /* Unsupported */
            return CHIP_ERROR_INTERNAL;
        }
    }
};

} // namespace DataModel
} // namespace chip

#endif /* CHIPCLUSTERONOFF_H_ */
