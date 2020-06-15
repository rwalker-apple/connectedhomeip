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

// This is a set of generated functions that parse the
// the incomming message, and call appropriate command handler.

#include PLATFORM_HEADER
#ifdef EZSP_HOST
// Includes needed for ember related functions for the EZSP host
#include "stack/include/error.h"
#include "stack/include/ember-types.h"
#include "app/util/ezsp/ezsp-protocol.h"
#include "app/util/ezsp/ezsp.h"
#include "app/util/ezsp/ezsp-utils.h"
#include "app/util/ezsp/serial-interface.h"
#else
// Includes needed for ember related functions for the EM250
#include "stack/include/ember.h"
#endif // EZSP_HOST

#include "app/framework/util/util.h"
#include "af-structs.h"
#include "call-command-handler.h"
#include "command-id.h"
#include "callback.h"

static EmberAfStatus status(bool wasHandled, bool clusterExists, bool mfgSpecific)
{
  if (wasHandled) {
    return EMBER_ZCL_STATUS_SUCCESS;
  } else if (mfgSpecific) {
    return EMBER_ZCL_STATUS_UNSUP_MANUF_CLUSTER_COMMAND;
  } else if (clusterExists) {
    return EMBER_ZCL_STATUS_UNSUP_CLUSTER_COMMAND;
  } else {
    return EMBER_ZCL_STATUS_UNSUPPORTED_CLUSTER;
  }
}

// Main command parsing controller.
EmberAfStatus emberAfClusterSpecificCommandParse(EmberAfClusterCommand *cmd)
{
  EmberAfStatus result = status(false, false, cmd->mfgSpecific);
  if (cmd->direction == (uint8_t)ZCL_DIRECTION_SERVER_TO_CLIENT
      && emberAfContainsClientWithMfgCode(cmd->apsFrame->destinationEndpoint,
                                          cmd->apsFrame->clusterId,
                                          cmd->mfgCode)) {
    switch (cmd->apsFrame->clusterId) {
      case ZCL_IDENTIFY_CLUSTER_ID:
        result = emberAfIdentifyClusterClientCommandParse(cmd);
        break;
      case ZCL_OTA_BOOTLOAD_CLUSTER_ID:
        result = status(false, true, cmd->mfgSpecific);
        break;
      default:
        // Unrecognized cluster ID, error status will apply.
        break;
    }
  } else if (cmd->direction == (uint8_t)ZCL_DIRECTION_CLIENT_TO_SERVER
             && emberAfContainsServerWithMfgCode(cmd->apsFrame->destinationEndpoint,
                                                 cmd->apsFrame->clusterId,
                                                 cmd->mfgCode)) {
    switch (cmd->apsFrame->clusterId) {
      case ZCL_BASIC_CLUSTER_ID:
        result = emberAfBasicClusterServerCommandParse(cmd);
        break;
      case ZCL_POWER_CONFIG_CLUSTER_ID:
        result = status(false, true, cmd->mfgSpecific);
        break;
      case ZCL_IDENTIFY_CLUSTER_ID:
        result = emberAfIdentifyClusterServerCommandParse(cmd);
        break;
      case ZCL_POLL_CONTROL_CLUSTER_ID:
        result = emberAfPollControlClusterServerCommandParse(cmd);
        break;
      case ZCL_TEMP_MEASUREMENT_CLUSTER_ID:
        result = status(false, true, cmd->mfgSpecific);
        break;
      case ZCL_IAS_ZONE_CLUSTER_ID:
        result = emberAfIasZoneClusterServerCommandParse(cmd);
        break;
      case ZCL_DIAGNOSTICS_CLUSTER_ID:
        result = status(false, true, cmd->mfgSpecific);
        break;
      case ZCL_OTA_CONFIGURATION_CLUSTER_ID:
        result = emberAfOtaConfigurationClusterServerCommandParse(cmd);
        break;
      case ZCL_MFGLIB_CLUSTER_ID:
        result = emberAfMfglibClusterServerCommandParse(cmd);
        break;
      case ZCL_SL_WWAH_CLUSTER_ID:
        result = emberAfSlWwahClusterServerCommandParse(cmd);
        break;
      default:
        // Unrecognized cluster ID, error status will apply.
        break;
    }
  }
  return result;
}

