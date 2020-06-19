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
#define EMBER_AF_GENERATED_EVENT_CODE                                                                                                                                                                                         \
  EmberEventControl emberAfIdentifyClusterServerTickCallbackControl1;                                                                                                                                                         \
  EmberEventControl emberAfOtaBootloadClusterClientTickCallbackControl1;                                                                                                                                                      \
  EmberEventControl emberAfPollControlClusterServerTickCallbackControl1;                                                                                                                                                      \
  EmberEventControl emberAfIasZoneClusterServerTickCallbackControl1;                                                                                                                                                          \
  extern EmberEventControl emberAfPluginBatteryMonitorReadADCEventControl;                                                                                                                                                    \
  extern EmberEventControl emberAfPluginButtonInterfaceButton0PressedEventControl;                                                                                                                                            \
  extern EmberEventControl emberAfPluginButtonInterfaceButton0ReleasedEventControl;                                                                                                                                           \
  extern EmberEventControl emberAfPluginButtonInterfaceButton1PressedEventControl;                                                                                                                                            \
  extern EmberEventControl emberAfPluginButtonInterfaceButton1ReleasedEventControl;                                                                                                                                           \
  extern EmberEventControl emberAfPluginButtonInterfaceButtonTimeoutEventControl;                                                                                                                                             \
  extern EmberEventControl emberAfPluginConnectionManagerPollEventControl;                                                                                                                                                    \
  extern EmberEventControl emberAfPluginConnectionManagerRebootEventControl;                                                                                                                                                  \
  extern EmberEventControl emberAfPluginConnectionManagerRejoinEventControl;                                                                                                                                                  \
  extern EmberEventControl emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventControl;                                                                                                                                 \
  extern EmberEventControl emberAfPluginGpioSensorDebounceEventControl;                                                                                                                                                       \
  extern EmberEventControl emberAfPluginGpioSensorInterruptEventControl;                                                                                                                                                      \
  extern EmberEventControl emberAfPluginIasZoneServerManageQueueEventControl;                                                                                                                                                 \
  extern EmberEventControl emberAfPluginLedBlinkLed0EventFunctionEventControl;                                                                                                                                                \
  extern EmberEventControl emberAfPluginLedBlinkLed1EventFunctionEventControl;                                                                                                                                                \
  extern EmberEventControl emberAfPluginManufacturingLibraryCliCheckSendCompleteEventControl;                                                                                                                                 \
  extern EmberEventControl emberAfPluginManufacturingLibraryOtaKickoffEventControl;                                                                                                                                           \
  extern EmberEventControl emberAfPluginManufacturingLibraryOtaTimeoutEventControl;                                                                                                                                           \
  extern EmberEventControl emberAfPluginNetworkSteeringFinishSteeringEventControl;                                                                                                                                            \
  extern EmberEventControl emberAfPluginOtaStorageSimpleEepromPageEraseEventControl;                                                                                                                                          \
  extern EmberEventControl emberAfPluginReportingTickEventControl;                                                                                                                                                            \
  extern EmberEventControl emberAfPluginScanDispatchScanEventControl;                                                                                                                                                         \
  extern EmberEventControl emberAfPluginSecuritySensorInitEventControl;                                                                                                                                                       \
  extern EmberEventControl emberAfPluginSecuritySensorInitialReportEventControl;                                                                                                                                              \
  extern EmberEventControl emberAfPluginSilabsDeviceUiButtonPressCountEventControl;                                                                                                                                           \
  extern EmberEventControl emberAfPluginSilabsDeviceUiInitEventControl;                                                                                                                                                       \
  extern EmberEventControl emberAfPluginSilabsDeviceUiLedBlinkEventControl;                                                                                                                                                   \
  extern EmberEventControl emberAfPluginTemperatureMeasurementServerReadEventControl;                                                                                                                                         \
  extern EmberEventControl emberAfPluginTemperatureSi7053InitEventControl;                                                                                                                                                    \
  extern EmberEventControl emberAfPluginTemperatureSi7053ReadEventControl;                                                                                                                                                    \
  extern EmberEventControl emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl;                                                                                                                                      \
  extern void emberAfPluginBatteryMonitorReadADCEventHandler(void);                                                                                                                                                           \
  extern void emberAfPluginButtonInterfaceButton0PressedEventHandler(void);                                                                                                                                                   \
  extern void emberAfPluginButtonInterfaceButton0ReleasedEventHandler(void);                                                                                                                                                  \
  extern void emberAfPluginButtonInterfaceButton1PressedEventHandler(void);                                                                                                                                                   \
  extern void emberAfPluginButtonInterfaceButton1ReleasedEventHandler(void);                                                                                                                                                  \
  extern void emberAfPluginButtonInterfaceButtonTimeoutEventHandler(void);                                                                                                                                                    \
  extern void emberAfPluginConnectionManagerPollEventHandler(void);                                                                                                                                                           \
  extern void emberAfPluginConnectionManagerRebootEventHandler(void);                                                                                                                                                         \
  extern void emberAfPluginConnectionManagerRejoinEventHandler(void);                                                                                                                                                         \
  extern void emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventHandler(void);                                                                                                                                        \
  extern void emberAfPluginGpioSensorDebounceEventHandler(void);                                                                                                                                                              \
  extern void emberAfPluginGpioSensorInterruptEventHandler(void);                                                                                                                                                             \
  extern void emberAfPluginIasZoneServerManageQueueEventHandler(void);                                                                                                                                                        \
  extern void emberAfPluginLedBlinkLed0EventFunctionEventHandler(void);                                                                                                                                                       \
  extern void emberAfPluginLedBlinkLed1EventFunctionEventHandler(void);                                                                                                                                                       \
  extern void emberAfPluginManufacturingLibraryCliCheckSendCompleteEventHandler(void);                                                                                                                                        \
  extern void emberAfPluginManufacturingLibraryOtaKickoffEventHandler(void);                                                                                                                                                  \
  extern void emberAfPluginManufacturingLibraryOtaTimeoutEventHandler(void);                                                                                                                                                  \
  extern void emberAfPluginNetworkSteeringFinishSteeringEventHandler(void);                                                                                                                                                   \
  extern void emberAfPluginOtaStorageSimpleEepromPageEraseEventHandler(void);                                                                                                                                                 \
  extern void emberAfPluginReportingTickEventHandler(void);                                                                                                                                                                   \
  extern void emberAfPluginScanDispatchScanEventHandler(void);                                                                                                                                                                \
  extern void emberAfPluginSecuritySensorInitEventHandler(void);                                                                                                                                                              \
  extern void emberAfPluginSecuritySensorInitialReportEventHandler(void);                                                                                                                                                     \
  extern void emberAfPluginSilabsDeviceUiButtonPressCountEventHandler(void);                                                                                                                                                  \
  extern void emberAfPluginSilabsDeviceUiInitEventHandler(void);                                                                                                                                                              \
  extern void emberAfPluginSilabsDeviceUiLedBlinkEventHandler(void);                                                                                                                                                          \
  extern void emberAfPluginTemperatureMeasurementServerReadEventHandler(void);                                                                                                                                                \
  extern void emberAfPluginTemperatureSi7053InitEventHandler(void);                                                                                                                                                           \
  extern void emberAfPluginTemperatureSi7053ReadEventHandler(void);                                                                                                                                                           \
  extern void emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler(void);                                                                                                                                             \
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
  void emberAfOtaBootloadClusterClientTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfOtaBootloadClusterClientTickCallbackControl1, emberAfOtaBootloadClusterClientTickCallback, 1); }                        \
  void emberAfPollControlClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfPollControlClusterServerTickCallbackControl1, emberAfPollControlClusterServerTickCallback, 1); }                        \
  void emberAfIasZoneClusterServerTickCallbackWrapperFunction1(void) { clusterTickWrapper(&emberAfIasZoneClusterServerTickCallbackControl1, emberAfIasZoneClusterServerTickCallback, 1); }                                    \
  EmberEventControl emberAfPluginPollControlServerCheckInEndpointEventControls[1];                                                                                                                                            \
  extern void emberAfPluginPollControlServerCheckInEndpointEventHandler(uint8_t endpoint);                                                                                                                                    \
  void emberAfPluginPollControlServerCheckInEndpointEventWrapper1(void) { clusterTickWrapper(&emberAfPluginPollControlServerCheckInEndpointEventControls[0], emberAfPluginPollControlServerCheckInEndpointEventHandler, 1); } \


