# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_travel_time_statistics import ResponseTravelTimeStatistics
from openapi_server import util

from openapi_server.models.response_travel_time_statistics import ResponseTravelTimeStatistics  # noqa: E501

class ResponseTimeFilterPostcodeDistrictProperties(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, travel_time_reachable=None, travel_time_all=None, coverage=None):  # noqa: E501
        """ResponseTimeFilterPostcodeDistrictProperties - a model defined in OpenAPI

        :param travel_time_reachable: The travel_time_reachable of this ResponseTimeFilterPostcodeDistrictProperties.  # noqa: E501
        :type travel_time_reachable: ResponseTravelTimeStatistics
        :param travel_time_all: The travel_time_all of this ResponseTimeFilterPostcodeDistrictProperties.  # noqa: E501
        :type travel_time_all: ResponseTravelTimeStatistics
        :param coverage: The coverage of this ResponseTimeFilterPostcodeDistrictProperties.  # noqa: E501
        :type coverage: float
        """
        self.openapi_types = {
            'travel_time_reachable': ResponseTravelTimeStatistics,
            'travel_time_all': ResponseTravelTimeStatistics,
            'coverage': float
        }

        self.attribute_map = {
            'travel_time_reachable': 'travel_time_reachable',
            'travel_time_all': 'travel_time_all',
            'coverage': 'coverage'
        }

        self._travel_time_reachable = travel_time_reachable
        self._travel_time_all = travel_time_all
        self._coverage = coverage

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterPostcodeDistrictProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterPostcodeDistrictProperties of this ResponseTimeFilterPostcodeDistrictProperties.  # noqa: E501
        :rtype: ResponseTimeFilterPostcodeDistrictProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def travel_time_reachable(self):
        """Gets the travel_time_reachable of this ResponseTimeFilterPostcodeDistrictProperties.


        :return: The travel_time_reachable of this ResponseTimeFilterPostcodeDistrictProperties.
        :rtype: ResponseTravelTimeStatistics
        """
        return self._travel_time_reachable

    @travel_time_reachable.setter
    def travel_time_reachable(self, travel_time_reachable):
        """Sets the travel_time_reachable of this ResponseTimeFilterPostcodeDistrictProperties.


        :param travel_time_reachable: The travel_time_reachable of this ResponseTimeFilterPostcodeDistrictProperties.
        :type travel_time_reachable: ResponseTravelTimeStatistics
        """

        self._travel_time_reachable = travel_time_reachable

    @property
    def travel_time_all(self):
        """Gets the travel_time_all of this ResponseTimeFilterPostcodeDistrictProperties.


        :return: The travel_time_all of this ResponseTimeFilterPostcodeDistrictProperties.
        :rtype: ResponseTravelTimeStatistics
        """
        return self._travel_time_all

    @travel_time_all.setter
    def travel_time_all(self, travel_time_all):
        """Sets the travel_time_all of this ResponseTimeFilterPostcodeDistrictProperties.


        :param travel_time_all: The travel_time_all of this ResponseTimeFilterPostcodeDistrictProperties.
        :type travel_time_all: ResponseTravelTimeStatistics
        """

        self._travel_time_all = travel_time_all

    @property
    def coverage(self):
        """Gets the coverage of this ResponseTimeFilterPostcodeDistrictProperties.


        :return: The coverage of this ResponseTimeFilterPostcodeDistrictProperties.
        :rtype: float
        """
        return self._coverage

    @coverage.setter
    def coverage(self, coverage):
        """Sets the coverage of this ResponseTimeFilterPostcodeDistrictProperties.


        :param coverage: The coverage of this ResponseTimeFilterPostcodeDistrictProperties.
        :type coverage: float
        """

        self._coverage = coverage
