# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTransportation(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, type: str=None, pt_change_delay: int=None, walking_time: int=None, driving_time_to_station: int=None, parking_time: int=None, boarding_time: int=None):  # noqa: E501
        """RequestTransportation - a model defined in Swagger

        :param type: The type of this RequestTransportation.  # noqa: E501
        :type type: str
        :param pt_change_delay: The pt_change_delay of this RequestTransportation.  # noqa: E501
        :type pt_change_delay: int
        :param walking_time: The walking_time of this RequestTransportation.  # noqa: E501
        :type walking_time: int
        :param driving_time_to_station: The driving_time_to_station of this RequestTransportation.  # noqa: E501
        :type driving_time_to_station: int
        :param parking_time: The parking_time of this RequestTransportation.  # noqa: E501
        :type parking_time: int
        :param boarding_time: The boarding_time of this RequestTransportation.  # noqa: E501
        :type boarding_time: int
        """
        self.swagger_types = {
            'type': str,
            'pt_change_delay': int,
            'walking_time': int,
            'driving_time_to_station': int,
            'parking_time': int,
            'boarding_time': int
        }

        self.attribute_map = {
            'type': 'type',
            'pt_change_delay': 'pt_change_delay',
            'walking_time': 'walking_time',
            'driving_time_to_station': 'driving_time_to_station',
            'parking_time': 'parking_time',
            'boarding_time': 'boarding_time'
        }

        self._type = type
        self._pt_change_delay = pt_change_delay
        self._walking_time = walking_time
        self._driving_time_to_station = driving_time_to_station
        self._parking_time = parking_time
        self._boarding_time = boarding_time

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTransportation':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTransportation of this RequestTransportation.  # noqa: E501
        :rtype: RequestTransportation
        """
        return util.deserialize_model(dikt, cls)

    @property
    def type(self) -> str:
        """Gets the type of this RequestTransportation.


        :return: The type of this RequestTransportation.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type: str):
        """Sets the type of this RequestTransportation.


        :param type: The type of this RequestTransportation.
        :type type: str
        """
        allowed_values = ["cycling", "driving", "driving+train", "public_transport", "walking", "coach", "bus", "train", "ferry", "driving+ferry", "cycling+ferry"]  # noqa: E501
        if type not in allowed_values:
            raise ValueError(
                "Invalid value for `type` ({0}), must be one of {1}"
                .format(type, allowed_values)
            )

        self._type = type

    @property
    def pt_change_delay(self) -> int:
        """Gets the pt_change_delay of this RequestTransportation.


        :return: The pt_change_delay of this RequestTransportation.
        :rtype: int
        """
        return self._pt_change_delay

    @pt_change_delay.setter
    def pt_change_delay(self, pt_change_delay: int):
        """Sets the pt_change_delay of this RequestTransportation.


        :param pt_change_delay: The pt_change_delay of this RequestTransportation.
        :type pt_change_delay: int
        """

        self._pt_change_delay = pt_change_delay

    @property
    def walking_time(self) -> int:
        """Gets the walking_time of this RequestTransportation.


        :return: The walking_time of this RequestTransportation.
        :rtype: int
        """
        return self._walking_time

    @walking_time.setter
    def walking_time(self, walking_time: int):
        """Sets the walking_time of this RequestTransportation.


        :param walking_time: The walking_time of this RequestTransportation.
        :type walking_time: int
        """

        self._walking_time = walking_time

    @property
    def driving_time_to_station(self) -> int:
        """Gets the driving_time_to_station of this RequestTransportation.


        :return: The driving_time_to_station of this RequestTransportation.
        :rtype: int
        """
        return self._driving_time_to_station

    @driving_time_to_station.setter
    def driving_time_to_station(self, driving_time_to_station: int):
        """Sets the driving_time_to_station of this RequestTransportation.


        :param driving_time_to_station: The driving_time_to_station of this RequestTransportation.
        :type driving_time_to_station: int
        """

        self._driving_time_to_station = driving_time_to_station

    @property
    def parking_time(self) -> int:
        """Gets the parking_time of this RequestTransportation.


        :return: The parking_time of this RequestTransportation.
        :rtype: int
        """
        return self._parking_time

    @parking_time.setter
    def parking_time(self, parking_time: int):
        """Sets the parking_time of this RequestTransportation.


        :param parking_time: The parking_time of this RequestTransportation.
        :type parking_time: int
        """

        self._parking_time = parking_time

    @property
    def boarding_time(self) -> int:
        """Gets the boarding_time of this RequestTransportation.


        :return: The boarding_time of this RequestTransportation.
        :rtype: int
        """
        return self._boarding_time

    @boarding_time.setter
    def boarding_time(self, boarding_time: int):
        """Sets the boarding_time of this RequestTransportation.


        :param boarding_time: The boarding_time of this RequestTransportation.
        :type boarding_time: int
        """

        self._boarding_time = boarding_time
