# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.response_time_filter_postcode_district import ResponseTimeFilterPostcodeDistrict  # noqa: F401,E501
from openapi_server import util


class ResponseTimeFilterPostcodeDistrictsResult(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, search_id: str=None, districts: List[ResponseTimeFilterPostcodeDistrict]=None):  # noqa: E501
        """ResponseTimeFilterPostcodeDistrictsResult - a model defined in Swagger

        :param search_id: The search_id of this ResponseTimeFilterPostcodeDistrictsResult.  # noqa: E501
        :type search_id: str
        :param districts: The districts of this ResponseTimeFilterPostcodeDistrictsResult.  # noqa: E501
        :type districts: List[ResponseTimeFilterPostcodeDistrict]
        """
        self.swagger_types = {
            'search_id': str,
            'districts': List[ResponseTimeFilterPostcodeDistrict]
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'districts': 'districts'
        }

        self._search_id = search_id
        self._districts = districts

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodeDistrictsResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodeDistrictsResult of this ResponseTimeFilterPostcodeDistrictsResult.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodeDistrictsResult
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self) -> str:
        """Gets the search_id of this ResponseTimeFilterPostcodeDistrictsResult.


        :return: The search_id of this ResponseTimeFilterPostcodeDistrictsResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id: str):
        """Sets the search_id of this ResponseTimeFilterPostcodeDistrictsResult.


        :param search_id: The search_id of this ResponseTimeFilterPostcodeDistrictsResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def districts(self) -> List[ResponseTimeFilterPostcodeDistrict]:
        """Gets the districts of this ResponseTimeFilterPostcodeDistrictsResult.


        :return: The districts of this ResponseTimeFilterPostcodeDistrictsResult.
        :rtype: List[ResponseTimeFilterPostcodeDistrict]
        """
        return self._districts

    @districts.setter
    def districts(self, districts: List[ResponseTimeFilterPostcodeDistrict]):
        """Sets the districts of this ResponseTimeFilterPostcodeDistrictsResult.


        :param districts: The districts of this ResponseTimeFilterPostcodeDistrictsResult.
        :type districts: List[ResponseTimeFilterPostcodeDistrict]
        """
        if districts is None:
            raise ValueError("Invalid value for `districts`, must not be `None`")  # noqa: E501

        self._districts = districts
