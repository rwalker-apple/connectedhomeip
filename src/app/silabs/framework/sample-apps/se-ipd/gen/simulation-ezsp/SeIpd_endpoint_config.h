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
      (uint8_t*)0x1E,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x3C                 \
    },                               \
    {                                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x00,                \
      (uint8_t*)0x3C                 \
    },                               \
    {                                \
      (uint8_t*)0x0000UL,            \
      (uint8_t*)0x0000,              \
      (uint8_t*)0xFFFF               \
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
#define GENERATED_ATTRIBUTES {                                                                                                                                                                                                          \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[0]) } }, /* 0 / Basic / ZCL version*/                                                                      \
    { 0x0007, ZCL_ENUM8_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[1]) } }, /* 1 / Basic / power source*/                                                                     \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 2 / Basic / cluster revision*/                                                                                                       \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 3 / Time / cluster revision*/                                                                                \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 4 / Price / cluster revision*/                                                                                                          \
    { 0x0000, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(minMaxDefaults[2]) } }, /* 5 / Demand Response and Load Control / utility enrollment group*/       \
    { 0x0001, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(minMaxDefaults[3]) } }, /* 6 / Demand Response and Load Control / start randomization minutes*/    \
    { 0x0002, ZCL_INT8U_ATTRIBUTE_TYPE, 1, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(minMaxDefaults[4]) } }, /* 7 / Demand Response and Load Control / duration randomization minutes*/ \
    { 0x0003, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_WRITABLE | ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT), { (uint8_t*)&(minMaxDefaults[5]) } }, /* 8 / Demand Response and Load Control / device class value*/            \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 9 / Demand Response and Load Control / cluster revision*/                                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 10 / Simple Metering / cluster revision*/                                                                                               \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT), { (uint8_t*)0x0001 } }, /* 11 / Messaging / cluster revision*/                                                                                                     \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[6]) } }, /* 12 / Key Establishment / key establishment suite (client)*/           \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_CLIENT | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 13 / Key Establishment / cluster revision*/                                                                  \
    { 0x0000, ZCL_ENUM16_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_MIN_MAX | ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)&(minMaxDefaults[7]) } }, /* 14 / Key Establishment / key establishment suite (server)*/                                   \
    { 0xFFFD, ZCL_INT16U_ATTRIBUTE_TYPE, 2, (ATTRIBUTE_MASK_SINGLETON), { (uint8_t*)0x0001 } }, /* 15 / Key Establishment / cluster revision*/                                                                                          \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             \
  const EmberAfGenericClusterFunction emberAfFuncArrayPriceClusterClient[] = { (EmberAfGenericClusterFunction)emberAfPriceClusterClientInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                        \
  const EmberAfGenericClusterFunction emberAfFuncArrayDemandResponseLoadControlClusterClient[] = { (EmberAfGenericClusterFunction)emberAfDemandResponseLoadControlClusterClientInitCallback };                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArraySimpleMeteringClusterClient[] = { (EmberAfGenericClusterFunction)emberAfSimpleMeteringClusterClientDefaultResponseCallback };                                                                                                                                                                                                                                                                                                                                                                           \
  const EmberAfGenericClusterFunction emberAfFuncArrayMessagingClusterClient[] = { (EmberAfGenericClusterFunction)emberAfMessagingClusterClientInitCallback };                                                                                                                                                                                                                                                                                                                                                                                                \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterClient[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterClientPreAttributeChangedCallback };                                                                                  \
  const EmberAfGenericClusterFunction emberAfFuncArrayKeyEstablishmentClusterServer[] = { (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerInitCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerAttributeChangedCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerDefaultResponseCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerMessageSentCallback, (EmberAfGenericClusterFunction)emberAfKeyEstablishmentClusterServerPreAttributeChangedCallback }; \


// Clusters definitions
#define GENERATED_CLUSTERS {                                                                                                                                                                                                                                                                                                                           \
    { 0x0000, (EmberAfAttributeMetadata*)&(generatedAttributes[0]), 3, 0, (CLUSTER_MASK_SERVER), NULL, },                                                                                                                                                                                                                                              \
    { 0x000A, (EmberAfAttributeMetadata*)&(generatedAttributes[3]), 1, 0, (CLUSTER_MASK_CLIENT), NULL, },                                                                                                                                                                                                                                              \
    { 0x0700, (EmberAfAttributeMetadata*)&(generatedAttributes[4]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayPriceClusterClient, },                                                                                                                                                                                   \
    { 0x0701, (EmberAfAttributeMetadata*)&(generatedAttributes[5]), 5, 7, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayDemandResponseLoadControlClusterClient, },                                                                                                                                                               \
    { 0x0702, (EmberAfAttributeMetadata*)&(generatedAttributes[10]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION), emberAfFuncArraySimpleMeteringClusterClient, },                                                                                                                                                             \
    { 0x0703, (EmberAfAttributeMetadata*)&(generatedAttributes[11]), 1, 2, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_INIT_FUNCTION), emberAfFuncArrayMessagingClusterClient, },                                                                                                                                                                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[12]), 2, 0, (CLUSTER_MASK_CLIENT | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterClient, },                              \
    { 0x0800, (EmberAfAttributeMetadata*)&(generatedAttributes[14]), 2, 0, (CLUSTER_MASK_SERVER | CLUSTER_MASK_INIT_FUNCTION | CLUSTER_MASK_ATTRIBUTE_CHANGED_FUNCTION | CLUSTER_MASK_DEFAULT_RESPONSE_FUNCTION | CLUSTER_MASK_MESSAGE_SENT_FUNCTION | CLUSTER_MASK_PRE_ATTRIBUTE_CHANGED_FUNCTION), emberAfFuncArrayKeyEstablishmentClusterServer, }, \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                       \
    { (EmberAfCluster*)&(generatedClusters[0]), 8, 13 }, \
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
#define ATTRIBUTE_LARGEST (2)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (14)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 13

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 265 }

