# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from openapi_server.models.base_model_ import Model
from openapi_server.models.response_fare_ticket import ResponseFareTicket
from openapi_server import util

from openapi_server.models.response_fare_ticket import ResponseFareTicket  # noqa: E501

class ResponseFaresFast(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, tickets_total=None):  # noqa: E501
        """ResponseFaresFast - a model defined in OpenAPI

        :param tickets_total: The tickets_total of this ResponseFaresFast.  # noqa: E501
        :type tickets_total: List[ResponseFareTicket]
        """
        self.openapi_types = {
            'tickets_total': List[ResponseFareTicket]
        }

        self.attribute_map = {
            'tickets_total': 'tickets_total'
        }

        self._tickets_total = tickets_total

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseFaresFast':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseFaresFast of this ResponseFaresFast.  # noqa: E501
        :rtype: ResponseFaresFast
        """
        return util.deserialize_model(dikt, cls)

    @property
    def tickets_total(self):
        """Gets the tickets_total of this ResponseFaresFast.


        :return: The tickets_total of this ResponseFaresFast.
        :rtype: List[ResponseFareTicket]
        """
        return self._tickets_total

    @tickets_total.setter
    def tickets_total(self, tickets_total):
        """Sets the tickets_total of this ResponseFaresFast.


        :param tickets_total: The tickets_total of this ResponseFaresFast.
        :type tickets_total: List[ResponseFareTicket]
        """
        if tickets_total is None:
            raise ValueError("Invalid value for `tickets_total`, must not be `None`")  # noqa: E501

        self._tickets_total = tickets_total
