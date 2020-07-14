# coding: utf-8

"""
    TravelTime API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.2.1
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.request_time_filter_postcode_districts import RequestTimeFilterPostcodeDistricts  # noqa: E501
from openapi_client.rest import ApiException

class TestRequestTimeFilterPostcodeDistricts(unittest.TestCase):
    """RequestTimeFilterPostcodeDistricts unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test RequestTimeFilterPostcodeDistricts
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.request_time_filter_postcode_districts.RequestTimeFilterPostcodeDistricts()  # noqa: E501
        if include_optional :
            return RequestTimeFilterPostcodeDistricts(
                departure_searches = [
                    openapi_client.models.request_time_filter_postcode_districts_departure_search.RequestTimeFilterPostcodeDistrictsDepartureSearch(
                        id = '0', 
                        transportation = openapi_client.models.request_transportation.RequestTransportation(
                            type = 'cycling', 
                            pt_change_delay = 56, 
                            walking_time = 56, 
                            driving_time_to_station = 56, 
                            parking_time = 56, 
                            boarding_time = 56, ), 
                        travel_time = 60, 
                        departure_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                        reachable_postcodes_threshold = 1.337, 
                        properties = [
                            'travel_time_reachable'
                            ], 
                        range = openapi_client.models.request_range_full.RequestRangeFull(
                            enabled = True, 
                            max_results = 1, 
                            width = 1, ), )
                    ], 
                arrival_searches = [
                    openapi_client.models.request_time_filter_postcode_districts_arrival_search.RequestTimeFilterPostcodeDistrictsArrivalSearch(
                        id = '0', 
                        transportation = openapi_client.models.request_transportation.RequestTransportation(
                            type = 'cycling', 
                            pt_change_delay = 56, 
                            walking_time = 56, 
                            driving_time_to_station = 56, 
                            parking_time = 56, 
                            boarding_time = 56, ), 
                        travel_time = 60, 
                        arrival_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                        reachable_postcodes_threshold = 1.337, 
                        properties = [
                            'travel_time_reachable'
                            ], 
                        range = openapi_client.models.request_range_full.RequestRangeFull(
                            enabled = True, 
                            max_results = 1, 
                            width = 1, ), )
                    ]
            )
        else :
            return RequestTimeFilterPostcodeDistricts(
        )

    def testRequestTimeFilterPostcodeDistricts(self):
        """Test RequestTimeFilterPostcodeDistricts"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
