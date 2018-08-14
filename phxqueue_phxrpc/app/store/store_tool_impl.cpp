/*
Tencent is pleased to support the open source community by making PhxQueue available.
Copyright (C) 2017 THL A29 Limited, a Tencent company. All rights reserved.
Licensed under the BSD 3-Clause License (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at

<https://opensource.org/licenses/BSD-3-Clause>

Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/



/* store_tool_impl.cpp

 Generated by phxrpc_pb2tool from store.proto

*/

#include "store_tool_impl.h"

#include "phxrpc/file.h"

#include "store_client.h"


using namespace phxrpc;


StoreToolImpl::StoreToolImpl() {}

StoreToolImpl::~StoreToolImpl() {}

int StoreToolImpl::PhxEcho(phxrpc::OptMap &opt_map) {
    google::protobuf::StringValue req;
    google::protobuf::StringValue resp;

    if (nullptr == opt_map.Get('s')) return -1;

    req.set_value(opt_map.Get('s'));

    StoreClient client;
    int ret{client.PhxEcho(req, &resp)};
    printf("%s return %d\n", __func__, ret);
    printf("resp: {\n%s}\n", resp.DebugString().c_str());

    return ret;
}

int StoreToolImpl::Add(phxrpc::OptMap &opt_map) {
    phxqueue::comm::proto::AddRequest req;
    phxqueue::comm::proto::AddResponse resp;

    //TODO: fill req from opt_map

    StoreClient client;
    int ret{client.Add(req, &resp)};
    printf("%s return %d\n", __func__, ret);
    printf("resp: {\n%s}\n", resp.DebugString().c_str());

    return ret;
}

int StoreToolImpl::Get(phxrpc::OptMap &opt_map) {
    phxqueue::comm::proto::GetRequest req;
    phxqueue::comm::proto::GetResponse resp;

    //TODO: fill req from opt_map

    StoreClient client;
    int ret{client.Get(req, &resp)};
    printf("%s return %d\n", __func__, ret);
    printf("resp: {\n%s}\n", resp.DebugString().c_str());

    return ret;
}

