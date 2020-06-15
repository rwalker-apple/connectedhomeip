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

// MinMax defaults
#define GENERATED_MIN_MAX_DEFAULTS { \
    {                                \
      (uint8_t*)0x03,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0xFF                 \
    },                               \
    {                                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0xFF                 \
    },                               \
    {                                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0xFF                 \
    },                               \
    {                                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0xFF                 \
    },                               \
    {                                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0xFF                 \
    },                               \
}

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                             \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/         \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[1]) } }, /* 1 / Basic / application version*/ \
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[2]) } }, /* 2 / Basic / stack version*/       \
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[3]) } }, /* 3 / Basic / hardware version*/    \
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 4 / Basic / manufacturer name*/                                               \
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 5 / Basic / model identifier*/                                                \
    { 0x0006, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 6 / Basic / date code*/                                                       \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[4]) } }, /* 7 / Basic / power source*/        \
    { 0x4000, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 8 / Basic / sw build id*/                                                     \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 9 / Basic / cluster revision*/                                          \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 10 / Identify / cluster revision*/                                         \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 11 / Groups / cluster revision*/                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 12 / Scenes / cluster revision*/                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 13 / On/off / cluster revision*/                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 14 / Level Control / cluster revision*/                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 15 / Color Control / cluster revision*/                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 16 / ZLL Commissioning / cluster revision*/                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 17 / ZLL Commissioning / cluster revision*/                                                 \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                               \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 10, 0, (CLUSTER_MASK_SERVER), NULL, }, \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[10]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[12]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[13]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x0300, (EmberAfAttributeMetadata*)&(generatedAttributes[15]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, }, \
    { 0x1000, (EmberAfAttributeMetadata*)&(generatedAttributes[17]), 1, 2, (CLUSTER_MASK_SERVER), NULL, }, \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                       \
    { (EmberAfCluster*)&(generatedClusters[0]), 9, 16 }, \
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
#define ATTRIBUTE_LARGEST (33)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (107)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 16

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260 }

