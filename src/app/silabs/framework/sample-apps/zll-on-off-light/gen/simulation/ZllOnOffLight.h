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
#ifndef SILABS_ZNET_CONFIG
#define SILABS_ZNET_CONFIG

/**** Included Header Section ****/

// Networks
#define EM_AF_GENERATED_NETWORK_TYPES {          \
    EM_AF_NETWORK_TYPE_ZIGBEE_PRO, /* Primary */ \
}
#define EM_AF_GENERATED_ZIGBEE_PRO_NETWORKS { \
    {                                         \
      /* Primary */                           \
      ZA_ROUTER,                              \
      EMBER_AF_SECURITY_PROFILE_HA,           \
    },                                        \
}
#define EM_AF_GENERATED_NETWORK_STRINGS \
  "Primary (pro)",                      \
/**** ZCL Section ****/
#define ZA_PROMPT "ZllOnOffLight"
#define ZCL_USING_BASIC_CLUSTER_SERVER
#define ZCL_USING_IDENTIFY_CLUSTER_SERVER
#define ZCL_USING_GROUPS_CLUSTER_SERVER
#define ZCL_USING_SCENES_CLUSTER_SERVER
#define ZCL_USING_ON_OFF_CLUSTER_SERVER
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_SERVER
#define ZCL_USING_ZLL_COMMISSIONING_CLUSTER_CLIENT
#define ZCL_USING_ZLL_COMMISSIONING_CLUSTER_SERVER
/**** Optional Attributes ****/
#define ZCL_USING_BASIC_CLUSTER_APPLICATION_VERSION_ATTRIBUTE
#define ZCL_USING_BASIC_CLUSTER_STACK_VERSION_ATTRIBUTE
#define ZCL_USING_BASIC_CLUSTER_HW_VERSION_ATTRIBUTE
#define ZCL_USING_BASIC_CLUSTER_MANUFACTURER_NAME_ATTRIBUTE
#define ZCL_USING_BASIC_CLUSTER_MODEL_IDENTIFIER_ATTRIBUTE
#define ZCL_USING_BASIC_CLUSTER_DATE_CODE_ATTRIBUTE
#define ZCL_USING_BASIC_CLUSTER_SW_BUILD_ID_ATTRIBUTE
#define ZCL_USING_ON_OFF_CLUSTER_GLOBAL_SCENE_CONTROL_ATTRIBUTE
#define ZCL_USING_ON_OFF_CLUSTER_ON_TIME_ATTRIBUTE
#define ZCL_USING_ON_OFF_CLUSTER_OFF_WAIT_TIME_ATTRIBUTE
#define ZCL_USING_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_REMAINING_TIME_ATTRIBUTE
#define EMBER_AF_MANUFACTURER_CODE 0x1002
#define EMBER_AF_DEFAULT_RESPONSE_POLICY_ALWAYS

/**** Cluster endpoint counts ****/
#define EMBER_AF_BASIC_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_IDENTIFY_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_GROUPS_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_SCENES_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ON_OFF_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_LEVEL_CONTROL_CLUSTER_SERVER_ENDPOINT_COUNT (1)
#define EMBER_AF_ZLL_COMMISSIONING_CLUSTER_CLIENT_ENDPOINT_COUNT (1)
#define EMBER_AF_ZLL_COMMISSIONING_CLUSTER_SERVER_ENDPOINT_COUNT (1)

/**** Cluster Endpoint Summaries ****/
#define EMBER_AF_MAX_SERVER_CLUSTER_COUNT (7)
#define EMBER_AF_MAX_CLIENT_CLUSTER_COUNT (1)
#define EMBER_AF_MAX_TOTAL_CLUSTER_COUNT (8)

/**** CLI Section ****/
#define EMBER_AF_GENERATE_CLI
#define EMBER_COMMAND_INTEPRETER_HAS_DESCRIPTION_FIELD

/**** Security Section ****/
#define EMBER_AF_HAS_SECURITY_PROFILE_HA

/**** Network Section ****/
#define EMBER_SUPPORTED_NETWORKS (1)
#define EMBER_AF_NETWORK_INDEX_PRIMARY (0)
#define EMBER_AF_DEFAULT_NETWORK_INDEX EMBER_AF_NETWORK_INDEX_PRIMARY
#define EMBER_AF_HAS_ROUTER_NETWORK
#define EMBER_AF_HAS_RX_ON_WHEN_IDLE_NETWORK
#define EMBER_AF_TX_POWER_MODE EMBER_TX_POWER_MODE_USE_TOKEN

