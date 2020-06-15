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
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl6;                                                                                                                                     \
  EmberEventControl emberAfLevelControlClusterServerTickCallbackControl6;                                                                                                                                 \
  EmberEventControl emberAfTimeClusterServerTickCallbackControl12;                                                                                                                                        \
  extern EmberEventControl emberAfPluginButtonJoiningButton0EventControl;                                                                                                                                 \
  extern EmberEventControl emberAfPluginButtonJoiningButton1EventControl;                                                                                                                                 \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl;                                                                                                                                   \
  extern EmberEventControl emberAfPluginIdentifyFeedbackProvideFeedbackEventControl;                                                                                                                      \
  extern EmberEventControl emberAfPluginNetworkFindTickEventControl;                                                                                                                                      \
  extern EmberEventControl emberAfPluginReportingTickEventControl;                                                                                                                                        \
  extern void emberAfPluginButtonJoiningButton0EventHandler(void);                                                                                                                                        \
  extern void emberAfPluginButtonJoiningButton1EventHandler(void);                                                                                                                                        \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void);                                                                                                                                          \
  extern void emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler(void);                                                                                                                             \
  extern void emberAfPluginNetworkFindTickEventHandler(void);                                                                                                                                             \
  extern void emberAfPluginReportingTickEventHandler(void);                                                                                                                                               \
  static void clusterTickWrapper(EmberEventControl * control, EmberAfTickFunction callback, uint8_t endpoint)                                                                                             \
  {                                                                                                                                                                                                       \
    emberAfPushEndpointNetworkIndex(endpoint);                                                                                                                                                            \
    emberEventControlSetInactive(*control);                                                                                                                                                               \
    (*callback)(endpoint);                                                                                                                                                                                \
    emberAfPopNetworkIndex();                                                                                                                                                                             \
  }                                                                                                                                                                                                       \
  void emberAfIdentifyClusterServerTickCallbackWrapperFunction6(void) { clusterTickWrapper(&emberAfIdentifyClusterServerTickCallbackControl6, emberAfIdentifyClusterServerTickCallback, 6); }             \
  void emberAfLevelControlClusterServerTickCallbackWrapperFunction6(void) { clusterTickWrapper(&emberAfLevelControlClusterServerTickCallbackControl6, emberAfLevelControlClusterServerTickCallback, 6); } \
  void emberAfTimeClusterServerTickCallbackWrapperFunction12(void) { clusterTickWrapper(&emberAfTimeClusterServerTickCallbackControl12, emberAfTimeClusterServerTickCallback, 12); }                      \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                          \
  { &emberAfIdentifyClusterServerTickCallbackControl6, emberAfIdentifyClusterServerTickCallbackWrapperFunction6 },         \
  { &emberAfLevelControlClusterServerTickCallbackControl6, emberAfLevelControlClusterServerTickCallbackWrapperFunction6 }, \
  { &emberAfTimeClusterServerTickCallbackControl12, emberAfTimeClusterServerTickCallbackWrapperFunction12 },               \
  { &emberAfPluginButtonJoiningButton0EventControl, emberAfPluginButtonJoiningButton0EventHandler },                       \
  { &emberAfPluginButtonJoiningButton1EventControl, emberAfPluginButtonJoiningButton1EventHandler },                       \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler },                           \
  { &emberAfPluginIdentifyFeedbackProvideFeedbackEventControl, emberAfPluginIdentifyFeedbackProvideFeedbackEventHandler }, \
  { &emberAfPluginNetworkFindTickEventControl, emberAfPluginNetworkFindTickEventHandler },                                 \
  { &emberAfPluginReportingTickEventControl, emberAfPluginReportingTickEventHandler },                                     \


#define EMBER_AF_GENERATED_EVENT_STRINGS      \
  "Identify Cluster Server EP 6",             \
  "Level Control Cluster Server EP 6",        \
  "Time Cluster Server EP 12",                \
  "Button Form/Join Code Plugin Button0",     \
  "Button Form/Join Code Plugin Button1",     \
  "Form and Join Library Plugin Cleanup",     \
  "Identify Feedback Plugin ProvideFeedback", \
  "Network Find Plugin Tick",                 \
  "Reporting Plugin Tick",                    \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 3

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x6, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl6 }, \
  { 0x6, 0x8, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfLevelControlClusterServerTickCallbackControl6 },                                    \
  { 0xc, 0xa, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfTimeClusterServerTickCallbackControl12 }

#endif // __AF_GEN_EVENT__
