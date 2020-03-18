# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from openapi_server.models.base_model_ import Model
from openapi_server import util


class ResponseFareTicket(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, type: str=None, price: float=None, currency: str=None):
        """ResponseFareTicket - a model defined in OpenAPI

        :param type: The type of this ResponseFareTicket.
        :param price: The price of this ResponseFareTicket.
        :param currency: The currency of this ResponseFareTicket.
        """
        self.openapi_types = {
            'type': str,
            'price': float,
            'currency': str
        }

        self.attribute_map = {
            'type': 'type',
            'price': 'price',
            'currency': 'currency'
        }

        self._type = type
        self._price = price
        self._currency = currency

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseFareTicket':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseFareTicket of this ResponseFareTicket.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def type(self):
        """Gets the type of this ResponseFareTicket.


        :return: The type of this ResponseFareTicket.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this ResponseFareTicket.


        :param type: The type of this ResponseFareTicket.
        :type type: str
        """
        allowed_values = ["single", "week", "month", "year"]  # noqa: E501
        if type not in allowed_values:
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def price(self):
        """Gets the price of this ResponseFareTicket.


        :return: The price of this ResponseFareTicket.
        :rtype: float
        """
        return self._price

    @price.setter
    def price(self, price):
        """Sets the price of this ResponseFareTicket.


        :param price: The price of this ResponseFareTicket.
        :type price: float
        """
        if price is None:
            raise ValueError("Invalid value for `price`, must not be `None`")

        self._price = price

    @property
    def currency(self):
        """Gets the currency of this ResponseFareTicket.


        :return: The currency of this ResponseFareTicket.
        :rtype: str
        """
        return self._currency

    @currency.setter
    def currency(self, currency):
        """Sets the currency of this ResponseFareTicket.


        :param currency: The currency of this ResponseFareTicket.
        :type currency: str
        """
        if currency is None:
            raise ValueError("Invalid value for `currency`, must not be `None`")

        self._currency = currency
