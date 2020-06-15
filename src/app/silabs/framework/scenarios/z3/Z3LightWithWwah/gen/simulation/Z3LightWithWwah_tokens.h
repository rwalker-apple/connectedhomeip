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
// Creator for attribute: on/off, endpoint: 1
#define CREATOR_ON_OFF_1 0xB000
#define NVM3KEY_ON_OFF_1 (NVM3KEY_DOMAIN_ZIGBEE | 0xB000)
// Creator for attribute: start up on off, endpoint: 1
#define CREATOR_START_UP_ON_OFF_1 0xB001
#define NVM3KEY_START_UP_ON_OFF_1 (NVM3KEY_DOMAIN_ZIGBEE | 0xB001)
// Creator for attribute: on/off, endpoint: 2
#define CREATOR_ON_OFF_2 0xB002
#define NVM3KEY_ON_OFF_2 (NVM3KEY_DOMAIN_ZIGBEE | 0xB002)
// Creator for attribute: start up on off, endpoint: 2
#define CREATOR_START_UP_ON_OFF_2 0xB003
#define NVM3KEY_START_UP_ON_OFF_2 (NVM3KEY_DOMAIN_ZIGBEE | 0xB003)
// Creator for attribute: current level, endpoint: 2
#define CREATOR_CURRENT_LEVEL_2 0xB004
#define NVM3KEY_CURRENT_LEVEL_2 (NVM3KEY_DOMAIN_ZIGBEE | 0xB004)
// Creator for attribute: start up current level, endpoint: 2
#define CREATOR_START_UP_CURRENT_LEVEL_2 0xB005
#define NVM3KEY_START_UP_CURRENT_LEVEL_2 (NVM3KEY_DOMAIN_ZIGBEE | 0xB005)

// Types for the tokens
#ifdef DEFINETYPES
typedef uint8_t  tokType_on_off;
typedef uint8_t  tokType_start_up_on_off;
typedef uint8_t  tokType_current_level;
typedef uint8_t  tokType_start_up_current_level;
#endif // DEFINETYPES

// Actual token definitions
#ifdef DEFINETOKENS
DEFINE_BASIC_TOKEN(ON_OFF_1, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_1, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(ON_OFF_2, tokType_on_off, 0x00)
DEFINE_BASIC_TOKEN(START_UP_ON_OFF_2, tokType_start_up_on_off, 0xFF)
DEFINE_BASIC_TOKEN(CURRENT_LEVEL_2, tokType_current_level, 0x00)
DEFINE_BASIC_TOKEN(START_UP_CURRENT_LEVEL_2, tokType_start_up_current_level, 0xFF)
#endif // DEFINETOKENS

// Macro snippet that loads all the attributes from tokens
#define GENERATED_TOKEN_LOADER(endpoint) do {                                                                                                         \
    uint8_t ptr[1];                                                                                                                                   \
    uint8_t curNetwork = emberGetCurrentNetwork();                                                                                                    \
    uint8_t epNetwork;                                                                                                                                \
    epNetwork = emberAfNetworkIndexFromEndpoint(1);                                                                                                   \
    if ((endpoint) == 1 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) {                                                     \
      halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_1);                                                                                       \
      emberAfWriteServerAttribute(1, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE);                      \
      halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_1);                                                                     \
      emberAfWriteServerAttribute(1, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE);               \
    }                                                                                                                                                 \
    epNetwork = emberAfNetworkIndexFromEndpoint(2);                                                                                                   \
    if ((endpoint) == 2 || ((endpoint) == EMBER_BROADCAST_ENDPOINT && epNetwork == curNetwork)) {                                                     \
      halCommonGetToken((tokType_on_off *)ptr, TOKEN_ON_OFF_2);                                                                                       \
      emberAfWriteServerAttribute(2, ZCL_ON_OFF_CLUSTER_ID, ZCL_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_BOOLEAN_ATTRIBUTE_TYPE);                      \
      halCommonGetToken((tokType_start_up_on_off *)ptr, TOKEN_START_UP_ON_OFF_2);                                                                     \
      emberAfWriteServerAttribute(2, ZCL_ON_OFF_CLUSTER_ID, ZCL_START_UP_ON_OFF_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_ENUM8_ATTRIBUTE_TYPE);               \
      halCommonGetToken((tokType_current_level *)ptr, TOKEN_CURRENT_LEVEL_2);                                                                         \
      emberAfWriteServerAttribute(2, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_CURRENT_LEVEL_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_INT8U_ATTRIBUTE_TYPE);          \
      halCommonGetToken((tokType_start_up_current_level *)ptr, TOKEN_START_UP_CURRENT_LEVEL_2);                                                       \
      emberAfWriteServerAttribute(2, ZCL_LEVEL_CONTROL_CLUSTER_ID, ZCL_START_UP_CURRENT_LEVEL_ATTRIBUTE_ID, (uint8_t*)ptr, ZCL_INT8U_ATTRIBUTE_TYPE); \
    }                                                                                                                                                 \
} while (false)

// Macro snippet that saves the attribute to token
#define GENERATED_TOKEN_SAVER do {                                                                                               \
    uint8_t allZeroData[1];                                                                                                      \
    MEMSET(allZeroData, 0, 1);                                                                                                   \
    if ( data == NULL ) { data = allZeroData; }                                                                                  \
    if ( endpoint == 1 ) {                                                                                                       \
      if ( clusterId == 0x06 ) {                                                                                                 \
        if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_ON_OFF_1, data); }                                                                             \
        if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_START_UP_ON_OFF_1, data); }                                                                    \
      }                                                                                                                          \
    } else if ( endpoint == 2) {                                                                                                 \
      if ( clusterId == 0x06 ) {                                                                                                 \
        if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_ON_OFF_2, data); }                                                                             \
        if ( metadata->attributeId == 0x4003 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_START_UP_ON_OFF_2, data); }                                                                    \
      } else if ( clusterId == 0x08 ) {                                                                                          \
        if ( metadata->attributeId == 0x0000 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_CURRENT_LEVEL_2, data); }                                                                      \
        if ( metadata->attributeId == 0x4000 && 0x0000 == emberAfGetMfgCode(metadata) && !emberAfAttributeIsClient(metadata) ) { \
          halCommonSetToken(TOKEN_START_UP_CURRENT_LEVEL_2, data); }                                                             \
      }                                                                                                                          \
    }                                                                                                                            \
} while (false)
