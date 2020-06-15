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
#define FIXED_ENDPOINT_COUNT (1)

// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                                                                        \
    0x09, 0xAC, 0x2F /* 0,Default value: Green Power,gpp functionality */,                                                                          \
    0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */,                                                                   \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */,  \
    0xFF, 0xFF, 0xFF /* 22,Default value: Green Power,gps active functionality */,                                                                  \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 25,Default value: Green Power,gp link key */, \
}
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                                                                        \
    0x2F, 0xAC, 0x09 /* 0,Default value: Green Power,gpp functionality */,                                                                          \
    0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */,                                                                   \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */,  \
    0xFF, 0xFF, 0xFF /* 22,Default value: Green Power,gps active functionality */,                                                                  \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 25,Default value: Green Power,gp link key */, \
}
#endif // BIGENDIAN_CPU

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                    \
    { 0x0010, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x14 } }, /* 0 / Green Power / gpp max proxy table entries*/                                      \
    { 0x0011, ZCL_LONG_OCTET_STRING_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0000 } }, /* 1 / Green Power / proxy table*/                                        \
    { 0x0016, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[0]) } }, /* 2 / Green Power / gpp functionality*/                          \
    { 0x0017, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[3]) } }, /* 3 / Green Power / gpp active functionality*/                   \
    { 0x0022, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[6]) } }, /* 4 / Green Power / gp link key*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 5 / Green Power / cluster revision*/                                              \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x05 } }, /* 6 / Green Power / gps max sink table entries*/                                                        \
    { 0x0001, ZCL_LONG_OCTET_STRING_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 7 / Green Power / sink table*/                                                          \
    { 0x0002, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x01 } }, /* 8 / Green Power / gps communication mode*/                                       \
    { 0x0003, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x02 } }, /* 9 / Green Power / gps commissioning exit mode*/                                  \
    { 0x0005, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x01 } }, /* 10 / Green Power / gps security level*/                                          \
    { 0x0006, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (0x00), { NULL } }, /* 11 / Green Power / gps functionality*/                                                                       \
    { 0x0007, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (0x00), { (uint8_t*)&(generatedDefaults[22]) } }, /* 12 / Green Power / gps active functionality*/                                  \
    { 0x0022, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)&(generatedDefaults[25]) } }, /* 13 / Green Power / gp link key*/                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 14 / Green Power / cluster revision*/                                                              \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                               \
    { 0x0021, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 6, 27, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x0021, (EmberAfAttributeMetadata*)&(generatedAttributes[6]), 9, 30, (CLUSTER_MASK_SERVER), NULL, }, \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                       \
    { (EmberAfCluster*)&(generatedClusters[0]), 2, 57 }, \
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
#define ATTRIBUTE_LARGEST (16)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (0)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 57

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 242 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 41440 }

// Array of device ids
#define FIXED_DEVICE_IDS { 102 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginNetworkFindInitCallback(void);           \
  void emberAfPluginIdleSleepInitCallback(void);             \
  void emberAfPluginCountersInitCallback(void);              \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginNetworkFindInitCallback();             \
  emberAfPluginIdleSleepInitCallback();               \
  emberAfPluginCountersInitCallback();                \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS        \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS     \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS    \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginNetworkFindStackStatusCallback(status);        \


// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    0                        \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (0)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)

// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS { \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (0)
#endif // SILABS_AF_ENDPOINT_CONFIG
