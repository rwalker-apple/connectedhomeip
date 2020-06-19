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
// This file is generated by Simplicity Studio.  Please do not edit manually.
//
//

// Enclosing macro to prevent multiple inclusion
#ifndef SILABS_AF_ENDPOINT_CONFIG
#define SILABS_AF_ENDPOINT_CONFIG

// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT (3)

// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                                                                       \
    0x09, 0xAC, 0x2F /* 0,Default value: Green Power,gpp functionality */,                                                                         \
    0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */,                                                                  \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */, \
}
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                                                                       \
    0x2F, 0xAC, 0x09 /* 0,Default value: Green Power,gpp functionality */,                                                                         \
    0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */,                                                                  \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */, \
}
#endif // BIGENDIAN_CPU

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                       \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x03 } }, /* 0 / Basic / ZCL version*/                                                            \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 1 / Basic / application version*/                                                    \
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 2 / Basic / stack version*/                                                          \
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 3 / Basic / hardware version*/                                                       \
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 4 / Basic / manufacturer name*/                                                         \
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 5 / Basic / model identifier*/                                                          \
    { 0x0006, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 6 / Basic / date code*/                                                                 \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 7 / Basic / power source*/                                                           \
    { 0x0008, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0xFF } }, /* 8 / Basic / generic device class*/                                                   \
    { 0x0009, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0xFF } }, /* 9 / Basic / generic device type*/                                                    \
    { 0x000A, ZCL_OCTET_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 10 / Basic / product code*/                                                            \
    { 0x000B, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 65, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 11 / Basic / product url*/                                                              \
    { 0x4000, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 12 / Basic / sw build id*/                                                              \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 13 / Basic / cluster revision*/                                                   \
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 14 / Identify / identify time*/                                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 15 / Identify / cluster revision*/                                                                    \
    { 0x0000, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 16 / Groups / name support*/                                                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 17 / Groups / cluster revision*/                                                                      \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 18 / Scenes / scene count*/                                                                              \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 19 / Scenes / current scene*/                                                                            \
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 20 / Scenes / current group*/                                                                         \
    { 0x0003, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 21 / Scenes / scene valid*/                                                                            \
    { 0x0004, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 22 / Scenes / name support*/                                                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 23 / Scenes / cluster revision*/                                                                      \
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x00 } }, /* 24 / On/off / on/off*/                                                              \
    { 0x4000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x01 } }, /* 25 / On/off / global scene control*/                                                                   \
    { 0x4001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 26 / On/off / on time*/                                                            \
    { 0x4002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 27 / On/off / off wait time*/                                                      \
    { 0x4003, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0xFF } }, /* 28 / On/off / start up on off*/                             \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 29 / On/off / cluster revision*/                                                                      \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x00 } }, /* 30 / Level Control / current level*/                                                  \
    { 0x0001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 31 / Level Control / remaining time*/                                                                 \
    { 0x000F, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 32 / Level Control / options*/                                                      \
    { 0x4000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x33 } }, /* 33 / Level Control / start up current level*/               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 34 / Level Control / cluster revision*/                                                               \
    { 0x0010, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x14 } }, /* 35 / Green Power / gpp max proxy table entries*/                                        \
    { 0x0011, ZCL_LONG_OCTET_STRING_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0000 } }, /* 36 / Green Power / proxy table*/                                          \
    { 0x0016, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[0]) } }, /* 37 / Green Power / gpp functionality*/                            \
    { 0x0017, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[3]) } }, /* 38 / Green Power / gpp active functionality*/                     \
    { 0x0022, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[6]) } }, /* 39 / Green Power / gp link key*/   \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 40 / Green Power / cluster revision*/                                                \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 41 / Color Control / current hue*/                                                                       \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 42 / Color Control / current saturation*/                                                                \
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 43 / Color Control / remaining time*/                                                                 \
    { 0x0003, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x616B } }, /* 44 / Color Control / current x*/                                                                      \
    { 0x0004, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x607D } }, /* 45 / Color Control / current y*/                                                                      \
    { 0x0007, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x00FA } }, /* 46 / Color Control / color temperature*/                                           \
    { 0x0008, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x01 } }, /* 47 / Color Control / color mode*/                                                                        \
    { 0x000F, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 48 / Color Control / color control options*/                                        \
    { 0x0010, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 49 / Color Control / number of primaries*/                                                             \
    { 0x0011, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 50 / Color Control / primary 1 x*/                                                                  \
    { 0x0012, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 51 / Color Control / primary 1 y*/                                                                  \
    { 0x0013, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 52 / Color Control / primary 1 intensity*/                                                             \
    { 0x0015, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 53 / Color Control / primary 2 x*/                                                                  \
    { 0x0016, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 54 / Color Control / primary 2 y*/                                                                  \
    { 0x0017, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 55 / Color Control / primary 2 intensity*/                                                             \
    { 0x0019, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 56 / Color Control / primary 3 x*/                                                                  \
    { 0x001A, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 57 / Color Control / primary 3 y*/                                                                  \
    { 0x001B, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 58 / Color Control / primary 3 intensity*/                                                             \
    { 0x0020, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 59 / Color Control / primary 4 x*/                                                                  \
    { 0x0021, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 60 / Color Control / primary 4 y*/                                                                  \
    { 0x0022, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 61 / Color Control / primary 4 intensity*/                                                             \
    { 0x0024, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 62 / Color Control / primary 5 x*/                                                                  \
    { 0x0025, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 63 / Color Control / primary 5 y*/                                                                  \
    { 0x0026, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 64 / Color Control / primary 5 intensity*/                                                             \
    { 0x0028, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 65 / Color Control / primary 6 x*/                                                                  \
    { 0x0029, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 66 / Color Control / primary 6 y*/                                                                  \
    { 0x002A, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00UL } }, /* 67 / Color Control / primary 6 intensity*/                                                             \
    { 0x4000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 68 / Color Control / enhanced current hue*/                                                           \
    { 0x4001, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x01 } }, /* 69 / Color Control / enhanced color mode*/                                                               \
    { 0x4002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 70 / Color Control / color loop active*/                                                                 \
    { 0x4003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 71 / Color Control / color loop direction*/                                                              \
    { 0x4004, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0019 } }, /* 72 / Color Control / color loop time*/                                                                \
    { 0x4005, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x2300 } }, /* 73 / Color Control / color loop start enhanced hue*/                                                  \
    { 0x4006, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 74 / Color Control / color loop stored enhanced hue*/                                                 \
    { 0x400A, ZCL_BITMAP16_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 75 / Color Control / color capabilities*/                                                           \
    { 0x400B, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 76 / Color Control / color temp physical min*/                                                        \
    { 0x400C, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0xFEFF } }, /* 77 / Color Control / color temp physical max*/                                                        \
    { 0x400D, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 78 / Color Control / couple color temp to level min-mireds*/                                        \
    { 0x4010, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_TOKENIZE), { (uint8_t*)0x4444 } }, /* 79 / Color Control / start up color temperature mireds*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 80 / Color Control / cluster revision*/                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 81 / ZLL Commissioning / cluster revision*/                                                           \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                 \
  const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback }; \
  const EmberAfGenericClusterFunction emberAfFuncArrayGroupsClusterServer[] = { (EmberAfGenericClusterFunction)emberAfGroupsClusterServerInitCallback };                                                                                          \
  const EmberAfGenericClusterFunction emberAfFuncArrayScenesClusterServer[] = { (EmberAfGenericClusterFunction)emberAfScenesClusterServerInitCallback };                                                                                          \
  const EmberAfGenericClusterFunction emberAfFuncArrayOnOffClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOnOffClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfOnOffClusterServerAttributeChangedCallback };          \
  const EmberAfGenericClusterFunction emberAfFuncArrayLevelControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfLevelControlClusterServerInitCallback };                                                                              \
  const EmberAfGenericClusterFunction emberAfFuncArrayColorControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfColorControlClusterServerInitCallback };                                                                              \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                       \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 14, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                         \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, }, \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 2, 3, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayGroupsClusterServer, },                                             \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[18]), 6, 8, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayScenesClusterServer, },                                             \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[24]), 6, 9, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayOnOffClusterServer, },    \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[30]), 5, 7, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayLevelControlClusterServer, },                                       \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 14, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                         \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, }, \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 2, 3, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayGroupsClusterServer, },                                             \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[18]), 6, 8, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayScenesClusterServer, },                                             \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[24]), 6, 9, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayOnOffClusterServer, },    \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[30]), 5, 7, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayLevelControlClusterServer, },                                       \
    { 0x0300, (EmberAfAttributeMetadata*)&(generatedAttributes[41]), 40, 66, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayColorControlClusterServer, },                                     \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[81]), 1, 2, (CLUSTER_MASK_SERVER), NULL, },                                                                                                         \
    { 0x0021, (EmberAfAttributeMetadata*)&(generatedAttributes[35]), 6, 27, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                        \
    { (EmberAfCluster*)&(generatedClusters[0]), 6, 31 },  \
    { (EmberAfCluster*)&(generatedClusters[6]), 8, 99 },  \
    { (EmberAfCluster*)&(generatedClusters[14]), 1, 27 }, \
}

// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                               \
}
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)

// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (65)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (191)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 157

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1, 2, 242 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260, 260, 41440 }

// Array of device ids
#define FIXED_DEVICE_IDS { 257, 269, 97 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 1, 1, 1 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1, 2 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0, 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS  \
  void emberAfPluginZllCommissioningCommonInitCallback(void); \
  void emberAfPluginGreenPowerClientInitCallback(void);       \
  void emberAfPluginReportingInitCallback(void);              \
  void emberAfPluginInterpanInitCallback(void);               \
  void emberAfPluginCountersInitCallback(void);               \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginZllCommissioningCommonInitCallback();  \
  emberAfPluginGreenPowerClientInitCallback();        \
  emberAfPluginReportingInitCallback();               \
  emberAfPluginInterpanInitCallback();                \
  emberAfPluginCountersInitCallback();                \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS                  \
  void emberAfPluginZllCommissioningCommonNcpInitCallback(bool memoryAllocation); \
  void emberAfPluginInterpanNcpInitCallback(bool memoryAllocation);               \
  void emberAfPluginNcpConfigurationNcpInitCallback(bool memoryAllocation);       \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS               \
  emberAfPluginZllCommissioningCommonNcpInitCallback(memoryAllocation); \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation);               \
  emberAfPluginNcpConfigurationNcpInitCallback(memoryAllocation);       \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS               \
  void emberAfPluginZllCommissioningCommonStackStatusCallback(EmberStatus status); \
  void emberAfPluginGreenPowerClientStackStatusCallback(EmberStatus status);       \
  void emberAfPluginReportingStackStatusCallback(EmberStatus status);              \
  void emberAfPluginNetworkCreatorSecurityStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkSteeringStackStatusCallback(EmberStatus status);        \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS     \
  emberAfPluginZllCommissioningCommonStackStatusCallback(status); \
  emberAfPluginGreenPowerClientStackStatusCallback(status);       \
  emberAfPluginReportingStackStatusCallback(status);              \
  emberAfPluginNetworkCreatorSecurityStackStatusCallback(status); \
  emberAfPluginNetworkSteeringStackStatusCallback(status);        \


