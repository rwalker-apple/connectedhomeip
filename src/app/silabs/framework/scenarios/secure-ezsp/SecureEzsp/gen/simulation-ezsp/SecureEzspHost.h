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
#ifndef __APP_SECUREEZSPHOST_H__
#define __APP_SECUREEZSPHOST_H__

/**** Included Header Section ****/

/**** ZCL Section ****/
#define ZA_PROMPT "SecureEzspHost"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_CLIENT
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_ON_OFF_CLUSTER_CLIENT
#define EMBER_AF_MANUFACTURER_CODE 0x1002
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_ALWAYS

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_CLIENT_ENDPOINT_COUNT (1)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI
#define EMBER_COMMAND_INTEPRETER_HAS_DESCRIPTION_FIELD

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_HA

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_COORDINATOR_NETWORK
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/**** HAL Section ****/
#define ZA_CLI_FULL

/**** Callback Section ****/
#define EMBER_CALLBACK_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_EZSP_INCOMING_ROUTE_ERROR_HANDLER
#define EZSP_APPLICATION_HAS_INCOMING_ROUTE_ERROR_HANDLER
#define EMBER_CALLBACK_GET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_SET_SOURCE_ROUTE_OVERHEAD
#define EMBER_CALLBACK_COUNTER_HANDLER
#define EMBER_APPLICATION_HAS_COUNTER_HANDLER
#define EMBER_CALLBACK_EZSP_COUNTER_ROLLOVER_HANDLER
#define EZSP_APPLICATION_HAS_COUNTER_ROLLOVER_HANDLER
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_UNUSED_PAN_ID_FOUND
#define EMBER_CALLBACK_SCAN_ERROR
#define EMBER_CALLBACK_FIND_UNUSED_PAN_ID_AND_FORM
#define EMBER_CALLBACK_START_SEARCH_FOR_JOINABLE_NETWORK
#define EMBER_CALLBACK_GET_FORM_AND_JOIN_EXTENDED_PAN_ID
#define EMBER_CALLBACK_SET_FORM_AND_JOIN_EXTENDED_PAN_ID
/**** Debug printing section ****/

