# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_bounding_box import ResponseBoundingBox
from traveltimeplatform.models.response_time_map_properties import ResponseTimeMapProperties
from traveltimeplatform import util


class ResponseTimeMapBoundingBoxesResult(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, search_id: str=None, bounding_boxes: List[ResponseBoundingBox]=None, properties: ResponseTimeMapProperties=None):
        """ResponseTimeMapBoundingBoxesResult - a model defined in OpenAPI

        :param search_id: The search_id of this ResponseTimeMapBoundingBoxesResult.
        :param bounding_boxes: The bounding_boxes of this ResponseTimeMapBoundingBoxesResult.
        :param properties: The properties of this ResponseTimeMapBoundingBoxesResult.
        """
        self.openapi_types = {
            'search_id': str,
            'bounding_boxes': List[ResponseBoundingBox],
            'properties': ResponseTimeMapProperties
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'bounding_boxes': 'bounding_boxes',
            'properties': 'properties'
        }

        self._search_id = search_id
        self._bounding_boxes = bounding_boxes
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseTimeMapBoundingBoxesResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseTimeMapBoundingBoxesResult of this ResponseTimeMapBoundingBoxesResult.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeMapBoundingBoxesResult.


        :return: The search_id of this ResponseTimeMapBoundingBoxesResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeMapBoundingBoxesResult.


        :param search_id: The search_id of this ResponseTimeMapBoundingBoxesResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")

        self._search_id = search_id

    @property
    def bounding_boxes(self):
        """Gets the bounding_boxes of this ResponseTimeMapBoundingBoxesResult.


        :return: The bounding_boxes of this ResponseTimeMapBoundingBoxesResult.
        :rtype: List[ResponseBoundingBox]
        """
        return self._bounding_boxes

    @bounding_boxes.setter
    def bounding_boxes(self, bounding_boxes):
        """Sets the bounding_boxes of this ResponseTimeMapBoundingBoxesResult.


        :param bounding_boxes: The bounding_boxes of this ResponseTimeMapBoundingBoxesResult.
        :type bounding_boxes: List[ResponseBoundingBox]
        """
        if bounding_boxes is None:
            raise ValueError("Invalid value for `bounding_boxes`, must not be `None`")

        self._bounding_boxes = bounding_boxes

    @property
    def properties(self):
        """Gets the properties of this ResponseTimeMapBoundingBoxesResult.


        :return: The properties of this ResponseTimeMapBoundingBoxesResult.
        :rtype: ResponseTimeMapProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseTimeMapBoundingBoxesResult.


        :param properties: The properties of this ResponseTimeMapBoundingBoxesResult.
        :type properties: ResponseTimeMapProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")

        self._properties = properties
