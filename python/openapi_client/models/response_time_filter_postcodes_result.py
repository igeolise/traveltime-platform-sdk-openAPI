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


class ResponseTimeFilterPostcodesResult(object):
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
        'search_id': 'str',
        'postcodes': 'list[ResponseTimeFilterPostcode]'
    }

    attribute_map = {
        'search_id': 'search_id',
        'postcodes': 'postcodes'
    }

    def __init__(self, search_id=None, postcodes=None, local_vars_configuration=None):  # noqa: E501
        """ResponseTimeFilterPostcodesResult - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._search_id = None
        self._postcodes = None
        self.discriminator = None

        self.search_id = search_id
        self.postcodes = postcodes

    @property
    def search_id(self):
        """Gets the search_id of this ResponseTimeFilterPostcodesResult.  # noqa: E501


        :return: The search_id of this ResponseTimeFilterPostcodesResult.  # noqa: E501
        :rtype: str
        """
        return self._search_id

    @search_id.setter
    def search_id(self, search_id):
        """Sets the search_id of this ResponseTimeFilterPostcodesResult.


        :param search_id: The search_id of this ResponseTimeFilterPostcodesResult.  # noqa: E501
        :type search_id: str
        """
        if self.local_vars_configuration.client_side_validation and search_id is None:  # noqa: E501
            raise ValueError("Invalid value for `search_id`, must not be `None`")  # noqa: E501

        self._search_id = search_id

    @property
    def postcodes(self):
        """Gets the postcodes of this ResponseTimeFilterPostcodesResult.  # noqa: E501


        :return: The postcodes of this ResponseTimeFilterPostcodesResult.  # noqa: E501
        :rtype: list[ResponseTimeFilterPostcode]
        """
        return self._postcodes

    @postcodes.setter
    def postcodes(self, postcodes):
        """Sets the postcodes of this ResponseTimeFilterPostcodesResult.


        :param postcodes: The postcodes of this ResponseTimeFilterPostcodesResult.  # noqa: E501
        :type postcodes: list[ResponseTimeFilterPostcode]
        """
        if self.local_vars_configuration.client_side_validation and postcodes is None:  # noqa: E501
            raise ValueError("Invalid value for `postcodes`, must not be `None`")  # noqa: E501

        self._postcodes = postcodes

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
        if not isinstance(other, ResponseTimeFilterPostcodesResult):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, ResponseTimeFilterPostcodesResult):
            return True

        return self.to_dict() != other.to_dict()
