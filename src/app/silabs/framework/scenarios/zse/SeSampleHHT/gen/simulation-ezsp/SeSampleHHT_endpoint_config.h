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
#define FIXED_ENDPOINT_COUNT (1)

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                         \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x03 } }, /* 0 / Basic / ZCL version*/                                                              \
    { 0x0003, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (0x00), { (uint8_t*)0x00 } }, /* 1 / Basic / hardware version*/                                                                             \
    { 0x0004, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (0x00), { NULL } }, /* 2 / Basic / manufacturer name*/                                                                               \
    { 0x0005, ZCL_CHAR_STRING_ATTRIBUTE_TYPE, 33, (0x00), { NULL } }, /* 3 / Basic / model identifier*/                                                                                \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x00 } }, /* 4 / Basic / power source*/                                                             \
    { 0x0011, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x01 } }, /* 5 / Basic / physical environment*/                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 6 / Basic / cluster revision*/                                                      \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 7 / Over the Air Bootloading / cluster revision*/                                                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 8 / Tunneling / cluster revision*/                                                     \
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0xFFFF } }, /* 9 / Tunneling / close tunnel timeout*/                                                                  \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 10 / Tunneling / cluster revision*/                                                                     \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 11 / Events / cluster revision*/                                                                        \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0000 } }, /* 12 / Key Establishment / key establishment suite (client)*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 13 / Key Establishment / cluster revision*/                 \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0000 } }, /* 14 / Key Establishment / key establishment suite (server)*/                         \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 15 / Key Establishment / cluster revision*/                                         \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             \
  const EmberAfGenericClusterFunction emberAfFuncArrayOtaBootloadClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOtaBootloadClusterServerInitCallback };                                                                                                                                                                                                                                                                                                                                                                                            \
  const EmberAfGenericClusterFunction emberAfFuncArrayTunnelingClusterClient[] = { (EmberAfGenericClusterFunction)emberAfTunnelingClusterClientInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArrayTunnelingClusterServer[] = { (EmberAfGenericClusterFunction)emberAfTunnelingClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfTunnelingClusterServerAttributeChangedCallback };                                                                                                                                                                                                                                                                                                          \
  const EmberAfGenericClusterFunction emberAfFuncArrayEventsClusterServer[] = { (EmberAfGenericClusterFunction)emberAfEventsClusterServerInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                      \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterClient[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientPreAttributeChangedCallback };                                                                                  \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterServer[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerPreAttributeChangedCallback }; \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                                                                                                                                                           \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 7, 67, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                             \
    { 0x0019, (EmberAfAttributeMetadata*)&(generatedAttributes[7]), 1, 2, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayOtaBootloadClusterServer, },                                                                                                                                                                             \
    { 0x0704, (EmberAfAttributeMetadata*)&(generatedAttributes[8]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayTunnelingClusterClient, },                                                                                                                                                                               \
    { 0x0704, (EmberAfAttributeMetadata*)&(generatedAttributes[9]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayTunnelingClusterServer, },                                                                                                                                     \
    { 0x0709, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 1, 2, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayEventsClusterServer, },                                                                                                                                                                                 \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[12]), 2, 0, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterClient, },                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 2, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterServer, }, \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                       \
    { (EmberAfCluster*)&(generatedClusters[0]), 7, 77 }, \
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
#define ATTRIBUTE_SINGLETONS_SIZE (13)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 77

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 265 }

// Array of device ids
#define FIXED_DEVICE_IDS { 1288 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 1 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginNetworkFindInitCallback(void);           \
  void emberAfPluginFragmentationInitCallback(void);         \
  void emberAfPluginMeterMirrorInitCallback(void);           \
  void emberAfPluginInterpanInitCallback(void);              \
  void emberAfPluginCountersInitCallback(void);              \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginNetworkFindInitCallback();             \
  emberAfPluginFragmentationInitCallback();           \
  emberAfPluginMeterMirrorInitCallback();             \
  emberAfPluginInterpanInitCallback();                \
  emberAfPluginCountersInitCallback();                \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS            \
  void emberAfPluginFragmentationNcpInitCallback(bool memoryAllocation);    \
  void emberAfPluginInterpanNcpInitCallback(bool memoryAllocation);         \
  void emberAfPluginNcpConfigurationNcpInitCallback(bool memoryAllocation); \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation);     \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS         \
  emberAfPluginFragmentationNcpInitCallback(memoryAllocation);    \
  emberAfPluginInterpanNcpInitCallback(memoryAllocation);         \
  emberAfPluginNcpConfigurationNcpInitCallback(memoryAllocation); \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation);     \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS        \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status);     \
  void emberAfPluginTunnelingServerStackStatusCallback(EmberStatus status); \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status);    \
  void emberAfPluginMeterMirrorStackStatusCallback(EmberStatus status);     \
  void emberAfPluginTunnelingClientStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginNetworkFindStackStatusCallback(status);        \
  emberAfPluginTunnelingServerStackStatusCallback(status);    \
  emberAfPluginConcentratorStackStatusCallback(status);       \
  emberAfPluginMeterMirrorStackStatusCallback(status);        \
  emberAfPluginTunnelingClientStackStatusCallback(status);    \


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
    { 0x0019, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / ImageNotify */                                              \
    { 0x0019, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / QueryNextImageResponse */                                   \
    { 0x0019, 0x05, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / ImageBlockResponse */                                       \
    { 0x0019, 0x07, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / UpgradeEndResponse */                                       \
    { 0x0702, 0x08, COMMAND_MASK_INCOMING_CLIENT }, /* Simple Metering / ConfigureMirror */                                                   \
    { 0x0704, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / RequestTunnel */                            \
    { 0x0704, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / RequestTunnelResponse */                    \
    { 0x0704, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / CloseTunnel */                              \
    { 0x0704, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / TransferDataServerToClient */               \
    { 0x0704, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / TransferDataClientToServer */               \
    { 0x0704, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / TransferDataErrorServerToClient */          \
    { 0x0704, 0x03, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Tunneling / TransferDataErrorClientToServer */          \
    { 0x0704, 0x06, COMMAND_MASK_INCOMING_CLIENT }, /* Tunneling / TunnelClosureNotification */                                               \
    { 0x0709, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Events / GetEventLog */                                                                \
    { 0x0709, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Events / ClearEventLogRequest */                                                       \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / InitiateKeyEstablishmentRequest */  \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / InitiateKeyEstablishmentResponse */ \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / EphemeralDataRequest */             \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / EphemeralDataResponse */            \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / ConfirmKeyDataRequest */            \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / ConfirmKeyDataResponse */           \
    { 0x0800, 0x03, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / TerminateKeyEstablishment */        \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (22)

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
