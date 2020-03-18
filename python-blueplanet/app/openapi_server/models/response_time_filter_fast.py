# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.response_time_filter_fast_result import ResponseTimeFilterFastResult  # noqa: F401,E501
from openapi_server import util


class ResponseTimeFilterFast(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, results: List[ResponseTimeFilterFastResult]=None):  # noqa: E501
        """ResponseTimeFilterFast - a model defined in Swagger

        :param results: The results of this ResponseTimeFilterFast.  # noqa: E501
        :type results: List[ResponseTimeFilterFastResult]
        """
        self.swagger_types = {
            'results': List[ResponseTimeFilterFastResult]
        }

        self.attribute_map = {
            'results': 'results'
        }

        self._results = results

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterFast':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterFast of this ResponseTimeFilterFast.  # noqa: E501
        :rtype: ResponseTimeFilterFast
        """
        return util.deserialize_model(dikt, cls)

    @property
    def results(self) -> List[ResponseTimeFilterFastResult]:
        """Gets the results of this ResponseTimeFilterFast.


        :return: The results of this ResponseTimeFilterFast.
        :rtype: List[ResponseTimeFilterFastResult]
        """
        return self._results

    @results.setter
    def results(self, results: List[ResponseTimeFilterFastResult]):
        """Sets the results of this ResponseTimeFilterFast.


        :param results: The results of this ResponseTimeFilterFast.
        :type results: List[ResponseTimeFilterFastResult]
        """
        if results is None:
            raise ValueError("Invalid value for `results`, must not be `None`")  # noqa: E501

        self._results = results
