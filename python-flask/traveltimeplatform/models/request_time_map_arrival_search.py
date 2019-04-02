# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeMapArrivalSearch(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, id=None, coords=None, transportation=None, travel_time=None, arrival_time=None, properties=None, range=None):  # noqa: E501
        """RequestTimeMapArrivalSearch - a model defined in OpenAPI

        :param id: The id of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type id: str
        :param coords: The coords of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type coords: Coords
        :param transportation: The transportation of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type transportation: RequestTransportation
        :param travel_time: The travel_time of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type travel_time: int
        :param arrival_time: The arrival_time of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type arrival_time: datetime
        :param properties: The properties of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type properties: List[RequestTimeMapProperty]
        :param range: The range of this RequestTimeMapArrivalSearch.  # noqa: E501
        :type range: RequestRangeNoMaxResults
        """
        self.openapi_types = {
            'id': str,
            'coords': Coords,
            'transportation': RequestTransportation,
            'travel_time': int,
            'arrival_time': datetime,
            'properties': List[RequestTimeMapProperty],
            'range': RequestRangeNoMaxResults
        }

        self.attribute_map = {
            'id': 'id',
            'coords': 'coords',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'arrival_time': 'arrival_time',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._coords = coords
        self._transportation = transportation
        self._travel_time = travel_time
        self._arrival_time = arrival_time
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeMapArrivalSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeMapArrivalSearch of this RequestTimeMapArrivalSearch.  # noqa: E501
        :rtype: RequestTimeMapArrivalSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self):
        """Gets the id of this RequestTimeMapArrivalSearch.


        :return: The id of this RequestTimeMapArrivalSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeMapArrivalSearch.


        :param id: The id of this RequestTimeMapArrivalSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def coords(self):
        """Gets the coords of this RequestTimeMapArrivalSearch.


        :return: The coords of this RequestTimeMapArrivalSearch.
        :rtype: Coords
        """
        return self._coords

    @coords.setter
    def coords(self, coords):
        """Sets the coords of this RequestTimeMapArrivalSearch.


        :param coords: The coords of this RequestTimeMapArrivalSearch.
        :type coords: Coords
        """
        if coords is None:
            raise ValueError("Invalid value for `coords`, must not be `None`")  # noqa: E501

        self._coords = coords

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeMapArrivalSearch.


        :return: The transportation of this RequestTimeMapArrivalSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeMapArrivalSearch.


        :param transportation: The transportation of this RequestTimeMapArrivalSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeMapArrivalSearch.


        :return: The travel_time of this RequestTimeMapArrivalSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeMapArrivalSearch.


        :param travel_time: The travel_time of this RequestTimeMapArrivalSearch.
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
    def arrival_time(self):
        """Gets the arrival_time of this RequestTimeMapArrivalSearch.


        :return: The arrival_time of this RequestTimeMapArrivalSearch.
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time):
        """Sets the arrival_time of this RequestTimeMapArrivalSearch.


        :param arrival_time: The arrival_time of this RequestTimeMapArrivalSearch.
        :type arrival_time: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def properties(self):
        """Gets the properties of this RequestTimeMapArrivalSearch.


        :return: The properties of this RequestTimeMapArrivalSearch.
        :rtype: List[RequestTimeMapProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeMapArrivalSearch.


        :param properties: The properties of this RequestTimeMapArrivalSearch.
        :type properties: List[RequestTimeMapProperty]
        """

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestTimeMapArrivalSearch.


        :return: The range of this RequestTimeMapArrivalSearch.
        :rtype: RequestRangeNoMaxResults
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestTimeMapArrivalSearch.


        :param range: The range of this RequestTimeMapArrivalSearch.
        :type range: RequestRangeNoMaxResults
        """

        self._range = range
