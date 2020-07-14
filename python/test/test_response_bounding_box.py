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
from openapi_client.models.response_bounding_box import ResponseBoundingBox  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseBoundingBox(unittest.TestCase):
    """ResponseBoundingBox unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseBoundingBox
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_bounding_box.ResponseBoundingBox()  # noqa: E501
        if include_optional :
            return ResponseBoundingBox(
                envelope = openapi_client.models.response_box.ResponseBox(
                    min_lat = 1.337, 
                    max_lat = 1.337, 
                    min_lng = 1.337, 
                    max_lng = 1.337, ), 
                boxes = [
                    openapi_client.models.response_box.ResponseBox(
                        min_lat = 1.337, 
                        max_lat = 1.337, 
                        min_lng = 1.337, 
                        max_lng = 1.337, )
                    ]
            )
        else :
            return ResponseBoundingBox(
                envelope = openapi_client.models.response_box.ResponseBox(
                    min_lat = 1.337, 
                    max_lat = 1.337, 
                    min_lng = 1.337, 
                    max_lng = 1.337, ),
                boxes = [
                    openapi_client.models.response_box.ResponseBox(
                        min_lat = 1.337, 
                        max_lat = 1.337, 
                        min_lng = 1.337, 
                        max_lng = 1.337, )
                    ],
        )

    def testResponseBoundingBox(self):
        """Test ResponseBoundingBox"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
