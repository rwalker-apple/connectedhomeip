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
#define GENERATED_DEFAULTS {                                                                                                                        \
    0x09, 0xAC, 0x2F /* 0,Default value: Green Power,gpp functionality */,                                                                          \
    0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */,                                                                   \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */,  \
    0x0F, 0xAE, 0x2F /* 22,Default value: Green Power,gps functionality */,                                                                         \
    0xFF, 0xFF, 0xFF /* 25,Default value: Green Power,gps active functionality */,                                                                  \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 28,Default value: Green Power,gp link key */, \
}
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                                                                        \
    0x2F, 0xAC, 0x09 /* 0,Default value: Green Power,gpp functionality */,                                                                          \
    0xFF, 0xFF, 0xFF /* 3,Default value: Green Power,gpp active functionality */,                                                                   \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 6,Default value: Green Power,gp link key */,  \
    0x2F, 0xAE, 0x0F /* 22,Default value: Green Power,gps functionality */,                                                                         \
    0xFF, 0xFF, 0xFF /* 25,Default value: Green Power,gps active functionality */,                                                                  \
    0x5A, 0x69, 0x67, 0x42, 0x65, 0x65, 0x41, 0x6C, 0x6C, 0x69, 0x61, 0x6E, 0x63, 0x65, 0x30, 0x39 /* 28,Default value: Green Power,gp link key */, \
}
#endif // BIGENDIAN_CPU

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                     \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x03 } }, /* 0 / Basic / ZCL version*/                                                          \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 1 / Basic / power source*/                                                         \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 2 / Basic / cluster revision*/                                                  \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 3 / Identify / cluster revision*/                                                  \
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 4 / Identify / identify time*/                                                   \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 5 / Identify / cluster revision*/                                                                   \
    { 0x0000, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 6 / Groups / name support*/                                                                          \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 7 / Groups / cluster revision*/                                                                     \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 8 / Scenes / cluster revision*/                                                    \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 9 / Scenes / scene count*/                                                                             \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 10 / Scenes / current scene*/                                                                          \
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 11 / Scenes / current group*/                                                                       \
    { 0x0003, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 12 / Scenes / scene valid*/                                                                          \
    { 0x0004, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 13 / Scenes / name support*/                                                                         \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 14 / Scenes / cluster revision*/                                                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 15 / On/off / cluster revision*/                                                   \
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 16 / On/off / on/off*/                                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 17 / On/off / cluster revision*/                                                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 18 / Level Control / cluster revision*/                                            \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 19 / Level Control / current level*/                                                                   \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 20 / Level Control / cluster revision*/                                                             \
    { 0x0010, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x14 } }, /* 21 / Green Power / gpp max proxy table entries*/                                      \
    { 0x0011, ZCL_LONG_OCTET_STRING_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0000 } }, /* 22 / Green Power / proxy table*/                                        \
    { 0x0016, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[0]) } }, /* 23 / Green Power / gpp functionality*/                          \
    { 0x0017, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[3]) } }, /* 24 / Green Power / gpp active functionality*/                   \
    { 0x0022, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(generatedDefaults[6]) } }, /* 25 / Green Power / gp link key*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 26 / Green Power / cluster revision*/                                              \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x05 } }, /* 27 / Green Power / gps max sink table entries*/                                                        \
    { 0x0001, ZCL_LONG_OCTET_STRING_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 28 / Green Power / sink table*/                                                          \
    { 0x0002, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x01 } }, /* 29 / Green Power / gps communication mode*/                                       \
    { 0x0003, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x02 } }, /* 30 / Green Power / gps commissioning exit mode*/                                  \
    { 0x0004, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00FF } }, /* 31 / Green Power / gps commissioning window*/                                    \
    { 0x0005, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x06 } }, /* 32 / Green Power / gps security level*/                                           \
    { 0x0006, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (0x00), { (uint8_t*)&(generatedDefaults[22]) } }, /* 33 / Green Power / gps functionality*/                                          \
    { 0x0007, ZCL_BITMAP24_ATTRIBUTE_TYPE, 3, (0x00), { (uint8_t*)&(generatedDefaults[25]) } }, /* 34 / Green Power / gps active functionality*/                                   \
    { 0x0020, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x03 } }, /* 35 / Green Power / gp shared security key type*/                                  \
    { 0x0021, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 36 / Green Power / gp shared security key*/                                           \
    { 0x0022, ZCL_SECURITY_KEY_ATTRIBUTE_TYPE, 16, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)&(generatedDefaults[28]) } }, /* 37 / Green Power / gp link key*/                        \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0002 } }, /* 38 / Green Power / cluster revision*/                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 39 / Door Lock / cluster revision*/                                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 40 / Color Control / cluster revision*/                                            \
    { 0x0003, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x616B } }, /* 41 / Color Control / current x*/                                                                    \
    { 0x0004, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x607D } }, /* 42 / Color Control / current y*/                                                                    \
    { 0x000F, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 43 / Color Control / color control options*/                                      \
    { 0x400D, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000UL } }, /* 44 / Color Control / couple color temp to level min-mireds*/                                      \
    { 0x4010, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000UL } }, /* 45 / Color Control / start up color temperature mireds*/                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 46 / Color Control / cluster revision*/                                                             \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 47 / Temperature Measurement / cluster revision*/                                  \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 48 / Occupancy Sensing / cluster revision*/                                        \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                 \
  const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback }; \
  const EmberAfGenericClusterFunction emberAfFuncArrayGroupsClusterServer[] = { (EmberAfGenericClusterFunction)emberAfGroupsClusterServerInitCallback };                                                                                          \
  const EmberAfGenericClusterFunction emberAfFuncArrayScenesClusterServer[] = { (EmberAfGenericClusterFunction)emberAfScenesClusterServerInitCallback };                                                                                          \
  const EmberAfGenericClusterFunction emberAfFuncArrayOnOffClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOnOffClusterServerInitCallback };                                                                                            \
  const EmberAfGenericClusterFunction emberAfFuncArrayLevelControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfLevelControlClusterServerInitCallback };                                                                              \
  const EmberAfGenericClusterFunction emberAfFuncArrayColorControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfColorControlClusterServerInitCallback };                                                                              \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                      \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 3, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                         \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, }, \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[6]), 2, 3, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayGroupsClusterServer, },                                             \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 6, 8, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayScenesClusterServer, },                                             \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 2, 3, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayOnOffClusterServer, },                                             \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[19]), 2, 3, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayLevelControlClusterServer, },                                      \
    { 0x0300, (EmberAfAttributeMetadata*)&(generatedAttributes[41]), 6, 11, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayColorControlClusterServer, },                                     \
    { 0x0402, (EmberAfAttributeMetadata*)&(generatedAttributes[47]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0406, (EmberAfAttributeMetadata*)&(generatedAttributes[48]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0021, (EmberAfAttributeMetadata*)&(generatedAttributes[21]), 6, 27, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                       \
    { 0x0021, (EmberAfAttributeMetadata*)&(generatedAttributes[27]), 12, 49, (CLUSTER_MASK_SERVER), NULL, },                                                                                                      \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                         \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[8]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                         \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[15]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 2, 3, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayOnOffClusterServer, },                                             \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[18]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0101, (EmberAfAttributeMetadata*)&(generatedAttributes[39]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0300, (EmberAfAttributeMetadata*)&(generatedAttributes[40]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0406, (EmberAfAttributeMetadata*)&(generatedAttributes[48]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                        \
    { (EmberAfCluster*)&(generatedClusters[0]), 9, 36 },  \
    { (EmberAfCluster*)&(generatedClusters[9]), 2, 76 },  \
    { (EmberAfCluster*)&(generatedClusters[11]), 8, 17 }, \
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
#define ATTRIBUTE_SINGLETONS_SIZE (4)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 129

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 242, 1, 2 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 41440, 260, 260 }

// Array of device ids
#define FIXED_DEVICE_IDS { 102, 258, 256 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0, 0, 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 1, 0, 2 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0, 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS      \
  void emberAfPluginGreenPowerTranslationTableInitCallback(void); \
  void emberAfPluginNetworkFindInitCallback(void);                \
  void emberAfPluginGreenPowerServerInitCallback(void);           \
  void emberAfPluginGreenPowerClientInitCallback(void);           \
  void emberAfPluginCountersInitCallback(void);                   \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS    \
  emberAfPluginGreenPowerTranslationTableInitCallback(); \
  emberAfPluginNetworkFindInitCallback();                \
  emberAfPluginGreenPowerServerInitCallback();           \
  emberAfPluginGreenPowerClientInitCallback();           \
  emberAfPluginCountersInitCallback();                   \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS            \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation);     \
  void emberAfPluginNcpConfigurationNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS         \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation);     \
  emberAfPluginNcpConfigurationNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS                   \
  void emberAfPluginGreenPowerTranslationTableStackStatusCallback(EmberStatus status); \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status);                \
  void emberAfPluginGreenPowerServerStackStatusCallback(EmberStatus status);           \
  void emberAfPluginGreenPowerClientStackStatusCallback(EmberStatus status);           \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status);               \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS         \
  emberAfPluginGreenPowerTranslationTableStackStatusCallback(status); \
  emberAfPluginNetworkFindStackStatusCallback(status);                \
  emberAfPluginGreenPowerServerStackStatusCallback(status);           \
  emberAfPluginGreenPowerClientStackStatusCallback(status);           \
  emberAfPluginConcentratorStackStatusCallback(status);               \