/**** Callback Section ****/
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_SCENES_CLUSTER_SCENES_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_SCENES_CLUSTER_ADD_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_VIEW_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_ALL_SCENES
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_RECALL_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_GET_SCENE_MEMBERSHIP
#define EMBER_CALLBACK_SCENES_CLUSTER_STORE_CURRENT_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_RECALL_SAVED_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_CLEAR_SCENE_TABLE
#define EMBER_CALLBACK_SCENES_CLUSTER_SCENES_CLUSTER_MAKE_INVALID
#define EMBER_CALLBACK_SCENES_CLUSTER_REMOVE_SCENES_IN_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_GROUPS_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_GROUPS_CLUSTER_ADD_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_VIEW_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_GET_GROUP_MEMBERSHIP
#define EMBER_CALLBACK_GROUPS_CLUSTER_REMOVE_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_REMOVE_ALL_GROUPS
#define EMBER_CALLBACK_GROUPS_CLUSTER_ADD_GROUP_IF_IDENTIFYING
#define EMBER_CALLBACK_GROUPS_CLUSTER_ENDPOINT_IN_GROUP
#define EMBER_CALLBACK_GROUPS_CLUSTER_CLEAR_GROUP_TABLE
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_ENDPOINT_INFORMATION
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_GET_GROUP_IDENTIFIERS_RESPONSE
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_GET_ENDPOINT_LIST_RESPONSE
#define EMBER_CALLBACK_SCENES_CLUSTER_ENHANCED_ADD_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_ENHANCED_VIEW_SCENE
#define EMBER_CALLBACK_SCENES_CLUSTER_COPY_SCENE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_ON_OFF_CLUSTER_OFF_WITH_EFFECT
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_WITH_RECALL_GLOBAL_SCENE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_WITH_TIMED_OFF
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_CLUSTER_SERVER_ATTRIBUTE_CHANGED
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_IDENTIFY_QUERY
#define EMBER_CALLBACK_READ_ATTRIBUTES_RESPONSE
#define EMBER_CALLBACK_WRITE_ATTRIBUTES_RESPONSE
#define EMBER_CALLBACK_CONFIGURE_REPORTING_RESPONSE
#define EMBER_CALLBACK_READ_REPORTING_CONFIGURATION_RESPONSE
#define EMBER_CALLBACK_REPORT_ATTRIBUTES_RESPONSE
#define EMBER_CALLBACK_DEFAULT_RESPONSE
#define EMBER_CALLBACK_DISCOVER_ATTRIBUTES_RESPONSE
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_LEVEL_CONTROL_CLUSTER_SERVER_TICK
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_TO_LEVEL_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_MOVE_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STEP_WITH_ON_OFF
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP
#define EMBER_CALLBACK_LEVEL_CONTROL_CLUSTER_STOP_WITH_ON_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_LEVEL_CONTROL_EFFECT
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_GET_GROUP_IDENTIFIERS_REQUEST
#define EMBER_CALLBACK_ZLL_COMMISSIONING_CLUSTER_GET_ENDPOINT_LIST_REQUEST
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SERVER_INIT
#define EMBER_CALLBACK_ON_OFF_CLUSTER_OFF
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON
#define EMBER_CALLBACK_ON_OFF_CLUSTER_TOGGLE
#define EMBER_CALLBACK_ON_OFF_CLUSTER_ON_OFF_CLUSTER_SET_VALUE
#define EMBER_CALLBACK_IDENTIFY_CLUSTER_TRIGGER_EFFECT
#define EMBER_CALLBACK_MAC_FILTER_MATCH_MESSAGE
#define EMBER_APPLICATION_HAS_MAC_FILTER_MATCH_MESSAGE_HANDLER
#define EMBER_CALLBACK_EZSP_MAC_FILTER_MATCH_MESSAGE
#define EZSP_APPLICATION_HAS_MAC_FILTER_MATCH_HANDLER
#define EMBER_CALLBACK_INTERPAN_SEND_MESSAGE
#define EMBER_CALLBACK_GET_CURRENT_SLEEP_CONTROL
#define EMBER_CALLBACK_GET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_SET_DEFAULT_SLEEP_CONTROL
#define EMBER_CALLBACK_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EMBER_APPLICATION_HAS_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EMBER_CALLBACK_EZSP_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EZSP_APPLICATION_HAS_ZLL_TOUCH_LINK_TARGET_HANDLER
#define EMBER_CALLBACK_START_SEARCH_FOR_JOINABLE_NETWORK
#define EMBER_CALLBACK_FIND_UNUSED_PAN_ID_AND_FORM
#define EMBER_CALLBACK_UNUSED_PAN_ID_FOUND
#define EMBER_CALLBACK_SCAN_ERROR
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
#define EMBER_AF_PRINT_BARRIER_CONTROL_CLUSTER 0x0410
#define EMBER_AF_PRINT_PUMP_CONFIG_CONTROL_CLUSTER 0x0420
#define EMBER_AF_PRINT_THERMOSTAT_CLUSTER 0x0440
#define EMBER_AF_PRINT_FAN_CONTROL_CLUSTER 0x0480
#define EMBER_AF_PRINT_DEHUMID_CONTROL_CLUSTER 0x0501
#define EMBER_AF_PRINT_THERMOSTAT_UI_CONFIG_CLUSTER 0x0502
#define EMBER_AF_PRINT_COLOR_CONTROL_CLUSTER 0x0504
#define EMBER_AF_PRINT_BALLAST_CONFIGURATION_CLUSTER 0x0508
#define EMBER_AF_PRINT_ILLUM_MEASUREMENT_CLUSTER 0x0510
#define EMBER_AF_PRINT_ILLUM_LEVEL_SENSING_CLUSTER 0x0520
#define EMBER_AF_PRINT_TEMP_MEASUREMENT_CLUSTER 0x0540
#define EMBER_AF_PRINT_PRESSURE_MEASUREMENT_CLUSTER 0x0580
#define EMBER_AF_PRINT_FLOW_MEASUREMENT_CLUSTER 0x0601
#define EMBER_AF_PRINT_RELATIVE_HUMIDITY_MEASUREMENT_CLUSTER 0x0602
#define EMBER_AF_PRINT_OCCUPANCY_SENSING_CLUSTER 0x0604
#define EMBER_AF_PRINT_CARBON_MONOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0608
#define EMBER_AF_PRINT_CARBON_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0610
#define EMBER_AF_PRINT_ETHYLENE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0620
#define EMBER_AF_PRINT_ETHYLENE_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0640
#define EMBER_AF_PRINT_HYDROGEN_CONCENTRATION_MEASUREMENT_CLUSTER 0x0680
#define EMBER_AF_PRINT_HYDROGEN_SULPHIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0701
#define EMBER_AF_PRINT_NITRIC_OXIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0702
#define EMBER_AF_PRINT_NITROGEN_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0704
#define EMBER_AF_PRINT_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER 0x0708
#define EMBER_AF_PRINT_OZONE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0710
#define EMBER_AF_PRINT_SULFUR_DIOXIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0720
#define EMBER_AF_PRINT_DISSOLVED_OXYGEN_CONCENTRATION_MEASUREMENT_CLUSTER 0x0740
#define EMBER_AF_PRINT_BROMATE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0780
#define EMBER_AF_PRINT_CHLORAMINES_CONCENTRATION_MEASUREMENT_CLUSTER 0x0801
#define EMBER_AF_PRINT_CHLORINE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0802
#define EMBER_AF_PRINT_FECAL_COLIFORM_AND_E_COLI_CONCENTRATION_MEASUREMENT_CLUSTER 0x0804
#define EMBER_AF_PRINT_FLUORIDE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0808
#define EMBER_AF_PRINT_HALOACETIC_ACIDS_CONCENTRATION_MEASUREMENT_CLUSTER 0x0810
#define EMBER_AF_PRINT_TOTAL_TRIHALOMETHANES_CONCENTRATION_MEASUREMENT_CLUSTER 0x0820
#define EMBER_AF_PRINT_TOTAL_COLIFORM_BACTERIA_CONCENTRATION_MEASUREMENT_CLUSTER 0x0840
#define EMBER_AF_PRINT_TURBIDITY_CONCENTRATION_MEASUREMENT_CLUSTER 0x0880
#define EMBER_AF_PRINT_COPPER_CONCENTRATION_MEASUREMENT_CLUSTER 0x0901
#define EMBER_AF_PRINT_LEAD_CONCENTRATION_MEASUREMENT_CLUSTER 0x0902
#define EMBER_AF_PRINT_MANGANESE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0904
#define EMBER_AF_PRINT_SULFATE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0908
#define EMBER_AF_PRINT_BROMODICHLOROMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0910
#define EMBER_AF_PRINT_BROMOFORM_CONCENTRATION_MEASUREMENT_CLUSTER 0x0920
#define EMBER_AF_PRINT_CHLORODIBROMOMETHANE_CONCENTRATION_MEASUREMENT_CLUSTER 0x0940
#define EMBER_AF_PRINT_CHLOROFORM_CONCENTRATION_MEASUREMENT_CLUSTER 0x0980
#define EMBER_AF_PRINT_SODIUM_CONCENTRATION_MEASUREMENT_CLUSTER 0x0A01
#define EMBER_AF_PRINT_IAS_ZONE_CLUSTER 0x0A02
#define EMBER_AF_PRINT_IAS_ACE_CLUSTER 0x0A04
#define EMBER_AF_PRINT_IAS_WD_CLUSTER 0x0A08
#define EMBER_AF_PRINT_GENERIC_TUNNEL_CLUSTER 0x0A10
#define EMBER_AF_PRINT_BACNET_PROTOCOL_TUNNEL_CLUSTER 0x0A20
#define EMBER_AF_PRINT_11073_PROTOCOL_TUNNEL_CLUSTER 0x0A40
#define EMBER_AF_PRINT_ISO7816_PROTOCOL_TUNNEL_CLUSTER 0x0A80
#define EMBER_AF_PRINT_PRICE_CLUSTER 0x0B01
#define EMBER_AF_PRINT_DEMAND_RESPONSE_LOAD_CONTROL_CLUSTER 0x0B02
#define EMBER_AF_PRINT_SIMPLE_METERING_CLUSTER 0x0B04
#define EMBER_AF_PRINT_MESSAGING_CLUSTER 0x0B08
#define EMBER_AF_PRINT_TUNNELING_CLUSTER 0x0B10
#define EMBER_AF_PRINT_PREPAYMENT_CLUSTER 0x0B20
#define EMBER_AF_PRINT_ENERGY_MANAGEMENT_CLUSTER 0x0B40
#define EMBER_AF_PRINT_CALENDAR_CLUSTER 0x0B80
#define EMBER_AF_PRINT_DEVICE_MANAGEMENT_CLUSTER 0x0C01
#define EMBER_AF_PRINT_EVENTS_CLUSTER 0x0C02
#define EMBER_AF_PRINT_MDU_PAIRING_CLUSTER 0x0C04
#define EMBER_AF_PRINT_SUB_GHZ_CLUSTER 0x0C08
#define EMBER_AF_PRINT_KEY_ESTABLISHMENT_CLUSTER 0x0C10
#define EMBER_AF_PRINT_INFORMATION_CLUSTER 0x0C20
#define EMBER_AF_PRINT_DATA_SHARING_CLUSTER 0x0C40
#define EMBER_AF_PRINT_GAMING_CLUSTER 0x0C80
#define EMBER_AF_PRINT_DATA_RATE_CONTROL_CLUSTER 0x0D01
#define EMBER_AF_PRINT_VOICE_OVER_ZIGBEE_CLUSTER 0x0D02
#define EMBER_AF_PRINT_CHATTING_CLUSTER 0x0D04
#define EMBER_AF_PRINT_PAYMENT_CLUSTER 0x0D08
#define EMBER_AF_PRINT_BILLING_CLUSTER 0x0D10
#define EMBER_AF_PRINT_APPLIANCE_IDENTIFICATION_CLUSTER 0x0D20
#define EMBER_AF_PRINT_METER_IDENTIFICATION_CLUSTER 0x0D40
#define EMBER_AF_PRINT_APPLIANCE_EVENTS_AND_ALERT_CLUSTER 0x0D80
#define EMBER_AF_PRINT_APPLIANCE_STATISTICS_CLUSTER 0x0E01
#define EMBER_AF_PRINT_ELECTRICAL_MEASUREMENT_CLUSTER 0x0E02
#define EMBER_AF_PRINT_DIAGNOSTICS_CLUSTER 0x0E04
#define EMBER_AF_PRINT_ZLL_COMMISSIONING_CLUSTER 0x0E08
#define EMBER_AF_PRINT_SAMPLE_MFG_SPECIFIC_CLUSTER 0x0E10
#define EMBER_AF_PRINT_SAMPLE_MFG_SPECIFIC_CLUSTER_2 0x0E20
#define EMBER_AF_PRINT_OTA_CONFIGURATION_CLUSTER 0x0E40
#define EMBER_AF_PRINT_MFGLIB_CLUSTER 0x0E80
#define EMBER_AF_PRINT_SL_WWAH_CLUSTER 0x0F01
#define EMBER_AF_PRINT_BITS { 0x17, 0x90, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00 }
#define EMBER_AF_PRINT_NAMES {                              \
    "Core",                                                 \
    "Debug",                                                \
    "Application",                                          \
    "Security",                                             \
    "Attributes",                                           \
    "Reporting",                                            \
    "Service discovery",                                    \
    "Registration",                                         \
    "ZDO (ZigBee Device Object)",                           \
    "Custom messages (1)",                                  \
    "Custom messages (2)",                                  \
    "Custom messages (3)",                                  \
    "Basic",                                                \
    "Power Configuration",                                  \
    "Device Temperature Configuration",                     \
    "Identify",                                             \
    "Groups",                                               \
    "Scenes",                                               \
    "On/off",                                               \
    "On/off Switch Configuration",                          \
    "Level Control",                                        \
    "Alarms",                                               \
    "Time",                                                 \
    "RSSI Location",                                        \
    "Binary Input (Basic)",                                 \
    "Commissioning",                                        \
    "Partition",                                            \
    "Over the Air Bootloading",                             \
    "Power Profile",                                        \
    "Appliance Control",                                    \
    "Poll Control",                                         \
    "Green Power",                                          \
    "Keep-Alive",                                           \
    "Shade Configuration",                                  \
    "Door Lock",                                            \
    "Window Covering",                                      \
    "Barrier Control",                                      \
    "Pump Configuration and Control",                       \
    "Thermostat",                                           \
    "Fan Control",                                          \
    "Dehumidification Control",                             \
    "Thermostat User Interface Configuration",              \
    "Color Control",                                        \
    "Ballast Configuration",                                \
    "Illuminance Measurement",                              \
    "Illuminance Level Sensing",                            \
    "Temperature Measurement",                              \
    "Pressure Measurement",                                 \
    "Flow Measurement",                                     \
    "Relative Humidity Measurement",                        \
    "Occupancy Sensing",                                    \
    "Carbon Monoxide Concentration Measurement",            \
    "Carbon Dioxide Concentration Measurement",             \
    "Ethylene Concentration Measurement",                   \
    "Ethylene Oxide Concentration Measurement",             \
    "Hydrogen Concentration Measurement",                   \
    "Hydrogen Sulphide Concentration Measurement",          \
    "Nitric Oxide Concentration Measurement",               \
    "Nitrogen Dioxide Concentration Measurement",           \
    "Oxygen Concentration Measurement",                     \
    "Ozone Concentration Measurement",                      \
    "Sulfur Dioxide Concentration Measurement",             \
    "Dissolved Oxygen Concentration Measurement",           \
    "Bromate Concentration Measurement",                    \
    "Chloramines Concentration Measurement",                \
    "Chlorine Concentration Measurement",                   \
    "Fecal coliform and E. Coli Concentration Measurement", \
    "Fluoride Concentration Measurement",                   \
    "Haloacetic Acids Concentration Measurement",           \
    "Total Trihalomethanes Concentration Measurement",      \
    "Total Coliform Bacteria Concentration Measurement",    \
    "Turbidity Concentration Measurement",                  \
    "Copper Concentration Measurement",                     \
    "Lead Concentration Measurement",                       \
    "Manganese Concentration Measurement",                  \
    "Sulfate Concentration Measurement",                    \
    "Bromodichloromethane Concentration Measurement",       \
    "Bromoform Concentration Measurement",                  \
    "Chlorodibromomethane Concentration Measurement",       \
    "Chloroform Concentration Measurement",                 \
    "Sodium Concentration Measurement",                     \
    "IAS Zone",                                             \
    "IAS ACE",                                              \
    "IAS WD",                                               \
    "Generic Tunnel",                                       \
    "BACnet Protocol Tunnel",                               \
    "11073 Protocol Tunnel",                                \
    "ISO 7816 Protocol Tunnel",                             \
    "Price",                                                \
    "Demand Response and Load Control",                     \
    "Simple Metering",                                      \
    "Messaging",                                            \
    "Tunneling",                                            \
    "Prepayment",                                           \
    "Energy Management",                                    \
    "Calendar",                                             \
    "Device Management",                                    \
    "Events",                                               \
    "MDU Pairing",                                          \
    "Sub-GHz",                                              \
    "Key Establishment",                                    \
    "Information",                                          \
    "Data Sharing",                                         \
    "Gaming",                                               \
    "Data Rate Control",                                    \
    "Voice over ZigBee",                                    \
    "Chatting",                                             \
    "Payment",                                              \
    "Billing",                                              \
    "Appliance Identification",                             \
    "Meter Identification",                                 \
    "Appliance Events and Alert",                           \
    "Appliance Statistics",                                 \
    "Electrical Measurement",                               \
    "Diagnostics",                                          \
    "ZLL Commissioning",                                    \
    "Sample Mfg Specific Cluster",                          \
    "Sample Mfg Specific Cluster 2",                        \
    "Configuration Cluster",                                \
    "MFGLIB Cluster",                                       \
    "SL Works With All Hubs",                               \
    NULL                                                    \
}
#define EMBER_AF_PRINT_NAME_NUMBER 121

