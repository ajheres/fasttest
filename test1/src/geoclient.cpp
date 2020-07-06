//-----------------------------------------------------------------------------
//
//! \file       configurationclient.cpp
//! \brief      ConfigigurationClient implementation
//!
//!             see configurationclient.h
//
//! \copyright  (c) 2018, Saab Technologies B.V.
//
//-----------------------------------------------------------------------------


#include <iostream>
#include <memory>
#include <string>

#include <grpcpp/grpcpp.h>

#include "geoclient.h"


GeoClient::GeoClient(std::string addr):
    stub_(mtm::geo::service::GeoService::NewStub(
              grpc::CreateChannel(
                  addr, grpc::InsecureChannelCredentials()))){
}

// Assembles the client's payload, sends it and presents the response back
// from the server.
void GeoClient::GetLocalServer() {
    // Data we are sending to the server.
    google::protobuf::Empty request;

    // Container for the data we expect from the server.
    //ConfigObject* reply = new ConfigObject();

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    grpc::ClientContext context;

    // The actual RPC.
    mtm::geo::model::GeographyList reply;
    grpc::Status status = stub_->GetGeographies(&context, request, &reply);

    // Act upon its status.
    if (status.ok()) {
        std::cout << reply.DebugString() << std::endl;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
            << std::endl;
    }
}
