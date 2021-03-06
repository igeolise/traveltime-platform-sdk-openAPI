# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_time_filter_postcode import ResponseTimeFilterPostcode
from openapi_server import util


class ResponseTimeFilterPostcodesResult(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, search_id: str=None, postcodes: List[ResponseTimeFilterPostcode]=None):
        """ResponseTimeFilterPostcodesResult - a model defined in OpenAPI

        :param search_id: The search_id of this ResponseTimeFilterPostcodesResult.
        :param postcodes: The postcodes of this ResponseTimeFilterPostcodesResult.
        """
        self.openapi_types = {
            'search_id': str,
            'postcodes': List[ResponseTimeFilterPostcode]
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'postcodes': 'postcodes'
        }

        self._search_id = search_id
        self._postcodes = postcodes

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseTimeFilterPostcodesResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseTimeFilterPostcodesResult of this ResponseTimeFilterPostcodesResult.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeFilterPostcodesResult.


        :return: The search_id of this ResponseTimeFilterPostcodesResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeFilterPostcodesResult.


        :param search_id: The search_id of this ResponseTimeFilterPostcodesResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")

        self._search_id = search_id

    @property
    def postcodes(self):
        """Gets the postcodes of this ResponseTimeFilterPostcodesResult.


        :return: The postcodes of this ResponseTimeFilterPostcodesResult.
        :rtype: List[ResponseTimeFilterPostcode]
        """
        return self._postcodes

    @postcodes.setter
    def postcodes(self, postcodes):
        """Sets the postcodes of this ResponseTimeFilterPostcodesResult.


        :param postcodes: The postcodes of this ResponseTimeFilterPostcodesResult.
        :type postcodes: List[ResponseTimeFilterPostcode]
        """
        if postcodes is None:
            raise ValueError("Invalid value for `postcodes`, must not be `None`")

        self._postcodes = postcodes
