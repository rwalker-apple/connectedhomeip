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
#define EMBER_AF_GENERATED_EVENT_CODE                                                                                                                                                                                                            \
  EmberEventControl emberAfPriceClusterClientTickCallbackControl1;                                                                                                                                                                               \
  EmberEventControl emberAfDemandResponseLoadControlClusterClientTickCallbackControl1;                                                                                                                                                           \
  EmberEventControl emberAfMessagingClusterClientTickCallbackControl1;                                                                                                                                                                           \
  EmberEventControl emberAfKeyEstablishmentClusterServerTickCallbackControl1;                                                                                                                                                                    \
  extern EmberEventControl emberAfPluginButtonJoiningButton0EventControl;                                                                                                                                                                        \
  extern EmberEventControl emberAfPluginButtonJoiningButton1EventControl;                                                                                                                                                                        \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl;                                                                                                                                                                          \
  extern EmberEventControl emberAfPluginInterpanFragmentReceiveEventControl;                                                                                                                                                                     \
  extern EmberEventControl emberAfPluginInterpanFragmentTransmitEventControl;                                                                                                                                                                    \
  extern EmberEventControl emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl;                                                                                                                                                       \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl;                                                                                                                                                                             \
  extern EmberEventControl emberAfPluginSimpleClockUpdateEventControl;                                                                                                                                                                           \
  extern void emberAfPluginButtonJoiningButton0EventHandler(void);                                                                                                                                                                               \
  extern void emberAfPluginButtonJoiningButton1EventHandler(void);                                                                                                                                                                               \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void);                                                                                                                                                                                 \
  extern void emberAfPluginInterpanFragmentReceiveEventHandler(void);                                                                                                                                                                            \
  extern void emberAfPluginInterpanFragmentTransmitEventHandler(void);                                                                                                                                                                           \
  extern void emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler(void);                                                                                                                                                              \
  extern void emberAfPluginNetworkFindTickEventHandler(void);                                                                                                                                                                                    \
  extern void emberAfPluginSimpleClockUpdateEventHandler(void);                                                                                                                                                                                  \
  static void networkEventWrapper(EmberEventControl * control, EmberAfNetworkEventHandler handler, uint8_t networkIndex)                                                                                                                         \
  {                                                                                                                                                                                                                                              \
    emberAfPushNetworkIndex(networkIndex);                                                                                                                                                                                                       \
    emberEventControlSetInactive(*control);                                                                                                                                                                                                      \
    (*handler)();                                                                                                                                                                                                                                \
    emberAfPopNetworkIndex();                                                                                                                                                                                                                    \
  }                                                                                                                                                                                                                                              \
  EmberEventControl emberAfPluginEndDeviceSupportMoveNetworkEventControls[1];                                                                                                                                                                    \
  extern void emberAfPluginEndDeviceSupportMoveNetworkEventHandler(void);                                                                                                                                                                        \
  void emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventHandler, 0); }                                  \
  EmberEventControl emberAfPluginEndDeviceSupportPollingNetworkEventControls[1];                                                                                                                                                                 \
  extern void emberAfPluginEndDeviceSupportPollingNetworkEventHandler(void);                                                                                                                                                                     \
  void emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventHandler, 0); }                         \
  EmberEventControl emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[1];                                                                                                                                                           \
  extern void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler(void);                                                                                                                                                               \
  void emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventHandler, 0); }       \
  EmberEventControl emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[1];                                                                                                                                                             \
  extern void emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler(void);                                                                                                                                                                 \
  void emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventHandler, 0); }             \
  static void clusterTickWrapper(EmberEventControl * control, EmberAfTickFunction callback, uint8_t endpoint)                                                                                                                                    \
  {                                                                                                                                                                                                                                              \
    emberAfPushEndpointNetworkIndex(endpoint);                                                                                                                                                                                                   \
    emberEventControlSetInactive(*control);                                                                                                                                                                                                      \
    (*callback)(endpoint);                                                                                                                                                                                                                       \
    emberAfPopNetworkIndex();                                                                                                                                                                                                                    \
  }                                                                                                                                                                                                                                              \
  void emberAfPriceClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfPriceClusterClientTickCallbackControl1, emberAfPriceClusterClientTickCallback, 1); }                                                             \
  void emberAfDemandResponseLoadControlClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfDemandResponseLoadControlClusterClientTickCallbackControl1, emberAfDemandResponseLoadControlClusterClientTickCallback, 1); } \
  void emberAfMessagingClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfMessagingClusterClientTickCallbackControl1, emberAfMessagingClusterClientTickCallback, 1); }                                                 \
  void emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallback, 1); }                            \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                                    \
  { &emberAfPriceClusterClientTickCallbackControl1, emberAfPriceClusterClientTickCallbackWrapperFunction1 },                                         \
  { &emberAfDemandResponseLoadControlClusterClientTickCallbackControl1, emberAfDemandResponseLoadControlClusterClientTickCallbackWrapperFunction1 }, \
  { &emberAfMessagingClusterClientTickCallbackControl1, emberAfMessagingClusterClientTickCallbackWrapperFunction1 },                                 \
  { &emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1 },                   \
  { &emberAfPluginButtonJoiningButton0EventControl, emberAfPluginButtonJoiningButton0EventHandler },                                                 \
  { &emberAfPluginButtonJoiningButton1EventControl, emberAfPluginButtonJoiningButton1EventHandler },                                                 \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler },                                                     \
  { &emberAfPluginInterpanFragmentReceiveEventControl, emberAfPluginInterpanFragmentReceiveEventHandler },                                           \
  { &emberAfPluginInterpanFragmentTransmitEventControl, emberAfPluginInterpanFragmentTransmitEventHandler },                                         \
  { &emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl, emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler },               \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler },                                                           \
  { &emberAfPluginSimpleClockUpdateEventControl, emberAfPluginSimpleClockUpdateEventHandler },                                                       \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 },                              \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 },                        \
  { &emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0 },            \
  { &emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0 },                \


#define EMBER_AF_GENERATED_EVENT_STRINGS                  \
  "Price Cluster Client EP 1",                            \
  "Demand Response and Load Control Cluster Client EP 1", \
  "Messaging Cluster Client EP 1",                        \
  "Key Establishment Cluster Server EP 1",                \
  "Button Form/Join Code Plugin Button0",                 \
  "Button Form/Join Code Plugin Button1",                 \
  "Form and Join Library Plugin Cleanup",                 \
  "Interpan Plugin FragmentReceive",                      \
  "Interpan Plugin FragmentTransmit",                     \
  "Key Establishment Plugin ApsDuplicateDetection",       \
  "Network Find Plugin Tick",                             \
  "Simple Clock Plugin Update",                           \
  "End Device Support Plugin Move NWK 0",                 \
  "End Device Support Plugin Polling NWK 0",              \
  "Partner Link Key Exchange Plugin Timeout NWK 0",       \
  "Smart Energy Registration Plugin Tick NWK 0",          \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 4

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x700, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfPriceClusterClientTickCallbackControl1 }, \
  { 0x1, 0x701, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfDemandResponseLoadControlClusterClientTickCallbackControl1 },                    \
  { 0x1, 0x703, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfMessagingClusterClientTickCallbackControl1 },                                    \
  { 0x1, 0x800, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfKeyEstablishmentClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
