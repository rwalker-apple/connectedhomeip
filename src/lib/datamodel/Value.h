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
 *      This file contains definitions for working with CHIP values.
 *
 */

#ifndef CHIP_VALUE_H_
#define CHIP_VALUE_H_

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

namespace chip {
namespace DataModel {

enum ValueTypes
{
    kValueType_NotSpecified = -1,
    kValueType_Int8,
    kValueType_Int16,
    kValueType_Int32,
    kValueType_Int64,
    kValueType_UInt8,
    kValueType_UInt16,
    kValueType_UInt32,
    kValueType_UInt64,
    kValueType_Bool,
    kValueType_FloatingPointNumber32,
    kValueType_FloatingPointNumber64,
    kValueType_UTF8String_1ByteLength,
    kValueType_UTF8String_2ByteLength,
    kValueType_UTF8String_4ByteLength,
    kValueType_UTF8String_8ByteLength,
    kValueType_ByteString_1ByteLength,
    kValueType_ByteString_2ByteLength,
    kValueType_ByteString_4ByteLength,
    kValueType_ByteString_8ByteLength,
    kValueType_Null,
    kValueType_EndOfContainer,
};

class Value
{
public:
    ValueTypes mType;
    union
    {
        uint64_t Int64;
    };
    Value() {}
    Value(ValueTypes type) : mType(type), Int64() {}
    Value(ValueTypes type, uint64_t int64Value) : mType(type), Int64(int64Value) {}

    void ValueToStr(char * buf, int maxlen)
    {
        switch (mType)
        {
        case kValueType_Int8:
        case kValueType_Int16:
        case kValueType_Int32:
        case kValueType_Int64:
        case kValueType_UInt8:
        case kValueType_UInt16:
        case kValueType_UInt32:
        case kValueType_UInt64:
            snprintf(buf, maxlen, "%lld", Int64);
            return;
            break;
        case kValueType_Bool:
            snprintf(buf, maxlen, "%s", Int64 ? "true" : "false");
            return;
        default:
            buf[0] = '\0';
            return;
        }
        buf[0] = '\0';
        return;
    }
};

static inline Value ValueBool(bool b)
{
    return Value(kValueType_Bool, (uint64_t) b);
}

static inline bool ValueToBool(Value v)
{
    return (bool) v.Int64;
}

static inline Value ValueUInt8(uint8_t b)
{
    return Value(kValueType_UInt8, (uint64_t) b);
}

static inline uint8_t ValueToUInt8(Value v)
{
    return (uint8_t) v.Int64;
}

} // namespace DataModel
} // namespace chip

#endif /* CHIP_VALUE_H */
