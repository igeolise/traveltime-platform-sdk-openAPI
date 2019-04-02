# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class ResponseTimeFilterPostcode(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, code=None, properties=None):  # noqa: E501
        """ResponseTimeFilterPostcode - a model defined in OpenAPI

        :param code: The code of this ResponseTimeFilterPostcode.  # noqa: E501
        :type code: String
        :param properties: The properties of this ResponseTimeFilterPostcode.  # noqa: E501
        :type properties: List[ResponseTimeFilterPostcodesProperties]
        """
        self.openapi_types = {
            'code': String,
            'properties': List[ResponseTimeFilterPostcodesProperties]
        }

        self.attribute_map = {
            'code': 'code',
            'properties': 'properties'
        }

        self._code = code
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcode':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcode of this ResponseTimeFilterPostcode.  # noqa: E501
        :rtype: ResponseTimeFilterPostcode
        """
        return util.deserialize_model(dikt, cls)

    @property
    def code(self):
        """Gets the code of this ResponseTimeFilterPostcode.


        :return: The code of this ResponseTimeFilterPostcode.
        :rtype: String
        """
        return self._code

    @code.setter
    def code(self, code):
        """Sets the code of this ResponseTimeFilterPostcode.


        :param code: The code of this ResponseTimeFilterPostcode.
        :type code: String
        """
        if code is None:
            raise ValueError("Invalid value for `code`, must not be `None`")  # noqa: E501

        self._code = code

    @property
    def properties(self):
        """Gets the properties of this ResponseTimeFilterPostcode.


        :return: The properties of this ResponseTimeFilterPostcode.
        :rtype: List[ResponseTimeFilterPostcodesProperties]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseTimeFilterPostcode.


        :param properties: The properties of this ResponseTimeFilterPostcode.
        :type properties: List[ResponseTimeFilterPostcodesProperties]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
