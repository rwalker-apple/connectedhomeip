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
#define EMBER_AF_GENERATED_EVENT_CODE                                                    \
  extern EmberEventControl emberAfPluginFormAndJoinCleanupEventControl;                  \
  extern EmberEventControl emberAfPluginInterpanFragmentReceiveEventControl;             \
  extern EmberEventControl emberAfPluginInterpanFragmentTransmitEventControl;            \
  extern EmberEventControl emberAfPluginNetworkCreatorSecurityOpenNetworkEventControl;   \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl;       \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl;                    \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl; \
  extern EmberEventControl emberAfPluginZllCommissioningClientTouchLinkEventControl;     \
  extern EmberEventControl emberAfPluginZllCommissioningNetworkNetworkEventControl;      \
  extern EmberEventControl identifyEventControl;                                         \
  extern void emberAfPluginFormAndJoinCleanupEventHandler(void);                         \
  extern void emberAfPluginInterpanFragmentReceiveEventHandler(void);                    \
  extern void emberAfPluginInterpanFragmentTransmitEventHandler(void);                   \
  extern void emberAfPluginNetworkCreatorSecurityOpenNetworkEventHandler(void);          \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void);              \
  extern void emberAfPluginScanDispatchScanEventHandler(void);                           \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void);        \
  extern void emberAfPluginZllCommissioningClientTouchLinkEventHandler(void);            \
  extern void emberAfPluginZllCommissioningNetworkNetworkEventHandler(void);             \
  extern void identifyEventHandler(void);                                                \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                  \
  { &emberAfPluginFormAndJoinCleanupEventControl, emberAfPluginFormAndJoinCleanupEventHandler },                                   \
  { &emberAfPluginInterpanFragmentReceiveEventControl, emberAfPluginInterpanFragmentReceiveEventHandler },                         \
  { &emberAfPluginInterpanFragmentTransmitEventControl, emberAfPluginInterpanFragmentTransmitEventHandler },                       \
  { &emberAfPluginNetworkCreatorSecurityOpenNetworkEventControl, emberAfPluginNetworkCreatorSecurityOpenNetworkEventHandler },     \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler },             \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler },                                       \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler }, \
  { &emberAfPluginZllCommissioningClientTouchLinkEventControl, emberAfPluginZllCommissioningClientTouchLinkEventHandler },         \
  { &emberAfPluginZllCommissioningNetworkNetworkEventControl, emberAfPluginZllCommissioningNetworkNetworkEventHandler },           \
  { &identifyEventControl, identifyEventHandler },                                                                                 \


#define EMBER_AF_GENERATED_EVENT_STRINGS            \
  "Form and Join Library Plugin Cleanup",           \
  "Interpan Plugin FragmentReceive",                \
  "Interpan Plugin FragmentTransmit",               \
  "Network Creator Security Plugin OpenNetwork",    \
  "Network Steering Plugin FinishSteering",         \
  "Scan Dispatch Plugin Scan",                      \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate", \
  "ZLL Commissioning Client Plugin TouchLink",      \
  "ZLL Commissioning Network Plugin Network",       \
  "Identify event control",                         \


#endif // __AF_GEN_EVENT__
