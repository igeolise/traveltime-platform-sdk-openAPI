# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from app.traveltimeplatform.models.response_routes_result import ResponseRoutesResult  # noqa: F401,E501
from traveltimeplatform import util


class ResponseRoutes(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, results: List[ResponseRoutesResult]=None):  # noqa: E501
        """ResponseRoutes - a model defined in Swagger

        :param results: The results of this ResponseRoutes.  # noqa: E501
        :type results: List[ResponseRoutesResult]
        """
        self.swagger_types = {
            'results': List[ResponseRoutesResult]
        }

        self.attribute_map = {
            'results': 'results'
        }

        self._results = results

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseRoutes':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseRoutes of this ResponseRoutes.  # noqa: E501
        :rtype: ResponseRoutes
        """
        return util.deserialize_model(dikt, cls)

    @property
    def results(self) -> List[ResponseRoutesResult]:
        """Gets the results of this ResponseRoutes.


        :return: The results of this ResponseRoutes.
        :rtype: List[ResponseRoutesResult]
        """
        return self._results

    @results.setter
    def results(self, results: List[ResponseRoutesResult]):
        """Sets the results of this ResponseRoutes.


        :param results: The results of this ResponseRoutes.
        :type results: List[ResponseRoutesResult]
        """
        if results is None:
            raise ValueError("Invalid value for `results`, must not be `None`")  # noqa: E501

        self._results = results
