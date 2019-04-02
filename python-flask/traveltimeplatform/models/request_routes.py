# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestRoutes(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, locations=None, departure_searches=None, arrival_searches=None):  # noqa: E501
        """RequestRoutes - a model defined in OpenAPI

        :param locations: The locations of this RequestRoutes.  # noqa: E501
        :type locations: List[RequestLocation]
        :param departure_searches: The departure_searches of this RequestRoutes.  # noqa: E501
        :type departure_searches: List[RequestRoutesDepartureSearch]
        :param arrival_searches: The arrival_searches of this RequestRoutes.  # noqa: E501
        :type arrival_searches: List[RequestRoutesArrivalSearch]
        """
        self.openapi_types = {
            'locations': List[RequestLocation],
            'departure_searches': List[RequestRoutesDepartureSearch],
            'arrival_searches': List[RequestRoutesArrivalSearch]
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
    def from_dict(cls, dikt) -> 'RequestRoutes':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestRoutes of this RequestRoutes.  # noqa: E501
        :rtype: RequestRoutes
        """
        return util.deserialize_model(dikt, cls)

    @property
    def locations(self):
        """Gets the locations of this RequestRoutes.


        :return: The locations of this RequestRoutes.
        :rtype: List[RequestLocation]
        """
        return self._locations

    @locations.setter
    def locations(self, locations):
        """Sets the locations of this RequestRoutes.


        :param locations: The locations of this RequestRoutes.
        :type locations: List[RequestLocation]
        """
        if locations is None:
            raise ValueError("Invalid value for `locations`, must not be `None`")  # noqa: E501

        self._locations = locations

    @property
    def departure_searches(self):
        """Gets the departure_searches of this RequestRoutes.


        :return: The departure_searches of this RequestRoutes.
        :rtype: List[RequestRoutesDepartureSearch]
        """
        return self._departure_searches

    @departure_searches.setter
    def departure_searches(self, departure_searches):
        """Sets the departure_searches of this RequestRoutes.


        :param departure_searches: The departure_searches of this RequestRoutes.
        :type departure_searches: List[RequestRoutesDepartureSearch]
        """

        self._departure_searches = departure_searches

    @property
    def arrival_searches(self):
        """Gets the arrival_searches of this RequestRoutes.


        :return: The arrival_searches of this RequestRoutes.
        :rtype: List[RequestRoutesArrivalSearch]
        """
        return self._arrival_searches

    @arrival_searches.setter
    def arrival_searches(self, arrival_searches):
        """Sets the arrival_searches of this RequestRoutes.


        :param arrival_searches: The arrival_searches of this RequestRoutes.
        :type arrival_searches: List[RequestRoutesArrivalSearch]
        """

        self._arrival_searches = arrival_searches
