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

// Generated defaults
#if BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                               \
    0xFF, 0xFF, 0xFF, 0xFE /* 0,Maximum value: Time,time */,                                               \
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 4,Maximum value: Simple Metering,current summation delivered */, \
}
#else // ! BIGENDIAN_CPU
#define GENERATED_DEFAULTS {                                                                               \
    0xFE, 0xFF, 0xFF, 0xFF /* 0,Maximum value: Time,time */,                                               \
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF /* 4,Maximum value: Simple Metering,current summation delivered */, \
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
      NULL,                              \
      NULL,                              \
      (uint8_t*)&(generatedDefaults[4]), \
    },                                   \
    {                                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0xFF                     \
    },                                   \
    {                                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0x00,                    \
      (uint8_t*)0xFF                     \
    },                                   \
    {                                    \
      (uint8_t*)0x00,                    \
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
      (uint8_t*)0x0000,                  \
      (uint8_t*)0x0000,                  \
      (uint8_t*)0xFFFF                   \
    },                                   \
}

// Generated attributes
#define GENERATED_ATTRIBUTES {                                                                                                                                                                                                \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/                                                            \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[1]) } }, /* 1 / Basic / power source*/                                                           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 2 / Basic / cluster revision*/                                                                                             \
    { 0x0000, ZCL_UTC_TIME_ATTRIBUTE_TYPE, 4, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[2]) } }, /* 3 / Time / time*/                                       \
    { 0x0001, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[3]) } }, /* 4 / Time / time status*/                                 \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 5 / Time / cluster revision*/                                                                                              \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 6 / Price / cluster revision*/                                                                                                                 \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 7 / Demand Response and Load Control / cluster revision*/                                                                                      \
    { 0x0000, ZCL_INT48U_ATTRIBUTE_TYPE, 6, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[4]) } }, /* 8 / Simple Metering / current summation delivered*/                                                            \
    { 0x0200, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[5]) } }, /* 9 / Simple Metering / status*/                                                                                \
    { 0x0300, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[6]) } }, /* 10 / Simple Metering / unit of measure*/                                                                        \
    { 0x0303, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[7]) } }, /* 11 / Simple Metering / summation formatting*/                                                                 \
    { 0x0306, ZCL_BITMAP8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX), { (uint8_t*)&(minMaxDefaults[8]) } }, /* 12 / Simple Metering / metering device type*/                                                                 \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 13 / Simple Metering / cluster revision*/                                                                                                      \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (0x00), { (uint8_t*)0x0001 } }, /* 14 / Messaging / cluster revision*/                                                                                                            \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[9]) } }, /* 15 / Key Establishment / key establishment suite (client)*/ \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 16 / Key Establishment / cluster revision*/                                                        \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[10]) } }, /* 17 / Key Establishment / key establishment suite (server)*/                        \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 18 / Key Establishment / cluster revision*/                                                                                \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             \
  const EmberAfGenericClusterFunction emberAfFuncArrayTimeClusterServer[] = { (EmberAfGenericClusterFunction)emberAfTimeClusterServerInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                          \
  const EmberAfGenericClusterFunction emberAfFuncArrayPriceClusterServer[] = { (EmberAfGenericClusterFunction)emberAfPriceClusterServerInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                        \
  const EmberAfGenericClusterFunction emberAfFuncArrayDemandResponseLoadControlClusterServer[] = { (EmberAfGenericClusterFunction)emberAfDemandResponseLoadControlClusterServerInitCallback };                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArraySimpleMeteringClusterServer[] = { (EmberAfGenericClusterFunction)emberAfSimpleMeteringClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfSimpleMeteringClusterServerDefaultResponseCallback };                                                                                                                                                                                                                                                                                            \
  const EmberAfGenericClusterFunction emberAfFuncArrayMessagingClusterServer[] = { (EmberAfGenericClusterFunction)emberAfMessagingClusterServerInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterClient[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientPreAttributeChangedCallback };                                                                                  \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterServer[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerPreAttributeChangedCallback }; \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                                                                                                                                                           \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 3, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                              \
    { 0x000A, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 3, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayTimeClusterServer, },                                                                                                                                                                                    \
    { 0x0700, (EmberAfAttributeMetadata*)&(generatedAttributes[6]), 1, 2, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayPriceClusterServer, },                                                                                                                                                                                   \
    { 0x0701, (EmberAfAttributeMetadata*)&(generatedAttributes[7]), 1, 2, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayDemandResponseLoadControlClusterServer, },                                                                                                                                                               \
    { 0x0702, (EmberAfAttributeMetadata*)&(generatedAttributes[8]), 6, 12, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION), emberAfFuncArraySimpleMeteringClusterServer, },                                                                                                                                \
    { 0x0703, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 1, 2, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayMessagingClusterServer, },                                                                                                                                                                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[15]), 2, 0, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterClient, },                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[17]), 2, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterServer, }, \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                       \
    { (EmberAfCluster*)&(generatedClusters[0]), 8, 18 }, \
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
#define ATTRIBUTE_LARGEST (6)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (19)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 18

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 265 }

