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
#define EMBER_AF_GENERATED_EVENT_CODE                                                                                                                                                                                                                                    \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1;                                                                                                                                                                                                    \
  EmberEventControl emberAfOtaBootloadClusterClientTickCallbackControl1;                                                                                                                                                                                                 \
  EmberEventControl emberAfSlWwahClusterServerTickCallbackControl1;                                                                                                                                                                                                      \
  extern EmberEventControl commissioningEventControl;                                                                                                                                                                                                                    \
  extern EmberEventControl emberAfPluginCriticalMessageQueueRetryEventControl;                                                                                                                                                                                           \
  extern EmberEventControl emberAfPluginDoorLockServerLockoutEventControl;                                                                                                                                                                                               \
  extern EmberEventControl emberAfPluginDoorLockServerRelockEventControl;                                                                                                                                                                                                \
  extern EmberEventControl emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventControl;                                                                                                                                                                            \
  extern EmberEventControl emberAfPluginIdentifyFeedbackProvideFeedbackEventControl;                                                                                                                                                                                     \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl;                                                                                                                                                                                       \
  extern EmberEventControl emberAfPluginOtaStorageSimpleEepromPageEraseEventControl;                                                                                                                                                                                     \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl;                                                                                                                                                                                                    \
  extern EmberEventControl emberAfPluginSimpleClockUpdateEventControl;                                                                                                                                                                                                   \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl;                                                                                                                                                                                 \
  extern EmberEventControl emberAfPluginWwahConnectivityManagerBadParentRecoveryEventControl;                                                                                                                                                                            \
  extern EmberEventControl emberAfPluginWwahConnectivityManagerFastRejoinEventControl;                                                                                                                                                                                   \
  extern EmberEventControl emberAfPluginWwahConnectivityManagerLongUptimeEventControl;                                                                                                                                                                                   \
  extern EmberEventControl emberAfPluginWwahConnectivityManagerStateMachineEventControl;                                                                                                                                                                                 \
  extern EmberEventControl emberAfPluginWwahConnectivityManagerStateTransitionEventControl;                                                                                                                                                                              \
  extern EmberEventControl findingAndBindingEventControl;                                                                                                                                                                                                                \
  extern EmberEventControl ledEventControl;                                                                                                                                                                                                                              \
  extern void commissioningEventHandler(void);                                                                                                                                                                                                                           \
  extern void emberAfPluginCriticalMessageQueueRetryEventHandler(void);                                                                                                                                                                                                  \
  extern void emberAfPluginDoorLockServerLockoutEventHandler(void);                                                                                                                                                                                                      \
  extern void emberAfPluginDoorLockServerRelockEventHandler(void);                                                                                                                                                                                                       \
  extern void emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventHandler(void);                                                                                                                                                                                   \
  extern void emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler(void);                                                                                                                                                                                            \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void);                                                                                                                                                                                              \
  extern void emberAfPluginOtaStorageSimpleEepromPageEraseEventHandler(void);                                                                                                                                                                                            \
  extern void emberAfPluginScanDispatchScanEventHandler(void);                                                                                                                                                                                                           \
  extern void emberAfPluginSimpleClockUpdateEventHandler(void);                                                                                                                                                                                                          \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void);                                                                                                                                                                                        \
  extern void emberAfPluginWwahConnectivityManagerBadParentRecoveryEventHandler(void);                                                                                                                                                                                   \
  extern void emberAfPluginWwahConnectivityManagerFastRejoinEventHandler(void);                                                                                                                                                                                          \
  extern void emberAfPluginWwahConnectivityManagerLongUptimeEventHandler(void);                                                                                                                                                                                          \
  extern void emberAfPluginWwahConnectivityManagerStateMachineEventHandler(void);                                                                                                                                                                                        \
  extern void emberAfPluginWwahConnectivityManagerStateTransitionEventHandler(void);                                                                                                                                                                                     \
  extern void findingAndBindingEventHandler(void);                                                                                                                                                                                                                       \
  extern void ledEventHandler(void);                                                                                                                                                                                                                                     \
  static void networkEventWrapper(EmberEventControl * control, EmberAfNetworkEventHandler handler, uint8_t networkIndex)                                                                                                                                                 \
  {                                                                                                                                                                                                                                                                      \
    emberAfPushNetworkIndex(networkIndex);                                                                                                                                                                                                                               \
    emberEventControlSetInactive(*control);                                                                                                                                                                                                                              \
    (*handler)();                                                                                                                                                                                                                                                        \
    emberAfPopNetworkIndex();                                                                                                                                                                                                                                            \
  }                                                                                                                                                                                                                                                                      \
  EmberEventControl emberAfPluginEndDeviceSupportMoveNetworkEventControls[1];                                                                                                                                                                                            \
  extern void emberAfPluginEndDeviceSupportMoveNetworkEventHandler(void);                                                                                                                                                                                                \
  void emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventHandler, 0); }                                                          \
  EmberEventControl emberAfPluginEndDeviceSupportPollingNetworkEventControls[1];                                                                                                                                                                                         \
  extern void emberAfPluginEndDeviceSupportPollingNetworkEventHandler(void);                                                                                                                                                                                             \
  void emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventHandler, 0); }                                                 \
  EmberEventControl emberAfPluginTrustCenterKeepaliveTickNetworkEventControls[1];                                                                                                                                                                                        \
  extern void emberAfPluginTrustCenterKeepaliveTickNetworkEventHandler(void);                                                                                                                                                                                            \
  void emberAfPluginTrustCenterKeepaliveTickNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginTrustCenterKeepaliveTickNetworkEventControls[0], emberAfPluginTrustCenterKeepaliveTickNetworkEventHandler, 0); }                                              \
  EmberEventControl emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventControls[1];                                                                                                                                                                         \
  extern void emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventHandler(void);                                                                                                                                                                             \
  void emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventControls[0], emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventHandler, 0); } \
  EmberEventControl emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventControls[1];                                                                                                                                                                            \
  extern void emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventHandler(void);                                                                                                                                                                                \
  void emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventControls[0], emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventHandler, 0); }          \
  static void clusterTickWrapper(EmberEventControl * control, EmberAfTickFunction callback, uint8_t endpoint)                                                                                                                                                            \
  {                                                                                                                                                                                                                                                                      \
    emberAfPushEndpointNetworkIndex(endpoint);                                                                                                                                                                                                                           \
    emberEventControlSetInactive(*control);                                                                                                                                                                                                                              \
    (*callback)(endpoint);                                                                                                                                                                                                                                               \
    emberAfPopNetworkIndex();                                                                                                                                                                                                                                            \
  }                                                                                                                                                                                                                                                                      \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); }                                                                            \
  void emberAfOtaBootloadClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfOtaBootloadClusterClientTickCallbackControl1, emberAfOtaBootloadClusterClientTickCallback, 1); }                                                                   \
  void emberAfSlWwahClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfSlWwahClusterServerTickCallbackControl1, emberAfSlWwahClusterServerTickCallback, 1); }                                                                                  \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                                             \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 },                                            \
  { &emberAfOtaBootloadClusterClientTickCallbackControl1, emberAfOtaBootloadClusterClientTickCallbackWrapperFunction1 },                                      \
  { &emberAfSlWwahClusterServerTickCallbackControl1, emberAfSlWwahClusterServerTickCallbackWrapperFunction1 },                                                \
  { &commissioningEventControl, commissioningEventHandler },                                                                                                  \
  { &emberAfPluginCriticalMessageQueueRetryEventControl, emberAfPluginCriticalMessageQueueRetryEventHandler },                                                \
  { &emberAfPluginDoorLockServerLockoutEventControl, emberAfPluginDoorLockServerLockoutEventHandler },                                                        \
  { &emberAfPluginDoorLockServerRelockEventControl, emberAfPluginDoorLockServerRelockEventHandler },                                                          \
  { &emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventControl, emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventHandler },                  \
  { &emberAfPluginIdentifyFeedbackProvideFeedbackEventControl, emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler },                                    \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler },                                        \
  { &emberAfPluginOtaStorageSimpleEepromPageEraseEventControl, emberAfPluginOtaStorageSimpleEepromPageEraseEventHandler },                                    \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler },                                                                  \
  { &emberAfPluginSimpleClockUpdateEventControl, emberAfPluginSimpleClockUpdateEventHandler },                                                                \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler },                            \
  { &emberAfPluginWwahConnectivityManagerBadParentRecoveryEventControl, emberAfPluginWwahConnectivityManagerBadParentRecoveryEventHandler },                  \
  { &emberAfPluginWwahConnectivityManagerFastRejoinEventControl, emberAfPluginWwahConnectivityManagerFastRejoinEventHandler },                                \
  { &emberAfPluginWwahConnectivityManagerLongUptimeEventControl, emberAfPluginWwahConnectivityManagerLongUptimeEventHandler },                                \
  { &emberAfPluginWwahConnectivityManagerStateMachineEventControl, emberAfPluginWwahConnectivityManagerStateMachineEventHandler },                            \
  { &emberAfPluginWwahConnectivityManagerStateTransitionEventControl, emberAfPluginWwahConnectivityManagerStateTransitionEventHandler },                      \
  { &findingAndBindingEventControl, findingAndBindingEventHandler },                                                                                          \
  { &ledEventControl, ledEventHandler },                                                                                                                      \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 },                                       \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 },                                 \
  { &emberAfPluginTrustCenterKeepaliveTickNetworkEventControls[0], emberAfPluginTrustCenterKeepaliveTickNetworkEventWrapper0 },                               \
  { &emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventControls[0], emberAfPluginWwahEndDeviceExtensionUnenforceFastPollNetworkEventWrapper0 }, \
  { &emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventControls[0], emberAfPluginWwahServerSilabsTriggerSurveyBeaconsNetworkEventWrapper0 },       \


