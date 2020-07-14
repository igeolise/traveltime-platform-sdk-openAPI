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


class RequestTimeFilterPostcodeSectors(object):
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
        'departure_searches': 'list[RequestTimeFilterPostcodeSectorsDepartureSearch]',
        'arrival_searches': 'list[RequestTimeFilterPostcodeSectorsArrivalSearch]'
    }

    attribute_map = {
        'departure_searches': 'departure_searches',
        'arrival_searches': 'arrival_searches'
    }

    def __init__(self, departure_searches=None, arrival_searches=None, local_vars_configuration=None):  # noqa: E501
        """RequestTimeFilterPostcodeSectors - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._departure_searches = None
        self._arrival_searches = None
        self.discriminator = None

        if departure_searches is not None:
            self.departure_searches = departure_searches
        if arrival_searches is not None:
            self.arrival_searches = arrival_searches

    @property
    def departure_searches(self):
        """Gets the departure_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501


        :return: The departure_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :rtype: list[RequestTimeFilterPostcodeSectorsDepartureSearch]
        """
        return self._departure_searches

    @departure_searches.setter
    def departure_searches(self, departure_searches):
        """Sets the departure_searches of this RequestTimeFilterPostcodeSectors.


        :param departure_searches: The departure_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :type departure_searches: list[RequestTimeFilterPostcodeSectorsDepartureSearch]
        """

        self._departure_searches = departure_searches

    @property
    def arrival_searches(self):
        """Gets the arrival_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501


        :return: The arrival_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :rtype: list[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """
        return self._arrival_searches

    @arrival_searches.setter
    def arrival_searches(self, arrival_searches):
        """Sets the arrival_searches of this RequestTimeFilterPostcodeSectors.


        :param arrival_searches: The arrival_searches of this RequestTimeFilterPostcodeSectors.  # noqa: E501
        :type arrival_searches: list[RequestTimeFilterPostcodeSectorsArrivalSearch]
        """

        self._arrival_searches = arrival_searches

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
        if not isinstance(other, RequestTimeFilterPostcodeSectors):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, RequestTimeFilterPostcodeSectors):
            return True

        return self.to_dict() != other.to_dict()
