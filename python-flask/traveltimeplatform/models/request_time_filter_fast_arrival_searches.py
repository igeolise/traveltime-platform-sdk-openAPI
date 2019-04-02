# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestTimeFilterFastArrivalSearches(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, many_to_one=None, one_to_many=None):  # noqa: E501
        """RequestTimeFilterFastArrivalSearches - a model defined in OpenAPI

        :param many_to_one: The many_to_one of this RequestTimeFilterFastArrivalSearches.  # noqa: E501
        :type many_to_one: List[RequestTimeFilterFastArrivalManyToOneSearch]
        :param one_to_many: The one_to_many of this RequestTimeFilterFastArrivalSearches.  # noqa: E501
        :type one_to_many: List[RequestTimeFilterFastArrivalOneToManySearch]
        """
        self.openapi_types = {
            'many_to_one': List[RequestTimeFilterFastArrivalManyToOneSearch],
            'one_to_many': List[RequestTimeFilterFastArrivalOneToManySearch]
        }

        self.attribute_map = {
            'many_to_one': 'many_to_one',
            'one_to_many': 'one_to_many'
        }

        self._many_to_one = many_to_one
        self._one_to_many = one_to_many

    @classmethod
    def from_dict(cls, dikt) -> 'RequestTimeFilterFastArrivalSearches':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The RequestTimeFilterFastArrivalSearches of this RequestTimeFilterFastArrivalSearches.  # noqa: E501
        :rtype: RequestTimeFilterFastArrivalSearches
        """
        return util.deserialize_model(dikt, cls)

    @property
    def many_to_one(self):
        """Gets the many_to_one of this RequestTimeFilterFastArrivalSearches.


        :return: The many_to_one of this RequestTimeFilterFastArrivalSearches.
        :rtype: List[RequestTimeFilterFastArrivalManyToOneSearch]
        """
        return self._many_to_one

    @many_to_one.setter
    def many_to_one(self, many_to_one):
        """Sets the many_to_one of this RequestTimeFilterFastArrivalSearches.


        :param many_to_one: The many_to_one of this RequestTimeFilterFastArrivalSearches.
        :type many_to_one: List[RequestTimeFilterFastArrivalManyToOneSearch]
        """

        self._many_to_one = many_to_one

    @property
    def one_to_many(self):
        """Gets the one_to_many of this RequestTimeFilterFastArrivalSearches.


        :return: The one_to_many of this RequestTimeFilterFastArrivalSearches.
        :rtype: List[RequestTimeFilterFastArrivalOneToManySearch]
        """
        return self._one_to_many

    @one_to_many.setter
    def one_to_many(self, one_to_many):
        """Sets the one_to_many of this RequestTimeFilterFastArrivalSearches.


        :param one_to_many: The one_to_many of this RequestTimeFilterFastArrivalSearches.
        :type one_to_many: List[RequestTimeFilterFastArrivalOneToManySearch]
        """

        self._one_to_many = one_to_many
