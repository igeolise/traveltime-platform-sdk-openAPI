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
from openapi_client.models.request_time_filter_postcode_sectors_property import RequestTimeFilterPostcodeSectorsProperty  # noqa: E501
from openapi_client.rest import ApiException

class TestRequestTimeFilterPostcodeSectorsProperty(unittest.TestCase):
    """RequestTimeFilterPostcodeSectorsProperty unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test RequestTimeFilterPostcodeSectorsProperty
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.request_time_filter_postcode_sectors_property.RequestTimeFilterPostcodeSectorsProperty()  # noqa: E501
        if include_optional :
            return RequestTimeFilterPostcodeSectorsProperty(
            )
        else :
            return RequestTimeFilterPostcodeSectorsProperty(
        )

    def testRequestTimeFilterPostcodeSectorsProperty(self):
        """Test RequestTimeFilterPostcodeSectorsProperty"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