// Cluster: Basic, server
EmberAfStatus emberAfBasicClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_RESET_TO_FACTORY_DEFAULTS_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfBasicClusterResetToFactoryDefaultsCallback();
        break;
      }
      default:
      {
        // Unrecognized command ID, error status will apply.
        break;
      }
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: Identify, client
EmberAfStatus emberAfIdentifyClusterClientCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_IDENTIFY_QUERY_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t timeout;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        timeout = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfIdentifyClusterIdentifyQueryResponseCallback(timeout);
        break;
      }
      default:
      {
        // Unrecognized command ID, error status will apply.
        break;
      }
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: Identify, server
EmberAfStatus emberAfIdentifyClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_IDENTIFY_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t identifyTime;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        identifyTime = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfIdentifyClusterIdentifyCallback(identifyTime);
        break;
      }
      case ZCL_IDENTIFY_QUERY_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfIdentifyClusterIdentifyQueryCallback();
        break;
      }
      default:
      {
        // Unrecognized command ID, error status will apply.
        break;
      }
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: Poll Control, server
EmberAfStatus emberAfPollControlClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_CHECK_IN_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t startFastPolling;  // Ver.: always
        uint16_t fastPollTimeout;  // Ver.: always
        // Command is fixed length: 3
        if (cmd->bufLen < payloadOffset + 3u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        startFastPolling = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        fastPollTimeout = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfPollControlClusterCheckInResponseCallback(startFastPolling,
                                                                      fastPollTimeout);
        break;
      }
      case ZCL_FAST_POLL_STOP_COMMAND_ID:
      {
        // Command is fixed length: 0
        wasHandled = emberAfPollControlClusterFastPollStopCallback();
        break;
      }
      case ZCL_SET_LONG_POLL_INTERVAL_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint32_t newLongPollInterval;  // Ver.: always
        // Command is fixed length: 4
        if (cmd->bufLen < payloadOffset + 4u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        newLongPollInterval = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfPollControlClusterSetLongPollIntervalCallback(newLongPollInterval);
        break;
      }
      case ZCL_SET_SHORT_POLL_INTERVAL_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t newShortPollInterval;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        newShortPollInterval = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfPollControlClusterSetShortPollIntervalCallback(newShortPollInterval);
        break;
      }
      default:
      {
        // Unrecognized command ID, error status will apply.
        break;
      }
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: IAS Zone, server
EmberAfStatus emberAfIasZoneClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_ZONE_ENROLL_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t enrollResponseCode;  // Ver.: always
        uint8_t zoneId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        enrollResponseCode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        zoneId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfIasZoneClusterZoneEnrollResponseCallback(enrollResponseCode,
                                                                     zoneId);
        break;
      }
      default:
      {
        // Unrecognized command ID, error status will apply.
        break;
      }
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: Configuration Cluster, server
EmberAfStatus emberAfOtaConfigurationClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (cmd->mfgSpecific) {
    if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_SET_TOKEN_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint16_t token;  // Ver.: always
      uint8_t* data;  // Ver.: always
      // Command is not a fixed length
      if (cmd->bufLen < payloadOffset + 2u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      token = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 2u;
      if (cmd->bufLen < payloadOffset + emberAfStringLength(cmd->buffer + payloadOffset) + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      data = emberAfGetString(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfOtaConfigurationClusterSetTokenCallback(token,
                                                                  data);
    } else if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_LOCK_TOKENS_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfOtaConfigurationClusterLockTokensCallback();
    } else if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_READ_TOKENS_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint16_t token;  // Ver.: always
      // Command is fixed length: 2
      if (cmd->bufLen < payloadOffset + 2u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      token = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfOtaConfigurationClusterReadTokensCallback(token);
    } else if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_UNLOCK_TOKENS_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t* data;  // Ver.: always
      // Command is not a fixed length
      if (cmd->bufLen < payloadOffset + emberAfStringLength(cmd->buffer + payloadOffset) + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      data = emberAfGetString(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfOtaConfigurationClusterUnlockTokensCallback(data);
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: MFGLIB Cluster, server
EmberAfStatus emberAfMfglibClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (cmd->mfgSpecific) {
    if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_STREAM_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t channel;  // Ver.: always
      int8_t power;  // Ver.: always
      uint16_t time;  // Ver.: always
      // Command is fixed length: 4
      if (cmd->bufLen < payloadOffset + 4u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      channel = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      power = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      time = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfMfglibClusterStreamCallback(channel,
                                                      power,
                                                      time);
    } else if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_TONE_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t channel;  // Ver.: always
      int8_t power;  // Ver.: always
      uint16_t time;  // Ver.: always
      // Command is fixed length: 4
      if (cmd->bufLen < payloadOffset + 4u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      channel = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      power = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      time = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfMfglibClusterToneCallback(channel,
                                                    power,
                                                    time);
    } else if (cmd->mfgCode == 0x1002 && cmd->commandId == ZCL_RX_MODE_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t channel;  // Ver.: always
      int8_t power;  // Ver.: always
      uint16_t time;  // Ver.: always
      // Command is fixed length: 4
      if (cmd->bufLen < payloadOffset + 4u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      channel = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      power = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      time = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfMfglibClusterRxModeCallback(channel,
                                                      power,
                                                      time);
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}

// Cluster: SL Works With All Hubs, server
EmberAfStatus emberAfSlWwahClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (cmd->mfgSpecific) {
    if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_APS_LINK_KEY_AUTHORIZATION_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t numberExemptClusters;  // Ver.: always
      uint8_t* clusterId;  // Ver.: always
      // Command is not a fixed length
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      numberExemptClusters = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      if ( numberExemptClusters != 0 ) {
        // Array is conditionally present based on expression: numberExemptClusters!=0
        clusterId = cmd->buffer + payloadOffset;
      } else {
        clusterId = NULL;
      }
      wasHandled = emberAfSlWwahClusterEnableApsLinkKeyAuthorizationCallback(numberExemptClusters,
                                                                             clusterId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_APS_LINK_KEY_AUTHORIZATION_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t numberExemptClusters;  // Ver.: always
      uint8_t* clusterId;  // Ver.: always
      // Command is not a fixed length
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      numberExemptClusters = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      if ( numberExemptClusters != 0 ) {
        // Array is conditionally present based on expression: numberExemptClusters!=0
        clusterId = cmd->buffer + payloadOffset;
      } else {
        clusterId = NULL;
      }
      wasHandled = emberAfSlWwahClusterDisableApsLinkKeyAuthorizationCallback(numberExemptClusters,
                                                                              clusterId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_APS_LINK_KEY_AUTHORIZATION_QUERY_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint16_t clusterId;  // Ver.: always
      // Command is fixed length: 2
      if (cmd->bufLen < payloadOffset + 2u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      clusterId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterApsLinkKeyAuthorizationQueryCallback(clusterId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_REQUEST_NEW_APS_LINK_KEY_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterRequestNewApsLinkKeyCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_WWAH_APP_EVENT_RETRY_ALGORITHM_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t firstBackoffTimeSeconds;  // Ver.: always
      uint8_t backoffSeqCommonRatio;  // Ver.: always
      uint32_t maxBackoffTimeSeconds;  // Ver.: always
      uint8_t maxRedeliveryAttempts;  // Ver.: always
      // Command is fixed length: 7
      if (cmd->bufLen < payloadOffset + 7u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      firstBackoffTimeSeconds = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      backoffSeqCommonRatio = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      maxBackoffTimeSeconds = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 4u;
      maxRedeliveryAttempts = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterEnableWwahAppEventRetryAlgorithmCallback(firstBackoffTimeSeconds,
                                                                                backoffSeqCommonRatio,
                                                                                maxBackoffTimeSeconds,
                                                                                maxRedeliveryAttempts);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_WWAH_APP_EVENT_RETRY_ALGORITHM_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableWwahAppEventRetryAlgorithmCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_REQUEST_TIME_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterRequestTimeCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_WWAH_REJOIN_ALGORITHM_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint16_t fastRejoinTimeoutSeconds;  // Ver.: always
      uint16_t durationBetweenRejoinsSeconds;  // Ver.: always
      uint16_t fastRejoinFirstBackoffSeconds;  // Ver.: always
      uint16_t maxBackoffTimeSeconds;  // Ver.: always
      uint16_t maxBackoffIterations;  // Ver.: always
      // Command is fixed length: 10
      if (cmd->bufLen < payloadOffset + 10u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      fastRejoinTimeoutSeconds = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 2u;
      durationBetweenRejoinsSeconds = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 2u;
      fastRejoinFirstBackoffSeconds = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 2u;
      maxBackoffTimeSeconds = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 2u;
      maxBackoffIterations = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterEnableWwahRejoinAlgorithmCallback(fastRejoinTimeoutSeconds,
                                                                         durationBetweenRejoinsSeconds,
                                                                         fastRejoinFirstBackoffSeconds,
                                                                         maxBackoffTimeSeconds,
                                                                         maxBackoffIterations);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_WWAH_REJOIN_ALGORITHM_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableWwahRejoinAlgorithmCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_SET_IAS_ZONE_ENROLLMENT_METHOD_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t enrollmentMode;  // Ver.: always
      // Command is fixed length: 1
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      enrollmentMode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterSetIasZoneEnrollmentMethodCallback(enrollmentMode);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_CLEAR_BINDING_TABLE_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterClearBindingTableCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_PERIODIC_ROUTER_CHECK_INS_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint16_t checkInInterval;  // Ver.: always
      // Command is fixed length: 2
      if (cmd->bufLen < payloadOffset + 2u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      checkInInterval = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterEnablePeriodicRouterCheckInsCallback(checkInInterval);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_PERIODIC_ROUTER_CHECK_INS_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisablePeriodicRouterCheckInsCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_SET_MAC_POLL_FAILURE_WAIT_TIME_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t waitTime;  // Ver.: always
      // Command is fixed length: 1
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      waitTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterSetMacPollFailureWaitTimeCallback(waitTime);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_SET_PENDING_NETWORK_UPDATE_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t channel;  // Ver.: always
      uint16_t panId;  // Ver.: always
      // Command is fixed length: 3
      if (cmd->bufLen < payloadOffset + 3u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      channel = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      panId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterSetPendingNetworkUpdateCallback(channel,
                                                                       panId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_REQUIRE_APS_ACKS_ON_UNICASTS_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t numberExemptClusters;  // Ver.: always
      uint8_t* clusterId;  // Ver.: always
      // Command is not a fixed length
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      numberExemptClusters = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      if ( numberExemptClusters != 0 ) {
        // Array is conditionally present based on expression: numberExemptClusters!=0
        clusterId = cmd->buffer + payloadOffset;
      } else {
        clusterId = NULL;
      }
      wasHandled = emberAfSlWwahClusterRequireApsAcksOnUnicastsCallback(numberExemptClusters,
                                                                        clusterId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_REMOVE_APS_ACKS_ON_UNICASTS_REQUIREMENT_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterRemoveApsAcksOnUnicastsRequirementCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_APS_ACK_REQUIREMENT_QUERY_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterApsAckRequirementQueryCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DEBUG_REPORT_QUERY_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t debugReportId;  // Ver.: always
      // Command is fixed length: 1
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      debugReportId = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterDebugReportQueryCallback(debugReportId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_SURVEY_BEACONS_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t standardBeacons;  // Ver.: always
      // Command is fixed length: 1
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      standardBeacons = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      wasHandled = emberAfSlWwahClusterSurveyBeaconsCallback(standardBeacons);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_OTA_DOWNGRADES_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableOtaDowngradesCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_MGMT_LEAVE_WITHOUT_REJOIN_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableMgmtLeaveWithoutRejoinCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_TOUCHLINK_INTERPAN_MESSAGE_SUPPORT_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableTouchlinkInterpanMessageSupportCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_WWAH_PARENT_CLASSIFICATION_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterEnableWwahParentClassificationCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_WWAH_PARENT_CLASSIFICATION_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableWwahParentClassificationCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_TC_SECURITY_ON_NTWK_KEY_ROTATION_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterEnableTcSecurityOnNtwkKeyRotationCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_WWAH_BAD_PARENT_RECOVERY_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterEnableWwahBadParentRecoveryCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_WWAH_BAD_PARENT_RECOVERY_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableWwahBadParentRecoveryCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_ENABLE_CONFIGURATION_MODE_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterEnableConfigurationModeCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_DISABLE_CONFIGURATION_MODE_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterDisableConfigurationModeCallback();
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_USE_TRUST_CENTER_FOR_CLUSTER_SERVER_COMMAND_ID) {
      uint16_t payloadOffset = cmd->payloadStartIndex;
      uint8_t numberOfClusters;  // Ver.: always
      uint8_t* clusterId;  // Ver.: always
      // Command is not a fixed length
      if (cmd->bufLen < payloadOffset + 1u) {
        return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
      }
      numberOfClusters = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
      payloadOffset += 1u;
      if ( numberOfClusters != 0 ) {
        // Array is conditionally present based on expression: numberOfClusters!=0
        clusterId = cmd->buffer + payloadOffset;
      } else {
        clusterId = NULL;
      }
      wasHandled = emberAfSlWwahClusterUseTrustCenterForClusterServerCallback(numberOfClusters,
                                                                              clusterId);
    } else if (cmd->mfgCode == 0x1217 && cmd->commandId == ZCL_TRUST_CENTER_FOR_CLUSTER_SERVER_QUERY_COMMAND_ID) {
      // Command is fixed length: 0
      wasHandled = emberAfSlWwahClusterTrustCenterForClusterServerQueryCallback();
    }
  }
  return status(wasHandled, true, cmd->mfgSpecific);
}
