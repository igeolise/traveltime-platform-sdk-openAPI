# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class ResponseTimeFilterResult(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, search_id=None, locations=None, unreachable=None):  # noqa: E501
        """ResponseTimeFilterResult - a model defined in OpenAPI

        :param search_id: The search_id of this ResponseTimeFilterResult.  # noqa: E501
        :type search_id: str
        :param locations: The locations of this ResponseTimeFilterResult.  # noqa: E501
        :type locations: List[ResponseTimeFilterLocation]
        :param unreachable: The unreachable of this ResponseTimeFilterResult.  # noqa: E501
        :type unreachable: List[str]
        """
        self.openapi_types = {
            'search_id': str,
            'locations': List[ResponseTimeFilterLocation],
            'unreachable': List[str]
        }

        self.attribute_map = {
            'search_id': 'search_id',
            'locations': 'locations',
            'unreachable': 'unreachable'
        }

        self._search_id = search_id
        self._locations = locations
        self._unreachable = unreachable

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseTimeFilterResult':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseTimeFilterResult of this ResponseTimeFilterResult.  # noqa: E501
        :rtype: ResponseTimeFilterResult
        """
        return util.deserialize_model(dikt, cls)

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeFilterResult.


        :return: The search_id of this ResponseTimeFilterResult.
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeFilterResult.


        :param search_id: The search_id of this ResponseTimeFilterResult.
        :type search_id: str
        """
        if search_id is None:
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def locations(self):
        """Gets the locations of this ResponseTimeFilterResult.


        :return: The locations of this ResponseTimeFilterResult.
        :rtype: List[ResponseTimeFilterLocation]
        """
        return self._locations

    @locations.setter
    def locations(self, locations):
        """Sets the locations of this ResponseTimeFilterResult.


        :param locations: The locations of this ResponseTimeFilterResult.
        :type locations: List[ResponseTimeFilterLocation]
        """
        if locations is None:
            raise ValueError("Invalid value for `locations`, must not be `None`")  # noqa: E501

        self._locations = locations

    @property
    def unreachable(self):
        """Gets the unreachable of this ResponseTimeFilterResult.


        :return: The unreachable of this ResponseTimeFilterResult.
        :rtype: List[str]
        """
        return self._unreachable

    @unreachable.setter
    def unreachable(self, unreachable):
        """Sets the unreachable of this ResponseTimeFilterResult.


        :param unreachable: The unreachable of this ResponseTimeFilterResult.
        :type unreachable: List[str]
        """
        if unreachable is None:
            raise ValueError("Invalid value for `unreachable`, must not be `None`")  # noqa: E501

        self._unreachable = unreachable
