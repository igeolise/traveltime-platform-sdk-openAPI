# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.request_location import RequestLocation
from traveltimeplatform.models.request_time_filter_arrival_search import RequestTimeFilterArrivalSearch
from traveltimeplatform.models.request_time_filter_departure_search import RequestTimeFilterDepartureSearch
from traveltimeplatform import util


class RequestTimeFilter(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, locations: List[RequestLocation]=None, departure_searches: List[RequestTimeFilterDepartureSearch]=None, arrival_searches: List[RequestTimeFilterArrivalSearch]=None):
        """RequestTimeFilter - a model defined in OpenAPI

        :param locations: The locations of this RequestTimeFilter.
        :param departure_searches: The departure_searches of this RequestTimeFilter.
        :param arrival_searches: The arrival_searches of this RequestTimeFilter.
        """
        self.openapi_types = {
            'locations': List[RequestLocation],
            'departure_searches': List[RequestTimeFilterDepartureSearch],
            'arrival_searches': List[RequestTimeFilterArrivalSearch]
        }

        self.attribute_map = {
            'locations': 'locations',
            'departure_searches': 'departure_searches',
            'arrival_searches': 'arrival_searches'
        }

        self._locations = locations
        self._departure_searches = departure_searches
        self._arrival_searches = arrival_searches

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeFilter':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeFilter of this RequestTimeFilter.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def locations(self):
        """Gets the locations of this RequestTimeFilter.


        :return: The locations of this RequestTimeFilter.
        :rtype: List[RequestLocation]
        """
        return self._locations

    @locations.setter
    def locations(self, locations):
        """Sets the locations of this RequestTimeFilter.


        :param locations: The locations of this RequestTimeFilter.
        :type locations: List[RequestLocation]
        """
        if locations is None:
            raise ValueError("Invalid value for `locations`, must not be `None`")

        self._locations = locations

    @property
    def departure_searches(self):
        """Gets the departure_searches of this RequestTimeFilter.


        :return: The departure_searches of this RequestTimeFilter.
        :rtype: List[RequestTimeFilterDepartureSearch]
        """
        return self._departure_searches

    @departure_searches.setter
    def departure_searches(self, departure_searches):
        """Sets the departure_searches of this RequestTimeFilter.


        :param departure_searches: The departure_searches of this RequestTimeFilter.
        :type departure_searches: List[RequestTimeFilterDepartureSearch]
        """

        self._departure_searches = departure_searches

    @property
    def arrival_searches(self):
        """Gets the arrival_searches of this RequestTimeFilter.


        :return: The arrival_searches of this RequestTimeFilter.
        :rtype: List[RequestTimeFilterArrivalSearch]
        """
        return self._arrival_searches

    @arrival_searches.setter
    def arrival_searches(self, arrival_searches):
        """Sets the arrival_searches of this RequestTimeFilter.


        :param arrival_searches: The arrival_searches of this RequestTimeFilter.
        :type arrival_searches: List[RequestTimeFilterArrivalSearch]
        """

        self._arrival_searches = arrival_searches
