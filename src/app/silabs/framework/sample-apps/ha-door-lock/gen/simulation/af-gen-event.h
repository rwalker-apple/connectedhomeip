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
#define EMBER_AF_GENERATED_EVENT_CODE                                                                                                                                                                                         \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1;                                                                                                                                                         \
  EmberEventControl emberAfPollControlClusterServerTickCallbackControl1;                                                                                                                                                      \
  EmberEventControl emberAfIasZoneClusterServerTickCallbackControl1;                                                                                                                                                          \
  extern EmberEventControl emberAfPluginDoorLockServerLockoutEventControl;                                                                                                                                                    \
  extern EmberEventControl emberAfPluginDoorLockServerRelockEventControl;                                                                                                                                                     \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl;                                                                                                                                                       \
  extern EmberEventControl emberAfPluginIasZoneServerManageQueueEventControl;                                                                                                                                                 \
  extern EmberEventControl emberAfPluginIdentifyFeedbackProvideFeedbackEventControl;                                                                                                                                          \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl;                                                                                                                                                          \
  extern void emberAfPluginDoorLockServerLockoutEventHandler(void);                                                                                                                                                           \
  extern void emberAfPluginDoorLockServerRelockEventHandler(void);                                                                                                                                                            \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void);                                                                                                                                                              \
  extern void emberAfPluginIasZoneServerManageQueueEventHandler(void);                                                                                                                                                        \
  extern void emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler(void);                                                                                                                                                 \
  extern void emberAfPluginNetworkFindTickEventHandler(void);                                                                                                                                                                 \
  static void networkEventWrapper(EmberEventControl * control, EmberAfNetworkEventHandler handler, uint8_t networkIndex)                                                                                                      \
  {                                                                                                                                                                                                                           \
    emberAfPushNetworkIndex(networkIndex);                                                                                                                                                                                    \
    emberEventControlSetInactive(*control);                                                                                                                                                                                   \
    (*handler)();                                                                                                                                                                                                             \
    emberAfPopNetworkIndex();                                                                                                                                                                                                 \
  }                                                                                                                                                                                                                           \
  EmberEventControl emberAfPluginEndDeviceSupportMoveNetworkEventControls[1];                                                                                                                                                 \
  extern void emberAfPluginEndDeviceSupportMoveNetworkEventHandler(void);                                                                                                                                                     \
  void emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventHandler, 0); }               \
  EmberEventControl emberAfPluginEndDeviceSupportPollingNetworkEventControls[1];                                                                                                                                              \
  extern void emberAfPluginEndDeviceSupportPollingNetworkEventHandler(void);                                                                                                                                                  \
  void emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0(void) { networkEventWrapper(&emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventHandler, 0); }      \
  static void clusterTickWrapper(EmberEventControl * control, EmberAfTickFunction callback, uint8_t endpoint)                                                                                                                 \
  {                                                                                                                                                                                                                           \
    emberAfPushEndpointNetworkIndex(endpoint);                                                                                                                                                                                \
    emberEventControlSetInactive(*control);                                                                                                                                                                                   \
    (*callback)(endpoint);                                                                                                                                                                                                    \
    emberAfPopNetworkIndex();                                                                                                                                                                                                 \
  }                                                                                                                                                                                                                           \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallback, 1); }                                 \
  void emberAfPollControlClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfPollControlClusterServerTickCallbackControl1, emberAfPollControlClusterServerTickCallback, 1); }                        \
  void emberAfIasZoneClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIasZoneClusterServerTickCallbackControl1, emberAfIasZoneClusterServerTickCallback, 1); }                                    \
  EmberEventControl emberAfPluginPollControlServerCheckInEndpointEventControls[1];                                                                                                                                            \
  extern void emberAfPluginPollControlServerCheckInEndpointEventHandler(uint8_t endpoint);                                                                                                                                    \
  void emberAfPluginPollControlServerCheckInEndpointEventWrapper1(void) { clusterTickWrapper(&emberAfPluginPollControlServerCheckInEndpointEventControls[0], emberAfPluginPollControlServerCheckInEndpointEventHandler, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                 \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 },                \
  { &emberAfPollControlClusterServerTickCallbackControl1, emberAfPollControlClusterServerTickCallbackWrapperFunction1 },          \
  { &emberAfIasZoneClusterServerTickCallbackControl1, emberAfIasZoneClusterServerTickCallbackWrapperFunction1 },                  \
  { &emberAfPluginDoorLockServerLockoutEventControl, emberAfPluginDoorLockServerLockoutEventHandler },                            \
  { &emberAfPluginDoorLockServerRelockEventControl, emberAfPluginDoorLockServerRelockEventHandler },                              \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler },                                  \
  { &emberAfPluginIasZoneServerManageQueueEventControl, emberAfPluginIasZoneServerManageQueueEventHandler },                      \
  { &emberAfPluginIdentifyFeedbackProvideFeedbackEventControl, emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler },        \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler },                                        \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 },           \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 },     \
  { &emberAfPluginPollControlServerCheckInEndpointEventControls[0], emberAfPluginPollControlServerCheckInEndpointEventWrapper1 }, \


#define EMBER_AF_GENERATED_EVENT_STRINGS             \
  "Identify Cluster Server EP 1",                    \
  "Poll Control Cluster Server EP 1",                \
  "IAS Zone Cluster Server EP 1",                    \
  "Door Lock Server Cluster Plugin Lockout",         \
  "Door Lock Server Cluster Plugin Relock",          \
  "Form and Join Library Plugin Cleanup",            \
  "IAS Zone Server Plugin ManageQueue",              \
  "Identify Feedback Plugin ProvideFeedback",        \
  "Network Find Plugin Tick",                        \
  "End Device Support Plugin Move NWK 0",            \
  "End Device Support Plugin Polling NWK 0",         \
  "Poll Control Server Cluster Plugin CheckIn EP 1", \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 3

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1 }, \
  { 0x1, 0x20, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfPollControlClusterServerTickCallbackControl1 },                                    \
  { 0x1, 0x500, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIasZoneClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
