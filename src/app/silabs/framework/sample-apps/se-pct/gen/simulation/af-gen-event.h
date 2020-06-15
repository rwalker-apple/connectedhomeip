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
  EmberEventControl emberAfDemandResponseLoadControlClusterClientTickCallbackControl1;                                                                                                                                                           \
  EmberEventControl emberAfKeyEstablishmentClusterServerTickCallbackControl1;                                                                                                                                                                    \
  extern EmberEventControl emberAfPluginButtonJoiningButton0EventControl;                                                                                                                                                                        \
  extern EmberEventControl emberAfPluginButtonJoiningButton1EventControl;                                                                                                                                                                        \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl;                                                                                                                                                                          \
  extern EmberEventControl emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl;                                                                                                                                                       \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl;                                                                                                                                                                             \
  extern EmberEventControl emberAfPluginSimpleClockUpdateEventControl;                                                                                                                                                                           \
  extern void emberAfPluginButtonJoiningButton0EventHandler(void);                                                                                                                                                                               \
  extern void emberAfPluginButtonJoiningButton1EventHandler(void);                                                                                                                                                                               \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void);                                                                                                                                                                                 \
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
  void emberAfDemandResponseLoadControlClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfDemandResponseLoadControlClusterClientTickCallbackControl1, emberAfDemandResponseLoadControlClusterClientTickCallback, 1); } \
  void emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallback, 1); }                            \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                                    \
  { &emberAfDemandResponseLoadControlClusterClientTickCallbackControl1, emberAfDemandResponseLoadControlClusterClientTickCallbackWrapperFunction1 }, \
  { &emberAfKeyEstablishmentClusterServerTickCallbackControl1, emberAfKeyEstablishmentClusterServerTickCallbackWrapperFunction1 },                   \
  { &emberAfPluginButtonJoiningButton0EventControl, emberAfPluginButtonJoiningButton0EventHandler },                                                 \
  { &emberAfPluginButtonJoiningButton1EventControl, emberAfPluginButtonJoiningButton1EventHandler },                                                 \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler },                                                     \
  { &emberAfPluginKeyEstablishmentApsDuplicateDetectionEventControl, emberAfPluginKeyEstablishmentApsDuplicateDetectionEventHandler },               \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler },                                                           \
  { &emberAfPluginSimpleClockUpdateEventControl, emberAfPluginSimpleClockUpdateEventHandler },                                                       \
  { &emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventControls[0], emberAfPluginPartnerLinkKeyExchangeTimeoutNetworkEventWrapper0 },            \
  { &emberAfPluginSmartEnergyRegistrationTickNetworkEventControls[0], emberAfPluginSmartEnergyRegistrationTickNetworkEventWrapper0 },                \


#define EMBER_AF_GENERATED_EVENT_STRINGS                  \
  "Demand Response and Load Control Cluster Client EP 1", \
  "Key Establishment Cluster Server EP 1",                \
  "Button Form/Join Code Plugin Button0",                 \
  "Button Form/Join Code Plugin Button1",                 \
  "Form and Join Library Plugin Cleanup",                 \
  "Key Establishment Plugin ApsDuplicateDetection",       \
  "Network Find Plugin Tick",                             \
  "Simple Clock Plugin Update",                           \
  "Partner Link Key Exchange Plugin Timeout NWK 0",       \
  "Smart Energy Registration Plugin Tick NWK 0",          \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 2

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x701, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfDemandResponseLoadControlClusterClientTickCallbackControl1 }, \
  { 0x1, 0x800, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfKeyEstablishmentClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