#define EMBER_AF_GENERATED_EVENT_STRINGS                                        \
  "Identify Cluster Server EP 1",                                               \
  "Over the Air Bootloading Cluster Client EP 1",                               \
  "SL Works With All Hubs Cluster Server EP 1",                                 \
  "Commissioning event control",                                                \
  "Critical Message Queue Plugin Retry",                                        \
  "Door Lock Server Cluster Plugin Lockout",                                    \
  "Door Lock Server Cluster Plugin Relock",                                     \
  "Find and Bind Initiator Plugin CheckTargetResponses",                        \
  "Identify Feedback Plugin ProvideFeedback",                                   \
  "Network Steering Plugin FinishSteering",                                     \
  "OTA Simple Storage EEPROM Driver Plugin PageErase",                          \
  "Scan Dispatch Plugin Scan",                                                  \
  "Simple Clock Plugin Update",                                                 \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate",                             \
  "SL Works With All Hubs Connectivity Manager Plugin BadParentRecovery",       \
  "SL Works With All Hubs Connectivity Manager Plugin FastRejoin",              \
  "SL Works With All Hubs Connectivity Manager Plugin LongUptime",              \
  "SL Works With All Hubs Connectivity Manager Plugin StateMachine",            \
  "SL Works With All Hubs Connectivity Manager Plugin StateTransition",         \
  "Finding and binding event control",                                          \
  "Led event control",                                                          \
  "End Device Support Plugin Move NWK 0",                                       \
  "End Device Support Plugin Polling NWK 0",                                    \
  "Trust Center Keepalive Plugin Tick NWK 0",                                   \
  "SL Works With All Hubs End Device Extension Plugin UnenforceFastPoll NWK 0", \
  "SL Works With All Hubs Server Cluster Plugin TriggerSurveyBeacons NWK 0",    \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 3

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1 }, \
  { 0x1, 0x19, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfOtaBootloadClusterClientTickCallbackControl1 },                                     \
  { 0x1, 0xfc57, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfSlWwahClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
