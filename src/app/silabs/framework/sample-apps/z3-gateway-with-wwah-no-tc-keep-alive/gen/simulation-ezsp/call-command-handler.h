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
#ifndef SILABS_EMBER_AF_COMMAND_PARSE_HEADER
#define SILABS_EMBER_AF_COMMAND_PARSE_HEADER

// This is a set of generated prototype for functions that parse the
// the incomming message, and call appropriate command handler.

// Cluster: Basic, server
EmberAfStatus emberAfBasicClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Identify, client
EmberAfStatus emberAfIdentifyClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Identify, server
EmberAfStatus emberAfIdentifyClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: On/off, server
EmberAfStatus emberAfOnOffClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Level Control, server
EmberAfStatus emberAfLevelControlClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Poll Control, client
EmberAfStatus emberAfPollControlClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Green Power, client
EmberAfStatus emberAfGreenPowerClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Color Control, server
EmberAfStatus emberAfColorControlClusterServerCommandParse(EmberAfClusterCommand *cmd);

// Cluster: IAS Zone, client
EmberAfStatus emberAfIasZoneClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: Simple Metering, client
EmberAfStatus emberAfSimpleMeteringClusterClientCommandParse(EmberAfClusterCommand *cmd);

// Cluster: SL Works With All Hubs, client
EmberAfStatus emberAfSlWwahClusterClientCommandParse(EmberAfClusterCommand *cmd);

#endif // SILABS_EMBER_AF_COMMAND_PARSE_HEADER
