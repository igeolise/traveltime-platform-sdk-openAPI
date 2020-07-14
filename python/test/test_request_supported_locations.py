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
from openapi_client.models.request_supported_locations import RequestSupportedLocations  # noqa: E501
from openapi_client.rest import ApiException

class TestRequestSupportedLocations(unittest.TestCase):
    """RequestSupportedLocations unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test RequestSupportedLocations
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.request_supported_locations.RequestSupportedLocations()  # noqa: E501
        if include_optional :
            return RequestSupportedLocations(
                locations = [
                    openapi_client.models.request_location.RequestLocation(
                        id = '0', 
                        coords = openapi_client.models.coords.Coords(
                            lat = 1.337, 
                            lng = 1.337, ), )
                    ]
            )
        else :
            return RequestSupportedLocations(
                locations = [
                    openapi_client.models.request_location.RequestLocation(
                        id = '0', 
                        coords = openapi_client.models.coords.Coords(
                            lat = 1.337, 
                            lng = 1.337, ), )
                    ],
        )

    def testRequestSupportedLocations(self):
        """Test RequestSupportedLocations"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
