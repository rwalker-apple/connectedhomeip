/*
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
 *    @file
 *      This file contains the EndPoint class
 *
 */

#ifndef CHIPENDPOINT_H_
#define CHIPENDPOINT_H_

#include <lib/core/CHIPBaseAttribute.h>
#include <lib/core/CHIPStandardClusters.h>

namespace chip {
namespace DataModel {

/* TODO: To be converted to a template version or Kconfig later on */
static const uint8_t kMaxClustersPerEndPoint = 5;
class CHIPEndPoint
{
public:
    static CHIPBaseCluster *mBasicCluster;
    CHIPBaseCluster        *mClusters[kMaxClustersPerEndPoint];

    CHIPEndPoint(uint8_t ZCLVersion,
                 uint8_t applicationVersion,
                 uint8_t stackVersion,
                 uint8_t HWVersion) : mClusters()
    {
        if (mBasicCluster == nullptr)
        {
            mBasicCluster = CHIPClusterBasicNew(ZCLVersion, applicationVersion, stackVersion, HWVersion);
            /* TODO: allocation failure? */
        }
        mClusters[0] = mBasicCluster;
    }

    virtual ~CHIPEndPoint()
    {
        for (int i = 1; i < kMaxClustersPerEndPoint; i++)
        {
            if (mClusters[i] != nullptr)
            {
                delete mClusters[i];
                mClusters[i] = nullptr;
            }
        }
    }

    int AddCluster(CHIPBaseCluster *cluster)
    {
        for (int i = 0; i < kMaxClustersPerEndPoint; i++)
        {
            if (mClusters[i] == nullptr)
            {
                mClusters[i] = cluster;
                return SUCCESS;
            }
        }
        return FAIL;
    }

    CHIPBaseCluster *GetCluster(uint8_t clusterId)
    {
        for (int i = 0; i < kMaxClustersPerEndPoint; i++)
        {
            if (mClusters[i] &&
                mClusters[i]->mClusterId == clusterId)
            {
                return mClusters[i];
            }
        }
        return nullptr;
    }
};


} // namespace DataModel
} // namespace chip

#endif /* CHIPENDPOINT_H_ */
