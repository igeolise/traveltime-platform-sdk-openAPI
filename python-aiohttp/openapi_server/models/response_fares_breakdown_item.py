# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_fare_ticket import ResponseFareTicket
from openapi_server.models.response_transportation_mode import ResponseTransportationMode
from openapi_server import util


class ResponseFaresBreakdownItem(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, modes: List[ResponseTransportationMode]=None, route_part_ids: List[int]=None, tickets: List[ResponseFareTicket]=None):
        """ResponseFaresBreakdownItem - a model defined in OpenAPI

        :param modes: The modes of this ResponseFaresBreakdownItem.
        :param route_part_ids: The route_part_ids of this ResponseFaresBreakdownItem.
        :param tickets: The tickets of this ResponseFaresBreakdownItem.
        """
        self.openapi_types = {
            'modes': List[ResponseTransportationMode],
            'route_part_ids': List[int],
            'tickets': List[ResponseFareTicket]
        }

        self.attribute_map = {
            'modes': 'modes',
            'route_part_ids': 'route_part_ids',
            'tickets': 'tickets'
        }

        self._modes = modes
        self._route_part_ids = route_part_ids
        self._tickets = tickets

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseFaresBreakdownItem':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseFaresBreakdownItem of this ResponseFaresBreakdownItem.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def modes(self):
        """Gets the modes of this ResponseFaresBreakdownItem.


        :return: The modes of this ResponseFaresBreakdownItem.
        :rtype: List[ResponseTransportationMode]
        """
        return self._modes

    @modes.setter
    def modes(self, modes):
        """Sets the modes of this ResponseFaresBreakdownItem.


        :param modes: The modes of this ResponseFaresBreakdownItem.
        :type modes: List[ResponseTransportationMode]
        """
        if modes is None:
            raise ValueError("Invalid value for `modes`, must not be `None`")

        self._modes = modes

    @property
    def route_part_ids(self):
        """Gets the route_part_ids of this ResponseFaresBreakdownItem.


        :return: The route_part_ids of this ResponseFaresBreakdownItem.
        :rtype: List[int]
        """
        return self._route_part_ids

    @route_part_ids.setter
    def route_part_ids(self, route_part_ids):
        """Sets the route_part_ids of this ResponseFaresBreakdownItem.


        :param route_part_ids: The route_part_ids of this ResponseFaresBreakdownItem.
        :type route_part_ids: List[int]
        """
        if route_part_ids is None:
            raise ValueError("Invalid value for `route_part_ids`, must not be `None`")

        self._route_part_ids = route_part_ids

    @property
    def tickets(self):
        """Gets the tickets of this ResponseFaresBreakdownItem.


        :return: The tickets of this ResponseFaresBreakdownItem.
        :rtype: List[ResponseFareTicket]
        """
        return self._tickets

    @tickets.setter
    def tickets(self, tickets):
        """Sets the tickets of this ResponseFaresBreakdownItem.


        :param tickets: The tickets of this ResponseFaresBreakdownItem.
        :type tickets: List[ResponseFareTicket]
        """
        if tickets is None:
            raise ValueError("Invalid value for `tickets`, must not be `None`")

        self._tickets = tickets
