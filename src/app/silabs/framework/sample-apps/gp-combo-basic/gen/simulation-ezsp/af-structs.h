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
#ifndef SILABS_EMBER_AF_STRUCTS
#define SILABS_EMBER_AF_STRUCTS

// Generated structs from the metadata
// Struct for IasAceZoneStatusResult
typedef struct _IasAceZoneStatusResult {
  uint8_t zoneId;
  uint16_t zoneStatus;
} IasAceZoneStatusResult;

// Struct for ReadAttributeStatusRecord
typedef struct _ReadAttributeStatusRecord {
  uint16_t attributeId;
  uint8_t status;
  uint8_t attributeType;
  uint8_t* attributeLocation;
} ReadAttributeStatusRecord;

// Struct for WriteAttributeRecord
typedef struct _WriteAttributeRecord {
  uint16_t attributeId;
  uint8_t attributeType;
  uint8_t* attributeLocation;
} WriteAttributeRecord;

// Struct for WriteAttributeStatusRecord
typedef struct _WriteAttributeStatusRecord {
  uint8_t status;
  uint16_t attributeId;
} WriteAttributeStatusRecord;

// Struct for ConfigureReportingRecord
typedef struct _ConfigureReportingRecord {
  uint8_t direction;
  uint16_t attributeId;
  uint8_t attributeType;
  uint16_t minimumReportingInterval;
  uint16_t maximumReportingInterval;
  uint8_t* reportableChangeLocation;
  uint16_t timeoutPeriod;
} ConfigureReportingRecord;

// Struct for ConfigureReportingStatusRecord
typedef struct _ConfigureReportingStatusRecord {
  uint8_t status;
  uint8_t direction;
  uint16_t attributeId;
} ConfigureReportingStatusRecord;

// Struct for ReadReportingConfigurationRecord
typedef struct _ReadReportingConfigurationRecord {
  uint8_t status;
  uint8_t direction;
  uint16_t attributeId;
  uint8_t attributeType;
  uint16_t minimumReportingInterval;
  uint16_t maximumReportingInterval;
  uint8_t* reportableChangeLocation;
  uint16_t timeoutPeriod;
} ReadReportingConfigurationRecord;

// Struct for ReadReportingConfigurationAttributeRecord
typedef struct _ReadReportingConfigurationAttributeRecord {
  uint8_t direction;
  uint16_t attributeId;
} ReadReportingConfigurationAttributeRecord;

// Struct for ReportAttributeRecord
typedef struct _ReportAttributeRecord {
  uint16_t attributeId;
  uint8_t attributeType;
  uint8_t* attributeLocation;
} ReportAttributeRecord;

// Struct for DiscoverAttributesInfoRecord
typedef struct _DiscoverAttributesInfoRecord {
  uint16_t attributeId;
  uint8_t attributeType;
} DiscoverAttributesInfoRecord;

// Struct for ExtendedDiscoverAttributesInfoRecord
typedef struct _ExtendedDiscoverAttributesInfoRecord {
  uint16_t attributeId;
  uint8_t attributeType;
  uint8_t attributeAccessControl;
} ExtendedDiscoverAttributesInfoRecord;

// Struct for ReadStructuredAttributeRecord
typedef struct _ReadStructuredAttributeRecord {
  uint16_t attributeId;
  uint8_t indicator;
  uint16_t indicies;
} ReadStructuredAttributeRecord;

// Struct for WriteStructuredAttributeRecord
typedef struct _WriteStructuredAttributeRecord {
  uint16_t attributeId;
  uint8_t indicator;
  uint16_t indicies;
  uint8_t attributeType;
  uint8_t* attributeLocation;
} WriteStructuredAttributeRecord;

// Struct for WriteStructuredAttributeStatusRecord
typedef struct _WriteStructuredAttributeStatusRecord {
  uint8_t status;
  uint16_t attributeId;
  uint8_t indicator;
  uint16_t indicies;
} WriteStructuredAttributeStatusRecord;