#define EMBER_AF_SUPPORT_COMMAND_DISCOVERY

// Generated plugin macros

// Use this macro to check if ADC plugin is included
#define EMBER_AF_PLUGIN_ADC

// Use this macro to check if Address Table plugin is included
#define EMBER_AF_PLUGIN_ADDRESS_TABLE
// User options for plugin Address Table
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_SIZE 2
#define EMBER_AF_PLUGIN_ADDRESS_TABLE_TRUST_CENTER_CACHE_SIZE 2

// Use this macro to check if Antenna Stub plugin is included
#define EMBER_AF_PLUGIN_ANTENNA_STUB

// Use this macro to check if Binding Table Library plugin is included
#define EMBER_AF_PLUGIN_BINDING_TABLE_LIBRARY
// User options for plugin Binding Table Library
#define EMBER_BINDING_TABLE_SIZE 3

// Use this macro to check if CCM* Encryption plugin is included
#define EMBER_AF_PLUGIN_CCM_ENCRYPTION
// User options for plugin CCM* Encryption
#define EMBER_AF_PLUGIN_CCM_ENCRYPTION_SOFTWARE_CCM
#define USE_SOFTWARE_CCM

// Use this macro to check if Radio Coexistence Stub plugin is included
#define EMBER_AF_PLUGIN_COEXISTENCE_STUB

