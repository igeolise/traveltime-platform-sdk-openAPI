# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeFilterDepartureSearch(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, departure_location_id=None, arrival_location_ids=None, transportation=None, travel_time=None, departure_time=None, properties=None, range=None):  # noqa: E501
        """RequestTimeFilterDepartureSearch - a model defined in OpenAPI

        :param id: The id of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type id: str
        :param departure_location_id: The departure_location_id of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type departure_location_id: str
        :param arrival_location_ids: The arrival_location_ids of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type arrival_location_ids: List[str]
        :param transportation: The transportation of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type transportation: RequestTransportation
        :param travel_time: The travel_time of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type travel_time: int
        :param departure_time: The departure_time of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type departure_time: datetime
        :param properties: The properties of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type properties: List[RequestTimeFilterProperty]
        :param range: The range of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :type range: RequestRangeFull
        """
        self.openapi_types = {
            'id': str,
            'departure_location_id': str,
            'arrival_location_ids': List[str],
            'transportation': RequestTransportation,
            'travel_time': int,
            'departure_time': datetime,
            'properties': List[RequestTimeFilterProperty],
            'range': RequestRangeFull
        }

        self.attribute_map = {
            'id': 'id',
            'departure_location_id': 'departure_location_id',
            'arrival_location_ids': 'arrival_location_ids',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'departure_time': 'departure_time',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._departure_location_id = departure_location_id
        self._arrival_location_ids = arrival_location_ids
        self._transportation = transportation
        self._travel_time = travel_time
        self._departure_time = departure_time
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterDepartureSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterDepartureSearch of this RequestTimeFilterDepartureSearch.  # noqa: E501
        :rtype: RequestTimeFilterDepartureSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this RequestTimeFilterDepartureSearch.


        :return: The id of this RequestTimeFilterDepartureSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeFilterDepartureSearch.


        :param id: The id of this RequestTimeFilterDepartureSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def departure_location_id(self):
        """Gets the departure_location_id of this RequestTimeFilterDepartureSearch.


        :return: The departure_location_id of this RequestTimeFilterDepartureSearch.
        :rtype: str
        """
        return self._departure_location_id

    @departure_location_id.setter
    def departure_location_id(self, departure_location_id):
        """Sets the departure_location_id of this RequestTimeFilterDepartureSearch.


        :param departure_location_id: The departure_location_id of this RequestTimeFilterDepartureSearch.
        :type departure_location_id: str
        """
        if departure_location_id is None:
            raise ValueError("Invalid value for `departure_location_id`, must not be `None`")  # noqa: E501

        self._departure_location_id = departure_location_id

    @property
    def arrival_location_ids(self):
        """Gets the arrival_location_ids of this RequestTimeFilterDepartureSearch.


        :return: The arrival_location_ids of this RequestTimeFilterDepartureSearch.
        :rtype: List[str]
        """
        return self._arrival_location_ids

    @arrival_location_ids.setter
    def arrival_location_ids(self, arrival_location_ids):
        """Sets the arrival_location_ids of this RequestTimeFilterDepartureSearch.


        :param arrival_location_ids: The arrival_location_ids of this RequestTimeFilterDepartureSearch.
        :type arrival_location_ids: List[str]
        """
        if arrival_location_ids is None:
            raise ValueError("Invalid value for `arrival_location_ids`, must not be `None`")  # noqa: E501

        self._arrival_location_ids = arrival_location_ids

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeFilterDepartureSearch.


        :return: The transportation of this RequestTimeFilterDepartureSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeFilterDepartureSearch.


        :param transportation: The transportation of this RequestTimeFilterDepartureSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeFilterDepartureSearch.


        :return: The travel_time of this RequestTimeFilterDepartureSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeFilterDepartureSearch.


        :param travel_time: The travel_time of this RequestTimeFilterDepartureSearch.
        :type travel_time: int
        """
        if travel_time is None:
            raise ValueError("Invalid value for `travel_time`, must not be `None`")  # noqa: E501
        if travel_time is not None and travel_time > 14400:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value less than or equal to `14400`")  # noqa: E501
        if travel_time is not None and travel_time < 60:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value greater than or equal to `60`")  # noqa: E501

        self._travel_time = travel_time

    @property
    def departure_time(self):
        """Gets the departure_time of this RequestTimeFilterDepartureSearch.


        :return: The departure_time of this RequestTimeFilterDepartureSearch.
        :rtype: datetime
        """
        return self._departure_time

    @departure_time.setter
    def departure_time(self, departure_time):
        """Sets the departure_time of this RequestTimeFilterDepartureSearch.


        :param departure_time: The departure_time of this RequestTimeFilterDepartureSearch.
        :type departure_time: datetime
        """
        if departure_time is None:
            raise ValueError("Invalid value for `departure_time`, must not be `None`")  # noqa: E501

        self._departure_time = departure_time

    @property
    def properties(self):
        """Gets the properties of this RequestTimeFilterDepartureSearch.


        :return: The properties of this RequestTimeFilterDepartureSearch.
        :rtype: List[RequestTimeFilterProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeFilterDepartureSearch.


        :param properties: The properties of this RequestTimeFilterDepartureSearch.
        :type properties: List[RequestTimeFilterProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestTimeFilterDepartureSearch.


        :return: The range of this RequestTimeFilterDepartureSearch.
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestTimeFilterDepartureSearch.


        :param range: The range of this RequestTimeFilterDepartureSearch.
        :type range: RequestRangeFull
        """

        self._range = range
