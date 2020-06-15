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
#define FIXED_ENDPOINT_COUNT (2)

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
      (uint8_t*)0x0000,              \
      (uint8_t*)0x0000,              \
      (uint8_t*)0xFFFF               \
    },                               \
    {                                \
      (uint8_t*)0x0000,              \
      (uint8_t*)0x0000,              \
      (uint8_t*)0xFFFF               \
    },                               \
}

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                                                                \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/                                                            \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 1 / Basic / application version*/                                                                                             \
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 2 / Basic / stack version*/                                                                                                   \
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 3 / Basic / hardware version*/                                                                                                \
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 4 / Basic / manufacturer name*/                                                                                                  \
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 5 / Basic / model identifier*/                                                                                                   \
    { 0x0006, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 6 / Basic / date code*/                                                                                                          \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[1]) } }, /* 7 / Basic / power source*/                                                           \
    { 0x0008, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0xFF } }, /* 8 / Basic / generic device class*/                                                                                            \
    { 0x0009, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0xFF } }, /* 9 / Basic / generic device type*/                                                                                             \
    { 0x000A, ZCL_OCTET_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 10 / Basic / product code*/                                                                                                     \
    { 0x000B, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 65, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 11 / Basic / product url*/                                                                                                       \
    { 0x4000, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 17, (ATTRIBUTE_MASK_SINGLETON), { NULL } }, /* 12 / Basic / sw build id*/                                                                                                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 13 / Basic / cluster revision*/                                                                                            \
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 14 / Identify / identify time*/                                                                                             \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 15 / Identify / cluster revision*/                                                                                                             \
    { 0x0000, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 16 / Groups / name support*/                                                                                                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 17 / Groups / cluster revision*/                                                                                                               \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 18 / Scenes / scene count*/                                                                                                                       \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 19 / Scenes / current scene*/                                                                                                                     \
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 20 / Scenes / current group*/                                                                                                                  \
    { 0x0003, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 21 / Scenes / scene valid*/                                                                                                                     \
    { 0x0004, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 22 / Scenes / name support*/                                                                                                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 23 / Scenes / cluster revision*/                                                                                                               \
    { 0x0000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 24 / On/off / on/off*/                                                                                                                          \
    { 0x4000, ZCL_BOOLEAN_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x01 } }, /* 25 / On/off / global scene control*/                                                                                                            \
    { 0x4001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 26 / On/off / on time*/                                                                                                     \
    { 0x4002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x0000 } }, /* 27 / On/off / off wait time*/                                                                                               \
    { 0x4003, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 28 / On/off / start up on off*/                                                                                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 29 / On/off / cluster revision*/                                                                                                               \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 30 / Level Control / current level*/                                                                                                              \
    { 0x0001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 31 / Level Control / remaining time*/                                                                                                          \
    { 0x000F, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00 } }, /* 32 / Level Control / options*/                                                                                               \
    { 0x4000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE), { (uint8_t*)0x00UL } }, /* 33 / Level Control / start up current level*/                                                                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 34 / Level Control / cluster revision*/                                                                                                        \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 35 / Time / cluster revision*/                                                                     \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 36 / Price / cluster revision*/                                                                                               \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x00 } }, /* 37 / Demand Response and Load Control / utility enrollment group*/                                     \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x1E } }, /* 38 / Demand Response and Load Control / start randomization minutes*/                                  \
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x00 } }, /* 39 / Demand Response and Load Control / duration randomization minutes*/                               \
    { 0x0003, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0000UL } }, /* 40 / Demand Response and Load Control / device class value*/                                      \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 41 / Demand Response and Load Control / cluster revision*/                                                                    \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 42 / Simple Metering / cluster revision*/                                                                                     \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 43 / Messaging / cluster revision*/                                                                                           \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[2]) } }, /* 44 / Key Establishment / key establishment suite (client)*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 45 / Key Establishment / cluster revision*/                                                        \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[3]) } }, /* 46 / Key Establishment / key establishment suite (server)*/                         \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 47 / Key Establishment / cluster revision*/                                                                                \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             \
  const EmberAfGenericClusterFunction emberAfFuncArrayDemandResponseLoadControlClusterClient[] = { (EmberAfGenericClusterFunction)emberAfDemandResponseLoadControlClusterClientInitCallback };                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArraySimpleMeteringClusterClient[] = { (EmberAfGenericClusterFunction)emberAfSimpleMeteringClusterClientDefaultResponseCallback };                                                                                                                                                                                                                                                                                                                                                                           \
  const EmberAfGenericClusterFunction emberAfFuncArrayMessagingClusterClient[] = { (EmberAfGenericClusterFunction)emberAfMessagingClusterClientInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterClient[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientPreAttributeChangedCallback };                                                                                  \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterServer[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerPreAttributeChangedCallback }; \
  const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback };                                                                                                                                                                                                                                                                                                             \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                                                                                                                                                           \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 14, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
    { 0x000A, (EmberAfAttributeMetadata*)&(generatedAttributes[35]), 1, 0, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                                                                                                                                                             \
    { 0x0700, (EmberAfAttributeMetadata*)&(generatedAttributes[36]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                                                                                                                                                             \
    { 0x0701, (EmberAfAttributeMetadata*)&(generatedAttributes[37]), 5, 7, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayDemandResponseLoadControlClusterClient, },                                                                                                                                                              \
    { 0x0702, (EmberAfAttributeMetadata*)&(generatedAttributes[42]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION), emberAfFuncArraySimpleMeteringClusterClient, },                                                                                                                                                             \
    { 0x0703, (EmberAfAttributeMetadata*)&(generatedAttributes[43]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayMessagingClusterClient, },                                                                                                                                                                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[44]), 2, 0, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterClient, },                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[46]), 2, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterServer, }, \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 14, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, },                                                                                                                                     \
    { 0x0004, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 2, 3, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
    { 0x0005, (EmberAfAttributeMetadata*)&(generatedAttributes[18]), 6, 8, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[24]), 6, 9, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[30]), 5, 7, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                       \
    { (EmberAfCluster*)&(generatedClusters[0]), 8, 13 }, \
    { (EmberAfCluster*)&(generatedClusters[8]), 6, 31 }, \
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
#define ATTRIBUTE_SINGLETONS_SIZE (201)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 44

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1, 2 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260, 265 }