// Use this macro to check if Debug Basic Library plugin is included
#define EMBER_AF_PLUGIN_DEBUG_BASIC_LIBRARY

// Use this macro to check if Debug JTAG plugin is included
#define EMBER_AF_PLUGIN_DEBUG_JTAG

// Use this macro to check if Ember Minimal Printf plugin is included
#define EMBER_AF_PLUGIN_EMBER_MINIMAL_PRINTF

// Use this macro to check if Form and Join Library plugin is included
#define EMBER_AF_PLUGIN_FORM_AND_JOIN

// Use this macro to check if General Response Commands plugin is included
#define EMBER_AF_PLUGIN_GENERAL_RESPONSE_COMMANDS

// Use this macro to check if Groups Server Cluster plugin is included
#define EMBER_AF_PLUGIN_GROUPS_SERVER

// Use this macro to check if HAL Library plugin is included
#define EMBER_AF_PLUGIN_HAL_LIBRARY

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

// Use this macro to check if Idle/Sleep plugin is included
#define EMBER_AF_PLUGIN_IDLE_SLEEP
// User options for plugin Idle/Sleep
#define EMBER_AF_PLUGIN_IDLE_SLEEP_MINIMUM_SLEEP_DURATION_MS 5
#define EMBER_AF_PLUGIN_IDLE_SLEEP_BACKOFF_SLEEP_MS 0

