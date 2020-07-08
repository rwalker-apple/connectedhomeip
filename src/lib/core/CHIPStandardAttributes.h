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
 *      This file contains definitions for standard CHIP Attributes
 *
 */

#ifndef CHIPSTANDARDATTRIBUTES_H_
#define CHIPSTANDARDATTRIBUTES_H_

#include <lib/core/CHIPBaseAttribute.h>

namespace chip {
namespace DataModel {

/* TODO: It would be nice to use a pool allocator here once we have one */
/* Base Cluster */
static const uint16_t kAttributeIdZCLVersion = 0x0000;
static inline BaseAttribute * CHIPAttributeZCLVersionNew(uint8_t ZCLVersion)
{
    return new BaseAttribute(kAttributeIdZCLVersion, ValueUInt8(ZCLVersion));
}

static const uint16_t kAttributeIdApplicationVersion = 0x0001;
static inline BaseAttribute * CHIPAttributeApplicationVersionNew(uint8_t applicationVersion)
{
    return new BaseAttribute(kAttributeIdApplicationVersion, ValueUInt8(applicationVersion));
}

static const uint16_t kAttributeIdStackVersion = 0x0002;
static inline BaseAttribute * CHIPAttributeStackVersionNew(uint8_t stackVersion)
{
    return new BaseAttribute(kAttributeIdStackVersion, ValueUInt8(stackVersion));
}

static const uint16_t kAttributeIdHWVersion = 0x0003;
static inline BaseAttribute * CHIPAttributeHWVersionNew(uint8_t HWVersion)
{
    return new BaseAttribute(0x0003, ValueUInt8(HWVersion));
}

/* On/Off Cluster */
static const uint16_t kAttributeIdOnOff = 0x0000;
static inline BaseAttribute * CHIPAttributeOnOffNew(void)
{
    return new BaseAttribute(kAttributeIdOnOff, kCHIPValueType_Bool);
}

static const uint16_t kAttributeIdGlobalSceneControl = 0x4000;
static inline BaseAttribute * CHIPAttributeGlobalSceneControlNew(void)
{
    return new BaseAttribute(kAttributeIdGlobalSceneControl, kCHIPValueType_Bool);
}

static const uint16_t kAttributeIdOnTime = 0x4001;
static inline BaseAttribute * CHIPAttributeOnTimeNew(void)
{
    return new BaseAttribute(0x4001, kCHIPValueType_UInt16);
}

static const uint16_t kAttributeIdOffWaitTime = 0x4002;
static inline BaseAttribute * CHIPAttributeOffWaitTimeNew(void)
{
    return new BaseAttribute(0x4002, kCHIPValueType_UInt16);
}

} // namespace DataModel
} // namespace chip

#endif /* CHIPSTANDARDATTRIBUTES_H_ */
