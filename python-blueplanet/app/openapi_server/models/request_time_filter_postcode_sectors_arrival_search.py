# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.request_range_full import RequestRangeFull  # noqa: F401,E501
from app.openapi_server.models.request_time_filter_postcode_sectors_property import RequestTimeFilterPostcodeSectorsProperty  # noqa: F401,E501
from app.openapi_server.models.request_transportation import RequestTransportation  # noqa: F401,E501
from openapi_server import util


class RequestTimeFilterPostcodeSectorsArrivalSearch(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, id: str=None, transportation: RequestTransportation=None, travel_time: int=None, arrival_time: datetime=None, reachable_postcodes_threshold: float=None, properties: List[RequestTimeFilterPostcodeSectorsProperty]=None, range: RequestRangeFull=None):  # noqa: E501
        """RequestTimeFilterPostcodeSectorsArrivalSearch - a model defined in Swagger

        :param id: The id of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type id: str
        :param transportation: The transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type transportation: RequestTransportation
        :param travel_time: The travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type travel_time: int
        :param arrival_time: The arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type arrival_time: datetime
        :param reachable_postcodes_threshold: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type reachable_postcodes_threshold: float
        :param properties: The properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type properties: List[RequestTimeFilterPostcodeSectorsProperty]
        :param range: The range of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type range: RequestRangeFull
        """
        self.swagger_types = {
            'id': str,
            'transportation': RequestTransportation,
            'travel_time': int,
            'arrival_time': datetime,
            'reachable_postcodes_threshold': float,
            'properties': List[RequestTimeFilterPostcodeSectorsProperty],
            'range': RequestRangeFull
        }

        self.attribute_map = {
            'id': 'id',
            'transportation': 'transportation',
            'travel_time': 'travel_time',
            'arrival_time': 'arrival_time',
            'reachable_postcodes_threshold': 'reachable_postcodes_threshold',
            'properties': 'properties',
            'range': 'range'
        }

        self._id = id
        self._transportation = transportation
        self._travel_time = travel_time
        self._arrival_time = arrival_time
        self._reachable_postcodes_threshold = reachable_postcodes_threshold
        self._properties = properties
        self._range = range

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterPostcodeSectorsArrivalSearch':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterPostcodeSectorsArrivalSearch of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: RequestTimeFilterPostcodeSectorsArrivalSearch
        """
        return util.deserialize_model(dikt, cls)

    @property
    def id(self) -> str:
        """Gets the id of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The id of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id: str):
        """Sets the id of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param id: The id of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :type id: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def transportation(self) -> RequestTransportation:
        """Gets the transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation: RequestTransportation):
        """Sets the transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param transportation: The transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :type transportation: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self) -> int:
        """Gets the travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time: int):
        """Sets the travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param travel_time: The travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.
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
    def arrival_time(self) -> datetime:
        """Gets the arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time: datetime):
        """Sets the arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param arrival_time: The arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :type arrival_time: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def reachable_postcodes_threshold(self) -> float:
        """Gets the reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: float
        """
        return self._reachable_postcodes_threshold

    @reachable_postcodes_threshold.setter
    def reachable_postcodes_threshold(self, reachable_postcodes_threshold: float):
        """Sets the reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param reachable_postcodes_threshold: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :type reachable_postcodes_threshold: float
        """
        if reachable_postcodes_threshold is None:
            raise ValueError("Invalid value for `reachable_postcodes_threshold`, must not be `None`")  # noqa: E501

        self._reachable_postcodes_threshold = reachable_postcodes_threshold

    @property
    def properties(self) -> List[RequestTimeFilterPostcodeSectorsProperty]:
        """Gets the properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: List[RequestTimeFilterPostcodeSectorsProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties: List[RequestTimeFilterPostcodeSectorsProperty]):
        """Sets the properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param properties: The properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :type properties: List[RequestTimeFilterPostcodeSectorsProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self) -> RequestRangeFull:
        """Gets the range of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :return: The range of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range: RequestRangeFull):
        """Sets the range of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param range: The range of this RequestTimeFilterPostcodeSectorsArrivalSearch.
        :type range: RequestRangeFull
        """

        self._range = range