// Global switch
#define EMBER_AF_PRINT_ENABLE
// Individual areas
#define EMBER_AF_PRINT_CORE 0x0001
#define EMBER_AF_PRINT_DEBUG 0x0002
#define EMBER_AF_PRINT_APP 0x0004
#define EMBER_AF_PRINT_SECURITY 0x0008
#define EMBER_AF_PRINT_ATTRIBUTES 0x0010
#define EMBER_AF_PRINT_REPORTING 0x0020
#define EMBER_AF_PRINT_SERVICE_DISCOVERY 0x0040
#define EMBER_AF_PRINT_REGISTRATION 0x0080
#define EMBER_AF_PRINT_ZDO 0x0101
#define EMBER_AF_PRINT_CUSTOM1 0x0102
#define EMBER_AF_PRINT_CUSTOM2 0x0104
#define EMBER_AF_PRINT_CUSTOM3 0x0108
#define EMBER_AF_PRINT_BASIC_CLUSTER 0x0110
#define EMBER_AF_PRINT_POWER_CONFIG_CLUSTER 0x0120
#define EMBER_AF_PRINT_DEVICE_TEMP_CLUSTER 0x0140
#define EMBER_AF_PRINT_IDENTIFY_CLUSTER 0x0180
#define EMBER_AF_PRINT_GROUPS_CLUSTER 0x0201
#define EMBER_AF_PRINT_SCENES_CLUSTER 0x0202
#define EMBER_AF_PRINT_ON_OFF_CLUSTER 0x0204
#define EMBER_AF_PRINT_ON_OFF_SWITCH_CONFIG_CLUSTER 0x0208
#define EMBER_AF_PRINT_LEVEL_CONTROL_CLUSTER 0x0210
#define EMBER_AF_PRINT_ALARM_CLUSTER 0x0220
#define EMBER_AF_PRINT_TIME_CLUSTER 0x0240
#define EMBER_AF_PRINT_RSSI_LOCATION_CLUSTER 0x0280
#define EMBER_AF_PRINT_BINARY_INPUT_BASIC_CLUSTER 0x0301
#define EMBER_AF_PRINT_COMMISSIONING_CLUSTER 0x0302
#define EMBER_AF_PRINT_PARTITION_CLUSTER 0x0304
#define EMBER_AF_PRINT_OTA_BOOTLOAD_CLUSTER 0x0308
#define EMBER_AF_PRINT_POWER_PROFILE_CLUSTER 0x0310
#define EMBER_AF_PRINT_APPLIANCE_CONTROL_CLUSTER 0x0320
#define EMBER_AF_PRINT_POLL_CONTROL_CLUSTER 0x0340
#define EMBER_AF_PRINT_GREEN_POWER_CLUSTER 0x0380
#define EMBER_AF_PRINT_KEEPALIVE_CLUSTER 0x0401
#define EMBER_AF_PRINT_SHADE_CONFIG_CLUSTER 0x0402
#define EMBER_AF_PRINT_DOOR_LOCK_CLUSTER 0x0404
#define EMBER_AF_PRINT_WINDOW_COVERING_CLUSTER 0x0408
#define EMBER_AF_PRINT_PUMP_CONFIG_CONTROL_CLUSTER 0x0410
#define EMBER_AF_PRINT_THERMOSTAT_CLUSTER 0x0420
#define EMBER_AF_PRINT_FAN_CONTROL_CLUSTER 0x0440
#define EMBER_AF_PRINT_DEHUMID_CONTROL_CLUSTER 0x0480
#define EMBER_AF_PRINT_THERMOSTAT_UI_CONFIG_CLUSTER 0x0501
#define EMBER_AF_PRINT_COLOR_CONTROL_CLUSTER 0x0502
#define EMBER_AF_PRINT_BALLAST_CONFIGURATION_CLUSTER 0x0504
#define EMBER_AF_PRINT_ILLUM_MEASUREMENT_CLUSTER 0x0508
#define EMBER_AF_PRINT_ILLUM_LEVEL_SENSING_CLUSTER 0x0510
#define EMBER_AF_PRINT_TEMP_MEASUREMENT_CLUSTER 0x0520
#define EMBER_AF_PRINT_PRESSURE_MEASUREMENT_CLUSTER 0x0540
#define EMBER_AF_PRINT_FLOW_MEASUREMENT_CLUSTER 0x0580
#define EMBER_AF_PRINT_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER 0x0601
#define EMBER_AF_PRINT_OCCUPANCY_SENSING_CLUSTER 0x0602
#define EMBER_AF_PRINT_IAS_ZONE_CLUSTER 0x0604
#define EMBER_AF_PRINT_IAS_ACE_CLUSTER 0x0608
#define EMBER_AF_PRINT_IAS_WD_CLUSTER 0x0610
#define EMBER_AF_PRINT_GENERIC_TUNNEL_CLUSTER 0x0620
#define EMBER_AF_PRINT_BACNET_PROTOCOL_TUNNEL_CLUSTER 0x0640
#define EMBER_AF_PRINT_11073_PROTOCOL_TUNNEL_CLUSTER 0x0680
#define EMBER_AF_PRINT_ISO7816_PROTOCOL_TUNNEL_CLUSTER 0x0701
#define EMBER_AF_PRINT_PRICE_CLUSTER 0x0702
#define EMBER_AF_PRINT_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER 0x0704
#define EMBER_AF_PRINT_SIMPLE_METERING_CLUSTER 0x0708
#define EMBER_AF_PRINT_MESSAGING_CLUSTER 0x0710
#define EMBER_AF_PRINT_TUNNELING_CLUSTER 0x0720
#define EMBER_AF_PRINT_PREPAYMENT_CLUSTER 0x0740
#define EMBER_AF_PRINT_ENERGY_MANAGEMENT_CLUSTER 0x0780
#define EMBER_AF_PRINT_CALENDAR_CLUSTER 0x0801
#define EMBER_AF_PRINT_DEVICE_MANAGEMENT_CLUSTER 0x0802
#define EMBER_AF_PRINT_EVENTS_CLUSTER 0x0804
#define EMBER_AF_PRINT_MDU_PAIRING_CLUSTER 0x0808
#define EMBER_AF_PRINT_KEY_ESTABLISHMENT_CLUSTER 0x0810
#define EMBER_AF_PRINT_INFORMATION_CLUSTER 0x0820
#define EMBER_AF_PRINT_DATA_SHARING_CLUSTER 0x0840
#define EMBER_AF_PRINT_GAMING_CLUSTER 0x0880
#define EMBER_AF_PRINT_DATA_RATE_CONTROL_CLUSTER 0x0901
#define EMBER_AF_PRINT_VOICE_OVER_ZIGBEE_CLUSTER 0x0902
#define EMBER_AF_PRINT_CHATTING_CLUSTER 0x0904
#define EMBER_AF_PRINT_PAYMENT_CLUSTER 0x0908
#define EMBER_AF_PRINT_BILLING_CLUSTER 0x0910
#define EMBER_AF_PRINT_APPLIANCE_IDENTIFICATION_CLUSTER 0x0920
#define EMBER_AF_PRINT_METER_IDENTIFICATION_CLUSTER 0x0940
#define EMBER_AF_PRINT_APPLIANCE_EVENTS_AND_ALERT_CLUSTER 0x0980
#define EMBER_AF_PRINT_APPLIANCE_STATISTICS_CLUSTER 0x0A01
#define EMBER_AF_PRINT_ELECTRICAL_MEASUREMENT_CLUSTER 0x0A02
#define EMBER_AF_PRINT_DIAGNOSTICS_CLUSTER 0x0A04
#define EMBER_AF_PRINT_ZLL_COMMISSIONING_CLUSTER 0x0A08
#define EMBER_AF_PRINT_SAMPLE_MFG_SPECIFIC_CLUSTER 0x0A10
#define EMBER_AF_PRINT_OTA_CONFIGURATION_CLUSTER 0x0A20
#define EMBER_AF_PRINT_MFGLIB_CLUSTER 0x0A40
#define EMBER_AF_PRINT_BITS { 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PRINT_NAMES {                 \
    "Core",                                    \
    "Debug",                                   \
    "Application",                             \
    "Security",                                \
    "Attributes",                              \
    "Reporting",                               \
    "Service discovery",                       \
    "Registration",                            \
    "ZDO (ZigBee Device Object)",              \
    "Custom messages (1)",                     \
    "Custom messages (2)",                     \
    "Custom messages (3)",                     \
    "Basic",                                   \
    "Power Configuration",                     \
    "Device Temperature Configuration",        \
    "Identify",                                \
    "Groups",                                  \
    "Scenes",                                  \
    "On/off",                                  \
    "On/off Switch Configuration",             \
    "Level Control",                           \
    "Alarms",                                  \
    "Time",                                    \
    "RSSI Location",                           \
    "Binary Input (Basic)",                    \
    "Commissioning",                           \
    "Partition",                               \
    "Over the Air Bootloading",                \
    "Power Profile",                           \
    "Appliance Control",                       \
    "Poll Control",                            \
    "Green Power",                             \
    "Keep-Alive",                              \
    "Shade Configuration",                     \
    "Door Lock",                               \
    "Window Covering",                         \
    "Pump Configuration and Control",          \
    "Thermostat",                              \
    "Fan Control",                             \
    "Dehumidification Control",                \
    "Thermostat User Interface Configuration", \
    "Color Control",                           \
    "Ballast Configuration",                   \
    "Illuminance Measurement",                 \
    "Illuminance Level Sensing",               \
    "Temperature Measurement",                 \
    "Pressure Measurement",                    \
    "Flow Measurement",                        \
    "Relative Humidity Measurement",           \
    "Occupancy Sensing",                       \
    "IAS Zone",                                \
    "IAS ACE",                                 \
    "IAS WD",                                  \
    "Generic Tunnel",                          \
    "BACnet Protocol Tunnel",                  \
    "11073 Protocol Tunnel",                   \
    "ISO 7816 Protocol Tunnel",                \
    "Price",                                   \
    "Demand Response and Load Control",        \
    "Simple Metering",                         \
    "Messaging",                               \
    "Tunneling",                               \
    "Prepayment",                              \
    "Energy Management",                       \
    "Calendar",                                \
    "Device Management",                       \
    "Events",                                  \
    "MDU Pairing",                             \
    "Key Establishment",                       \
    "Information",                             \
    "Data Sharing",                            \
    "Gaming",                                  \
    "Data Rate Control",                       \
    "Voice over ZigBee",                       \
    "Chatting",                                \
    "Payment",                                 \
    "Billing",                                 \
    "Appliance Identification",                \
    "Meter Identification",                    \
    "Appliance Events and Alert",              \
    "Appliance Statistics",                    \
    "Electrical Measurement",                  \
    "Diagnostics",                             \
    "ZLL Commissioning",                       \
    "Sample Mfg Specific Cluster",             \
    "Configuration Cluster",                   \
    "MFGLIB Cluster",                          \
    NULL                                       \
}
#define EMBER_AF_PRINT_NAME_NUMBER 87

