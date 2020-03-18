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


class ResponseFaresFast(object):
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
        'tickets_total': 'list[ResponseFareTicket]'
    }

    attribute_map = {
        'tickets_total': 'tickets_total'
    }

    def __init__(self, tickets_total=None, local_vars_configuration=None):  # noqa: E501
        """ResponseFaresFast - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._tickets_total = None
        self.discriminator = None

        self.tickets_total = tickets_total

    @property
    def tickets_total(self):
        """Gets the tickets_total of this ResponseFaresFast.  # noqa: E501


        :return: The tickets_total of this ResponseFaresFast.  # noqa: E501
        :rtype: list[ResponseFareTicket]
        """
        return self._tickets_total

    @tickets_total.setter
    def tickets_total(self, tickets_total):
        """Sets the tickets_total of this ResponseFaresFast.


        :param tickets_total: The tickets_total of this ResponseFaresFast.  # noqa: E501
        :type: list[ResponseFareTicket]
        """
        if self.local_vars_configuration.client_side_validation and tickets_total is None:  # noqa: E501
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
        if not isinstance(other, ResponseFaresFast):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ResponseFaresFast):
            return True

        return self.to_dict() != other.to_dict()
