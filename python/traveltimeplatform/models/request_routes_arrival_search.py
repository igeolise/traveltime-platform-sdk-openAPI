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


class RequestRoutesArrivalSearch(object):
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
        'id': 'str',
        'departure_location_ids': 'list[str]',
        'arrival_location_id': 'str',
        'transportation': 'RequestTransportation',
        'arrival_time': 'datetime',
        'properties': 'list[RequestRoutesProperty]',
        'range': 'RequestRangeFull'
    }

    attribute_map = {
        'id': 'id',
        'departure_location_ids': 'departure_location_ids',
        'arrival_location_id': 'arrival_location_id',
        'transportation': 'transportation',
        'arrival_time': 'arrival_time',
        'properties': 'properties',
        'range': 'range'
    }

    def __init__(self, id=None, departure_location_ids=None, arrival_location_id=None, transportation=None, arrival_time=None, properties=None, range=None):  # noqa: E501
        """RequestRoutesArrivalSearch - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._departure_location_ids = None
        self._arrival_location_id = None
        self._transportation = None
        self._arrival_time = None
        self._properties = None
        self._range = None
        self.discriminator = None

        self.id = id
        self.departure_location_ids = departure_location_ids
        self.arrival_location_id = arrival_location_id
        self.transportation = transportation
        self.arrival_time = arrival_time
        self.properties = properties
        if range is not None:
            self.range = range

    @property
    def id(self):
        """Gets the id of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The id of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestRoutesArrivalSearch.


        :param id: The id of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def departure_location_ids(self):
        """Gets the departure_location_ids of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The departure_location_ids of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: list[str]
        """
        return self._departure_location_ids

    @departure_location_ids.setter
    def departure_location_ids(self, departure_location_ids):
        """Sets the departure_location_ids of this RequestRoutesArrivalSearch.


        :param departure_location_ids: The departure_location_ids of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: list[str]
        """
        if departure_location_ids is None:
            raise ValueError("Invalid value for `departure_location_ids`, must not be `None`")  # noqa: E501

        self._departure_location_ids = departure_location_ids

    @property
    def arrival_location_id(self):
        """Gets the arrival_location_id of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The arrival_location_id of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: str
        """
        return self._arrival_location_id

    @arrival_location_id.setter
    def arrival_location_id(self, arrival_location_id):
        """Sets the arrival_location_id of this RequestRoutesArrivalSearch.


        :param arrival_location_id: The arrival_location_id of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: str
        """
        if arrival_location_id is None:
            raise ValueError("Invalid value for `arrival_location_id`, must not be `None`")  # noqa: E501

        self._arrival_location_id = arrival_location_id

    @property
    def transportation(self):
        """Gets the transportation of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The transportation of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestRoutesArrivalSearch.


        :param transportation: The transportation of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def arrival_time(self):
        """Gets the arrival_time of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The arrival_time of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time):
        """Sets the arrival_time of this RequestRoutesArrivalSearch.


        :param arrival_time: The arrival_time of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def properties(self):
        """Gets the properties of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The properties of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: list[RequestRoutesProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestRoutesArrivalSearch.


        :param properties: The properties of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: list[RequestRoutesProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestRoutesArrivalSearch.  # noqa: E501


        :return: The range of this RequestRoutesArrivalSearch.  # noqa: E501
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestRoutesArrivalSearch.


        :param range: The range of this RequestRoutesArrivalSearch.  # noqa: E501
        :type: RequestRangeFull
        """

        self._range = range

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
        if not isinstance(other, RequestRoutesArrivalSearch):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
