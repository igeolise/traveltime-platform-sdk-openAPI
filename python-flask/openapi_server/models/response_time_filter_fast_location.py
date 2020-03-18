# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_time_filter_fast_properties import ResponseTimeFilterFastProperties
from openapi_server import util

from openapi_server.models.response_time_filter_fast_properties import ResponseTimeFilterFastProperties  # noqa: E501

class ResponseTimeFilterFastLocation(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, properties=None):  # noqa: E501
        """ResponseTimeFilterFastLocation - a model defined in OpenAPI

        :param id: The id of this ResponseTimeFilterFastLocation.  # noqa: E501
        :type id: str
        :param properties: The properties of this ResponseTimeFilterFastLocation.  # noqa: E501
        :type properties: List[ResponseTimeFilterFastProperties]
        """
        self.openapi_types = {
            'id': str,
            'properties': List[ResponseTimeFilterFastProperties]
        }

        self.attribute_map = {
            'id': 'id',
            'properties': 'properties'
        }

        self._id = id
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterFastLocation':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterFastLocation of this ResponseTimeFilterFastLocation.  # noqa: E501
        :rtype: ResponseTimeFilterFastLocation
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this ResponseTimeFilterFastLocation.


        :return: The id of this ResponseTimeFilterFastLocation.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this ResponseTimeFilterFastLocation.


        :param id: The id of this ResponseTimeFilterFastLocation.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def properties(self):
        """Gets the properties of this ResponseTimeFilterFastLocation.


        :return: The properties of this ResponseTimeFilterFastLocation.
        :rtype: List[ResponseTimeFilterFastProperties]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseTimeFilterFastLocation.


        :param properties: The properties of this ResponseTimeFilterFastLocation.
        :type properties: List[ResponseTimeFilterFastProperties]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
