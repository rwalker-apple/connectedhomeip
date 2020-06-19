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
#ifndef __AF_GEN_EVENT__
#define __AF_GEN_EVENT__

// Code used to configure the cluster event mechanism
#define EMBER_AF_GENERATED_EVENT_CODE                                                                                                                                                                     \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1;                                                                                                                                     \
  EmberEventControl emberAfLevelControlClusterServerTickCallbackControl1;                                                                                                                                 \
  EmberEventControl emberAfTimeClusterServerTickCallbackControl1;                                                                                                                                         \
  EmberEventControl emberAfOtaBootloadClusterServerTickCallbackControl1;                                                                                                                                  \
  extern EmberEventControl emberAfPluginColorControlServerHueSatTransitionEventControl;                                                                                                                   \
  extern EmberEventControl emberAfPluginColorControlServerTempTransitionEventControl;                                                                                                                     \
  extern EmberEventControl emberAfPluginColorControlServerXyTransitionEventControl;                                                                                                                       \
  extern EmberEventControl emberAfPluginDeviceQueryServiceMyEventControl;                                                                                                                                 \
  extern EmberEventControl emberAfPluginEzmodeCommissioningStateEventControl;                                                                                                                             \
  extern EmberEventControl emberAfPluginGreenPowerClientChannelEventControl;                                                                                                                              \
  extern EmberEventControl emberAfPluginGreenPowerClientExitCommissioningEventControl;                                                                                                                    \
  extern EmberEventControl emberAfPluginIasZoneClientStateMachineEventControl;                                                                                                                            \
  extern EmberEventControl emberAfPluginIdentifyFeedbackProvideFeedbackEventControl;                                                                                                                      \
  extern EmberEventControl emberAfPluginNetworkCreatorSecurityOpenNetworkEventControl;                                                                                                                    \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl;                                                                                                                        \
  extern EmberEventControl emberAfPluginReportingTickEventControl;                                                                                                                                        \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl;                                                                                                                                     \
  extern EmberEventControl emberAfPluginTestHarnessFlashPageHashEventControl;                                                                                                                             \
  extern EmberEventControl emberAfPluginTestHarnessReadWriteAttributesTimeoutEventControl;                                                                                                                \
  extern EmberEventControl emberAfPluginTrustCenterNwkKeyUpdateBroadcastMyEventControl;                                                                                                                   \
  extern EmberEventControl emberAfPluginTrustCenterNwkKeyUpdatePeriodicMyEventControl;                                                                                                                    \
  extern EmberEventControl emberAfPluginTrustCenterNwkKeyUpdateUnicastMyEventControl;                                                                                                                     \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl;                                                                                                                  \
  extern void emberAfPluginColorControlServerHueSatTransitionEventHandler(void);                                                                                                                          \
  extern void emberAfPluginColorControlServerTempTransitionEventHandler(void);                                                                                                                            \
  extern void emberAfPluginColorControlServerXyTransitionEventHandler(void);                                                                                                                              \
  extern void emberAfPluginDeviceQueryServiceMyEventHandler(void);                                                                                                                                        \
  extern void emberAfPluginEzmodeCommissioningStateEventHandler(void);                                                                                                                                    \
  extern void emberAfPluginGreenPowerClientChannelEventHandler(void);                                                                                                                                     \
  extern void emberAfPluginGreenPowerClientExitCommissioningEventHandler(void);                                                                                                                           \
  extern void emberAfPluginIasZoneClientStateMachineEventHandler(void);                                                                                                                                   \
  extern void emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler(void);                                                                                                                             \
  extern void emberAfPluginNetworkCreatorSecurityOpenNetworkEventHandler(void);                                                                                                                           \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void);                                                                                                                               \
  extern void emberAfPluginReportingTickEventHandler(void);                                                                                                                                               \
  extern void emberAfPluginScanDispatchScanEventHandler(void);                                                                                                                                            \
  extern void emberAfPluginTestHarnessFlashPageHashEventHandler(void);                                                                                                                                    \
  extern void emberAfPluginTestHarnessReadWriteAttributesTimeoutEventHandler(void);                                                                                                                       \
  extern void emberAfPluginTrustCenterNwkKeyUpdateBroadcastMyEventHandler(void);                                                                                                                          \
  extern void emberAfPluginTrustCenterNwkKeyUpdatePeriodicMyEventHandler(void);                                                                                                                           \
  extern void emberAfPluginTrustCenterNwkKeyUpdateUnicastMyEventHandler(void);                                                                                                                            \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void);                                                                                                                         \
  static void clusterTickWrapper(EmberEventControl * control, EmberAfTickFunction callback, uint8_t endpoint)                                                                                             \
  {                                                                                                                                                                                                       \
    emberAfPushEndpointNetworkIndex(endpoint);                                                                                                                                                            \
    emberEventControlSetInactive(*control);                                                                                                                                                               \
    (*callback)(endpoint);                                                                                                                                                                                \
    emberAfPopNetworkIndex();                                                                                                                                                                             \
  }                                                                                                                                                                                                       \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); }             \
  void emberAfLevelControlClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfLevelControlClusterServerTickCallbackControl1, emberAfLevelControlClusterServerTickCallback, 1); } \
  void emberAfTimeClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfTimeClusterServerTickCallbackControl1, emberAfTimeClusterServerTickCallback, 1); }                         \
  void emberAfOtaBootloadClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfOtaBootloadClusterServerTickCallbackControl1, emberAfOtaBootloadClusterServerTickCallback, 1); }    \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                      \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 },                     \
  { &emberAfLevelControlClusterServerTickCallbackControl1, emberAfLevelControlClusterServerTickCallbackWrapperFunction1 },             \
  { &emberAfTimeClusterServerTickCallbackControl1, emberAfTimeClusterServerTickCallbackWrapperFunction1 },                             \
  { &emberAfOtaBootloadClusterServerTickCallbackControl1, emberAfOtaBootloadClusterServerTickCallbackWrapperFunction1 },               \
  { &emberAfPluginColorControlServerHueSatTransitionEventControl, emberAfPluginColorControlServerHueSatTransitionEventHandler },       \
  { &emberAfPluginColorControlServerTempTransitionEventControl, emberAfPluginColorControlServerTempTransitionEventHandler },           \
  { &emberAfPluginColorControlServerXyTransitionEventControl, emberAfPluginColorControlServerXyTransitionEventHandler },               \
  { &emberAfPluginDeviceQueryServiceMyEventControl, emberAfPluginDeviceQueryServiceMyEventHandler },                                   \
  { &emberAfPluginEzmodeCommissioningStateEventControl, emberAfPluginEzmodeCommissioningStateEventHandler },                           \
  { &emberAfPluginGreenPowerClientChannelEventControl, emberAfPluginGreenPowerClientChannelEventHandler },                             \
  { &emberAfPluginGreenPowerClientExitCommissioningEventControl, emberAfPluginGreenPowerClientExitCommissioningEventHandler },         \
  { &emberAfPluginIasZoneClientStateMachineEventControl, emberAfPluginIasZoneClientStateMachineEventHandler },                         \
  { &emberAfPluginIdentifyFeedbackProvideFeedbackEventControl, emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler },             \
  { &emberAfPluginNetworkCreatorSecurityOpenNetworkEventControl, emberAfPluginNetworkCreatorSecurityOpenNetworkEventHandler },         \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler },                 \
  { &emberAfPluginReportingTickEventControl, emberAfPluginReportingTickEventHandler },                                                 \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler },                                           \
  { &emberAfPluginTestHarnessFlashPageHashEventControl, emberAfPluginTestHarnessFlashPageHashEventHandler },                           \
  { &emberAfPluginTestHarnessReadWriteAttributesTimeoutEventControl, emberAfPluginTestHarnessReadWriteAttributesTimeoutEventHandler }, \
  { &emberAfPluginTrustCenterNwkKeyUpdateBroadcastMyEventControl, emberAfPluginTrustCenterNwkKeyUpdateBroadcastMyEventHandler },       \
  { &emberAfPluginTrustCenterNwkKeyUpdatePeriodicMyEventControl, emberAfPluginTrustCenterNwkKeyUpdatePeriodicMyEventHandler },         \
  { &emberAfPluginTrustCenterNwkKeyUpdateUnicastMyEventControl, emberAfPluginTrustCenterNwkKeyUpdateUnicastMyEventHandler },           \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler },     \


