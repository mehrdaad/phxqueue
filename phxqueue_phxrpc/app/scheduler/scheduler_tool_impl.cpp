/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* scheduler_tool_impl.cpp

 Generated by phxrpc_pb2tool from scheduler.proto

*/

#include "scheduler_tool_impl.h"

#include "phxrpc/file.h"

#include "scheduler_client.h"


using namespace phxrpc;


SchedulerToolImpl::SchedulerToolImpl() {}

SchedulerToolImpl::~SchedulerToolImpl() {}

int SchedulerToolImpl::PhxEcho(phxrpc::OptMap &opt_map) {
    google::protobuf::StringValue req;
    google::protobuf::StringValue resp;

    if (nullptr == opt_map.Get('s')) return -1;

    req.set_value(opt_map.Get('s'));

    SchedulerClient client;
    int ret{client.PhxEcho(req, &resp)};
    printf("%s return %d\n", __func__, ret);
    printf("resp: {\n%s}\n", resp.DebugString().c_str());

    return ret;
}

int SchedulerToolImpl::GetAddrScale(phxrpc::OptMap &opt_map) {
    phxqueue::comm::proto::GetAddrScaleRequest req;
    phxqueue::comm::proto::GetAddrScaleResponse resp;

    //TODO: fill req from opt_map

    SchedulerClient client;
    int ret{client.GetAddrScale(req, &resp)};
    printf("%s return %d\n", __func__, ret);
    printf("resp: {\n%s}\n", resp.DebugString().c_str());

    return ret;
}

