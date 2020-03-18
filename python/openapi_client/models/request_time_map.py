# coding: utf-8

"""
    TravelTime Platform API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.0.0
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class RequestTimeMap(object):
    """NOTE: This class is auto generated by OpenAPI Generator.
    Ref: https://openapi-generator.tech

    Do not edit the class manually.
    """

    """
    Attributes:
      openapi_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    openapi_types = {
        'departure_searches': 'list[RequestTimeMapDepartureSearch]',
        'arrival_searches': 'list[RequestTimeMapArrivalSearch]',
        'unions': 'list[RequestUnionOnIntersection]',
        'intersections': 'list[RequestUnionOnIntersection]'
    }

    attribute_map = {
        'departure_searches': 'departure_searches',
        'arrival_searches': 'arrival_searches',
        'unions': 'unions',
        'intersections': 'intersections'
    }

    def __init__(self, departure_searches=None, arrival_searches=None, unions=None, intersections=None, local_vars_configuration=None):  # noqa: E501
        """RequestTimeMap - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._departure_searches = None
        self._arrival_searches = None
        self._unions = None
        self._intersections = None
        self.discriminator = None

        if departure_searches is not None:
            self.departure_searches = departure_searches
        if arrival_searches is not None:
            self.arrival_searches = arrival_searches
        if unions is not None:
            self.unions = unions
        if intersections is not None:
            self.intersections = intersections

    @property
    def departure_searches(self):
        """Gets the departure_searches of this RequestTimeMap.  # noqa: E501


        :return: The departure_searches of this RequestTimeMap.  # noqa: E501
        :rtype: list[RequestTimeMapDepartureSearch]
        """
        return self._departure_searches

    @departure_searches.setter
    def departure_searches(self, departure_searches):
        """Sets the departure_searches of this RequestTimeMap.


        :param departure_searches: The departure_searches of this RequestTimeMap.  # noqa: E501
        :type: list[RequestTimeMapDepartureSearch]
        """

        self._departure_searches = departure_searches

    @property
    def arrival_searches(self):
        """Gets the arrival_searches of this RequestTimeMap.  # noqa: E501


        :return: The arrival_searches of this RequestTimeMap.  # noqa: E501
        :rtype: list[RequestTimeMapArrivalSearch]
        """
        return self._arrival_searches

    @arrival_searches.setter
    def arrival_searches(self, arrival_searches):
        """Sets the arrival_searches of this RequestTimeMap.


        :param arrival_searches: The arrival_searches of this RequestTimeMap.  # noqa: E501
        :type: list[RequestTimeMapArrivalSearch]
        """

        self._arrival_searches = arrival_searches

    @property
    def unions(self):
        """Gets the unions of this RequestTimeMap.  # noqa: E501


        :return: The unions of this RequestTimeMap.  # noqa: E501
        :rtype: list[RequestUnionOnIntersection]
        """
        return self._unions

    @unions.setter
    def unions(self, unions):
        """Sets the unions of this RequestTimeMap.


        :param unions: The unions of this RequestTimeMap.  # noqa: E501
        :type: list[RequestUnionOnIntersection]
        """

        self._unions = unions

    @property
    def intersections(self):
        """Gets the intersections of this RequestTimeMap.  # noqa: E501


        :return: The intersections of this RequestTimeMap.  # noqa: E501
        :rtype: list[RequestUnionOnIntersection]
        """
        return self._intersections

    @intersections.setter
    def intersections(self, intersections):
        """Sets the intersections of this RequestTimeMap.


        :param intersections: The intersections of this RequestTimeMap.  # noqa: E501
        :type: list[RequestUnionOnIntersection]
        """

        self._intersections = intersections

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.openapi_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, RequestTimeMap):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, RequestTimeMap):
            return True

        return self.to_dict() != other.to_dict()
