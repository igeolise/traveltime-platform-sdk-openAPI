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


class RequestRangeFull(object):
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
        'enabled': 'bool',
        'max_results': 'int',
        'width': 'int'
    }

    attribute_map = {
        'enabled': 'enabled',
        'max_results': 'max_results',
        'width': 'width'
    }

    def __init__(self, enabled=None, max_results=None, width=None):  # noqa: E501
        """RequestRangeFull - a model defined in OpenAPI"""  # noqa: E501

        self._enabled = None
        self._max_results = None
        self._width = None
        self.discriminator = None

        self.enabled = enabled
        self.max_results = max_results
        self.width = width

    @property
    def enabled(self):
        """Gets the enabled of this RequestRangeFull.  # noqa: E501


        :return: The enabled of this RequestRangeFull.  # noqa: E501
        :rtype: bool
        """
        return self._enabled

    @enabled.setter
    def enabled(self, enabled):
        """Sets the enabled of this RequestRangeFull.


        :param enabled: The enabled of this RequestRangeFull.  # noqa: E501
        :type: bool
        """
        if enabled is None:
            raise ValueError("Invalid value for `enabled`, must not be `None`")  # noqa: E501

        self._enabled = enabled

    @property
    def max_results(self):
        """Gets the max_results of this RequestRangeFull.  # noqa: E501


        :return: The max_results of this RequestRangeFull.  # noqa: E501
        :rtype: int
        """
        return self._max_results

    @max_results.setter
    def max_results(self, max_results):
        """Sets the max_results of this RequestRangeFull.


        :param max_results: The max_results of this RequestRangeFull.  # noqa: E501
        :type: int
        """
        if max_results is None:
            raise ValueError("Invalid value for `max_results`, must not be `None`")  # noqa: E501
        if max_results is not None and max_results > 5:  # noqa: E501
            raise ValueError("Invalid value for `max_results`, must be a value less than or equal to `5`")  # noqa: E501
        if max_results is not None and max_results < 1:  # noqa: E501
            raise ValueError("Invalid value for `max_results`, must be a value greater than or equal to `1`")  # noqa: E501

        self._max_results = max_results

    @property
    def width(self):
        """Gets the width of this RequestRangeFull.  # noqa: E501


        :return: The width of this RequestRangeFull.  # noqa: E501
        :rtype: int
        """
        return self._width

    @width.setter
    def width(self, width):
        """Sets the width of this RequestRangeFull.


        :param width: The width of this RequestRangeFull.  # noqa: E501
        :type: int
        """
        if width is None:
            raise ValueError("Invalid value for `width`, must not be `None`")  # noqa: E501
        if width is not None and width > 43200:  # noqa: E501
            raise ValueError("Invalid value for `width`, must be a value less than or equal to `43200`")  # noqa: E501
        if width is not None and width < 1:  # noqa: E501
            raise ValueError("Invalid value for `width`, must be a value greater than or equal to `1`")  # noqa: E501

        self._width = width

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
        if not isinstance(other, RequestRangeFull):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