// Array of device ids
#define FIXED_DEVICE_IDS { 257, 1282 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0, 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 1, 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 1 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginNetworkFindInitCallback(void);           \
  void emberAfPluginFragmentationInitCallback(void);         \
  void emberAfPluginInterpanInitCallback(void);              \
  void emberAfPluginEsiManagementInitCallback(void);         \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginNetworkFindInitCallback();             \
  emberAfPluginFragmentationInitCallback();           \
  emberAfPluginInterpanInitCallback();                \
  emberAfPluginEsiManagementInitCallback();           \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS            \
  void emberAfPluginFragmentationNcpInitCallback(bool memoryAllocation);    \
  void emberAfPluginInterpanNcpInitCallback(bool memoryAllocation);         \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation);     \
  void emberAfPluginNcpConfigurationNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS         \
  emberAfPluginFragmentationNcpInitCallback(memoryAllocation);    \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation);         \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation);     \
  emberAfPluginNcpConfigurationNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS               \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status);            \
  void emberAfPluginEndDeviceSupportStackStatusCallback(EmberStatus status);       \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status);           \
  void emberAfPluginNetworkCreatorSecurityStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS     \
  emberAfPluginNetworkFindStackStatusCallback(status);            \
  emberAfPluginEndDeviceSupportStackStatusCallback(status);       \
  emberAfPluginConcentratorStackStatusCallback(status);           \
  emberAfPluginNetworkCreatorSecurityStackStatusCallback(status); \


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
#define GENERATED_COMMANDS {                                                                                                                  \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */                                                    \
    { 0x0003, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */                                                                 \
    { 0x0003, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */                                                            \
    { 0x0004, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / AddGroupResponse */                                                           \
    { 0x0004, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / ViewGroupResponse */                                                          \
    { 0x0004, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / GetGroupMembershipResponse */                                                 \
    { 0x0004, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Groups / RemoveGroupResponse */                                                        \
    { 0x0005, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / AddSceneResponse */                                                           \
    { 0x0005, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / ViewSceneResponse */                                                          \
    { 0x0005, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveSceneResponse */                                                        \
    { 0x0005, 0x03, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / RemoveAllScenesResponse */                                                    \
    { 0x0005, 0x04, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / StoreSceneResponse */                                                         \
    { 0x0005, 0x06, COMMAND_MASK_OUTGOING_SERVER }, /* Scenes / GetSceneMembershipResponse */                                                 \
    { 0x0700, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Price / GetCurrentPrice */                                                             \
    { 0x0700, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Price / PriceAcknowledgement */                         \
    { 0x0701, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Demand Response and Load Control / ReportEventStatus */                                \
    { 0x0701, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Demand Response and Load Control / LoadControlEvent */                                 \
    { 0x0701, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Demand Response and Load Control / GetScheduledEvents */                               \
    { 0x0701, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Demand Response and Load Control / CancelLoadControlEvent */                           \
    { 0x0701, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Demand Response and Load Control / CancelAllLoadControlEvents */                       \
    { 0x0702, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / GetProfileResponse */                                                \
    { 0x0702, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / RequestMirror */                                                     \
    { 0x0702, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / RemoveMirror */                                                      \
    { 0x0702, 0x03, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / RequestFastPollModeResponse */                                       \
    { 0x0702, 0x0C, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / SupplyStatusResponse */                                              \
    { 0x0703, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Messaging / GetLastMessage */                                                          \
    { 0x0703, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Messaging / DisplayMessage */                                                          \
    { 0x0703, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Messaging / MessageConfirmation */                                                     \
    { 0x0703, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Messaging / CancelMessage */                                                           \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / InitiateKeyEstablishmentRequest */  \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / InitiateKeyEstablishmentResponse */ \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / EphemeralDataRequest */             \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / EphemeralDataResponse */            \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / ConfirmKeyDataRequest */            \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / ConfirmKeyDataResponse */           \
    { 0x0800, 0x03, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / TerminateKeyEstablishment */        \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (36)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)

// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS {                                                       \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0006, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
    { EMBER_ZCL_REPORTING_DIRECTION_REPORTED, 1, 0x0008, 0x0000, CLUSTER_MASK_SERVER, 0x0000, 1, 65534, 0 }, \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (2)
#endif // SILABS_AF_ENDPOINT_CONFIG