// Use this macro to check if Interpan plugin is included
#define EMBER_AF_PLUGIN_INTERPAN
// User options for plugin Interpan
#define EMBER_AF_PLUGIN_INTERPAN_DELIVER_TO PRIMARY_ENDPOINT
#define EMBER_AF_PLUGIN_INTERPAN_DELIVER_TO_SPECIFIED_ENDPOINT_VALUE 1

// Use this macro to check if Level Control Server Cluster plugin is included
#define EMBER_AF_PLUGIN_LEVEL_CONTROL
// User options for plugin Level Control Server Cluster
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MAXIMUM_LEVEL 255
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_MINIMUM_LEVEL 0
#define EMBER_AF_PLUGIN_LEVEL_CONTROL_RATE 0

// Use this macro to check if mbed TLS plugin is included
#define EMBER_AF_PLUGIN_MBEDTLS

// Use this macro to check if On/Off Server Cluster plugin is included
#define EMBER_AF_PLUGIN_ON_OFF

// Use this macro to check if Power Amplifier plugin is included
#define EMBER_AF_PLUGIN_PA

// Use this macro to check if Packet Validate Library plugin is included
#define EMBER_AF_PLUGIN_PACKET_VALIDATE_LIBRARY

// Use this macro to check if Packet Trace Interface plugin is included
#define EMBER_AF_PLUGIN_PTI

