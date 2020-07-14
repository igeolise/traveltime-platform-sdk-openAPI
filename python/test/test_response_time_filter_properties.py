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
from openapi_client.models.response_time_filter_properties import ResponseTimeFilterProperties  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseTimeFilterProperties(unittest.TestCase):
    """ResponseTimeFilterProperties unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseTimeFilterProperties
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_time_filter_properties.ResponseTimeFilterProperties()  # noqa: E501
        if include_optional :
            return ResponseTimeFilterProperties(
                travel_time = 56, 
                distance = 56, 
                distance_breakdown = [
                    openapi_client.models.response_distance_breakdown_item.ResponseDistanceBreakdownItem(
                        mode = 'car', 
                        distance = 56, )
                    ], 
                fares = openapi_client.models.response_fares.ResponseFares(
                    breakdown = [
                        openapi_client.models.response_fares_breakdown_item.ResponseFaresBreakdownItem(
                            modes = [
                                'car'
                                ], 
                            route_part_ids = [
                                56
                                ], 
                            tickets = [
                                openapi_client.models.response_fare_ticket.ResponseFareTicket(
                                    type = 'single', 
                                    price = 1.337, 
                                    currency = '0', )
                                ], )
                        ], 
                    tickets_total = [
                        openapi_client.models.response_fare_ticket.ResponseFareTicket(
                            type = 'single', 
                            price = 1.337, 
                            currency = '0', )
                        ], ), 
                route = openapi_client.models.response_route.ResponseRoute(
                    departure_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                    arrival_time = datetime.datetime.strptime('2013-10-20 19:20:30.00', '%Y-%m-%d %H:%M:%S.%f'), 
                    parts = [
                        openapi_client.models.response_route_part.ResponseRoutePart(
                            id = '0', 
                            type = 'basic', 
                            mode = 'car', 
                            directions = '0', 
                            distance = 56, 
                            travel_time = 56, 
                            coords = [
                                openapi_client.models.coords.Coords(
                                    lat = 1.337, 
                                    lng = 1.337, )
                                ], 
                            direction = '0', 
                            road = '0', 
                            turn = '0', 
                            line = '0', 
                            departure_station = '0', 
                            arrival_station = '0', 
                            departs_at = '0', 
                            arrives_at = '0', 
                            num_stops = 56, )
                        ], )
            )
        else :
            return ResponseTimeFilterProperties(
        )

    def testResponseTimeFilterProperties(self):
        """Test ResponseTimeFilterProperties"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
