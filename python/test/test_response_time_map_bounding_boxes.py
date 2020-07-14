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
from openapi_client.models.response_time_map_bounding_boxes import ResponseTimeMapBoundingBoxes  # noqa: E501
from openapi_client.rest import ApiException

class TestResponseTimeMapBoundingBoxes(unittest.TestCase):
    """ResponseTimeMapBoundingBoxes unit test stubs"""

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def make_instance(self, include_optional):
        """Test ResponseTimeMapBoundingBoxes
            include_option is a boolean, when False only required
            params are included, when True both required and
            optional params are included """
        # model = openapi_client.models.response_time_map_bounding_boxes.ResponseTimeMapBoundingBoxes()  # noqa: E501
        if include_optional :
            return ResponseTimeMapBoundingBoxes(
                results = [
                    openapi_client.models.response_time_map_bounding_boxes_result.ResponseTimeMapBoundingBoxesResult(
                        search_id = '0', 
                        bounding_boxes = [
                            openapi_client.models.response_bounding_box.ResponseBoundingBox(
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
                                    ], )
                            ], 
                        properties = openapi_client.models.response_time_map_properties.ResponseTimeMapProperties(
                            is_only_walking = True, ), )
                    ]
            )
        else :
            return ResponseTimeMapBoundingBoxes(
                results = [
                    openapi_client.models.response_time_map_bounding_boxes_result.ResponseTimeMapBoundingBoxesResult(
                        search_id = '0', 
                        bounding_boxes = [
                            openapi_client.models.response_bounding_box.ResponseBoundingBox(
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
                                    ], )
                            ], 
                        properties = openapi_client.models.response_time_map_properties.ResponseTimeMapProperties(
                            is_only_walking = True, ), )
                    ],
        )

    def testResponseTimeMapBoundingBoxes(self):
        """Test ResponseTimeMapBoundingBoxes"""
        inst_req_only = self.make_instance(include_optional=False)
        inst_req_and_optional = self.make_instance(include_optional=True)


if __name__ == '__main__':
    unittest.main()
