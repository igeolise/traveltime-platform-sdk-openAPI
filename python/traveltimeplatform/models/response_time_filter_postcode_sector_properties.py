# coding: utf-8

"""
    TravelTime Platform API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    OpenAPI spec version: 1.0.0
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six


class ResponseTimeFilterPostcodeSectorProperties(object):
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
        'travel_time_reachable': 'ResponseTravelTimeStatistics',
        'travel_time_all': 'ResponseTravelTimeStatistics',
        'coverage': 'float'
    }

    attribute_map = {
        'travel_time_reachable': 'travel_time_reachable',
        'travel_time_all': 'travel_time_all',
        'coverage': 'coverage'
    }

    def __init__(self, travel_time_reachable=None, travel_time_all=None, coverage=None):  # noqa: E501
        """ResponseTimeFilterPostcodeSectorProperties - a model defined in OpenAPI"""  # noqa: E501

        self._travel_time_reachable = None
        self._travel_time_all = None
        self._coverage = None
        self.discriminator = None

        if travel_time_reachable is not None:
            self.travel_time_reachable = travel_time_reachable
        if travel_time_all is not None:
            self.travel_time_all = travel_time_all
        if coverage is not None:
            self.coverage = coverage

    @property
    def travel_time_reachable(self):
        """Gets the travel_time_reachable of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501


        :return: The travel_time_reachable of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501
        :rtype: ResponseTravelTimeStatistics
        """
        return self._travel_time_reachable

    @travel_time_reachable.setter
    def travel_time_reachable(self, travel_time_reachable):
        """Sets the travel_time_reachable of this ResponseTimeFilterPostcodeSectorProperties.


        :param travel_time_reachable: The travel_time_reachable of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501
        :type: ResponseTravelTimeStatistics
        """

        self._travel_time_reachable = travel_time_reachable

    @property
    def travel_time_all(self):
        """Gets the travel_time_all of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501


        :return: The travel_time_all of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501
        :rtype: ResponseTravelTimeStatistics
        """
        return self._travel_time_all

    @travel_time_all.setter
    def travel_time_all(self, travel_time_all):
        """Sets the travel_time_all of this ResponseTimeFilterPostcodeSectorProperties.


        :param travel_time_all: The travel_time_all of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501
        :type: ResponseTravelTimeStatistics
        """

        self._travel_time_all = travel_time_all

    @property
    def coverage(self):
        """Gets the coverage of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501


        :return: The coverage of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501
        :rtype: float
        """
        return self._coverage

    @coverage.setter
    def coverage(self, coverage):
        """Sets the coverage of this ResponseTimeFilterPostcodeSectorProperties.


        :param coverage: The coverage of this ResponseTimeFilterPostcodeSectorProperties.  # noqa: E501
        :type: float
        """

        self._coverage = coverage

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
        if not isinstance(other, ResponseTimeFilterPostcodeSectorProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
