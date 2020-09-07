from google.protobuf import empty_pb2
import grpc
from mtm.geo.service import geo_service_pb2_grpc
import mtm.common_types_pb2
from mtm.geo.service import geo_service_pb2
import mtm.geo.model.geo_service_enums_pb2
import csv
import os
import argparse
import uuid


area_count = 0
next_id = 0

def process_map(kml_map):
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

    def get_next_area_id() -> int:
        found = False
        global next_id
        while not found:
            if next_id in area_primary:
                next_id += 1
            else:
                found = True
        area_primary.append(next_id)
        return next_id


    def print_geography(uuid):
        # get it
        print("get ", uuid, " and print:")
        geography = stub.GetGeography(uuid)
        print(geography)


    def insert_geography(name, wkt) -> mtm.common_types_pb2.Uuid:
        # insert one
        new = mtm.geo.service.geo_service_pb2.AddGeographyParameters()
        new.user_id = 1
        new.geography.primary_key = get_next_area_id()
        new.geography.geography_type = mtm.geo.model.geo_service_enums_pb2.GEOGRAPHYTYPE_POLYGON
        new.geography.name.value = name
        new.geography.wkt.value = wkt
        new.visual.owner = 0
        print(f'insert {new.geography.primary_key} - {name} is {wkt}')
        return stub.AddGeography(new)


    def convert_map(filename):
        # execute
        # ogr2ogr -overwrite -f CSV -dsco GEOMETRY=AS_WKT output.csv map.kml
        # convert kml to csv with WKT
        os.system(f'rm -f {cvs_file}')
        return os.system(f'ogr2ogr -overwrite -f CSV -dsco GEOMETRY=AS_WKT {cvs_file} {filename}')

    def read_map(filename):
        convert_map(filename)

        with open(cvs_file, mode='r') as csv_file:
            csv_reader = csv.DictReader(csv_file)
            line_count = 0
            for row in csv_reader:
                line_count += 1
                if row["Name"] in area_name:
                    print(row["Name"], "not inserted")
                else:
                    inserted = insert_geography(row["Name"], row["WKT"])
                    area_name.append(row["Name"])
            print(f'Processed {line_count} lines.')

    # do the work for run()
    get_geographies()
    if os.path.isfile(kml_map):
        read_map(kml_map)
    else:
        print("file does not exist")
    get_geographies()
    print_geographies()


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description='Insert content of kml map into Geo server.')
    parser.add_argument('map', type=str, help='the map', default="map.kml")

    args = parser.parse_args()
    process_map(args.map)