// Use this macro to check if RAIL Library plugin is included
#define EMBER_AF_PLUGIN_RAIL_LIBRARY

// Use this macro to check if Scenes Server Cluster plugin is included
#define EMBER_AF_PLUGIN_SCENES
// User options for plugin Scenes Server Cluster
#define EMBER_AF_PLUGIN_SCENES_TABLE_SIZE 8
#define EMBER_AF_PLUGIN_SCENES_USE_TOKENS

// Use this macro to check if Serial plugin is included
#define EMBER_AF_PLUGIN_SERIAL

// Use this macro to check if Simulated EEPROM version 1 Library plugin is included
#define EMBER_AF_PLUGIN_SIM_EEPROM1
// User options for plugin Simulated EEPROM version 1 Library

// Use this macro to check if Simple Main plugin is included
#define EMBER_AF_PLUGIN_SIMPLE_MAIN

// Use this macro to check if Source Route Library plugin is included
#define EMBER_AF_PLUGIN_SOURCE_ROUTE_LIBRARY
// User options for plugin Source Route Library
#define EMBER_SOURCE_ROUTE_TABLE_SIZE 7

// Use this macro to check if Stack Diagnostics plugin is included
#define EMBER_AF_PLUGIN_STACK_DIAGNOSTICS
// User options for plugin Stack Diagnostics

