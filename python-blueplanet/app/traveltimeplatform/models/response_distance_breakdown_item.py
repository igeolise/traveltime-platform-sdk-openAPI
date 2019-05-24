# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.traveltimeplatform.models.base_model_ import Model
from app.traveltimeplatform.models.response_transportation_mode import ResponseTransportationMode  # noqa: F401,E501
from traveltimeplatform import util


class ResponseDistanceBreakdownItem(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, mode: ResponseTransportationMode=None, distance: int=None):  # noqa: E501
        """ResponseDistanceBreakdownItem - a model defined in Swagger

        :param mode: The mode of this ResponseDistanceBreakdownItem.  # noqa: E501
        :type mode: ResponseTransportationMode
        :param distance: The distance of this ResponseDistanceBreakdownItem.  # noqa: E501
        :type distance: int
        """
        self.swagger_types = {
            'mode': ResponseTransportationMode,
            'distance': int
        }

        self.attribute_map = {
            'mode': 'mode',
            'distance': 'distance'
        }

        self._mode = mode
        self._distance = distance

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseDistanceBreakdownItem':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseDistanceBreakdownItem of this ResponseDistanceBreakdownItem.  # noqa: E501
        :rtype: ResponseDistanceBreakdownItem
        """
        return util.deserialize_model(dikt, cls)

    @property
    def mode(self) -> ResponseTransportationMode:
        """Gets the mode of this ResponseDistanceBreakdownItem.


        :return: The mode of this ResponseDistanceBreakdownItem.
        :rtype: ResponseTransportationMode
        """
        return self._mode

    @mode.setter
    def mode(self, mode: ResponseTransportationMode):
        """Sets the mode of this ResponseDistanceBreakdownItem.


        :param mode: The mode of this ResponseDistanceBreakdownItem.
        :type mode: ResponseTransportationMode
        """
        if mode is None:
            raise ValueError("Invalid value for `mode`, must not be `None`")  # noqa: E501

        self._mode = mode

    @property
    def distance(self) -> int:
        """Gets the distance of this ResponseDistanceBreakdownItem.


        :return: The distance of this ResponseDistanceBreakdownItem.
        :rtype: int
        """
        return self._distance

    @distance.setter
    def distance(self, distance: int):
        """Sets the distance of this ResponseDistanceBreakdownItem.


        :param distance: The distance of this ResponseDistanceBreakdownItem.
        :type distance: int
        """
        if distance is None:
            raise ValueError("Invalid value for `distance`, must not be `None`")  # noqa: E501

        self._distance = distance