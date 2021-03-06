# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_time_filter_postcode_sectors_result import ResponseTimeFilterPostcodeSectorsResult
from openapi_server import util

from openapi_server.models.response_time_filter_postcode_sectors_result import ResponseTimeFilterPostcodeSectorsResult  # noqa: E501

class ResponseTimeFilterPostcodeSectors(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, results=None):  # noqa: E501
        """ResponseTimeFilterPostcodeSectors - a model defined in OpenAPI

        :param results: The results of this ResponseTimeFilterPostcodeSectors.  # noqa: E501
        :type results: List[ResponseTimeFilterPostcodeSectorsResult]
        """
        self.openapi_types = {
            'results': List[ResponseTimeFilterPostcodeSectorsResult]
        }

        self.attribute_map = {
            'results': 'results'
        }

        self._results = results

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodeSectors':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodeSectors of this ResponseTimeFilterPostcodeSectors.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodeSectors
        """
        return util.deserialize_model(dikt, cls)

    @property
    def results(self):
        """Gets the results of this ResponseTimeFilterPostcodeSectors.


        :return: The results of this ResponseTimeFilterPostcodeSectors.
        :rtype: List[ResponseTimeFilterPostcodeSectorsResult]
        """
        return self._results

    @results.setter
    def results(self, results):
        """Sets the results of this ResponseTimeFilterPostcodeSectors.


        :param results: The results of this ResponseTimeFilterPostcodeSectors.
        :type results: List[ResponseTimeFilterPostcodeSectorsResult]
        """
        if results is None:
            raise ValueError("Invalid value for `results`, must not be `None`")  # noqa: E501

        self._results = results
