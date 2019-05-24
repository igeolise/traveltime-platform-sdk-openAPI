# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_time_filter_fast_result import ResponseTimeFilterFastResult
from traveltimeplatform import util


class ResponseTimeFilterFast(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, results: List[ResponseTimeFilterFastResult]=None):
        """ResponseTimeFilterFast - a model defined in OpenAPI

        :param results: The results of this ResponseTimeFilterFast.
        """
        self.openapi_types = {
            'results': List[ResponseTimeFilterFastResult]
        }

        self.attribute_map = {
            'results': 'results'
        }

        self._results = results

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseTimeFilterFast':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseTimeFilterFast of this ResponseTimeFilterFast.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def results(self):
        """Gets the results of this ResponseTimeFilterFast.


        :return: The results of this ResponseTimeFilterFast.
        :rtype: List[ResponseTimeFilterFastResult]
        """
        return self._results

    @results.setter
    def results(self, results):
        """Sets the results of this ResponseTimeFilterFast.


        :param results: The results of this ResponseTimeFilterFast.
        :type results: List[ResponseTimeFilterFastResult]
        """
        if results is None:
            raise ValueError("Invalid value for `results`, must not be `None`")

        self._results = results
