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


class ResponseFaresBreakdownItem(object):
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
        'modes': 'list[ResponseTransportationMode]',
        'route_part_ids': 'list[int]',
        'tickets': 'list[ResponseFareTicket]'
    }

    attribute_map = {
        'modes': 'modes',
        'route_part_ids': 'route_part_ids',
        'tickets': 'tickets'
    }

    def __init__(self, modes=None, route_part_ids=None, tickets=None, local_vars_configuration=None):  # noqa: E501
        """ResponseFaresBreakdownItem - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._modes = None
        self._route_part_ids = None
        self._tickets = None
        self.discriminator = None

        self.modes = modes
        self.route_part_ids = route_part_ids
        self.tickets = tickets

    @property
    def modes(self):
        """Gets the modes of this ResponseFaresBreakdownItem.  # noqa: E501


        :return: The modes of this ResponseFaresBreakdownItem.  # noqa: E501
        :rtype: list[ResponseTransportationMode]
        """
        return self._modes

    @modes.setter
    def modes(self, modes):
        """Sets the modes of this ResponseFaresBreakdownItem.


        :param modes: The modes of this ResponseFaresBreakdownItem.  # noqa: E501
        :type modes: list[ResponseTransportationMode]
        """
        if self.local_vars_configuration.client_side_validation and modes is None:  # noqa: E501
            raise ValueError("Invalid value for `modes`, must not be `None`")  # noqa: E501

        self._modes = modes

    @property
    def route_part_ids(self):
        """Gets the route_part_ids of this ResponseFaresBreakdownItem.  # noqa: E501


        :return: The route_part_ids of this ResponseFaresBreakdownItem.  # noqa: E501
        :rtype: list[int]
        """
        return self._route_part_ids

    @route_part_ids.setter
    def route_part_ids(self, route_part_ids):
        """Sets the route_part_ids of this ResponseFaresBreakdownItem.


        :param route_part_ids: The route_part_ids of this ResponseFaresBreakdownItem.  # noqa: E501
        :type route_part_ids: list[int]
        """
        if self.local_vars_configuration.client_side_validation and route_part_ids is None:  # noqa: E501
            raise ValueError("Invalid value for `route_part_ids`, must not be `None`")  # noqa: E501

        self._route_part_ids = route_part_ids

    @property
    def tickets(self):
        """Gets the tickets of this ResponseFaresBreakdownItem.  # noqa: E501


        :return: The tickets of this ResponseFaresBreakdownItem.  # noqa: E501
        :rtype: list[ResponseFareTicket]
        """
        return self._tickets

    @tickets.setter
    def tickets(self, tickets):
        """Sets the tickets of this ResponseFaresBreakdownItem.


        :param tickets: The tickets of this ResponseFaresBreakdownItem.  # noqa: E501
        :type tickets: list[ResponseFareTicket]
        """
        if self.local_vars_configuration.client_side_validation and tickets is None:  # noqa: E501
            raise ValueError("Invalid value for `tickets`, must not be `None`")  # noqa: E501

        self._tickets = tickets

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
        if not isinstance(other, ResponseFaresBreakdownItem):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ResponseFaresBreakdownItem):
            return True

        return self.to_dict() != other.to_dict()