// EmberEventData structs used to populate the EmberEventData table
#define EMBER_AF_GENERATED_EVENTS                                                                                                            \
  { &emberAfIdentifyClusterServerTickCallbackControl1, emberAfIdentifyClusterServerTickCallbackWrapperFunction1 },                           \
  { &emberAfOtaBootloadClusterClientTickCallbackControl1, emberAfOtaBootloadClusterClientTickCallbackWrapperFunction1 },                     \
  { &emberAfPollControlClusterServerTickCallbackControl1, emberAfPollControlClusterServerTickCallbackWrapperFunction1 },                     \
  { &emberAfIasZoneClusterServerTickCallbackControl1, emberAfIasZoneClusterServerTickCallbackWrapperFunction1 },                             \
  { &emberAfPluginBatteryMonitorReadADCEventControl, emberAfPluginBatteryMonitorReadADCEventHandler },                                       \
  { &emberAfPluginButtonInterfaceButton0PressedEventControl, emberAfPluginButtonInterfaceButton0PressedEventHandler },                       \
  { &emberAfPluginButtonInterfaceButton0ReleasedEventControl, emberAfPluginButtonInterfaceButton0ReleasedEventHandler },                     \
  { &emberAfPluginButtonInterfaceButton1PressedEventControl, emberAfPluginButtonInterfaceButton1PressedEventHandler },                       \
  { &emberAfPluginButtonInterfaceButton1ReleasedEventControl, emberAfPluginButtonInterfaceButton1ReleasedEventHandler },                     \
  { &emberAfPluginButtonInterfaceButtonTimeoutEventControl, emberAfPluginButtonInterfaceButtonTimeoutEventHandler },                         \
  { &emberAfPluginConnectionManagerPollEventControl, emberAfPluginConnectionManagerPollEventHandler },                                       \
  { &emberAfPluginConnectionManagerRebootEventControl, emberAfPluginConnectionManagerRebootEventHandler },                                   \
  { &emberAfPluginConnectionManagerRejoinEventControl, emberAfPluginConnectionManagerRejoinEventHandler },                                   \
  { &emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventControl, emberAfPluginFindAndBindInitiatorCheckTargetResponsesEventHandler }, \
  { &emberAfPluginGpioSensorDebounceEventControl, emberAfPluginGpioSensorDebounceEventHandler },                                             \
  { &emberAfPluginGpioSensorInterruptEventControl, emberAfPluginGpioSensorInterruptEventHandler },                                           \
  { &emberAfPluginIasZoneServerManageQueueEventControl, emberAfPluginIasZoneServerManageQueueEventHandler },                                 \
  { &emberAfPluginLedBlinkLed0EventFunctionEventControl, emberAfPluginLedBlinkLed0EventFunctionEventHandler },                               \
  { &emberAfPluginLedBlinkLed1EventFunctionEventControl, emberAfPluginLedBlinkLed1EventFunctionEventHandler },                               \
  { &emberAfPluginManufacturingLibraryCliCheckSendCompleteEventControl, emberAfPluginManufacturingLibraryCliCheckSendCompleteEventHandler }, \
  { &emberAfPluginManufacturingLibraryOtaKickoffEventControl, emberAfPluginManufacturingLibraryOtaKickoffEventHandler },                     \
  { &emberAfPluginManufacturingLibraryOtaTimeoutEventControl, emberAfPluginManufacturingLibraryOtaTimeoutEventHandler },                     \
  { &emberAfPluginNetworkSteeringFinishSteeringEventControl, emberAfPluginNetworkSteeringFinishSteeringEventHandler },                       \
  { &emberAfPluginOtaStorageSimpleEepromPageEraseEventControl, emberAfPluginOtaStorageSimpleEepromPageEraseEventHandler },                   \
  { &emberAfPluginReportingTickEventControl, emberAfPluginReportingTickEventHandler },                                                       \
  { &emberAfPluginScanDispatchScanEventControl, emberAfPluginScanDispatchScanEventHandler },                                                 \
  { &emberAfPluginSecuritySensorInitEventControl, emberAfPluginSecuritySensorInitEventHandler },                                             \
  { &emberAfPluginSecuritySensorInitialReportEventControl, emberAfPluginSecuritySensorInitialReportEventHandler },                           \
  { &emberAfPluginSilabsDeviceUiButtonPressCountEventControl, emberAfPluginSilabsDeviceUiButtonPressCountEventHandler },                     \
  { &emberAfPluginSilabsDeviceUiInitEventControl, emberAfPluginSilabsDeviceUiInitEventHandler },                                             \
  { &emberAfPluginSilabsDeviceUiLedBlinkEventControl, emberAfPluginSilabsDeviceUiLedBlinkEventHandler },                                     \
  { &emberAfPluginTemperatureMeasurementServerReadEventControl, emberAfPluginTemperatureMeasurementServerReadEventHandler },                 \
  { &emberAfPluginTemperatureSi7053InitEventControl, emberAfPluginTemperatureSi7053InitEventHandler },                                       \
  { &emberAfPluginTemperatureSi7053ReadEventControl, emberAfPluginTemperatureSi7053ReadEventHandler },                                       \
  { &emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventControl, emberAfPluginUpdateTcLinkKeyBeginTcLinkKeyUpdateEventHandler },           \
  { &emberAfPluginEndDeviceSupportMoveNetworkEventControls[0], emberAfPluginEndDeviceSupportMoveNetworkEventWrapper0 },                      \
  { &emberAfPluginEndDeviceSupportPollingNetworkEventControls[0], emberAfPluginEndDeviceSupportPollingNetworkEventWrapper0 },                \
  { &emberAfPluginPollControlServerCheckInEndpointEventControls[0], emberAfPluginPollControlServerCheckInEndpointEventWrapper1 },            \


