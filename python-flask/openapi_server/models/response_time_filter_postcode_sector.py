# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_time_filter_postcode_sector_properties import ResponseTimeFilterPostcodeSectorProperties
from openapi_server import util

from openapi_server.models.response_time_filter_postcode_sector_properties import ResponseTimeFilterPostcodeSectorProperties  # noqa: E501

class ResponseTimeFilterPostcodeSector(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, code=None, properties=None):  # noqa: E501
        """ResponseTimeFilterPostcodeSector - a model defined in OpenAPI

        :param code: The code of this ResponseTimeFilterPostcodeSector.  # noqa: E501
        :type code: String
        :param properties: The properties of this ResponseTimeFilterPostcodeSector.  # noqa: E501
        :type properties: ResponseTimeFilterPostcodeSectorProperties
        """
        self.openapi_types = {
            'code': String,
            'properties': ResponseTimeFilterPostcodeSectorProperties
        }

        self.attribute_map = {
            'code': 'code',
            'properties': 'properties'
        }

        self._code = code
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodeSector':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodeSector of this ResponseTimeFilterPostcodeSector.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodeSector
        """
        return util.deserialize_model(dikt, cls)

    @property
    def code(self):
        """Gets the code of this ResponseTimeFilterPostcodeSector.


        :return: The code of this ResponseTimeFilterPostcodeSector.
        :rtype: String
        """
        return self._code

    @code.setter
    def code(self, code):
        """Sets the code of this ResponseTimeFilterPostcodeSector.


        :param code: The code of this ResponseTimeFilterPostcodeSector.
        :type code: String
        """
        if code is None:
            raise ValueError("Invalid value for `code`, must not be `None`")  # noqa: E501

        self._code = code

    @property
    def properties(self):
        """Gets the properties of this ResponseTimeFilterPostcodeSector.


        :return: The properties of this ResponseTimeFilterPostcodeSector.
        :rtype: ResponseTimeFilterPostcodeSectorProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseTimeFilterPostcodeSector.


        :param properties: The properties of this ResponseTimeFilterPostcodeSector.
        :type properties: ResponseTimeFilterPostcodeSectorProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
