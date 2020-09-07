from google.protobuf import empty_pb2
import grpc
from mtm.geo.service import geo_service_pb2_grpc
import mtm.common_types_pb2
from mtm.geo.service import geo_service_pb2
import mtm.geo.model.geo_service_enums_pb2
import argparse
import uuid


area_count = 0

def remove_item(item):
    cvs_file = 'output.csv'
    geo_server = '192.168.128.201:8690'
    area_name = []
    area_primary = []
    area_id = []
    channel = grpc.insecure_channel(geo_server)
    stub = geo_service_pb2_grpc.GeoServiceStub(channel)

    def get_geographies():
        # get all
        global area_count
        area_count = 0
        area_id.clear()
        area_name.clear()
        area_primary.clear()
        print("Try to connect with ", geo_server)
        geographies = stub.GetGeographies(empty_pb2.Empty())
        for i in geographies.geographies:
            id1=uuid.UUID(bytes=i.id.value)
            area_id.append(id1)
            area_name.append(i.name.value)
            area_primary.append(i.primary_key)
            area_count = area_count + 1
        print("Read ", area_count, " items")


    def print_geographies():
        # get all
        for i in range(area_count):
            print(area_primary[i], "-", area_name[i], "-", area_id[i])


    def remove_geography(item) -> bool:
        remove = mtm.geo.service.geo_service_pb2.RemoveGeographyParameters()
        remove.user_id = 1
        id1=uuid.UUID(item)
        remove.geography_id.value = id1.bytes
        return stub.RemoveGeography(remove)


    # do the work for run()
    if item == "":
        get_geographies()
        print_geographies()
    else:
        if remove_geography(item):
            print("Removed: ", item)
        get_geographies()
        print_geographies()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Remove item from Geo server.')
    parser.add_argument('--id', type=str, help='UUID of to be removed item', default="")
    args = parser.parse_args()
    remove_item(args.id)