// Use this macro to check if Strong Random plugin is included
#define EMBER_AF_PLUGIN_STRONG_RANDOM
// User options for plugin Strong Random
#define EMBER_AF_PLUGIN_STRONG_RANDOM_RADIO_PRNG
#define USE_RADIO_API_FOR_TRNG

// Use this macro to check if ZCL Framework Core plugin is included
#define EMBER_AF_PLUGIN_ZCL_FRAMEWORK_CORE
// User options for plugin ZCL Framework Core
#define EMBER_AF_PLUGIN_ZCL_FRAMEWORK_CORE_CLI_ENABLED
#define ZA_CLI_FULL

// Use this macro to check if ZigBee PRO Stack Library plugin is included
#define EMBER_AF_PLUGIN_ZIGBEE_PRO_LIBRARY
// User options for plugin ZigBee PRO Stack Library
#define EMBER_MAX_END_DEVICE_CHILDREN 6
#define EMBER_PACKET_BUFFER_COUNT 75
#define EMBER_END_DEVICE_KEEP_ALIVE_SUPPORT_MODE EMBER_KEEP_ALIVE_SUPPORT_ALL
#define EMBER_END_DEVICE_POLL_TIMEOUT MINUTES_256
#define EMBER_END_DEVICE_POLL_TIMEOUT_SHIFT 6
#define EMBER_LINK_POWER_DELTA_INTERVAL 300
#define EMBER_APS_UNICAST_MESSAGE_COUNT 10
#define EMBER_BROADCAST_TABLE_SIZE 15
#define EMBER_NEIGHBOR_TABLE_SIZE 16

// Use this macro to check if ZLL Commissioning Common plugin is included
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_COMMON
// User options for plugin ZLL Commissioning Common
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_COMMON_PRIMARY_CHANNEL_MASK 0x02108800
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_COMMON_SCAN_SECONDARY_CHANNELS
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_COMMON_SECONDARY_CHANNEL_MASK 0x05EF7000
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_COMMON_RADIO_TX_POWER 3
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_COMMON_ZIGBEE3_SUPPORT