// Array of device ids
#define FIXED_DEVICE_IDS { 2112 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS  \
  void emberAfPluginZllCommissioningCommonInitCallback(void); \
  void emberAfPluginInterpanInitCallback(void);               \
  void emberAfPluginIdleSleepInitCallback(void);              \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginZllCommissioningCommonInitCallback();  \
  emberAfPluginInterpanInitCallback();                \
  emberAfPluginIdleSleepInitCallback();               \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS                  \
  void emberAfPluginZllCommissioningCommonNcpInitCallback(bool memoryAllocation); \
  void emberAfPluginInterpanNcpInitCallback(bool memoryAllocation);               \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation);           \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS               \
  emberAfPluginZllCommissioningCommonNcpInitCallback(memoryAllocation); \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation);               \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation);           \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS                \
  void emberAfPluginZllCommissioningCommonStackStatusCallback(EmberStatus status);  \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status);            \
  void emberAfPluginNetworkCreatorSecurityStackStatusCallback(EmberStatus status);  \
  void emberAfPluginNetworkSteeringStackStatusCallback(EmberStatus status);         \
  void emberAfPluginZllCommissioningNetworkStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS      \
  emberAfPluginZllCommissioningCommonStackStatusCallback(status);  \
  emberAfPluginConcentratorStackStatusCallback(status);            \
  emberAfPluginNetworkCreatorSecurityStackStatusCallback(status);  \
  emberAfPluginNetworkSteeringStackStatusCallback(status);         \
  emberAfPluginZllCommissioningNetworkStackStatusCallback(status); \


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
#define GENERATED_COMMANDS {                                                                                                             \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Identify / Identify */                                                            \
    { 0x0003, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Identify / IdentifyQuery */                                                       \
    { 0x0004, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Groups / AddGroup */                                                              \
    { 0x0004, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Groups / AddGroupResponse */                                                      \
    { 0x0004, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Groups / ViewGroup */                                                             \
    { 0x0004, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Groups / ViewGroupResponse */                                                     \
    { 0x0004, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* Groups / GetGroupMembership */                                                    \
    { 0x0004, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Groups / GetGroupMembershipResponse */                                            \
    { 0x0004, 0x03, COMMAND_MASK_OUTGOING_CLIENT }, /* Groups / RemoveGroup */                                                           \
    { 0x0004, 0x03, COMMAND_MASK_INCOMING_CLIENT }, /* Groups / RemoveGroupResponse */                                                   \
    { 0x0004, 0x04, COMMAND_MASK_OUTGOING_CLIENT }, /* Groups / RemoveAllGroups */                                                       \
    { 0x0004, 0x05, COMMAND_MASK_OUTGOING_CLIENT }, /* Groups / AddGroupIfIdentifying */                                                 \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / AddScene */                                                              \
    { 0x0005, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / AddSceneResponse */                                                      \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / ViewScene */                                                             \
    { 0x0005, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / ViewSceneResponse */                                                     \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / RemoveScene */                                                           \
    { 0x0005, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / RemoveSceneResponse */                                                   \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / RemoveAllScenes */                                                       \
    { 0x0005, 0x03, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / RemoveAllScenesResponse */                                               \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / StoreScene */                                                            \
    { 0x0005, 0x04, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / StoreSceneResponse */                                                    \
    { 0x0005, 0x05, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / RecallScene */                                                           \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* Scenes / GetSceneMembership */                                                    \
    { 0x0005, 0x06, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / GetSceneMembershipResponse */                                            \
    { 0x0005, 0x40, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / EnhancedAddSceneResponse */                                              \
    { 0x0005, 0x41, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / EnhancedViewSceneResponse */                                             \
    { 0x0005, 0x42, COMMAND_MASK_INCOMING_CLIENT }, /* Scenes / CopySceneResponse */                                                     \
    { 0x0006, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / Off */                                                                   \
    { 0x0006, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / On */                                                                    \
    { 0x0006, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / Toggle */                                                                \
    { 0x0008, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / MoveToLevel */                                                    \
    { 0x0008, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / Move */                                                           \
    { 0x0008, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / Step */                                                           \
    { 0x0008, 0x03, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / Stop */                                                           \
    { 0x0008, 0x04, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / MoveToLevelWithOnOff */                                           \
    { 0x0008, 0x05, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / MoveWithOnOff */                                                  \
    { 0x0008, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / StepWithOnOff */                                                  \
    { 0x0008, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / StopWithOnOff */                                                  \
    { 0x0300, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / MoveToColor */                                                    \
    { 0x0300, 0x08, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / MoveColor */                                                      \
    { 0x0300, 0x09, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / StepColor */                                                      \
    { 0x1000, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / ScanRequest */                                                \
    { 0x1000, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / ScanResponse */                                               \
    { 0x1000, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / DeviceInformationRequest */                                   \
    { 0x1000, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / DeviceInformationResponse */                                  \
    { 0x1000, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / IdentifyRequest */                                            \
    { 0x1000, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / ResetToFactoryNewRequest */                                   \
    { 0x1000, 0x10, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkStartRequest */                                        \
    { 0x1000, 0x11, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkStartResponse */                                       \
    { 0x1000, 0x12, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkJoinRouterRequest */                                   \
    { 0x1000, 0x13, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinRouterResponse */                                  \
    { 0x1000, 0x14, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkJoinEndDeviceRequest */                                \
    { 0x1000, 0x15, COMMAND_MASK_OUTGOING_SERVER }, /* ZLL Commissioning / NetworkJoinEndDeviceResponse */                               \
    { 0x1000, 0x16, COMMAND_MASK_OUTGOING_CLIENT }, /* ZLL Commissioning / NetworkUpdateRequest */                                       \
    { 0x1000, 0x40, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* ZLL Commissioning / EndpointInformation */         \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* ZLL Commissioning / GetGroupIdentifiersRequest */  \
    { 0x1000, 0x41, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* ZLL Commissioning / GetGroupIdentifiersResponse */ \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* ZLL Commissioning / GetEndpointListRequest */      \
    { 0x1000, 0x42, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* ZLL Commissioning / GetEndpointListResponse */     \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (60)

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