// Struct for SceneExtensionAttributeInfo
typedef struct _SceneExtensionAttributeInfo {
  uint8_t attributeType;
  uint8_t* attributeLocation;
} SceneExtensionAttributeInfo;

// Struct for SceneExtensionFieldSet
typedef struct _SceneExtensionFieldSet {
  uint16_t clusterId;
  uint8_t length;
  uint8_t value;
} SceneExtensionFieldSet;

// Struct for BlockThreshold
typedef struct _BlockThreshold {
  uint8_t blockThreshold;
  uint8_t priceControl;
  uint32_t blockPeriodStartTime;
  uint32_t blockPeriodDurationMinutes;
  uint8_t fuelType;
  uint32_t standingCharge;
} BlockThreshold;

// Struct for Notification
typedef struct _Notification {
  uint16_t contentId;
  uint8_t statusFeedback;
} Notification;

// Struct for NeighborInfo
typedef struct _NeighborInfo {
  uint8_t* neighbor;
  int16_t x;
  int16_t y;
  int16_t z;
  int8_t rssi;
  uint8_t numberRssiMeasurements;
} NeighborInfo;

// Struct for ChatParticipant
typedef struct _ChatParticipant {
  uint16_t uid;
  uint8_t* nickname;
} ChatParticipant;

// Struct for ChatRoom
typedef struct _ChatRoom {
  uint16_t cid;
  uint8_t* name;
} ChatRoom;

// Struct for NodeInformation
typedef struct _NodeInformation {
  uint16_t uid;
  uint16_t address;
  uint8_t endpoint;
  uint8_t* nickname;
} NodeInformation;

// Struct for ScheduledPhase
typedef struct _ScheduledPhase {
  uint8_t energyPhaseId;
  uint16_t scheduledTime;
} ScheduledPhase;

// Struct for TransferredPhase
typedef struct _TransferredPhase {
  uint8_t energyPhaseId;
  uint8_t macroPhaseId;
  uint16_t expectedDuration;
  uint16_t peakPower;
  uint16_t energy;
  uint16_t maxActivationDelay;
} TransferredPhase;

// Struct for PowerProfileRecord
typedef struct _PowerProfileRecord {
  uint8_t powerProfileId;
  uint8_t energyPhaseId;
  uint8_t powerProfileRemoteControl;
  uint8_t powerProfileState;
} PowerProfileRecord;

// Struct for PriceMatrixSubPayload
typedef struct _PriceMatrixSubPayload {
  uint8_t tierBlockId;
  uint32_t price;
} PriceMatrixSubPayload;

// Struct for BlockThresholdSubPayload
typedef struct _BlockThresholdSubPayload {
  uint8_t tierNumberOfBlockThresholds;
  uint8_t* blockThreshold;
} BlockThresholdSubPayload;

// Struct for TierLabelsPayload
typedef struct _TierLabelsPayload {
  uint8_t tierId;
  uint8_t* tierLabel;
} TierLabelsPayload;

// Void typedef for Signature which is empty.
// this will result in all the references to the data being as uint8_t*
typedef uint8_t Signature;

// Struct for SnapshotResponsePayload
typedef struct _SnapshotResponsePayload {
  uint8_t snapshotScheduleId;
  uint8_t snapshotScheduleConfirmation;
} SnapshotResponsePayload;

// Struct for SnapshotSchedulePayload
typedef struct _SnapshotSchedulePayload {
  uint8_t snapshotScheduleId;
  uint32_t snapshotStartTime;
  uint32_t snapshotSchedule;
  uint8_t snapshotPayloadType;
  uint32_t snapshotCause;
} SnapshotSchedulePayload;

// Struct for Protocol
typedef struct _Protocol {
  uint16_t manufacturerCode;
  uint8_t protocolId;
} Protocol;

// Struct for TopUpPayload
typedef struct _TopUpPayload {
  uint8_t* topUpCode;
  int32_t topUpAmount;
  uint32_t topUpTime;
} TopUpPayload;

// Struct for DebtPayload
typedef struct _DebtPayload {
  uint32_t collectionTime;
  uint32_t amountCollected;
  uint8_t debtType;
  uint32_t outstandingDebt;
} DebtPayload;

