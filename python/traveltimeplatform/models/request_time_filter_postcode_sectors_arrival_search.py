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


class RequestTimeFilterPostcodeSectorsArrivalSearch(object):
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
        'transportation': 'RequestTransportation',
        'travel_time': 'int',
        'arrival_time': 'datetime',
        'reachable_postcodes_threshold': 'float',
        'properties': 'list[RequestTimeFilterPostcodeSectorsProperty]',
        'range': 'RequestRangeFull'
    }

    attribute_map = {
        'id': 'id',
        'transportation': 'transportation',
        'travel_time': 'travel_time',
        'arrival_time': 'arrival_time',
        'reachable_postcodes_threshold': 'reachable_postcodes_threshold',
        'properties': 'properties',
        'range': 'range'
    }

    def __init__(self, id=None, transportation=None, travel_time=None, arrival_time=None, reachable_postcodes_threshold=None, properties=None, range=None):  # noqa: E501
        """RequestTimeFilterPostcodeSectorsArrivalSearch - a model defined in OpenAPI"""  # noqa: E501

        self._id = None
        self._transportation = None
        self._travel_time = None
        self._arrival_time = None
        self._reachable_postcodes_threshold = None
        self._properties = None
        self._range = None
        self.discriminator = None

        self.id = id
        self.transportation = transportation
        self.travel_time = travel_time
        self.arrival_time = arrival_time
        self.reachable_postcodes_threshold = reachable_postcodes_threshold
        self.properties = properties
        if range is not None:
            self.range = range

    @property
    def id(self):
        """Gets the id of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The id of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param id: The id of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type: str
        """
        if id is None:
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: RequestTransportation
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param transportation: The transportation of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type: RequestTransportation
        """
        if transportation is None:
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param travel_time: The travel_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type: int
        """
        if travel_time is None:
            raise ValueError("Invalid value for `travel_time`, must not be `None`")  # noqa: E501
        if travel_time is not None and travel_time > 14400:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value less than or equal to `14400`")  # noqa: E501
        if travel_time is not None and travel_time < 60:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value greater than or equal to `60`")  # noqa: E501

        self._travel_time = travel_time

    @property
    def arrival_time(self):
        """Gets the arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: datetime
        """
        return self._arrival_time

    @arrival_time.setter
    def arrival_time(self, arrival_time):
        """Sets the arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param arrival_time: The arrival_time of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type: datetime
        """
        if arrival_time is None:
            raise ValueError("Invalid value for `arrival_time`, must not be `None`")  # noqa: E501

        self._arrival_time = arrival_time

    @property
    def reachable_postcodes_threshold(self):
        """Gets the reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: float
        """
        return self._reachable_postcodes_threshold

    @reachable_postcodes_threshold.setter
    def reachable_postcodes_threshold(self, reachable_postcodes_threshold):
        """Sets the reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param reachable_postcodes_threshold: The reachable_postcodes_threshold of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type: float
        """
        if reachable_postcodes_threshold is None:
            raise ValueError("Invalid value for `reachable_postcodes_threshold`, must not be `None`")  # noqa: E501

        self._reachable_postcodes_threshold = reachable_postcodes_threshold

    @property
    def properties(self):
        """Gets the properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: list[RequestTimeFilterPostcodeSectorsProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param properties: The properties of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :type: list[RequestTimeFilterPostcodeSectorsProperty]
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

    @property
    def range(self):
        """Gets the range of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501


        :return: The range of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
        :rtype: RequestRangeFull
        """
        return self._range

    @range.setter
    def range(self, range):
        """Sets the range of this RequestTimeFilterPostcodeSectorsArrivalSearch.


        :param range: The range of this RequestTimeFilterPostcodeSectorsArrivalSearch.  # noqa: E501
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
        if not isinstance(other, RequestTimeFilterPostcodeSectorsArrivalSearch):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