// Array of device ids
#define FIXED_DEVICE_IDS { 1280 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginNetworkFindInitCallback(void);           \
  void emberAfPluginFragmentationInitCallback(void);         \
  void emberAfPluginInterpanInitCallback(void);              \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginNetworkFindInitCallback();             \
  emberAfPluginFragmentationInitCallback();           \
  emberAfPluginInterpanInitCallback();                \


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


// Generated data for the command discovery
#define GENERATED_COMMANDS {                                                                                                                  \
    { 0x0700, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Price / PublishPrice */                                                                \
    { 0x0700, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetCurrentPrice */                                                             \
    { 0x0700, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetScheduledPrices */                                                          \
    { 0x0700, 0x02, COMMAND_MASK_INCOMING_SERVER }, /* Price / PriceAcknowledgement */                                                        \
    { 0x0700, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetBlockPeriods */                                                             \
    { 0x0700, 0x04, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetConversionFactor */                                                         \
    { 0x0700, 0x05, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetCalorificValue */                                                           \
    { 0x0700, 0x06, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetTariffInformation */                                                        \
    { 0x0700, 0x07, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetPriceMatrix */                                                              \
    { 0x0700, 0x08, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetBlockThresholds */                                                          \
    { 0x0700, 0x09, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetCO2Value */                                                                 \
    { 0x0700, 0x0A, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetTierLabels */                                                               \
    { 0x0700, 0x0B, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetBillingPeriod */                                                            \
    { 0x0700, 0x0C, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetConsolidatedBill */                                                         \
    { 0x0700, 0x0D, COMMAND_MASK_INCOMING_SERVER }, /* Price / CppEventResponse */                                                            \
    { 0x0700, 0x0E, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetCreditPayment */                                                            \
    { 0x0700, 0x0F, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetCurrencyConversionCommand */                                                \
    { 0x0700, 0x10, COMMAND_MASK_INCOMING_SERVER }, /* Price / GetTariffCancellation */                                                       \
    { 0x0701, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Demand Response and Load Control / LoadControlEvent */                                 \
    { 0x0701, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Demand Response and Load Control / ReportEventStatus */                                \
    { 0x0701, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Demand Response and Load Control / CancelLoadControlEvent */                           \
    { 0x0701, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Demand Response and Load Control / GetScheduledEvents */                               \
    { 0x0701, 0x02, COMMAND_MASK_OUTGOING_SERVER }, /* Demand Response and Load Control / CancelAllLoadControlEvents */                       \
    { 0x0702, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / GetProfile */                                                        \
    { 0x0702, 0x03, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / RequestFastPollMode */                                               \
    { 0x0702, 0x07, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / StartSampling */                                                     \
    { 0x0702, 0x08, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / GetSampledData */                                                    \
    { 0x0702, 0x09, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / MirrorReportAttributeResponse */                                     \
    { 0x0702, 0x0A, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / ResetLoadLimitCounter */                                             \
    { 0x0702, 0x0B, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / ChangeSupply */                                                      \
    { 0x0702, 0x0C, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / LocalChangeSupply */                                                 \
    { 0x0702, 0x0D, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / SetSupplyStatus */                                                   \
    { 0x0702, 0x0E, COMMAND_MASK_INCOMING_SERVER }, /* Simple Metering / SetUncontrolledFlowThreshold */                                      \
    { 0x0703, 0x00, COMMAND_MASK_OUTGOING_SERVER }, /* Messaging / DisplayMessage */                                                          \
    { 0x0703, 0x00, COMMAND_MASK_INCOMING_SERVER }, /* Messaging / GetLastMessage */                                                          \
    { 0x0703, 0x01, COMMAND_MASK_OUTGOING_SERVER }, /* Messaging / CancelMessage */                                                           \
    { 0x0703, 0x01, COMMAND_MASK_INCOMING_SERVER }, /* Messaging / MessageConfirmation */                                                     \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / InitiateKeyEstablishmentRequest */  \
    { 0x0800, 0x00, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / InitiateKeyEstablishmentResponse */ \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / EphemeralDataRequest */             \
    { 0x0800, 0x01, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / EphemeralDataResponse */            \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_CLIENT | COMMAND_MASK_INCOMING_SERVER }, /* Key Establishment / ConfirmKeyDataRequest */            \
    { 0x0800, 0x02, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / ConfirmKeyDataResponse */           \
    { 0x0800, 0x03, COMMAND_MASK_OUTGOING_SERVER | COMMAND_MASK_INCOMING_CLIENT }, /* Key Establishment / TerminateKeyEstablishment */        \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (44)

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
