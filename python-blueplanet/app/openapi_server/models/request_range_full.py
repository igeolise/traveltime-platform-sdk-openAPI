# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from openapi_server import util


class RequestRangeFull(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, enabled: bool=None, max_results: int=None, width: int=None):  # noqa: E501
        """RequestRangeFull - a model defined in Swagger

        :param enabled: The enabled of this RequestRangeFull.  # noqa: E501
        :type enabled: bool
        :param max_results: The max_results of this RequestRangeFull.  # noqa: E501
        :type max_results: int
        :param width: The width of this RequestRangeFull.  # noqa: E501
        :type width: int
        """
        self.swagger_types = {
            'enabled': bool,
            'max_results': int,
            'width': int
        }

        self.attribute_map = {
            'enabled': 'enabled',
            'max_results': 'max_results',
            'width': 'width'
        }

        self._enabled = enabled
        self._max_results = max_results
        self._width = width

    @classmethod
    def from_dict(cls, dikt) -> 'RequestRangeFull':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestRangeFull of this RequestRangeFull.  # noqa: E501
        :rtype: RequestRangeFull
        """
        return util.deserialize_model(dikt, cls)

    @property
    def enabled(self) -> bool:
        """Gets the enabled of this RequestRangeFull.


        :return: The enabled of this RequestRangeFull.
        :rtype: bool
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled: bool):
        """Sets the enabled of this RequestRangeFull.


        :param enabled: The enabled of this RequestRangeFull.
        :type enabled: bool
        """
        if enabled is None:
            raise ValueError("Invalid value for `enabled`, must not be `None`")  # noqa: E501

        self._enabled = enabled

    @property
    def max_results(self) -> int:
        """Gets the max_results of this RequestRangeFull.


        :return: The max_results of this RequestRangeFull.
        :rtype: int
        """
        return self._max_results

    @max_results.setter
    def max_results(self, max_results: int):
        """Sets the max_results of this RequestRangeFull.


        :param max_results: The max_results of this RequestRangeFull.
        :type max_results: int
        """
        if max_results is None:
            raise ValueError("Invalid value for `max_results`, must not be `None`")  # noqa: E501
        if max_results is not None and max_results > 5:  # noqa: E501
            raise ValueError("Invalid value for `max_results`, must be a value less than or equal to `5`")  # noqa: E501
        if max_results is not None and max_results < 1:  # noqa: E501
            raise ValueError("Invalid value for `max_results`, must be a value greater than or equal to `1`")  # noqa: E501

        self._max_results = max_results

    @property
    def width(self) -> int:
        """Gets the width of this RequestRangeFull.


        :return: The width of this RequestRangeFull.
        :rtype: int
        """
        return self._width

    @width.setter
    def width(self, width: int):
        """Sets the width of this RequestRangeFull.


        :param width: The width of this RequestRangeFull.
        :type width: int
        """
        if width is None:
            raise ValueError("Invalid value for `width`, must not be `None`")  # noqa: E501
        if width is not None and width > 43200:  # noqa: E501
            raise ValueError("Invalid value for `width`, must be a value less than or equal to `43200`")  # noqa: E501
        if width is not None and width < 1:  # noqa: E501
            raise ValueError("Invalid value for `width`, must be a value greater than or equal to `1`")  # noqa: E501

        self._width = width