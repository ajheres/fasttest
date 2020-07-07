#print('Interest Calculator:')
#amount = float(input('Principal amount ?'))
#roi = float(input('Rate of Interest ?'))
#years = int(input('Duration (no. of years) ?'))
#total = (amount * pow(1 + (roi/100), years))
#interest = total - amount
#
#print('\nInterest = %0.2f' %interest)

import logging
import grpc

def run():
    # NOTE(gRPC Python Team): .close() is possible on a channel and should be
    # used in circumstances in which the with statement does not fit the needs
    # of the code.
    with grpc.insecure_channel('localhost:50051') as channel:
        stub = route_guide_pb2_grpc.RouteGuideStub(channel)
        print("-------------- GetFeature --------------")
        guide_get_feature(stub)
        print("-------------- ListFeatures --------------")
        guide_list_features(stub)
        print("-------------- RecordRoute --------------")
        guide_record_route(stub)
        print("-------------- RouteChat --------------")
        guide_route_chat(stub)


if __name__ == '__main__':
    logging.basicConfig()
    run()
