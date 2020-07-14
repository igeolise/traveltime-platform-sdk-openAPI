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
from openapi_client.models.response_time_filter_postcode_sectors import ResponseTimeFilterPostcodeSectors  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseTimeFilterPostcodeSectors(unittest.TestCase):
    """ResponseTimeFilterPostcodeSectors unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseTimeFilterPostcodeSectors
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_time_filter_postcode_sectors.ResponseTimeFilterPostcodeSectors()  # noqa: E501
        if include_optional :
            return ResponseTimeFilterPostcodeSectors(
                results = [
                    openapi_client.models.response_time_filter_postcode_sectors_result.ResponseTimeFilterPostcodeSectorsResult(
                        search_id = '0', 
                        sectors = [
                            openapi_client.models.response_time_filter_postcode_sector.ResponseTimeFilterPostcodeSector(
                                code = null, 
                                properties = openapi_client.models.response_time_filter_postcode_sector_properties.ResponseTimeFilterPostcodeSectorProperties(
                                    travel_time_reachable = openapi_client.models.response_travel_time_statistics.ResponseTravelTimeStatistics(
                                        min = 56, 
                                        max = 56, 
                                        mean = 56, 
                                        median = 56, ), 
                                    travel_time_all = openapi_client.models.response_travel_time_statistics.ResponseTravelTimeStatistics(
                                        min = 56, 
                                        max = 56, 
                                        mean = 56, 
                                        median = 56, ), 
                                    coverage = 1.337, ), )
                            ], )
                    ]
            )
        else :
            return ResponseTimeFilterPostcodeSectors(
                results = [
                    openapi_client.models.response_time_filter_postcode_sectors_result.ResponseTimeFilterPostcodeSectorsResult(
                        search_id = '0', 
                        sectors = [
                            openapi_client.models.response_time_filter_postcode_sector.ResponseTimeFilterPostcodeSector(
                                code = null, 
                                properties = openapi_client.models.response_time_filter_postcode_sector_properties.ResponseTimeFilterPostcodeSectorProperties(
                                    travel_time_reachable = openapi_client.models.response_travel_time_statistics.ResponseTravelTimeStatistics(
                                        min = 56, 
                                        max = 56, 
                                        mean = 56, 
                                        median = 56, ), 
                                    travel_time_all = openapi_client.models.response_travel_time_statistics.ResponseTravelTimeStatistics(
                                        min = 56, 
                                        max = 56, 
                                        mean = 56, 
                                        median = 56, ), 
                                    coverage = 1.337, ), )
                            ], )
                    ],
        )

    def testResponseTimeFilterPostcodeSectors(self):
        """Test ResponseTimeFilterPostcodeSectors"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
