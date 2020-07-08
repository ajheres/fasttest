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

#include <QUuid>

#include "geoclient.h"
#include "mtm/geo/service/geo_service.pb.h"

GeoClient::GeoClient(std::string addr):
    stub_(mtm::geo::service::GeoService::NewStub(
              grpc::CreateChannel(
                  addr, grpc::InsecureChannelCredentials()))){
}

// Assembles the client's payload, sends it and presents the response back
// from the server.
void GeoClient::getAllItems() {
    // Data we are sending to the server.
    google::protobuf::Empty request;

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    grpc::ClientContext context;

    // The actual RPC.
    mtm::geo::model::GeographyList reply;
    grpc::Status status = stub_->GetGeographies(&context, request, &reply);

    for (int i=0; i < reply.geographies_size(); i++)
    {
        std::cout << QUuid::fromRfc4122(QByteArray::fromStdString(reply.geographies(i).id().value())).toString().toStdString() << std::endl;
    }

    // Act upon its status.
    if (status.ok()) {
        std::cout << "ok" << std::endl;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
            << std::endl;
    }
}

void GeoClient::removeGeoItem() {
    // Data we are sending to the server.
    mtm::geo::service::RemoveGeographyParameters request;
    QUuid uuid("{da52757b-ea60-46bc-8be6-195c594a476c}");
    request.mutable_geography_id()->set_value(uuid.toRfc4122().toStdString());

    // Context for the client. It could be used to convey extra information to
    // the server and/or tweak certain RPC behaviors.
    grpc::ClientContext context;

    // The actual RPC.
    mtm::geo::service::BoolResponse reply;
    grpc::Status status = stub_->RemoveGeography(&context, request, &reply);

    // Act upon its status.
    if (status.ok()) {
        std::cout << (reply.result()?"true":"false") << std::endl;
    }
    else {
        std::cout << status.error_code() << ": " << status.error_message()
            << std::endl;
    }
}