#define EMBER_AF_GENERATED_PLUGIN_MESSAGE_SENT_FUNCTION_DECLARATIONS \
  void emberAfPluginConcentratorMessageSentCallback(                 \
    EmberOutgoingMessageType type,                                   \
    uint16_t indexOrDestination,                                     \
    EmberApsFrame * apsFrame,                                        \
    EmberStatus status,                                              \
    uint16_t messageLength,                                          \
    uint8_t * messageContents);                                      \


#define EMBER_AF_GENERATED_PLUGIN_MESSAGE_SENT_FUNCTION_CALLS \
  emberAfPluginConcentratorMessageSentCallback(               \
    type,                                                     \
    indexOrDestination,                                       \
    apsFrame,                                                 \
    status,                                                   \
    messageLength,                                            \
    messageContents);                                         \


// Generated data for the command discovery
#define GENERATED_COMMANDS {                                                                                                       \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */                       \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */                                         \
    { 0x0003, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */                  \
    { 0x0003, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Identify / TriggerEffect */                                                 \
    { 0x0004, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / AddGroupResponse */                                                \
    { 0x0004, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroup */                                                        \
    { 0x0004, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / ViewGroupResponse */                                               \
    { 0x0004, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Groups / ViewGroup */                                                       \
    { 0x0004, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / GetGroupMembershipResponse */                                      \
    { 0x0004, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Groups / GetGroupMembership */                                              \
    { 0x0004, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / RemoveGroupResponse */                                             \
    { 0x0004, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveGroup */                                                     \
    { 0x0004, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Groups / RemoveAllGroups */                                                 \
    { 0x0004, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Groups / AddGroupIfIdentifying */                                           \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / AddScene */                         \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / AddSceneResponse */                                                \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / ViewScene */                        \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / ViewSceneResponse */                                               \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveScene */                      \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveSceneResponse */                                             \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RemoveAllScenes */                  \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveAllScenesResponse */                                         \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / StoreScene */                       \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / StoreSceneResponse */                                              \
    { 0x0005, 0x05, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / RecallScene */                      \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Scenes / GetSceneMembership */               \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / GetSceneMembershipResponse */                                      \
    { 0x0005, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedAddScene */                                                \
    { 0x0005, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / EnhancedViewScene */                                               \
    { 0x0005, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* Scenes / CopyScene */                                                       \
    { 0x0006, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* On/off / Off */                              \
    { 0x0006, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* On/off / On */                               \
    { 0x0006, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* On/off / Toggle */                           \
    { 0x0006, 0x40, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OffWithEffect */                                                   \
    { 0x0006, 0x41, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithRecallGlobalScene */                                         \
    { 0x0006, 0x42, COMMAND_MASK_INCOMING_SERVER }, /* On/off / OnWithTimedOff */                                                  \
    { 0x0008, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveToLevel */               \
    { 0x0008, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Move */                      \
    { 0x0008, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Step */                      \
    { 0x0008, 0x03, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / Stop */                      \
    { 0x0008, 0x04, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveToLevelWithOnOff */      \
    { 0x0008, 0x05, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / MoveWithOnOff */             \
    { 0x0008, 0x06, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / StepWithOnOff */             \
    { 0x0008, 0x07, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Level Control / StopWithOnOff */             \
    { 0x0021, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpNotificationResponse */      \
    { 0x0021, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpNotification */              \
    { 0x0021, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpPairing */                   \
    { 0x0021, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Green Power / GpPairingSearch */                                            \
    { 0x0021, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpProxyCommissioningMode */    \
    { 0x0021, 0x04, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpCommissioningNotification */ \
    { 0x0021, 0x05, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpSinkCommissioningMode */     \
    { 0x0021, 0x06, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpResponse */                  \
    { 0x0021, 0x07, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpTranslationTableUpdate */    \
    { 0x0021, 0x08, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpTranslationTableRequest */   \
    { 0x0021, 0x09, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpPairingConfiguration */      \
    { 0x0021, 0x0A, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Green Power / GpSinkTableRequest */          \
    { 0x0021, 0x0A, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpSinkTableResponse */         \
    { 0x0021, 0x0B, COMMAND_MASK_OUTGOING_CLIENT }, /* Green Power / GpProxyTableResponse */                                       \
    { 0x0021, 0x0B, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Green Power / GpProxyTableRequest */         \
    { 0x0101, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Door Lock / LockDoor */                                                     \
    { 0x0101, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Door Lock / UnlockDoor */                                                   \
    { 0x0300, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToHue */                                                \
    { 0x0300, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveHue */                                                  \
    { 0x0300, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StepHue */                                                  \
    { 0x0300, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToSaturation */                                         \
    { 0x0300, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveSaturation */                                           \
    { 0x0300, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / StepSaturation */                                           \
    { 0x0300, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Color Control / MoveToHueAndSaturation */                                   \
    { 0x0300, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / MoveToColor */                                              \
    { 0x0300, 0x08, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / MoveColor */                                                \
    { 0x0300, 0x09, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / StepColor */                                                \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (71)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)

// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS {                                                       \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0006, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0008, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0300, 0x0003, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0300, 0x0004, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 2, 0x0006, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (5)
#endif // SILABS_AF_ENDPOINT_CONFIG