// Generated data for the command discovery
#define GENERATED_COMMANDS {                                                                               \
    { 0x0000, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Basic / ResetToFactoryDefaults */                   \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */                 \
    { 0x0003, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */                              \
    { 0x0003, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */                         \
    { 0x0003, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Identify / TriggerEffect */                         \
    { 0x0004, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / AddGroupResponse */                        \
    { 0x0004, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroup */                                \
    { 0x0004, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / ViewGroupResponse */                       \
    { 0x0004, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Groups / ViewGroup */                               \
    { 0x0004, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / GetGroupMembershipResponse */              \
    { 0x0004, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Groups / GetGroupMembership */                      \
    { 0x0004, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / RemoveGroupResponse */                     \
    { 0x0004, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveGroup */                             \
    { 0x0004, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveAllGroups */                         \
    { 0x0004, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroupIfIdentifying */                   \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / AddSceneResponse */                        \
    { 0x0005, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / AddScene */                                \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / ViewSceneResponse */                       \
    { 0x0005, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / ViewScene */                               \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveSceneResponse */                     \
    { 0x0005, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveScene */                             \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveAllScenesResponse */                 \
    { 0x0005, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveAllScenes */                         \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / StoreSceneResponse */                      \
    { 0x0005, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / StoreScene */                              \
    { 0x0005, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RecallScene */                             \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / GetSceneMembershipResponse */              \
    { 0x0005, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / GetSceneMembership */                      \
    { 0x0005, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedAddScene */                        \
    { 0x0005, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedViewScene */                       \
    { 0x0005, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / CopyScene */                               \
    { 0x0006, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* On/off / Off */                                     \
    { 0x0006, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* On/off / On */                                      \
    { 0x0006, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* On/off / Toggle */                                  \
    { 0x0006, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OffWithEffect */                           \
    { 0x0006, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithRecallGlobalScene */                 \
    { 0x0006, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithTimedOff */                          \
    { 0x0008, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveToLevel */                      \
    { 0x0008, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Move */                             \
    { 0x0008, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Step */                             \
    { 0x0008, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Stop */                             \
    { 0x0008, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveToLevelWithOnOff */             \
    { 0x0008, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveWithOnOff */                    \
    { 0x0008, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / StepWithOnOff */                    \
    { 0x0008, 0x07, COMMAND_MASK_INCOMING_SERVER }, /* Level Control / StopWithOnOff */                    \
    { 0x0021, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpNotificationResponse */             \
    { 0x0021, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpPairing */                          \
    { 0x0021, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpProxyCommissioningMode */           \
    { 0x0021, 0x06, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpResponse */                         \
    { 0x0021, 0x0A, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpSinkTableResponse */                \
    { 0x0021, 0x0B, COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpProxyTableRequest */                \
    { 0x0300, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToHue */                        \
    { 0x0300, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveHue */                          \
    { 0x0300, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StepHue */                          \
    { 0x0300, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToSaturation */                 \
    { 0x0300, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveSaturation */                   \
    { 0x0300, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StepSaturation */                   \
    { 0x0300, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToHueAndSaturation */           \
    { 0x0300, 0x07, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToColor */                      \
    { 0x0300, 0x08, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveColor */                        \
    { 0x0300, 0x09, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StepColor */                        \
    { 0x0300, 0x0A, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToColorTemperature */           \
    { 0x0300, 0x47, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StopMoveStep */                     \
    { 0x0300, 0x4B, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveColorTemperature */             \
    { 0x0300, 0x4C, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StepColorTemperature */             \
    { 0x1000, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / ScanResponse */                 \
    { 0x1000, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / DeviceInformationResponse */    \
    { 0x1000, 0x11, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkStartResponse */         \
    { 0x1000, 0x13, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinRouterResponse */    \
    { 0x1000, 0x15, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinEndDeviceResponse */ \
    { 0x1000, 0x40, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / EndpointInformation */          \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / GetGroupIdentifiersResponse */  \
    { 0x1000, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* ZLL Commissioning / GetGroupIdentifiersRequest */   \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / GetEndpointListResponse */      \
    { 0x1000, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* ZLL Commissioning / GetEndpointListRequest */       \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (75)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)

// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS {                                                       \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0006, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0008, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 10, 60, 1 },   \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0006, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0008, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 10, 60, 1 },   \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0300, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0300, 0x0001, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0300, 0x0003, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0300, 0x0004, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0300, 0x0007, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (9)
#endif // SILABS_AF_ENDPOINT_CONFIG
