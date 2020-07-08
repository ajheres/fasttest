#print('Interest Calculator:')
#amount = float(input('Principal amount ?'))
#roi = float(input('Rate of Interest ?'))
#years = int(input('Duration (no. of years) ?'))
#total = (amount * pow(1 + (roi/100), years))
#interest = total - amount
#
#print('\nInterest = %0.2f' %interest)

import grpc
from mtm.geo.service import geo_service_pb2_grpc

def run():
    channel = grpc.insecure_channel('10.111.1.201:8690')
    stub = geo_service_pb2_grpc.GeoServiceStub(channel)
    geographies = stub.GetGeographies("")
    print('size = %d', geographies.geographies.size)

if __name__ == '__main__':
    run()
