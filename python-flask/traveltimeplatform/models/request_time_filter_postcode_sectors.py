# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeFilterPostcodeSectors(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, departure_searches=None, arrival_searches=None):  # noqa: E501
        """RequestTimeFilterPostcodeSectors - a model defined in OpenAPI

        :param departure_searches: The departure_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :type departure_searches: List[RequestTimeFilterPostcodeSectorsDepartureSearch]
        :param arrival_searches: The arrival_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :type arrival_searches: List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """
        self.openapi_types = {
            'departure_searches': List[RequestTimeFilterPostcodeSectorsDepartureSearch],
            'arrival_searches': List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        }

        self.attribute_map = {
            'departure_searches': 'departure_searches',
            'arrival_searches': 'arrival_searches'
        }

        self._departure_searches = departure_searches
        self._arrival_searches = arrival_searches

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterPostcodeSectors':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterPostcodeSectors of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :rtype: RequestTimeFilterPostcodeSectors
        """
        return util.deserialize_model(dikt, cls)

    @property
    def departure_searches(self):
        """Gets the departure_searches of this RequestTimeFilterPostcodeSectors.


        :return: The departure_searches of this RequestTimeFilterPostcodeSectors.
        :rtype: List[RequestTimeFilterPostcodeSectorsDepartureSearch]
        """
        return self._departure_searches

    @departure_searches.setter
    def departure_searches(self, departure_searches):
        """Sets the departure_searches of this RequestTimeFilterPostcodeSectors.


        :param departure_searches: The departure_searches of this RequestTimeFilterPostcodeSectors.
        :type departure_searches: List[RequestTimeFilterPostcodeSectorsDepartureSearch]
        """

        self._departure_searches = departure_searches

    @property
    def arrival_searches(self):
        """Gets the arrival_searches of this RequestTimeFilterPostcodeSectors.


        :return: The arrival_searches of this RequestTimeFilterPostcodeSectors.
        :rtype: List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """
        return self._arrival_searches

    @arrival_searches.setter
    def arrival_searches(self, arrival_searches):
        """Sets the arrival_searches of this RequestTimeFilterPostcodeSectors.


        :param arrival_searches: The arrival_searches of this RequestTimeFilterPostcodeSectors.
        :type arrival_searches: List[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """

        self._arrival_searches = arrival_searches
