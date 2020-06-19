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
/***************************************************************************//**
 * @file
 * @brief Internal APIs and defines for the Device Table plugin.
 *******************************************************************************
   ******************************************************************************/

#ifndef SILABS_DEVICE_TABLE_INTERNAL_H
#define SILABS_DEVICE_TABLE_INTERNAL_H

uint8_t emAfDeviceTableGetFirstEndpointFromIndex(uint16_t index);

// Internal APIs for printing device information to the CLI
void emAfDeviceTableSave(void);
void emAfDeviceTableLoad(void);
void emAfDeviceTablePrintEUI64(uint8_t *eui64);
void emAfDeviceTablePrintBuffer(uint8_t *buffer, uint16_t bufLen);

// Internal APIs for route repair
void emAfDeviceTableInitiateRouteRepair(EmberNodeId nodeId);
bool emAfDeviceTableShouldDeviceLeave(EmberNodeId nodeId);

// Internal APIs for writing CIE address to new security sensor
void emAfDeviceTableSendCieAddressWrite(EmberNodeId nodeId, uint8_t endpoint);

uint16_t emAfFindFreeDeviceTableIndex(void);
void emAfDeviceTableInit(void);
void emAfDeviceTableUpdateNodeIdInEndpoints(EmberNodeId oldId, EmberNodeId newId);

void emAfPluginDeviceTableDeleteEntry(uint16_t index);

// Callbacks generated by device-table.
void emberAfPluginDeviceTableStateChangeCallback(EmberNodeId nodeId, uint8_t state);
void emberAfPluginDeviceTableNewDeviceCallback(EmberEUI64 eui64);
void emberAfPluginDeviceTableRejoinDeviceCallback(EmberEUI64 newNodeEui64);
void emberAfPluginDeviceTableDeviceLeftCallback(EmberEUI64 newNodeEui64);
void emberAfPluginDeviceTableClearedCallback(void);

// new endpoint APIs
void emAfDeviceTableCopyDeviceTableEntry(uint16_t fromIndex, uint16_t toIndex);
uint8_t emAfDeviceTableNumberOfEndpointsFromIndex(uint16_t index);
EmberAfStatus emAfDeviceTableAddNewEndpoint(uint16_t index, uint8_t newEndpoint);
uint16_t emAfDeviceTableFindNextEndpoint(uint16_t index);
void emAfDeviceTableUpdateNodeId(uint16_t currentNodeId, uint16_t newNodeId);
uint16_t emAfDeviceTableFindIndexNodeIdEndpoint(uint16_t nodeId, uint8_t endpoint);
void emAfDeviceTableUpdateDeviceState(uint16_t index, uint8_t newState);
uint16_t emAfDeviceTableFindFreeDeviceTableIndex(void);
uint16_t emAfDeviceTableFindFirstEndpointNodeId(uint16_t nodeId);
uint16_t emAfDeviceTableFindFirstEndpointIeee(EmberEUI64 eui64);

#define DEVICE_TABLE_UNKNOWN_ENDPOINT 0

#endif //__DEVICE_TABLE_H
