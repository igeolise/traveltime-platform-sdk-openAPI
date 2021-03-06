# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_time_map_properties import ResponseTimeMapProperties
from openapi_server import util

from openapi_server.models.response_time_map_properties import ResponseTimeMapProperties  # noqa: E501

class ResponseTimeMapWktResult(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, search_id=None, shape=None, properties=None):  # noqa: E501
        """ResponseTimeMapWktResult - a model defined in OpenAPI

        :param search_id: The search_id of this ResponseTimeMapWktResult.  # noqa: E501
        :type search_id: str
        :param shape: The shape of this ResponseTimeMapWktResult.  # noqa: E501
        :type shape: str
        :param properties: The properties of this ResponseTimeMapWktResult.  # noqa: E501
        :type properties: ResponseTimeMapProperties
        """
        self.openapi_types = {
            'search_id': str,
            'shape': str,
            'properties': ResponseTimeMapProperties
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'shape': 'shape',
            'properties': 'properties'
        }

        self._search_id = search_id
        self._shape = shape
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeMapWktResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeMapWktResult of this ResponseTimeMapWktResult.  # noqa: E501
        :rtype: ResponseTimeMapWktResult
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeMapWktResult.


        :return: The search_id of this ResponseTimeMapWktResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeMapWktResult.


        :param search_id: The search_id of this ResponseTimeMapWktResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def shape(self):
        """Gets the shape of this ResponseTimeMapWktResult.


        :return: The shape of this ResponseTimeMapWktResult.
        :rtype: str
        """
        return self._shape

    @shape.setter
    def shape(self, shape):
        """Sets the shape of this ResponseTimeMapWktResult.


        :param shape: The shape of this ResponseTimeMapWktResult.
        :type shape: str
        """
        if shape is None:
            raise ValueError("Invalid value for `shape`, must not be `None`")  # noqa: E501

        self._shape = shape

    @property
    def properties(self):
        """Gets the properties of this ResponseTimeMapWktResult.


        :return: The properties of this ResponseTimeMapWktResult.
        :rtype: ResponseTimeMapProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseTimeMapWktResult.


        :param properties: The properties of this ResponseTimeMapWktResult.
        :type properties: ResponseTimeMapProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