#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY

// Generated plugin macros

// Use this macro to check if Address Table plugin is included
#define EMBER_AF_PLUGIN_ADDRESS_TABLE
// User options for plugin Address Table
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_SIZE 2
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_TRUST_CENTER_CACHE_SIZE 2

// Use this macro to check if Concentrator Support plugin is included
#define EMBER_AF_PLUGIN_CONCENTRATOR
#define EMBER_APPLICATION_HAS_SOURCE_ROUTING
#define EZSP_APPLICATION_HAS_ROUTE_RECORD_HANDLER
// User options for plugin Concentrator Support
#define EMBER_AF_PLUGIN_CONCENTRATOR_CONCENTRATOR_TYPE LOW_RAM_CONCENTRATOR
#define EMBER_SOURCE_ROUTE_TABLE_SIZE 7

#define EMBER_AF_PLUGIN_CONCENTRATOR_MIN_TIME_BETWEEN_BROADCASTS_SECONDS 10
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_TIME_BETWEEN_BROADCASTS_SECONDS 60
#define EMBER_AF_PLUGIN_CONCENTRATOR_ROUTE_ERROR_THRESHOLD 3
#define EMBER_AF_PLUGIN_CONCENTRATOR_DELIVERY_FAILURE_THRESHOLD 1
#define EMBER_AF_PLUGIN_CONCENTRATOR_MAX_HOPS 0
#define EMBER_AF_PLUGIN_CONCENTRATOR_NCP_SUPPORT
#define EMBER_AF_PLUGIN_CONCENTRATOR_DEFAULT_ROUTER_BEHAVIOR FULL

