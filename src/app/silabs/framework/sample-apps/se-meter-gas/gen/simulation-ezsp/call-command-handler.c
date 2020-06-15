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
      case ZCL_KEY_ESTABLISHMENT_CLUSTER_ID:
        result = emberAfKeyEstablishmentClusterClientCommandParse(cmd);
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
        result = status(false, true, cmd->mfgSpecific);
        break;
      case ZCL_SIMPLE_METERING_CLUSTER_ID:
        result = emberAfSimpleMeteringClusterServerCommandParse(cmd);
        break;
      case ZCL_KEY_ESTABLISHMENT_CLUSTER_ID:
        result = emberAfKeyEstablishmentClusterServerCommandParse(cmd);
        break;
      default:
        // Unrecognized cluster ID, error status will apply.
        break;
    }
  }
  return result;
}

// Cluster: Simple Metering, server
EmberAfStatus emberAfSimpleMeteringClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_GET_PROFILE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t intervalChannel;  // Ver.: always
        uint32_t endTime;  // Ver.: always
        uint8_t numberOfPeriods;  // Ver.: always
        // Command is fixed length: 6
        if (cmd->bufLen < payloadOffset + 6u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        intervalChannel = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        endTime = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        numberOfPeriods = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterGetProfileCallback(intervalChannel,
                                                                    endTime,
                                                                    numberOfPeriods);
        break;
      }
      case ZCL_REQUEST_MIRROR_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t endpointId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        endpointId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterRequestMirrorResponseCallback(endpointId);
        break;
      }
      case ZCL_MIRROR_REMOVED_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t endpointId;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        endpointId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterMirrorRemovedCallback(endpointId);
        break;
      }
      case ZCL_REQUEST_FAST_POLL_MODE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t fastPollUpdatePeriod;  // Ver.: always
        uint8_t duration;  // Ver.: always
        // Command is fixed length: 2
        if (cmd->bufLen < payloadOffset + 2u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        fastPollUpdatePeriod = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        duration = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterRequestFastPollModeCallback(fastPollUpdatePeriod,
                                                                             duration);
        break;
      }
      case ZCL_START_SAMPLING_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint32_t issuerEventId;  // Ver.: always
        uint32_t startSamplingTime;  // Ver.: always
        uint8_t sampleType;  // Ver.: always
        uint16_t sampleRequestInterval;  // Ver.: always
        uint16_t maxNumberOfSamples;  // Ver.: always
        // Command is fixed length: 13
        if (cmd->bufLen < payloadOffset + 13u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        issuerEventId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        startSamplingTime = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        sampleType = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        sampleRequestInterval = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        maxNumberOfSamples = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterStartSamplingCallback(issuerEventId,
                                                                       startSamplingTime,
                                                                       sampleType,
                                                                       sampleRequestInterval,
                                                                       maxNumberOfSamples);
        break;
      }
      case ZCL_GET_SAMPLED_DATA_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t sampleId;  // Ver.: always
        uint32_t earliestSampleTime;  // Ver.: always
        uint8_t sampleType;  // Ver.: always
        uint16_t numberOfSamples;  // Ver.: always
        // Command is fixed length: 9
        if (cmd->bufLen < payloadOffset + 9u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        sampleId = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        earliestSampleTime = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        sampleType = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        numberOfSamples = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterGetSampledDataCallback(sampleId,
                                                                        earliestSampleTime,
                                                                        sampleType,
                                                                        numberOfSamples);
        break;
      }
      case ZCL_MIRROR_REPORT_ATTRIBUTE_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t notificationScheme;  // Ver.: always
        uint8_t* notificationFlags;  // Ver.: always
        // Command is fixed length: 1
        if (cmd->bufLen < payloadOffset + 1u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        notificationScheme = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        notificationFlags = cmd->buffer + payloadOffset;
        wasHandled = emberAfSimpleMeteringClusterMirrorReportAttributeResponseCallback(notificationScheme,
                                                                                       notificationFlags);
        break;
      }
      case ZCL_RESET_LOAD_LIMIT_COUNTER_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint32_t providerId;  // Ver.: always
        uint32_t issuerEventId;  // Ver.: always
        // Command is fixed length: 8
        if (cmd->bufLen < payloadOffset + 8u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        providerId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        issuerEventId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterResetLoadLimitCounterCallback(providerId,
                                                                               issuerEventId);
        break;
      }
      case ZCL_CHANGE_SUPPLY_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint32_t providerId;  // Ver.: always
        uint32_t issuerEventId;  // Ver.: always
        uint32_t requestDateTime;  // Ver.: always
        uint32_t implementationDateTime;  // Ver.: always
        uint8_t proposedSupplyStatus;  // Ver.: always
        uint8_t supplyControlBits;  // Ver.: always
        // Command is fixed length: 18
        if (cmd->bufLen < payloadOffset + 18u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        providerId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        issuerEventId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        requestDateTime = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        implementationDateTime = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        proposedSupplyStatus = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        supplyControlBits = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterChangeSupplyCallback(providerId,
                                                                      issuerEventId,
                                                                      requestDateTime,
                                                                      implementationDateTime,
                                                                      proposedSupplyStatus,
                                                                      supplyControlBits);
        break;
      }
      case ZCL_LOCAL_CHANGE_SUPPLY_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t proposedSupplyStatus;  // Ver.: always
        // Command is fixed length: 1
        if (cmd->bufLen < payloadOffset + 1u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        proposedSupplyStatus = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterLocalChangeSupplyCallback(proposedSupplyStatus);
        break;
      }
      case ZCL_SET_SUPPLY_STATUS_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint32_t issuerEventId;  // Ver.: always
        uint8_t supplyTamperState;  // Ver.: always
        uint8_t supplyDepletionState;  // Ver.: always
        uint8_t supplyUncontrolledFlowState;  // Ver.: always
        uint8_t loadLimitSupplyState;  // Ver.: always
        // Command is fixed length: 8
        if (cmd->bufLen < payloadOffset + 8u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        issuerEventId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        supplyTamperState = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        supplyDepletionState = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        supplyUncontrolledFlowState = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        loadLimitSupplyState = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterSetSupplyStatusCallback(issuerEventId,
                                                                         supplyTamperState,
                                                                         supplyDepletionState,
                                                                         supplyUncontrolledFlowState,
                                                                         loadLimitSupplyState);
        break;
      }
      case ZCL_SET_UNCONTROLLED_FLOW_THRESHOLD_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint32_t providerId;  // Ver.: always
        uint32_t issuerEventId;  // Ver.: always
        uint16_t uncontrolledFlowThreshold;  // Ver.: always
        uint8_t unitOfMeasure;  // Ver.: always
        uint16_t multiplier;  // Ver.: always
        uint16_t divisor;  // Ver.: always
        uint8_t stabilisationPeriod;  // Ver.: always
        uint16_t measurementPeriod;  // Ver.: always
        // Command is fixed length: 18
        if (cmd->bufLen < payloadOffset + 18u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        providerId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        issuerEventId = emberAfGetInt32u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 4u;
        uncontrolledFlowThreshold = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        unitOfMeasure = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        multiplier = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        divisor = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        stabilisationPeriod = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        measurementPeriod = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfSimpleMeteringClusterSetUncontrolledFlowThresholdCallback(providerId,
                                                                                      issuerEventId,
                                                                                      uncontrolledFlowThreshold,
                                                                                      unitOfMeasure,
                                                                                      multiplier,
                                                                                      divisor,
                                                                                      stabilisationPeriod,
                                                                                      measurementPeriod);
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

// Cluster: Key Establishment, client
EmberAfStatus emberAfKeyEstablishmentClusterClientCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_TERMINATE_KEY_ESTABLISHMENT_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t statusCode;  // Ver.: always
        uint8_t waitTime;  // Ver.: always
        uint16_t keyEstablishmentSuite;  // Ver.: always
        // Command is fixed length: 4
        if (cmd->bufLen < payloadOffset + 4u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        statusCode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        waitTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        keyEstablishmentSuite = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfKeyEstablishmentClusterTerminateKeyEstablishmentCallback(statusCode,
                                                                                     waitTime,
                                                                                     keyEstablishmentSuite);
        break;
      }
      case ZCL_INITIATE_KEY_ESTABLISHMENT_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t requestedKeyEstablishmentSuite;  // Ver.: always
        uint8_t ephemeralDataGenerateTime;  // Ver.: always
        uint8_t confirmKeyGenerateTime;  // Ver.: always
        uint8_t* identity;  // Ver.: always
        // Command is fixed length: 52
        if (cmd->bufLen < payloadOffset + 52u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        requestedKeyEstablishmentSuite = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        ephemeralDataGenerateTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        confirmKeyGenerateTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        identity = cmd->buffer + payloadOffset;
        wasHandled = emberAfKeyEstablishmentClusterInitiateKeyEstablishmentResponseCallback(requestedKeyEstablishmentSuite,
                                                                                            ephemeralDataGenerateTime,
                                                                                            confirmKeyGenerateTime,
                                                                                            identity);
        break;
      }
      case ZCL_EPHEMERAL_DATA_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t* ephemeralData;  // Ver.: always
        // Command is fixed length: 22
        if (cmd->bufLen < payloadOffset + 22u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        ephemeralData = cmd->buffer + payloadOffset;
        wasHandled = emberAfKeyEstablishmentClusterEphemeralDataResponseCallback(ephemeralData);
        break;
      }
      case ZCL_CONFIRM_KEY_DATA_RESPONSE_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t* secureMessageAuthenticationCode;  // Ver.: always
        // Command is fixed length: 16
        if (cmd->bufLen < payloadOffset + 16u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        secureMessageAuthenticationCode = cmd->buffer + payloadOffset;
        wasHandled = emberAfKeyEstablishmentClusterConfirmKeyDataResponseCallback(secureMessageAuthenticationCode);
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

// Cluster: Key Establishment, server
EmberAfStatus emberAfKeyEstablishmentClusterServerCommandParse(EmberAfClusterCommand *cmd)
{
  bool wasHandled = false;
  if (!cmd->mfgSpecific) {
    switch (cmd->commandId) {
      case ZCL_INITIATE_KEY_ESTABLISHMENT_REQUEST_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint16_t keyEstablishmentSuite;  // Ver.: always
        uint8_t ephemeralDataGenerateTime;  // Ver.: always
        uint8_t confirmKeyGenerateTime;  // Ver.: always
        uint8_t* identity;  // Ver.: always
        // Command is fixed length: 52
        if (cmd->bufLen < payloadOffset + 52u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        keyEstablishmentSuite = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 2u;
        ephemeralDataGenerateTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        confirmKeyGenerateTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        identity = cmd->buffer + payloadOffset;
        wasHandled = emberAfKeyEstablishmentClusterInitiateKeyEstablishmentRequestCallback(keyEstablishmentSuite,
                                                                                           ephemeralDataGenerateTime,
                                                                                           confirmKeyGenerateTime,
                                                                                           identity);
        break;
      }
      case ZCL_EPHEMERAL_DATA_REQUEST_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t* ephemeralData;  // Ver.: always
        // Command is fixed length: 22
        if (cmd->bufLen < payloadOffset + 22u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        ephemeralData = cmd->buffer + payloadOffset;
        wasHandled = emberAfKeyEstablishmentClusterEphemeralDataRequestCallback(ephemeralData);
        break;
      }
      case ZCL_CONFIRM_KEY_DATA_REQUEST_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t* secureMessageAuthenticationCode;  // Ver.: always
        // Command is fixed length: 16
        if (cmd->bufLen < payloadOffset + 16u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        secureMessageAuthenticationCode = cmd->buffer + payloadOffset;
        wasHandled = emberAfKeyEstablishmentClusterConfirmKeyDataRequestCallback(secureMessageAuthenticationCode);
        break;
      }
      case ZCL_TERMINATE_KEY_ESTABLISHMENT_COMMAND_ID:
      {
        uint16_t payloadOffset = cmd->payloadStartIndex;
        uint8_t statusCode;  // Ver.: always
        uint8_t waitTime;  // Ver.: always
        uint16_t keyEstablishmentSuite;  // Ver.: always
        // Command is fixed length: 4
        if (cmd->bufLen < payloadOffset + 4u) {
          return EMBER_ZCL_STATUS_MALFORMED_COMMAND;
        }
        statusCode = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        waitTime = emberAfGetInt8u(cmd->buffer, payloadOffset, cmd->bufLen);
        payloadOffset += 1u;
        keyEstablishmentSuite = emberAfGetInt16u(cmd->buffer, payloadOffset, cmd->bufLen);
        wasHandled = emberAfKeyEstablishmentClusterTerminateKeyEstablishmentCallback(statusCode,
                                                                                     waitTime,
                                                                                     keyEstablishmentSuite);
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
