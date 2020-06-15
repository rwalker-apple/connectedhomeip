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
#ifndef __AF_GEN_EVENT__
#define __AF_GEN_EVENT__

// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE                                                                                                                                                                                                      \
  EmberEventControl emberAfSimpleMeteringClusterServerTickCallbackControl1;                                                                                                                                                                \
  EmberEventControl emberAfKeyEstablishmentClusterServerTickCallbackControl1;                                                                                                                                                              \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl;                                                                                                                                                                    \
  extern EmberEventControl emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl;                                                                                                                                                 \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl;                                                                                                                                                                       \
  extern EmberEventControl emberAfPluginSimpleMeteringServerSamplingEventControl;                                                                                                                                                          \
  extern EmberEventControl emberAfPluginSimpleMeteringServerSupplyEventControl;                                                                                                                                                            \
  extern EmberEventControl sleepyMeterEventControl;                                                                                                                                                                                        \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void);                                                                                                                                                                           \
  extern void emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler(void);                                                                                                                                                        \
  extern void emberAfPluginNetworkFindTickEventHandler(void);                                                                                                                                                                              \
  extern void emberAfPluginSimpleMeteringServerSamplingEventHandler(void);                                                                                                                                                                 \
  extern void emberAfPluginSimpleMeteringServerSupplyEventHandler(void);                                                                                                                                                                   \
  extern void sleepyMeterEvent(void);                                                                                                                                                                                                      \
  static void networkEventWrapper(EmberEventControl * control, EmberAfNetworkEventHandler handler, uint8_t networkIndex)                                                                                                                   \
  {                                                                                                                                                                                                                                        \
    emberAfPushNetworkIndex(networkIndex);                                                                                                                                                                                                 \
    emberEventControlSetInactive(*control);                                                                                                                                                                                                \
    (*handler)();                                                                                                                                                                                                                          \
    emberAfPopNetworkIndex();                                                                                                                                                                                                              \
  }                                                                                                                                                                                                                                        \
  EmberEventControl emberAfPluginEndDeviceSupportMoveNetworkEventControls[1];                                                                                                                                                              \
  extern void emberAfPluginEndDeviceSupportMoveNetworkEventHandler(void);                                                                                                                                                                  \
  void emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventHandler, 0); }                            \
  EmberEventControl emberAfPluginEndDeviceSupportPollingNetworkEventControls[1];                                                                                                                                                           \
  extern void emberAfPluginEndDeviceSupportPollingNetworkEventHandler(void);                                                                                                                                                               \
  void emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventHandler, 0); }                   \
  EmberEventControl emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[1];                                                                                                                                                     \
  extern void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler(void);                                                                                                                                                         \
  void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler, 0); } \
  EmberEventControl emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[1];                                                                                                                                                       \
  extern void emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler(void);                                                                                                                                                           \
  void emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler, 0); }       \
  static void clusterTickWrapper(EmberEventControl * control, EmberAfTickFunction callback, uint8_t endpoint)                                                                                                                              \
  {                                                                                                                                                                                                                                        \
    emberAfPushEndpointNetworkIndex(endpoint);                                                                                                                                                                                             \
    emberEventControlSetInactive(*control);                                                                                                                                                                                                \
    (*callback)(endpoint);                                                                                                                                                                                                                 \
    emberAfPopNetworkIndex();                                                                                                                                                                                                              \
  }                                                                                                                                                                                                                                        \
  void emberAfSimpleMeteringClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfSimpleMeteringClusterServerTickCallbackControl1, emberAfSimpleMeteringClusterServerTickCallback, 1); }                            \
  void emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallback, 1); }                      \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                         \
  { &emberAfSimpleMeteringClusterServerTickCallbackControl1, emberAfSimpleMeteringClusterServerTickCallbackWrapperFunction1 },            \
  { &emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1 },        \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler },                                          \
  { &emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl, emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler },    \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler },                                                \
  { &emberAfPluginSimpleMeteringServerSamplingEventControl, emberAfPluginSimpleMeteringServerSamplingEventHandler },                      \
  { &emberAfPluginSimpleMeteringServerSupplyEventControl, emberAfPluginSimpleMeteringServerSupplyEventHandler },                          \
  { &sleepyMeterEventControl, sleepyMeterEvent },                                                                                         \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 },                   \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 },             \
  { &emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0 }, \
  { &emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0 },     \


#define EMBER_AF_GENERATED_EVENT_STRINGS            \
  "Simple Metering Cluster Server EP 1",            \
  "Key Establishment Cluster Server EP 1",          \
  "Form and Join Library Plugin Cleanup",           \
  "Key Establishment Plugin ApsDuplicateDetection", \
  "Network Find Plugin Tick",                       \
  "Simple Metering Server Plugin Sampling",         \
  "Simple Metering Server Plugin Supply",           \
  "Sleepy meter event control",                     \
  "End Device Support Plugin Move NWK 0",           \
  "End Device Support Plugin Polling NWK 0",        \
  "Partner Link Key Exchange Plugin Timeout NWK 0", \
  "Smart Energy Registration Plugin Tick NWK 0",    \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 2

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x702, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfSimpleMeteringClusterServerTickCallbackControl1 }, \
  { 0x1, 0x800, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfKeyEstablishmentClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
