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
// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// This file contains the tokens for attributes stored in flash

// Identifier tags for tokens
// Creator for attribute: metering device type, endpoint: 3
#define CREATOR_METERING_DEVICE_TYPE_3 0xB000
#define NVM3KEY_METERING_DEVICE_TYPE_3 (NVM3KEY_DOMAIN_ZIGBEE | 0xB000)

// Types for the tokens
#ifdef DEFINETYPES
typedef uint8_t  tokType_metering_device_type;
#endif // DEFINETYPES

// Actual token definitions
#ifdef DEFINETOKENS
DEFINE_BASIC_TOKEN(METERING_DEVICE_TYPE_3, tokType_metering_device_type, 0x00)
#endif // DEFINETOKENS

// Macro snippet that loads all the attributes from tokens
#define GENERATED_TOKEN_LOADER(endpoint) do {                                                                                                           \
    uint8_t ptr[1];                                                                                                                                     \
    uint8_t curNetwork = emberGetCurrentNetwork();                                                                                                      \
    uint8_t epNetwork;                                                                                                                                  \
    epNetwork = emberAfNetworkIndexFromEndpoint(3);                                                                                                     \
    if ((endpoint) == 3 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) {                                                       \
      halCommonGetToken((tokType_metering_device_type *)ptr, TOKEN_METERING_DEVICE_TYPE_3);                                                             \
      emberAfWriteServerAttribute(3, ZCL_SIMPLE_METERING_CLUSTER_ID, ZCL_METERING_DEVICE_TYPE_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BITMAP8_ATTRIBUTE_TYPE); \
    }                                                                                                                                                   \
} while (false)

// Macro snippet that saves the attribute to token
#define GENERATED_TOKEN_SAVER do {                                                                                               \
    uint8_t allZeroData[1];                                                                                                      \
    MEMSET(allZeroData, 0, 1);                                                                                                   \
    if ( data == NULL ) { data = allZeroData; }                                                                                  \
    if ( endpoint == 3 ) {                                                                                                       \
      if ( clusterId == 0x0702 ) {                                                                                               \
        if ( metadata->attributeId == 0x0306 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_METERING_DEVICE_TYPE_3, data); }                                                               \
      }                                                                                                                          \
    }                                                                                                                            \
} while (false)