// Use this macro to check if ZLL Commissioning Network plugin is included
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_NETWORK
#define EMBER_AF_DISABLE_FORM_AND_JOIN_TICK
// User options for plugin ZLL Commissioning Network
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_NETWORK_JOINABLE_SCAN_TIMEOUT_MINUTES 1
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_NETWORK_EXTENDED_PAN_ID { 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }

// Use this macro to check if ZLL Commissioning Server plugin is included
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SERVER
// User options for plugin ZLL Commissioning Server
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SERVER_RX_ON_AT_STARTUP_PERIOD 300
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SERVER_DEFAULT_RADIO_CHANNEL 11
#define EMBER_AF_PLUGIN_ZLL_COMMISSIONING_SERVER_REMOTE_RESET_ALLOWED

// Use this macro to check if ZLL Identify Server plugin is included
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER
// User options for plugin ZLL Identify Server
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_EVENT_DELAY 1024
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_BLINK_EVENTS 2
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_BREATHE_EVENTS 4
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_OKAY_EVENTS 6
#define EMBER_AF_PLUGIN_ZLL_IDENTIFY_SERVER_CHANNEL_CHANGE_EVENTS 8

// Use this macro to check if ZLL Level Control Server Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_LEVEL_CONTROL_SERVER

// Use this macro to check if ZigBee Light Link Library plugin is included
#define EMBER_AF_PLUGIN_ZLL_LIBRARY
// User options for plugin ZigBee Light Link Library
#define EMBER_ZLL_GROUP_ADDRESSES 0
#define EMBER_ZLL_RSSI_THRESHOLD -40

// Use this macro to check if ZLL On/Off Server Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_ON_OFF_SERVER

// Use this macro to check if ZLL Scenes Server Cluster Enhancements plugin is included
#define EMBER_AF_PLUGIN_ZLL_SCENES_SERVER

// Use this macro to check if ZLL Utility Client Cluster plugin is included
#define EMBER_AF_PLUGIN_ZLL_UTILITY_CLIENT

// Use this macro to check if ZLL Utility Server Cluster plugin is included
#define EMBER_AF_PLUGIN_ZLL_UTILITY_SERVER

// Generated API headers

// API adc from ADC plugin
#define EMBER_AF_API_ADC "../../../../../../../../platform/base/hal/plugin/adc/adc.h"

// API antenna from Antenna Stub plugin
#define EMBER_AF_API_ANTENNA "../../../../../../../../platform/base/hal/plugin/antenna/antenna.h"

// API coexistence from Radio Coexistence Stub plugin
#define EMBER_AF_API_COEXISTENCE "../../../../../../../../platform/radio/rail_lib/plugin/coexistence/protocol/ieee802154/coexistence-802154.h"

// API rail-library from RAIL Library plugin
#define EMBER_AF_API_RAIL_LIBRARY "../../../../../../../../platform/radio/rail_lib/common/rail.h"

// API serial from Serial plugin
#define EMBER_AF_API_SERIAL "../../../../../../../../platform/base/hal/plugin/serial/serial.h"

// API command-interpreter2 from ZCL Framework Core plugin
#define EMBER_AF_API_COMMAND_INTERPRETER2 "../../../../../util/serial/command-interpreter2.h"

// API zll-profile from ZLL Commissioning Common plugin
#define EMBER_AF_API_ZLL_PROFILE "../../../../plugin/zll-commissioning-common/zll-commissioning.h"

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

#ifdef EMBER_SERIAL0_MODE
#undef EMBER_SERIAL0_MODE
#endif
#define EMBER_SERIAL0_MODE EMBER_SERIAL_FIFO

#ifdef EMBER_SERIAL0_RX_QUEUE_SIZE
#undef EMBER_SERIAL0_RX_QUEUE_SIZE
#endif
#define EMBER_SERIAL0_RX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL0_TX_QUEUE_SIZE
#undef EMBER_SERIAL0_TX_QUEUE_SIZE
#endif
#define EMBER_SERIAL0_TX_QUEUE_SIZE 128

#ifdef EMBER_SERIAL0_BLOCKING
#undef EMBER_SERIAL0_BLOCKING
#endif
#define EMBER_SERIAL0_BLOCKING

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
    emberSerialInit(0, BAUD_115200, PARITY_NONE, 1); \
    emberSerialInit(1, BAUD_115200, PARITY_NONE, 1); \
  } while (0)

#endif // SILABS_ZNET_CONFIG
