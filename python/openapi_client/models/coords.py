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


class Coords(object):
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
        'lat': 'float',
        'lng': 'float'
    }

    attribute_map = {
        'lat': 'lat',
        'lng': 'lng'
    }

    def __init__(self, lat=None, lng=None, local_vars_configuration=None):  # noqa: E501
        """Coords - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._lat = None
        self._lng = None
        self.discriminator = None

        self.lat = lat
        self.lng = lng

    @property
    def lat(self):
        """Gets the lat of this Coords.  # noqa: E501


        :return: The lat of this Coords.  # noqa: E501
        :rtype: float
        """
        return self._lat

    @lat.setter
    def lat(self, lat):
        """Sets the lat of this Coords.


        :param lat: The lat of this Coords.  # noqa: E501
        :type lat: float
        """
        if self.local_vars_configuration.client_side_validation and lat is None:  # noqa: E501
            raise ValueError("Invalid value for `lat`, must not be `None`")  # noqa: E501

        self._lat = lat

    @property
    def lng(self):
        """Gets the lng of this Coords.  # noqa: E501


        :return: The lng of this Coords.  # noqa: E501
        :rtype: float
        """
        return self._lng

    @lng.setter
    def lng(self, lng):
        """Sets the lng of this Coords.


        :param lng: The lng of this Coords.  # noqa: E501
        :type lng: float
        """
        if self.local_vars_configuration.client_side_validation and lng is None:  # noqa: E501
            raise ValueError("Invalid value for `lng`, must not be `None`")  # noqa: E501

        self._lng = lng

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
        if not isinstance(other, Coords):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, Coords):
            return True

        return self.to_dict() != other.to_dict()
