# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.response_route_part import ResponseRoutePart  # noqa: F401,E501
from openapi_server import util


class ResponseRoute(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, departure_time: datetime=None, arrival_time: datetime=None, parts: List[ResponseRoutePart]=None):  # noqa: E501
        """ResponseRoute - a model defined in Swagger

        :param departure_time: The departure_time of this ResponseRoute.  # noqa: E501
        :type departure_time: datetime
        :param arrival_time: The arrival_time of this ResponseRoute.  # noqa: E501
        :type arrival_time: datetime
        :param parts: The parts of this ResponseRoute.  # noqa: E501
        :type parts: List[ResponseRoutePart]
        """
        self.swagger_types = {
            'departure_time': datetime,
            'arrival_time': datetime,
            'parts': List[ResponseRoutePart]
        }

        self.attribute_map = {
            'departure_time': 'departure_time',
            'arrival_time': 'arrival_time',
            'parts': 'parts'
        }

        self._departure_time = departure_time
        self._arrival_time = arrival_time
        self._parts = parts

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseRoute':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseRoute of this ResponseRoute.  # noqa: E501
        :rtype: ResponseRoute
        """
        return util.deserialize_model(dikt, cls)

    @property
    def departure_time(self) -> datetime:
        """Gets the departure_time of this ResponseRoute.


        :return: The departure_time of this ResponseRoute.
        :rtype: datetime
        """
        return self._departure_time

    @departure_time.setter
    def departure_time(self, departure_time: datetime):
        """Sets the departure_time of this ResponseRoute.


        :param departure_time: The departure_time of this ResponseRoute.
        :type departure_time: datetime
        """
        if departure_time is None:
            raise ValueError("Invalid value for `departure_time`, must not be `None`")  # noqa: E501

        self._departure_time = departure_time

    @property
    def arrival_time(self) -> datetime:
        """Gets the arrival_time of this ResponseRoute.


        :return: The arrival_time of this ResponseRoute.
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time: datetime):
        """Sets the arrival_time of this ResponseRoute.


        :param arrival_time: The arrival_time of this ResponseRoute.
        :type arrival_time: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def parts(self) -> List[ResponseRoutePart]:
        """Gets the parts of this ResponseRoute.


        :return: The parts of this ResponseRoute.
        :rtype: List[ResponseRoutePart]
        """
        return self._parts

    @parts.setter
    def parts(self, parts: List[ResponseRoutePart]):
        """Sets the parts of this ResponseRoute.


        :param parts: The parts of this ResponseRoute.
        :type parts: List[ResponseRoutePart]
        """
        if parts is None:
            raise ValueError("Invalid value for `parts`, must not be `None`")  # noqa: E501

        self._parts = parts