#define EMBER_AF_GENERATED_EVENT_STRINGS                  \
  "Identify Cluster Server EP 1",                         \
  "Level Control Cluster Server EP 1",                    \
  "Time Cluster Server EP 1",                             \
  "Over the Air Bootloading Cluster Server EP 1",         \
  "Color Control Cluster Server Plugin HueSatTransition", \
  "Color Control Cluster Server Plugin TempTransition",   \
  "Color Control Cluster Server Plugin XyTransition",     \
  "Device Query Service Plugin My",                       \
  "EZ-Mode Commissioning Plugin State",                   \
  "Green Power Client Plugin Channel",                    \
  "Green Power Client Plugin ExitCommissioning",          \
  "IAS Zone Client Plugin StateMachine",                  \
  "Identify Feedback Plugin ProvideFeedback",             \
  "Network Creator Security Plugin OpenNetwork",          \
  "Network Steering Plugin FinishSteering",               \
  "Reporting Plugin Tick",                                \
  "Scan Dispatch Plugin Scan",                            \
  "Test Harness Plugin FlashPageHash",                    \
  "Test Harness Plugin ReadWriteAttributesTimeout",       \
  "Trust Center Network Key Update Broadcast Plugin My",  \
  "Trust Center Network Key Update Periodic Plugin My",   \
  "Trust Center Network Key Update Unicast Plugin My",    \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate",       \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 4

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1 }, \
  { 0x1, 0x8, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfLevelControlClusterServerTickCallbackControl1 },                                    \
  { 0x1, 0xa, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfTimeClusterServerTickCallbackControl1 },                                            \
  { 0x1, 0x19, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfOtaBootloadClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
