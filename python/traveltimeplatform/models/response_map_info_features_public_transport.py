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


class ResponseMapInfoFeaturesPublicTransport(object):
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
        'date_start': 'datetime',
        'date_end': 'datetime'
    }

    attribute_map = {
        'date_start': 'date_start',
        'date_end': 'date_end'
    }

    def __init__(self, date_start=None, date_end=None):  # noqa: E501
        """ResponseMapInfoFeaturesPublicTransport - a model defined in OpenAPI"""  # noqa: E501

        self._date_start = None
        self._date_end = None
        self.discriminator = None

        self.date_start = date_start
        self.date_end = date_end

    @property
    def date_start(self):
        """Gets the date_start of this ResponseMapInfoFeaturesPublicTransport.  # noqa: E501


        :return: The date_start of this ResponseMapInfoFeaturesPublicTransport.  # noqa: E501
        :rtype: datetime
        """
        return self._date_start

    @date_start.setter
    def date_start(self, date_start):
        """Sets the date_start of this ResponseMapInfoFeaturesPublicTransport.


        :param date_start: The date_start of this ResponseMapInfoFeaturesPublicTransport.  # noqa: E501
        :type: datetime
        """
        if date_start is None:
            raise ValueError("Invalid value for `date_start`, must not be `None`")  # noqa: E501

        self._date_start = date_start

    @property
    def date_end(self):
        """Gets the date_end of this ResponseMapInfoFeaturesPublicTransport.  # noqa: E501


        :return: The date_end of this ResponseMapInfoFeaturesPublicTransport.  # noqa: E501
        :rtype: datetime
        """
        return self._date_end

    @date_end.setter
    def date_end(self, date_end):
        """Sets the date_end of this ResponseMapInfoFeaturesPublicTransport.


        :param date_end: The date_end of this ResponseMapInfoFeaturesPublicTransport.  # noqa: E501
        :type: datetime
        """
        if date_end is None:
            raise ValueError("Invalid value for `date_end`, must not be `None`")  # noqa: E501

        self._date_end = date_end

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
        if not isinstance(other, ResponseMapInfoFeaturesPublicTransport):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
