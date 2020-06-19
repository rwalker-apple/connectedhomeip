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
#ifndef SILABS_AF_ENDPOINT_CONFIG
#define SILABS_AF_ENDPOINT_CONFIG

// Fixed number of defined endpoints
#define FIXED_ENDPOINT_COUNT (1)

// Generated attributes
#define GENERATED_ATTRIBUTES { \
    0                          \
}

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS \


// Clusters definitions
#define GENERATED_CLUSTERS { \
    0                        \
}

// Endpoint types
#define GENERATED_ENDPOINT_TYPES {                      \
    { (EmberAfCluster*)&(generatedClusters[0]), 0, 0 }, \
}

// Cluster manufacturer codes
#define GENERATED_CLUSTER_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_CLUSTER_MANUFACTURER_CODE_COUNT (0)

// Attribute manufacturer codes
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                               \
}
#define GENERATED_ATTRIBUTE_MANUFACTURER_CODE_COUNT (0)

// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (1)
// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (0)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE 0

// Array of endpoints that are supported
#define FIXED_ENDPOINT_ARRAY { 1 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 1 }

// Array of device ids
#define FIXED_DEVICE_IDS { 1 }

// Array of device versions
#define FIXED_DEVICE_VERSIONS { 0 }

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0 }

// Array of networks supported on each endpoint
#define FIXED_NETWORKS { 0 }

#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_DECLARATIONS \
  void emberAfPluginIdleSleepInitCallback(void);             \


#define EMBER_AF_GENERATED_PLUGIN_INIT_FUNCTION_CALLS \
  emberAfPluginIdleSleepInitCallback();               \


// Generated data for the command discovery
#define GENERATED_COMMANDS { \
    0                        \
}
#define EMBER_AF_GENERATED_COMMAND_COUNT (0)

// Command manufacturer codes
#define GENERATED_COMMAND_MANUFACTURER_CODES { \
    { 0x00, 0x00 }                             \
}
#define GENERATED_COMMAND_MANUFACTURER_CODE_COUNT (0)

// Generated reporting configuration defaults
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS { \
}
#define EMBER_AF_GENERATED_REPORTING_CONFIG_DEFAULTS_TABLE_SIZE (0)
#endif // SILABS_AF_ENDPOINT_CONFIG