// Array of device ids
#define FIXED_DEVICE_IDS { 1282 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginNetworkFindInitCallback(void);           \
  void emberAfPluginFragmentationInitCallback(void);         \
  void emberAfPluginSimpleClockInitCallback(void);           \
  void emberAfPluginInterpanInitCallback(void);              \
  void emberAfPluginEsiManagementInitCallback(void);         \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginNetworkFindInitCallback();             \
  emberAfPluginFragmentationInitCallback();           \
  emberAfPluginSimpleClockInitCallback();             \
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


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_DECLARATIONS         \
  void emberAfPluginNetworkFindStackStatusCallback(EmberStatus status);      \
  void emberAfPluginEndDeviceSupportStackStatusCallback(EmberStatus status); \


#define EMBER_AF_GENERATED_PLUGIN_STACK_STATUS_FUNCTION_CALLS \
  emberAfPluginNetworkFindStackStatusCallback(status);        \
  emberAfPluginEndDeviceSupportStackStatusCallback(status);   \


// Generated data for the command discovery
#define GENERATED_COMMANDS {                                                                                                                  \
    { 0x0700, 0x00, COMMAND_MASK_OUTGOING_CLIENT }, /* Price / GetCurrentPrice */                                                             \
    { 0x0700, 0x00, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishPrice */                                                                \
    { 0x0700, 0x01, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishBlockPeriod */                                                          \
    { 0x0700, 0x02, COMMAND_MASK_OUTGOING_CLIENT }, /* Price / PriceAcknowledgement */                                                        \
    { 0x0700, 0x02, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishConversionFactor */                                                     \
    { 0x0700, 0x03, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishCalorificValue */                                                       \
    { 0x0700, 0x04, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishTariffInformation */                                                    \
    { 0x0700, 0x06, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishBlockThresholds */                                                      \
    { 0x0700, 0x07, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishCO2Value */                                                             \
    { 0x0700, 0x08, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishTierLabels */                                                           \
    { 0x0700, 0x09, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishBillingPeriod */                                                        \
    { 0x0700, 0x0A, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishConsolidatedBill */                                                     \
    { 0x0700, 0x0B, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishCppEvent */                                                             \
    { 0x0700, 0x0C, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishCreditPayment */                                                        \
    { 0x0700, 0x0D, COMMAND_MASK_INCOMING_CLIENT }, /* Price / PublishCurrencyConversion */                                                   \
    { 0x0700, 0x0E, COMMAND_MASK_INCOMING_CLIENT }, /* Price / CancelTariff */                                                                \
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
#define EMBER_AF_GENERATED_COMMAND_COUNT (37)

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
