# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.request_range_full import RequestRangeFull  # noqa: F401,E501
from app.openapi_server.models.request_routes_property import RequestRoutesProperty  # noqa: F401,E501
from app.openapi_server.models.request_transportation import RequestTransportation  # noqa: F401,E501
from openapi_server import util


class RequestRoutesDepartureSearch(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, id: str=None, departure_location_id: str=None, arrival_location_ids: List[str]=None, transportation: RequestTransportation=None, departure_time: datetime=None, properties: List[RequestRoutesProperty]=None, range: RequestRangeFull=None):  # noqa: E501
        """RequestRoutesDepartureSearch - a model defined in Swagger

        :param id: The id of this RequestRoutesDepartureSearch.  # noqa: E501
        :type id: str
        :param departure_location_id: The departure_location_id of this RequestRoutesDepartureSearch.  # noqa: E501
        :type departure_location_id: str
        :param arrival_location_ids: The arrival_location_ids of this RequestRoutesDepartureSearch.  # noqa: E501
        :type arrival_location_ids: List[str]
        :param transportation: The transportation of this RequestRoutesDepartureSearch.  # noqa: E501
        :type transportation: RequestTransportation
        :param departure_time: The departure_time of this RequestRoutesDepartureSearch.  # noqa: E501
        :type departure_time: datetime
        :param properties: The properties of this RequestRoutesDepartureSearch.  # noqa: E501
        :type properties: List[RequestRoutesProperty]
        :param range: The range of this RequestRoutesDepartureSearch.  # noqa: E501
        :type range: RequestRangeFull
        """
        self.swagger_types = {
            'id': str,
            'departure_location_id': str,
            'arrival_location_ids': List[str],
            'transportation': RequestTransportation,
            'departure_time': datetime,
            'properties': List[RequestRoutesProperty],
            'range': RequestRangeFull
        }

        self.attribute_map = {
            'id': 'id',
            'departure_location_id': 'departure_location_id',
            'arrival_location_ids': 'arrival_location_ids',
            'transportation': 'transportation',
            'departure_time': 'departure_time',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._departure_location_id = departure_location_id
        self._arrival_location_ids = arrival_location_ids
        self._transportation = transportation
        self._departure_time = departure_time
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt) -> 'RequestRoutesDepartureSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestRoutesDepartureSearch of this RequestRoutesDepartureSearch.  # noqa: E501
        :rtype: RequestRoutesDepartureSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self) -> str:
        """Gets the id of this RequestRoutesDepartureSearch.


        :return: The id of this RequestRoutesDepartureSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """Sets the id of this RequestRoutesDepartureSearch.


        :param id: The id of this RequestRoutesDepartureSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def departure_location_id(self) -> str:
        """Gets the departure_location_id of this RequestRoutesDepartureSearch.


        :return: The departure_location_id of this RequestRoutesDepartureSearch.
        :rtype: str
        """
        return self._departure_location_id

    @departure_location_id.setter
    def departure_location_id(self, departure_location_id: str):
        """Sets the departure_location_id of this RequestRoutesDepartureSearch.


        :param departure_location_id: The departure_location_id of this RequestRoutesDepartureSearch.
        :type departure_location_id: str
        """
        if departure_location_id is None:
            raise ValueError("Invalid value for `departure_location_id`, must not be `None`")  # noqa: E501

        self._departure_location_id = departure_location_id

    @property
    def arrival_location_ids(self) -> List[str]:
        """Gets the arrival_location_ids of this RequestRoutesDepartureSearch.


        :return: The arrival_location_ids of this RequestRoutesDepartureSearch.
        :rtype: List[str]
        """
        return self._arrival_location_ids

    @arrival_location_ids.setter
    def arrival_location_ids(self, arrival_location_ids: List[str]):
        """Sets the arrival_location_ids of this RequestRoutesDepartureSearch.


        :param arrival_location_ids: The arrival_location_ids of this RequestRoutesDepartureSearch.
        :type arrival_location_ids: List[str]
        """
        if arrival_location_ids is None:
            raise ValueError("Invalid value for `arrival_location_ids`, must not be `None`")  # noqa: E501

        self._arrival_location_ids = arrival_location_ids

    @property
    def transportation(self) -> RequestTransportation:
        """Gets the transportation of this RequestRoutesDepartureSearch.


        :return: The transportation of this RequestRoutesDepartureSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation: RequestTransportation):
        """Sets the transportation of this RequestRoutesDepartureSearch.


        :param transportation: The transportation of this RequestRoutesDepartureSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def departure_time(self) -> datetime:
        """Gets the departure_time of this RequestRoutesDepartureSearch.


        :return: The departure_time of this RequestRoutesDepartureSearch.
        :rtype: datetime
        """
        return self._departure_time

    @departure_time.setter
    def departure_time(self, departure_time: datetime):
        """Sets the departure_time of this RequestRoutesDepartureSearch.


        :param departure_time: The departure_time of this RequestRoutesDepartureSearch.
        :type departure_time: datetime
        """
        if departure_time is None:
            raise ValueError("Invalid value for `departure_time`, must not be `None`")  # noqa: E501

        self._departure_time = departure_time

    @property
    def properties(self) -> List[RequestRoutesProperty]:
        """Gets the properties of this RequestRoutesDepartureSearch.


        :return: The properties of this RequestRoutesDepartureSearch.
        :rtype: List[RequestRoutesProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties: List[RequestRoutesProperty]):
        """Sets the properties of this RequestRoutesDepartureSearch.


        :param properties: The properties of this RequestRoutesDepartureSearch.
        :type properties: List[RequestRoutesProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self) -> RequestRangeFull:
        """Gets the range of this RequestRoutesDepartureSearch.


        :return: The range of this RequestRoutesDepartureSearch.
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range: RequestRangeFull):
        """Sets the range of this RequestRoutesDepartureSearch.


        :param range: The range of this RequestRoutesDepartureSearch.
        :type range: RequestRangeFull
        """

        self._range = range