#define EMBER_AF_GENERATED_EVENT_STRINGS                 \
  "Identify Cluster Server EP 1",                        \
  "Over the Air Bootloading Cluster Client EP 1",        \
  "Poll Control Cluster Server EP 1",                    \
  "IAS Zone Cluster Server EP 1",                        \
  "Battery Monitor Plugin ReadADC",                      \
  "Button Interface Plugin Button0Pressed",              \
  "Button Interface Plugin Button0Released",             \
  "Button Interface Plugin Button1Pressed",              \
  "Button Interface Plugin Button1Released",             \
  "Button Interface Plugin ButtonTimeout",               \
  "Connection Manager Plugin Poll",                      \
  "Connection Manager Plugin Reboot",                    \
  "Connection Manager Plugin Rejoin",                    \
  "Find and Bind Initiator Plugin CheckTargetResponses", \
  "GPIO Sensor Interface Plugin Debounce",               \
  "GPIO Sensor Interface Plugin Interrupt",              \
  "IAS Zone Server Plugin ManageQueue",                  \
  "LED Blinking Plugin Led0EventFunction",               \
  "LED Blinking Plugin Led1EventFunction",               \
  "Manufacturing Library CLI Plugin CheckSendComplete",  \
  "Manufacturing Library Ota Plugin Kickoff",            \
  "Manufacturing Library Ota Plugin Timeout",            \
  "Network Steering Plugin FinishSteering",              \
  "OTA Simple Storage EEPROM Driver Plugin PageErase",   \
  "Reporting Plugin Tick",                               \
  "Scan Dispatch Plugin Scan",                           \
  "Security Sensor Interface Plugin Init",               \
  "Security Sensor Interface Plugin InitialReport",      \
  "Silicon Labs Device UI Plugin ButtonPressCount",      \
  "Silicon Labs Device UI Plugin Init",                  \
  "Silicon Labs Device UI Plugin LedBlink",              \
  "Temperature Measurement Server Cluster Plugin Read",  \
  "Temperature Si7053 Plugin Init",                      \
  "Temperature Si7053 Plugin Read",                      \
  "Update TC Link Key Plugin BeginTcLinkKeyUpdate",      \
  "End Device Support Plugin Move NWK 0",                \
  "End Device Support Plugin Polling NWK 0",             \
  "Poll Control Server Cluster Plugin CheckIn EP 1",     \


// The length of the event context table used to track and retrieve cluster events
#define EMBER_AF_EVENT_CONTEXT_LENGTH 4

// EmberAfEventContext structs used to populate the EmberAfEventContext table
#define EMBER_AF_GENERATED_EVENT_CONTEXT { 0x1, 0x3, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIdentifyClusterServerTickCallbackControl1 }, \
  { 0x1, 0x19, true, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfOtaBootloadClusterClientTickCallbackControl1 },                                     \
  { 0x1, 0x20, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfPollControlClusterServerTickCallbackControl1 },                                    \
  { 0x1, 0x500, false, EMBER_AF_LONG_POLL, EMBER_AF_OK_TO_SLEEP, &emberAfIasZoneClusterServerTickCallbackControl1 }

#endif // __AF_GEN_EVENT__
