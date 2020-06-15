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
 * @brief APIs and defines for the dynamic block request feature of the OTA
 *        Server plugin.
 *******************************************************************************
   ******************************************************************************/

#ifndef OTA_SERVER_DYNAMIC_BLOCK_PERIOD_H
#define OTA_SERVER_DYNAMIC_BLOCK_PERIOD_H

#ifdef EMBER_AF_PLUGIN_OTA_SERVER_DYNAMIC_MIN_BLOCK_PERIOD_SUPPORT
void    emAfOtaServerDynamicBlockPeriodInit();
void    emAfOtaServerDynamicBlockPeriodTick();
uint8_t emAfOtaServerCheckDynamicBlockPeriodDownload(EmberAfImageBlockRequestCallbackStruct *data);
void    emAfOtaServerCompleteDynamicBlockPeriodDownload(EmberNodeId clientId);
bool    emAfOtaServerDynamicBlockPeriodClientUsesSeconds(EmberNodeId clientId);
#else // EMBER_AF_PLUGIN_OTA_SERVER_DYNAMIC_MIN_BLOCK_PERIOD_SUPPORT
// Stubs
  #define emAfOtaServerDynamicBlockPeriodInit()
  #define emAfOtaServerDynamicBlockPeriodTick()
  #define emAfOtaServerCheckDynamicBlockPeriodDownload(arg) \
  EMBER_ZCL_STATUS_SUCCESS
  #define emAfOtaServerCompleteDynamicBlockPeriodDownload(arg)
  #define emAfOtaServerDynamicBlockPeriodClientUsesSeconds(arg) false
#endif // EMBER_AF_PLUGIN_OTA_SERVER_DYNAMIC_MIN_BLOCK_PERIOD_SUPPORT

#endif // OTA_SERVER_DYNAMIC_BLOCK_PERIOD_H
