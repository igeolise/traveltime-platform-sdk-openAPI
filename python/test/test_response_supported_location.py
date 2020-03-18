# coding: utf-8

"""
    TravelTime Platform API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


from __future__ import absolute_import

import unittest
import datetime

import openapi_client
from openapi_client.models.response_supported_location import ResponseSupportedLocation  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseSupportedLocation(unittest.TestCase):
    """ResponseSupportedLocation unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseSupportedLocation
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_supported_location.ResponseSupportedLocation()  # noqa: E501
        if include_optional :
            return ResponseSupportedLocation(
                id = '0', 
                map_name = '0'
            )
        else :
            return ResponseSupportedLocation(
                id = '0',
                map_name = '0',
        )

    def testResponseSupportedLocation(self):
        """Test ResponseSupportedLocation"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
