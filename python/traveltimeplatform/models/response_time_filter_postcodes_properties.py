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


class ResponseTimeFilterPostcodesProperties(object):
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
        'travel_time': 'int',
        'distance': 'int'
    }

    attribute_map = {
        'travel_time': 'travel_time',
        'distance': 'distance'
    }

    def __init__(self, travel_time=None, distance=None):  # noqa: E501
        """ResponseTimeFilterPostcodesProperties - a model defined in OpenAPI"""  # noqa: E501

        self._travel_time = None
        self._distance = None
        self.discriminator = None

        if travel_time is not None:
            self.travel_time = travel_time
        if distance is not None:
            self.distance = distance

    @property
    def travel_time(self):
        """Gets the travel_time of this ResponseTimeFilterPostcodesProperties.  # noqa: E501


        :return: The travel_time of this ResponseTimeFilterPostcodesProperties.  # noqa: E501
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this ResponseTimeFilterPostcodesProperties.


        :param travel_time: The travel_time of this ResponseTimeFilterPostcodesProperties.  # noqa: E501
        :type: int
        """

        self._travel_time = travel_time

    @property
    def distance(self):
        """Gets the distance of this ResponseTimeFilterPostcodesProperties.  # noqa: E501


        :return: The distance of this ResponseTimeFilterPostcodesProperties.  # noqa: E501
        :rtype: int
        """
        return self._distance

    @distance.setter
    def distance(self, distance):
        """Sets the distance of this ResponseTimeFilterPostcodesProperties.


        :param distance: The distance of this ResponseTimeFilterPostcodesProperties.  # noqa: E501
        :type: int
        """

        self._distance = distance

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
        if not isinstance(other, ResponseTimeFilterPostcodesProperties):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
