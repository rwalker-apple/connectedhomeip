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
// GENERATED FILE DO NOT MODIFY
// Generated by: generate-zigbee-logger-files.py -y zigbee_logger.yaml

#ifndef _ZIGBEE_EVENT_LOGGER_PRINT_GEN_H_

typedef bool (printFunction)(uint8_t *data, uint16_t dataLength);

bool emberAfPluginZigBeeEventLoggerPrintHexData(uint8_t *data, uint16_t dataLength);
printFunction *emberAfPluginZigBeeEventLoggerLookupPrintFunction(EmberZigbeeLoggerEventTypes type);

#endif  // #ifndef _ZIGBEE_EVENT_LOGGER_PRINT_GEN_H_
