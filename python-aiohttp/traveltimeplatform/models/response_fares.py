# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_fare_ticket import ResponseFareTicket
from traveltimeplatform.models.response_fares_breakdown_item import ResponseFaresBreakdownItem
from traveltimeplatform import util


class ResponseFares(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, breakdown: List[ResponseFaresBreakdownItem]=None, tickets_total: List[ResponseFareTicket]=None):
        """ResponseFares - a model defined in OpenAPI

        :param breakdown: The breakdown of this ResponseFares.
        :param tickets_total: The tickets_total of this ResponseFares.
        """
        self.openapi_types = {
            'breakdown': List[ResponseFaresBreakdownItem],
            'tickets_total': List[ResponseFareTicket]
        }

        self.attribute_map = {
            'breakdown': 'breakdown',
            'tickets_total': 'tickets_total'
        }

        self._breakdown = breakdown
        self._tickets_total = tickets_total

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseFares':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseFares of this ResponseFares.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def breakdown(self):
        """Gets the breakdown of this ResponseFares.


        :return: The breakdown of this ResponseFares.
        :rtype: List[ResponseFaresBreakdownItem]
        """
        return self._breakdown

    @breakdown.setter
    def breakdown(self, breakdown):
        """Sets the breakdown of this ResponseFares.


        :param breakdown: The breakdown of this ResponseFares.
        :type breakdown: List[ResponseFaresBreakdownItem]
        """
        if breakdown is None:
            raise ValueError("Invalid value for `breakdown`, must not be `None`")

        self._breakdown = breakdown

    @property
    def tickets_total(self):
        """Gets the tickets_total of this ResponseFares.


        :return: The tickets_total of this ResponseFares.
        :rtype: List[ResponseFareTicket]
        """
        return self._tickets_total

    @tickets_total.setter
    def tickets_total(self, tickets_total):
        """Sets the tickets_total of this ResponseFares.


        :param tickets_total: The tickets_total of this ResponseFares.
        :type tickets_total: List[ResponseFareTicket]
        """
        if tickets_total is None:
            raise ValueError("Invalid value for `tickets_total`, must not be `None`")

        self._tickets_total = tickets_total
