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


class ResponseGeocoding(object):
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
        'type': 'str',
        'features': 'list[ResponseGeocodingGeoJsonFeature]'
    }

    attribute_map = {
        'type': 'type',
        'features': 'features'
    }

    def __init__(self, type=None, features=None):  # noqa: E501
        """ResponseGeocoding - a model defined in OpenAPI"""  # noqa: E501

        self._type = None
        self._features = None
        self.discriminator = None

        self.type = type
        self.features = features

    @property
    def type(self):
        """Gets the type of this ResponseGeocoding.  # noqa: E501


        :return: The type of this ResponseGeocoding.  # noqa: E501
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this ResponseGeocoding.


        :param type: The type of this ResponseGeocoding.  # noqa: E501
        :type: str
        """
        if type is None:
            raise ValueError("Invalid value for `type`, must not be `None`")  # noqa: E501

        self._type = type

    @property
    def features(self):
        """Gets the features of this ResponseGeocoding.  # noqa: E501


        :return: The features of this ResponseGeocoding.  # noqa: E501
        :rtype: list[ResponseGeocodingGeoJsonFeature]
        """
        return self._features

    @features.setter
    def features(self, features):
        """Sets the features of this ResponseGeocoding.


        :param features: The features of this ResponseGeocoding.  # noqa: E501
        :type: list[ResponseGeocodingGeoJsonFeature]
        """
        if features is None:
            raise ValueError("Invalid value for `features`, must not be `None`")  # noqa: E501

        self._features = features

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
        if not isinstance(other, ResponseGeocoding):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