// Use this macro to check if Counters plugin is included
#define EMBER_AF_PLUGIN_COUNTERS
// User options for plugin Counters

// Use this macro to check if Ember Minimal Printf plugin is included
#define EMBER_AF_PLUGIN_EMBER_MINIMAL_PRINTF

// Use this macro to check if Form and Join Library plugin is included
#define EMBER_AF_PLUGIN_FORM_AND_JOIN

// Use this macro to check if Heartbeat plugin is included
#define EMBER_AF_PLUGIN_HEARTBEAT
// User options for plugin Heartbeat
#define EMBER_AF_PLUGIN_HEARTBEAT_PERIOD_QS 1

// Use this macro to check if Identify Cluster plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY

// Use this macro to check if Identify Feedback plugin is included
#define EMBER_AF_PLUGIN_IDENTIFY_FEEDBACK
// User options for plugin Identify Feedback
#define EMBER_AF_PLUGIN_IDENTIFY_FEEDBACK_LED_FEEDBACK

// Use this macro to check if Network Find plugin is included
#define EMBER_AF_PLUGIN_NETWORK_FIND
#define EMBER_AF_DISABLE_FORM_AND_JOIN_TICK
// User options for plugin Network Find
#define EMBER_AF_PLUGIN_NETWORK_FIND_CHANNEL_MASK 0x0318C800UL
#define EMBER_AF_PLUGIN_NETWORK_FIND_RADIO_TX_POWER 3
#define EMBER_AF_PLUGIN_NETWORK_FIND_EXTENDED_PAN_ID { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }
#define EMBER_AF_PLUGIN_NETWORK_FIND_DURATION 5
#define EMBER_AF_PLUGIN_NETWORK_FIND_JOINABLE_SCAN_TIMEOUT_MINUTES 1

// Use this macro to check if Price Common plugin is included
#define EMBER_AF_PLUGIN_PRICE_COMMON

// Use this macro to check if Simple Main plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_MAIN

// Use this macro to check if AES (Software) plugin is included
#define EMBER_AF_PLUGIN_AES_SOFTWARE
// User options for plugin AES (Software)

// Use this macro to check if EZSP Common plugin is included
#define EMBER_AF_PLUGIN_EZSP

// Use this macro to check if EZSP SPI plugin is included
#define EMBER_AF_PLUGIN_EZSP_SPI