// Struct for ScheduleEntry
typedef struct _ScheduleEntry {
  uint16_t startTime;
  uint8_t activePriceTierOrFriendlyCreditEnable;
} ScheduleEntry;

// Struct for ScheduleEntryRateSwitchTimes
typedef struct _ScheduleEntryRateSwitchTimes {
  uint16_t startTime;
  uint8_t priceTier;
} ScheduleEntryRateSwitchTimes;

// Struct for ScheduleEntryFriendlyCreditSwitchTimes
typedef struct _ScheduleEntryFriendlyCreditSwitchTimes {
  uint16_t startTime;
  uint8_t friendlyCreditEnable;
} ScheduleEntryFriendlyCreditSwitchTimes;

// Struct for ScheduleEntryAuxilliaryLoadSwitchTimes
typedef struct _ScheduleEntryAuxilliaryLoadSwitchTimes {
  uint16_t startTime;
  uint8_t auxiliaryLoadSwitchState;
} ScheduleEntryAuxilliaryLoadSwitchTimes;

// Struct for SeasonEntry
typedef struct _SeasonEntry {
  uint32_t seasonStartDate;
  uint8_t weekIdRef;
} SeasonEntry;

// Struct for SpecialDay
typedef struct _SpecialDay {
  uint32_t specialDayDate;
  uint8_t dayIdRef;
} SpecialDay;

// Struct for EventConfigurationPayload
typedef struct _EventConfigurationPayload {
  uint16_t eventId;
  uint8_t eventConfiguration;
} EventConfigurationPayload;

// Struct for EventLogPayload
typedef struct _EventLogPayload {
  uint8_t logId;
  uint16_t eventId;
  uint32_t eventTime;
  uint8_t* eventData;
} EventLogPayload;

// Void typedef for Identity which is empty.
// this will result in all the references to the data being as uint8_t*
typedef uint8_t Identity;

// Void typedef for EphemeralData which is empty.
// this will result in all the references to the data being as uint8_t*
typedef uint8_t EphemeralData;

// Void typedef for Smac which is empty.
// this will result in all the references to the data being as uint8_t*
typedef uint8_t Smac;

// Struct for DeviceInformationRecord
typedef struct _DeviceInformationRecord {
  uint8_t* ieeeAddress;
  uint8_t endpointId;
  uint16_t profileId;
  uint16_t deviceId;
  uint8_t version;
  uint8_t groupIdCount;
  uint8_t sort;
} DeviceInformationRecord;

// Struct for GroupInformationRecord
typedef struct _GroupInformationRecord {
  uint16_t groupId;
  uint8_t groupType;
} GroupInformationRecord;

// Struct for EndpointInformationRecord
typedef struct _EndpointInformationRecord {
  uint16_t networkAddress;
  uint8_t endpointId;
  uint16_t profileId;
  uint16_t deviceId;
  uint8_t version;
} EndpointInformationRecord;

// Struct for GpTranslationTableUpdateTranslation
typedef struct _GpTranslationTableUpdateTranslation {
  uint8_t index;
  uint8_t gpdCommandId;
  uint8_t endpoint;
  uint16_t profile;
  uint16_t cluster;
  uint8_t zigbeeCommandId;
  uint8_t* zigbeeCommandPayload;
  uint8_t* additionalInfoBlock;
} GpTranslationTableUpdateTranslation;

// Struct for GpPairingConfigurationGroupList
typedef struct _GpPairingConfigurationGroupList {
  uint16_t SinkGroup;
  uint16_t Alias;
} GpPairingConfigurationGroupList;

// Struct for WwahBeaconSurvey
typedef struct _WwahBeaconSurvey {
  uint16_t deviceShort;
  uint8_t rssi;
  uint8_t classificationMask;
} WwahBeaconSurvey;

// Struct for WwahClusterStatusToUseTC
typedef struct _WwahClusterStatusToUseTC {
  uint16_t clusterId;
  uint8_t status;
} WwahClusterStatusToUseTC;

#endif // SILABS_EMBER_AF_STRUCTS
