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
 * @brief
 *******************************************************************************
   ******************************************************************************/

// Copyright 2007 - 2012 by Ember Corporation. All rights reserved.
//
//

// This callback file is created for your convenience. You may add application code
// to this file. If you regenerate this file over a previous version, the previous
// version will be overwritten and any code you have added will be lost.

#include "app/framework/include/af.h"

/** @brief Trust Center Join
 *
 * This callback is called from within the application framework's
 * implementation of emberTrustCenterJoinHandler or
 * ezspTrustCenterJoinHandler. This callback provides the same arguments
 * passed to the TrustCenterJoinHandler. For more information about the
 * TrustCenterJoinHandler please see documentation included in
 * stack/include/trust-center.h.
 *
 * @param newNodeId   Ver.: always
 * @param newNodeEui64   Ver.: always
 * @param parentOfNewNode   Ver.: always
 * @param status   Ver.: always
 * @param decision   Ver.: always
 */
void emberAfTrustCenterJoinCallback(EmberNodeId newNodeId,
                                    EmberEUI64 newNodeEui64,
                                    EmberNodeId parentOfNewNode,
                                    EmberDeviceUpdate status,
                                    EmberJoinDecision decision)
{
  emberAfRegistrationPrintln("New node joined, shortID=0x%2x", newNodeId);
}

/** @brief Registration
 *
 * This callback is called when the device joins a network and the process of
 * registration is complete. This callback provides a success value of true if
 * the registration process was successful and a value of false if
 * registration failed.
 *
 * @param success true if registration succeeded, false otherwise.  Ver.:
 * always
 */
void emberAfRegistrationCallback(bool success)
{
  emberAfRegistrationPrintln("Registration %p", success ? "complete" : "failed");
}
