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

/*****************************************************************************
 * @file
 * @brief APIs and defines for the Level Control
 *plugin, which implements the Level Control cluster.
 *******************************************************************************
 ******************************************************************************/

/**
 *    @file
 *      This file contains definitions for CHIP Cluster Scene
 *
 */

#ifndef CHIPSCENE_H_
#define CHIPSCENE_H_

#include <datamodel/Cluster.h>

namespace chip {
namespace DataModel {

/**
 * @brief
 *   This class implements the Scene cluster as defined in the CHIP specification.
 */
class Scene : public Cluster
{

public:
    /* Cluster ID */
    static const ClusterId kId = 0x0005;

    /* Attribute IDs */

    /* Command IDs */

    /* other definitions */

    /**
     * @brief
     *   Return the ClusterId of this cluster
     *
     */
    virtual ClusterId Id() const { return kId; }

    /**
     * @brief
     *   make the scene as invalid because of a change in the endpoint
     *   not initiated by the Scene
     *
     */
    virtual void MakeInvalid() {}
};

} // namespace DataModel
} // namespace chip

#endif /* CHIPSCENE_H_ */
