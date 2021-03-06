# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.response_time_filter_postcode_district_properties import ResponseTimeFilterPostcodeDistrictProperties  # noqa: F401,E501
from openapi_server import util


class ResponseTimeFilterPostcodeDistrict(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, code: String=None, properties: ResponseTimeFilterPostcodeDistrictProperties=None):  # noqa: E501
        """ResponseTimeFilterPostcodeDistrict - a model defined in Swagger

        :param code: The code of this ResponseTimeFilterPostcodeDistrict.  # noqa: E501
        :type code: String
        :param properties: The properties of this ResponseTimeFilterPostcodeDistrict.  # noqa: E501
        :type properties: ResponseTimeFilterPostcodeDistrictProperties
        """
        self.swagger_types = {
            'code': String,
            'properties': ResponseTimeFilterPostcodeDistrictProperties
        }

        self.attribute_map = {
            'code': 'code',
            'properties': 'properties'
        }

        self._code = code
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodeDistrict':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodeDistrict of this ResponseTimeFilterPostcodeDistrict.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodeDistrict
        """
        return util.deserialize_model(dikt, cls)

    @property
    def code(self) -> String:
        """Gets the code of this ResponseTimeFilterPostcodeDistrict.


        :return: The code of this ResponseTimeFilterPostcodeDistrict.
        :rtype: String
        """
        return self._code

    @code.setter
    def code(self, code: String):
        """Sets the code of this ResponseTimeFilterPostcodeDistrict.


        :param code: The code of this ResponseTimeFilterPostcodeDistrict.
        :type code: String
        """
        if code is None:
            raise ValueError("Invalid value for `code`, must not be `None`")  # noqa: E501

        self._code = code

    @property
    def properties(self) -> ResponseTimeFilterPostcodeDistrictProperties:
        """Gets the properties of this ResponseTimeFilterPostcodeDistrict.


        :return: The properties of this ResponseTimeFilterPostcodeDistrict.
        :rtype: ResponseTimeFilterPostcodeDistrictProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties: ResponseTimeFilterPostcodeDistrictProperties):
        """Sets the properties of this ResponseTimeFilterPostcodeDistrict.


        :param properties: The properties of this ResponseTimeFilterPostcodeDistrict.
        :type properties: ResponseTimeFilterPostcodeDistrictProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
