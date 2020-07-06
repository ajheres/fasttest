#ifndef CONFIGURATIONCLIENT_H
#define CONFIGURATIONCLIENT_H

#include <grpcpp/grpcpp.h>
#include "mtm/geo/service/geo_service.grpc.pb.h"

class GeoClient {
public:
    GeoClient(std::string addr);

    // Assembles the client's payload, sends it and presents the response back
    // from the server.
    void GetLocalServer();

private:
    std::unique_ptr<mtm::geo::service::GeoService::Stub> stub_;
};

#endif // CONFIGURATIONCLIENT_H
