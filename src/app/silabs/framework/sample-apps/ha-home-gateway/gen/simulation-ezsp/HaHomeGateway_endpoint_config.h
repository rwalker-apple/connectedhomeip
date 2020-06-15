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

// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                 \
    0xFF, 0xFF, 0xFF, 0xFE /* 0,Maximum value: Time,time */, \
}
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                 \
    0xFE, 0xFF, 0xFF, 0xFF /* 0,Maximum value: Time,time */, \
}
#endif // BIGENDIAN_CPU

// MinMax defaults
#define GENERATED_MIN_MAX_DEFAULTS {     \
    {                                    \
      (uint8_t*)0x03,                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0xFF                     \
    },                                   \
    {                                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0xFF                     \
    },                                   \
    {                                    \
      (uint8_t*)0x0000,                  \
      (uint8_t*)0x0000,                  \
      (uint8_t*)0xFFFF                   \
    },                                   \
    {                                    \
      NULL,                              \
      NULL,                              \
      (uint8_t*)&(generatedDefaults[0]), \
    },                                   \
    {                                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0x0F                     \
    },                                   \
    {                                    \
      (uint8_t*)0x8000,                  \
      (uint8_t*)-32768,                  \
      (uint8_t*)32767                    \
    },                                   \
    {                                    \
      (uint8_t*)0x8000,                  \
      (uint8_t*)-32768,                  \
      (uint8_t*)32767                    \
    },                                   \
    {                                    \
      (uint8_t*)0x8000,                  \
      (uint8_t*)-32768,                  \
      (uint8_t*)32767                    \
    },                                   \
    {                                    \
      (uint8_t*)0x8000,                  \
      (uint8_t*)-32768,                  \
      (uint8_t*)32767                    \
    },                                   \
    {                                    \
      (uint8_t*)0x8000,                  \
      (uint8_t*)-32768,                  \
      (uint8_t*)32767                    \
    },                                   \
    {                                    \
      (uint8_t*)0x8000,                  \
      (uint8_t*)-32768,                  \
      (uint8_t*)32767                    \
    },                                   \
}

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                                \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/                            \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[1]) } }, /* 1 / Basic / power source*/                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 2 / Basic / cluster revision*/                                                             \
    { 0x0000, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[2]) } }, /* 3 / Identify / identify time*/                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 4 / Identify / cluster revision*/                                                                              \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 5 / On/off / cluster revision*/                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 6 / Level Control / cluster revision*/                                                        \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 7 / Alarms / cluster revision*/                                                               \
    { 0x0000, ZCL_UTC_TIME_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[3]) } }, /* 8 / Time / time*/       \
    { 0x0001, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[4]) } }, /* 9 / Time / time status*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 10 / Time / cluster revision*/                                                             \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 11 / Over the Air Bootloading / cluster revision*/                                                             \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 12 / Poll Control / cluster revision*/                                                        \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 13 / Door Lock / cluster revision*/                                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 14 / Color Control / cluster revision*/                                                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 15 / IAS Zone / cluster revision*/                                                            \
    { 0x0001, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 16 / Generic Tunnel / maximum incoming transfer size*/                                                         \
    { 0x0002, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0000 } }, /* 17 / Generic Tunnel / maximum outgoing transfer size*/                                                         \
    { 0x0003, ZCL_OCTET_STRING_ATTRIBUTE_TYPE, 255, (ATTRIBUTE_MASK_WRITABLE), { NULL } }, /* 18 / Generic Tunnel / protocol address*/                                                        \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 19 / Generic Tunnel / cluster revision*/                                                                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 20 / 11073 Protocol Tunnel / cluster revision*/                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 21 / 11073 Protocol Tunnel / cluster revision*/                                                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 22 / Electrical Measurement / cluster revision*/                                              \
    { 0x0100, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[5]) } }, /* 23 / Electrical Measurement / dc voltage*/                                     \
    { 0x0101, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[6]) } }, /* 24 / Electrical Measurement / dc voltage min*/                                 \
    { 0x0102, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[7]) } }, /* 25 / Electrical Measurement / dc voltage max*/                                 \
    { 0x0103, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[8]) } }, /* 26 / Electrical Measurement / dc current*/                                     \
    { 0x0104, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[9]) } }, /* 27 / Electrical Measurement / dc current min*/                                 \
    { 0x0105, ZCL_INT16S_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[10]) } }, /* 28 / Electrical Measurement / dc current max*/                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 29 / Electrical Measurement / cluster revision*/                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 30 / SL Works With All Hubs / cluster revision*/                   \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                 \
  const EmberAfGenericClusterFunction emberAfFuncArrayIdentifyClusterServer[] = { (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfIdentifyClusterServerAttributeChangedCallback }; \
  const EmberAfGenericClusterFunction emberAfFuncArrayTimeClusterServer[] = { (EmberAfGenericClusterFunction)emberAfTimeClusterServerInitCallback };                                                                                              \
  const EmberAfGenericClusterFunction emberAfFuncArrayOtaBootloadClusterServer[] = { (EmberAfGenericClusterFunction)emberAfOtaBootloadClusterServerInitCallback };                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArrayIasZoneClusterClient[] = { (EmberAfGenericClusterFunction)emberAfIasZoneClusterClientInitCallback };                                                                                        \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                      \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 3, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                         \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, }, \
    { 0x0006, (EmberAfAttributeMetadata*)&(generatedAttributes[5]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                         \
    { 0x0008, (EmberAfAttributeMetadata*)&(generatedAttributes[6]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                         \
    { 0x0009, (EmberAfAttributeMetadata*)&(generatedAttributes[7]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                         \
    { 0x000A, (EmberAfAttributeMetadata*)&(generatedAttributes[8]), 3, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayTimeClusterServer, },                                               \
    { 0x0019, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 1, 2, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayOtaBootloadClusterServer, },                                       \
    { 0x0020, (EmberAfAttributeMetadata*)&(generatedAttributes[12]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0300, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0500, (EmberAfAttributeMetadata*)&(generatedAttributes[15]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayIasZoneClusterClient, },                                           \
    { 0x0B04, (EmberAfAttributeMetadata*)&(generatedAttributes[22]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0B04, (EmberAfAttributeMetadata*)&(generatedAttributes[23]), 7, 14, (CLUSTER_MASK_SERVER), NULL, },                                                                                                       \
    { 0xFC57, (EmberAfAttributeMetadata*)&(generatedAttributes[30]), 1, 0, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 3, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                         \
    { 0x0003, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 2, 4, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayIdentifyClusterServer, }, \
    { 0x000A, (EmberAfAttributeMetadata*)&(generatedAttributes[8]), 3, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayTimeClusterServer, },                                               \
    { 0x0020, (EmberAfAttributeMetadata*)&(generatedAttributes[12]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0101, (EmberAfAttributeMetadata*)&(generatedAttributes[13]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0600, (EmberAfAttributeMetadata*)&(generatedAttributes[16]), 4, 261, (CLUSTER_MASK_SERVER), NULL, },                                                                                                      \
    { 0x0614, (EmberAfAttributeMetadata*)&(generatedAttributes[20]), 1, 2, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                        \
    { 0x0614, (EmberAfAttributeMetadata*)&(generatedAttributes[21]), 1, 2, (CLUSTER_MASK_SERVER), NULL, },                                                                                                        \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                         \
    { (EmberAfCluster*)&(generatedClusters[0]), 13, 34 },  \
    { (EmberAfCluster*)&(generatedClusters[13]), 8, 273 }, \
}

// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES { \
    { 0x000C, 0x1217 },                        \
}
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (1)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                               \
}
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)

// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (255)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (13)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 307

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1, 2 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 260, 264 }

// Array of device ids
#define FIXED_DEVICE_IDS { 80, 0 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0, 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0, 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS      \
  void emberAfPluginNetworkFindInitCallback(void);                \
  void emberAfPluginDeviceQueryServiceInitCallback(void);         \
  void emberAfPluginDeviceDatabaseInitCallback(void);             \
  void emberAfPluginStandaloneBootloaderServerInitCallback(void); \
  void emberAfPluginCountersInitCallback(void);                   \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS    \
  emberAfPluginNetworkFindInitCallback();                \
  emberAfPluginDeviceQueryServiceInitCallback();         \
  emberAfPluginDeviceDatabaseInitCallback();             \
  emberAfPluginStandaloneBootloaderServerInitCallback(); \
  emberAfPluginCountersInitCallback();                   \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_DECLARATIONS            \
  void emberAfPluginAddressTableNcpInitCallback(bool memoryAllocation);     \
  void emberAfPluginNcpConfigurationNcpInitCallback(bool memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_NCP_INIT_FUNCTION_CALLS         \
  emberAfPluginAddressTableNcpInitCallback(memoryAllocation);     \
  emberAfPluginNcpConfigurationNcpInitCallback(memoryAllocation); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS     \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status);  \
  void emberAfPluginConcentratorStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginNetworkFindStackStatusCallback(status);        \
  emberAfPluginConcentratorStackStatusCallback(status);       \


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


#define EMBER_AF_GENERATED_PLUGIN_ZDO_MESSAGE_RECEIVED_FUNCTION_DECLARATIONS \
  void emberAfPluginIasZoneClientZdoMessageReceivedCallback(                 \
    EmberNodeId sender,                                                      \
    EmberApsFrame * apsFrame,                                                \
    uint8_t * message,                                                       \
    uint16_t length);                                                        \


#define EMBER_AF_GENERATED_PLUGIN_ZDO_MESSAGE_RECEIVED_FUNCTION_CALLS \
  emberAfPluginIasZoneClientZdoMessageReceivedCallback(               \
    sender,                                                           \
    apsFrame,                                                         \
    message,                                                          \
    length);                                                          \


// Generated data for the command discovery
#define GENERATED_COMMANDS {                                                                                                                                   \
    { 0x0003, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Identify / IdentifyQueryResponse */                                                                     \
    { 0x0003, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Identify / Identify */                                                                                  \
    { 0x0003, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Identify / IdentifyQuery */                                                                             \
    { 0x0006, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / Off */                                                                                         \
    { 0x0006, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / On */                                                                                          \
    { 0x0006, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* On/off / Toggle */                                                                                      \
    { 0x0008, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / MoveToLevel */                                                                          \
    { 0x0008, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / Move */                                                                                 \
    { 0x0008, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / Step */                                                                                 \
    { 0x0008, 0x03, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / Stop */                                                                                 \
    { 0x0008, 0x04, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / MoveToLevelWithOnOff */                                                                 \
    { 0x0008, 0x05, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / MoveWithOnOff */                                                                        \
    { 0x0008, 0x06, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / StepWithOnOff */                                                                        \
    { 0x0008, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* Level Control / StopWithOnOff */                                                                        \
    { 0x0009, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Alarms / ResetAlarm */                                                                                  \
    { 0x0009, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Alarms / ResetAllAlarms */                                                                              \
    { 0x0019, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / ImageNotify */                                                               \
    { 0x0019, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / QueryNextImageResponse */                                                    \
    { 0x0019, 0x05, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / ImageBlockResponse */                                                        \
    { 0x0019, 0x07, COMMAND_MASK_OUTGOING_SERVER }, /* Over the Air Bootloading / UpgradeEndResponse */                                                        \
    { 0x0020, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Poll Control / CheckInResponse */                                                                       \
    { 0x0020, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Poll Control / CheckIn */                                                                               \
    { 0x0020, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Poll Control / FastPollStop */                                                                          \
    { 0x0101, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Door Lock / LockDoor */                                                                                 \
    { 0x0101, 0x01, COMMAND_MASK_OUTGOING_CLIENT }, /* Door Lock / UnlockDoor */                                                                               \
    { 0x0300, 0x07, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / MoveToColor */                                                                          \
    { 0x0300, 0x08, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / MoveColor */                                                                            \
    { 0x0300, 0x09, COMMAND_MASK_OUTGOING_CLIENT }, /* Color Control / StepColor */                                                                            \
    { 0x0500, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* IAS Zone / ZoneEnrollResponse */                                                                        \
    { 0x0500, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* IAS Zone / ZoneStatusChangeNotification */                                                              \
    { 0x0500, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* IAS Zone / ZoneEnrollRequest */                                                                         \
    { 0x0600, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Generic Tunnel / MatchProtocolAddressResponse */                                                        \
    { 0x0600, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Generic Tunnel / AdvertiseProtocolAddress */                                                            \
    { 0x0614, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* 11073 Protocol Tunnel / TransferAPDU */                                  \
    { 0x0614, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* 11073 Protocol Tunnel / ConnectRequest */                                                               \
    { 0x0614, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* 11073 Protocol Tunnel / DisconnectRequest */                                                            \
    { 0x0614, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* 11073 Protocol Tunnel / ConnectStatusNotification */                                                    \
    { 0xFC57, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableApsLinkKeyAuthorization */          \
    { 0xFC57, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableApsLinkKeyAuthorization */         \
    { 0xFC57, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / ApsLinkKeyAuthorizationQuery */           \
    { 0xFC57, 0x03, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / RequestNewApsLinkKey */                   \
    { 0xFC57, 0x04, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableWwahAppEventRetryAlgorithm */       \
    { 0xFC57, 0x05, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableWwahAppEventRetryAlgorithm */      \
    { 0xFC57, 0x06, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / RequestTime */                            \
    { 0xFC57, 0x07, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableWwahRejoinAlgorithm */              \
    { 0xFC57, 0x08, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableWwahRejoinAlgorithm */             \
    { 0xFC57, 0x09, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / SetIasZoneEnrollmentMethod */             \
    { 0xFC57, 0x0A, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / ClearBindingTable */                      \
    { 0xFC57, 0x0B, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnablePeriodicRouterCheckIns */           \
    { 0xFC57, 0x0C, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisablePeriodicRouterCheckIns */          \
    { 0xFC57, 0x0D, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / SetMacPollFailureWaitTime */              \
    { 0xFC57, 0x0E, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / SetPendingNetworkUpdate */                \
    { 0xFC57, 0x0F, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / RequireApsAcksOnUnicasts */               \
    { 0xFC57, 0x10, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / RemoveApsAcksOnUnicastsRequirement */     \
    { 0xFC57, 0x11, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / ApsAckRequirementQuery */                 \
    { 0xFC57, 0x12, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DebugReportQuery */                       \
    { 0xFC57, 0x13, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / SurveyBeacons */                          \
    { 0xFC57, 0x14, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableOtaDowngrades */                   \
    { 0xFC57, 0x15, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableMgmtLeaveWithoutRejoin */          \
    { 0xFC57, 0x16, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableTouchlinkInterpanMessageSupport */ \
    { 0xFC57, 0x17, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableWwahParentClassification */         \
    { 0xFC57, 0x18, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableWwahParentClassification */        \
    { 0xFC57, 0x19, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableTcSecurityOnNtwkKeyRotation */      \
    { 0xFC57, 0x1A, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableWwahBadParentRecovery */            \
    { 0xFC57, 0x1B, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableWwahBadParentRecovery */           \
    { 0xFC57, 0x1C, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / EnableConfigurationMode */                \
    { 0xFC57, 0x1D, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / DisableConfigurationMode */               \
    { 0xFC57, 0x1E, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / UseTrustCenterForClusterServer */         \
    { 0xFC57, 0x1F, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_MANUFACTURER_SPECIFIC }, /* SL Works With All Hubs / TrustCenterForClusterServerQuery */       \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (69)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
    { 0x0040, 0x1217 },                        \
    { 0x0041, 0x1217 },                        \
    { 0x0042, 0x1217 },                        \
    { 0x0043, 0x1217 },                        \
    { 0x0044, 0x1217 },                        \
    { 0x0025, 0x1217 },                        \
    { 0x0026, 0x1217 },                        \
    { 0x0027, 0x1217 },                        \
    { 0x0028, 0x1217 },                        \
    { 0x0029, 0x1217 },                        \
    { 0x002A, 0x1217 },                        \
    { 0x002B, 0x1217 },                        \
    { 0x002C, 0x1217 },                        \
    { 0x002D, 0x1217 },                        \
    { 0x002E, 0x1217 },                        \
    { 0x002F, 0x1217 },                        \
    { 0x0030, 0x1217 },                        \
    { 0x0031, 0x1217 },                        \
    { 0x0032, 0x1217 },                        \
    { 0x0033, 0x1217 },                        \
    { 0x0034, 0x1217 },                        \
    { 0x0035, 0x1217 },                        \
    { 0x0036, 0x1217 },                        \
    { 0x0037, 0x1217 },                        \
    { 0x0038, 0x1217 },                        \
    { 0x0039, 0x1217 },                        \
    { 0x003A, 0x1217 },                        \
    { 0x003B, 0x1217 },                        \
    { 0x003C, 0x1217 },                        \
    { 0x003D, 0x1217 },                        \
    { 0x003E, 0x1217 },                        \
    { 0x003F, 0x1217 },                        \
}
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (32)

// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS { \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (0)
#endif // SILABS_AF_ENDPOINT_CONFIG
