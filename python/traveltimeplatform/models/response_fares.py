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


class ResponseFares(object):
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
        'breakdown': 'list[ResponseFaresBreakdownItem]',
        'tickets_total': 'list[ResponseFareTicket]'
    }

    attribute_map = {
        'breakdown': 'breakdown',
        'tickets_total': 'tickets_total'
    }

    def __init__(self, breakdown=None, tickets_total=None):  # noqa: E501
        """ResponseFares - a model defined in OpenAPI"""  # noqa: E501

        self._breakdown = None
        self._tickets_total = None
        self.discriminator = None

        self.breakdown = breakdown
        self.tickets_total = tickets_total

    @property
    def breakdown(self):
        """Gets the breakdown of this ResponseFares.  # noqa: E501


        :return: The breakdown of this ResponseFares.  # noqa: E501
        :rtype: list[ResponseFaresBreakdownItem]
        """
        return self._breakdown

    @breakdown.setter
    def breakdown(self, breakdown):
        """Sets the breakdown of this ResponseFares.


        :param breakdown: The breakdown of this ResponseFares.  # noqa: E501
        :type: list[ResponseFaresBreakdownItem]
        """
        if breakdown is None:
            raise ValueError("Invalid value for `breakdown`, must not be `None`")  # noqa: E501

        self._breakdown = breakdown

    @property
    def tickets_total(self):
        """Gets the tickets_total of this ResponseFares.  # noqa: E501


        :return: The tickets_total of this ResponseFares.  # noqa: E501
        :rtype: list[ResponseFareTicket]
        """
        return self._tickets_total

    @tickets_total.setter
    def tickets_total(self, tickets_total):
        """Sets the tickets_total of this ResponseFares.


        :param tickets_total: The tickets_total of this ResponseFares.  # noqa: E501
        :type: list[ResponseFareTicket]
        """
        if tickets_total is None:
            raise ValueError("Invalid value for `tickets_total`, must not be `None`")  # noqa: E501

        self._tickets_total = tickets_total

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
        if not isinstance(other, ResponseFares):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
