# coding: utf-8

"""
    TravelTime API

    No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)  # noqa: E501

    The version of the OpenAPI document: 1.2.1
    Contact: support@igeolise.com
    Generated by: https://openapi-generator.tech
"""


import pprint
import re  # noqa: F401

import six

from openapi_client.configuration import Configuration


class ResponseRoute(object):
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
        'departure_time': 'datetime',
        'arrival_time': 'datetime',
        'parts': 'list[ResponseRoutePart]'
    }

    attribute_map = {
        'departure_time': 'departure_time',
        'arrival_time': 'arrival_time',
        'parts': 'parts'
    }

    def __init__(self, departure_time=None, arrival_time=None, parts=None, local_vars_configuration=None):  # noqa: E501
        """ResponseRoute - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._departure_time = None
        self._arrival_time = None
        self._parts = None
        self.discriminator = None

        self.departure_time = departure_time
        self.arrival_time = arrival_time
        self.parts = parts

    @property
    def departure_time(self):
        """Gets the departure_time of this ResponseRoute.  # noqa: E501


        :return: The departure_time of this ResponseRoute.  # noqa: E501
        :rtype: datetime
        """
        return self._departure_time

    @departure_time.setter
    def departure_time(self, departure_time):
        """Sets the departure_time of this ResponseRoute.


        :param departure_time: The departure_time of this ResponseRoute.  # noqa: E501
        :type departure_time: datetime
        """
        if self.local_vars_configuration.client_side_validation and departure_time is None:  # noqa: E501
            raise ValueError("Invalid value for `departure_time`, must not be `None`")  # noqa: E501

        self._departure_time = departure_time

    @property
    def arrival_time(self):
        """Gets the arrival_time of this ResponseRoute.  # noqa: E501


        :return: The arrival_time of this ResponseRoute.  # noqa: E501
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time):
        """Sets the arrival_time of this ResponseRoute.


        :param arrival_time: The arrival_time of this ResponseRoute.  # noqa: E501
        :type arrival_time: datetime
        """
        if self.local_vars_configuration.client_side_validation and arrival_time is None:  # noqa: E501
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def parts(self):
        """Gets the parts of this ResponseRoute.  # noqa: E501


        :return: The parts of this ResponseRoute.  # noqa: E501
        :rtype: list[ResponseRoutePart]
        """
        return self._parts

    @parts.setter
    def parts(self, parts):
        """Sets the parts of this ResponseRoute.


        :param parts: The parts of this ResponseRoute.  # noqa: E501
        :type parts: list[ResponseRoutePart]
        """
        if self.local_vars_configuration.client_side_validation and parts is None:  # noqa: E501
            raise ValueError("Invalid value for `parts`, must not be `None`")  # noqa: E501

        self._parts = parts

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
        if not isinstance(other, ResponseRoute):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ResponseRoute):
            return True

        return self.to_dict() != other.to_dict()