// Use this macro to check if NCP Configuration plugin is included
#define EMBER_AF_PLUGIN_NCP_CONFIGURATION
// User options for plugin NCP Configuration
#define EMBER_BINDING_TABLE_SIZE 2
#define EMBER_MAX_END_DEVICE_CHILDREN 6
#define EMBER_END_DEVICE_POLL_TIMEOUT 5
#define EMBER_END_DEVICE_POLL_TIMEOUT_SHIFT 6
#define EMBER_KEY_TABLE_SIZE 0
#define EMBER_RF4CE_PAIRING_TABLE_SIZE 1
#define EMBER_RF4CE_PENDING_OUTGOING_PACKET_TABLE_SIZE 8
#define EMBER_ZLL_GROUP_ADDRESSES 0
#define EMBER_ZLL_RSSI_THRESHOLD -128
#define EMBER_TRANSIENT_KEY_TIMEOUT_S 300

// Use this macro to check if EZSP Secure Protocol plugin is included
#define EMBER_AF_PLUGIN_SECURE_EZSP
// User options for plugin EZSP Secure Protocol

// Use this macro to check if Security Support plugin is included
#define EMBER_AF_PLUGIN_SECURITY_SUPPORT

// Use this macro to check if Unix Library plugin is included
#define EMBER_AF_PLUGIN_UNIX_LIBRARY
// User options for plugin Unix Library
#define EMBER_AF_PLUGIN_UNIX_LIBRARY_TOKEN_SUPPORT

// Generated API headers

// API ezsp-protocol from EZSP Common plugin
#define EMBER_AF_API_EZSP_PROTOCOL "../../../../../../util/ezsp/ezsp-protocol.h"

// API ezsp from EZSP Common plugin
#define EMBER_AF_API_EZSP "../../../../../../util/ezsp/ezsp.h"

// API ezsp-secure from EZSP Secure Protocol plugin
#define EMBER_AF_API_EZSP_SECURE "../../../../../../util/ezsp/secure-ezsp-protocol.h"

// API crc from Unix Library plugin
#define EMBER_AF_API_CRC "../../../../../../../../../platform/base/hal/micro/crc.h"

// API endian from Unix Library plugin
#define EMBER_AF_API_ENDIAN "../../../../../../../../../platform/base/hal/micro/endian.h"

// API hal from Unix Library plugin
#define EMBER_AF_API_HAL "../../../../../../../../../platform/base/hal/hal.h"

// API random from Unix Library plugin
#define EMBER_AF_API_RANDOM "../../../../../../../../../platform/base/hal/micro/random.h"

// API system-timer from Unix Library plugin
#define EMBER_AF_API_SYSTEM_TIMER "../../../../../../../../../platform/base/hal/micro/system-timer.h"

// API token from Unix Library plugin
#define EMBER_AF_API_TOKEN "../../../../../../../../../platform/base/hal/micro/token.h"

// Custom macros
#ifdef APP_SERIAL
#undef APP_SERIAL
#endif
#define APP_SERIAL 1

#ifdef EMBER_ASSERT_SERIAL_PORT
#undef EMBER_ASSERT_SERIAL_PORT
#endif
#define EMBER_ASSERT_SERIAL_PORT 1

#ifdef EMBER_AF_BAUD_RATE
#undef EMBER_AF_BAUD_RATE
#endif
#define EMBER_AF_BAUD_RATE 115200

#ifdef EMBER_SERIAL1_MODE
#undef EMBER_SERIAL1_MODE
#endif
#define EMBER_SERIAL1_MODE EMBER_SERIAL_FIFO

#ifdef EMBER_SERIAL1_RX_QUEUE_SIZE
#undef EMBER_SERIAL1_RX_QUEUE_SIZE
#endif
#define EMBER_SERIAL1_RX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL1_TX_QUEUE_SIZE
#undef EMBER_SERIAL1_TX_QUEUE_SIZE
#endif
#define EMBER_SERIAL1_TX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL1_BLOCKING
#undef EMBER_SERIAL1_BLOCKING
#endif
#define EMBER_SERIAL1_BLOCKING

#ifdef EMBER_AF_SERIAL_PORT_INIT
#undef EMBER_AF_SERIAL_PORT_INIT
#endif
#define EMBER_AF_SERIAL_PORT_INIT()                  \
  do {                                               \
    emberSerialInit(1, BAUD_115200, PARITY_NONE, 1); \
  } while (0)

#endif // __APP_SECUREEZSPHOST_H__
