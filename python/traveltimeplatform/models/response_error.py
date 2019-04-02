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


class ResponseError(object):
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
        'http_status': 'int',
        'error_code': 'int',
        'description': 'str',
        'documentation_link': 'str',
        'additional_info': 'dict(str, list[str])'
    }

    attribute_map = {
        'http_status': 'http_status',
        'error_code': 'error_code',
        'description': 'description',
        'documentation_link': 'documentation_link',
        'additional_info': 'additional_info'
    }

    def __init__(self, http_status=None, error_code=None, description=None, documentation_link=None, additional_info=None):  # noqa: E501
        """ResponseError - a model defined in OpenAPI"""  # noqa: E501

        self._http_status = None
        self._error_code = None
        self._description = None
        self._documentation_link = None
        self._additional_info = None
        self.discriminator = None

        if http_status is not None:
            self.http_status = http_status
        if error_code is not None:
            self.error_code = error_code
        if description is not None:
            self.description = description
        if documentation_link is not None:
            self.documentation_link = documentation_link
        if additional_info is not None:
            self.additional_info = additional_info

    @property
    def http_status(self):
        """Gets the http_status of this ResponseError.  # noqa: E501


        :return: The http_status of this ResponseError.  # noqa: E501
        :rtype: int
        """
        return self._http_status

    @http_status.setter
    def http_status(self, http_status):
        """Sets the http_status of this ResponseError.


        :param http_status: The http_status of this ResponseError.  # noqa: E501
        :type: int
        """

        self._http_status = http_status

    @property
    def error_code(self):
        """Gets the error_code of this ResponseError.  # noqa: E501


        :return: The error_code of this ResponseError.  # noqa: E501
        :rtype: int
        """
        return self._error_code

    @error_code.setter
    def error_code(self, error_code):
        """Sets the error_code of this ResponseError.


        :param error_code: The error_code of this ResponseError.  # noqa: E501
        :type: int
        """

        self._error_code = error_code

    @property
    def description(self):
        """Gets the description of this ResponseError.  # noqa: E501


        :return: The description of this ResponseError.  # noqa: E501
        :rtype: str
        """
        return self._description

    @description.setter
    def description(self, description):
        """Sets the description of this ResponseError.


        :param description: The description of this ResponseError.  # noqa: E501
        :type: str
        """

        self._description = description

    @property
    def documentation_link(self):
        """Gets the documentation_link of this ResponseError.  # noqa: E501


        :return: The documentation_link of this ResponseError.  # noqa: E501
        :rtype: str
        """
        return self._documentation_link

    @documentation_link.setter
    def documentation_link(self, documentation_link):
        """Sets the documentation_link of this ResponseError.


        :param documentation_link: The documentation_link of this ResponseError.  # noqa: E501
        :type: str
        """

        self._documentation_link = documentation_link

    @property
    def additional_info(self):
        """Gets the additional_info of this ResponseError.  # noqa: E501


        :return: The additional_info of this ResponseError.  # noqa: E501
        :rtype: dict(str, list[str])
        """
        return self._additional_info

    @additional_info.setter
    def additional_info(self, additional_info):
        """Sets the additional_info of this ResponseError.


        :param additional_info: The additional_info of this ResponseError.  # noqa: E501
        :type: dict(str, list[str])
        """

        self._additional_info = additional_info

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
        if not isinstance(other, ResponseError):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
