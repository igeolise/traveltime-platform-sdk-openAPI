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
from openapi_client.models.coords import Coords  # noqa: E501
from openapi_client.rest import ApiException

class TestCoords(unittest.TestCase):
    """Coords unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test Coords
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.coords.Coords()  # noqa: E501
        if include_optional :
            return Coords(
                lat = 1.337, 
                lng = 1.337
            )
        else :
            return Coords(
                lat = 1.337,
                lng = 1.337,
        )

    def testCoords(self):
        """Test Coords"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
