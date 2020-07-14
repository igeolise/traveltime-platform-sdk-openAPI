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


class RequestTimeFilterFastArrivalOneToManySearch(object):
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
        'departure_location_id': 'str',
        'arrival_location_ids': 'list[str]',
        'transportation': 'RequestTransportationFast',
        'travel_time': 'int',
        'arrival_time_period': 'RequestArrivalTimePeriod',
        'properties': 'list[RequestTimeFilterFastProperty]'
    }

    attribute_map = {
        'id': 'id',
        'departure_location_id': 'departure_location_id',
        'arrival_location_ids': 'arrival_location_ids',
        'transportation': 'transportation',
        'travel_time': 'travel_time',
        'arrival_time_period': 'arrival_time_period',
        'properties': 'properties'
    }

    def __init__(self, id=None, departure_location_id=None, arrival_location_ids=None, transportation=None, travel_time=None, arrival_time_period=None, properties=None, local_vars_configuration=None):  # noqa: E501
        """RequestTimeFilterFastArrivalOneToManySearch - a model defined in OpenAPI"""  # noqa: E501
        if local_vars_configuration is None:
            local_vars_configuration = Configuration()
        self.local_vars_configuration = local_vars_configuration

        self._id = None
        self._departure_location_id = None
        self._arrival_location_ids = None
        self._transportation = None
        self._travel_time = None
        self._arrival_time_period = None
        self._properties = None
        self.discriminator = None

        self.id = id
        self.departure_location_id = departure_location_id
        self.arrival_location_ids = arrival_location_ids
        self.transportation = transportation
        self.travel_time = travel_time
        self.arrival_time_period = arrival_time_period
        self.properties = properties

    @property
    def id(self):
        """Gets the id of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The id of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: str
        """
        return self._id

    @id.setter
    def id(self, id):
        """Sets the id of this RequestTimeFilterFastArrivalOneToManySearch.


        :param id: The id of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type id: str
        """
        if self.local_vars_configuration.client_side_validation and id is None:  # noqa: E501
            raise ValueError("Invalid value for `id`, must not be `None`")  # noqa: E501

        self._id = id

    @property
    def departure_location_id(self):
        """Gets the departure_location_id of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The departure_location_id of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: str
        """
        return self._departure_location_id

    @departure_location_id.setter
    def departure_location_id(self, departure_location_id):
        """Sets the departure_location_id of this RequestTimeFilterFastArrivalOneToManySearch.


        :param departure_location_id: The departure_location_id of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type departure_location_id: str
        """
        if self.local_vars_configuration.client_side_validation and departure_location_id is None:  # noqa: E501
            raise ValueError("Invalid value for `departure_location_id`, must not be `None`")  # noqa: E501

        self._departure_location_id = departure_location_id

    @property
    def arrival_location_ids(self):
        """Gets the arrival_location_ids of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The arrival_location_ids of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: list[str]
        """
        return self._arrival_location_ids

    @arrival_location_ids.setter
    def arrival_location_ids(self, arrival_location_ids):
        """Sets the arrival_location_ids of this RequestTimeFilterFastArrivalOneToManySearch.


        :param arrival_location_ids: The arrival_location_ids of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type arrival_location_ids: list[str]
        """
        if self.local_vars_configuration.client_side_validation and arrival_location_ids is None:  # noqa: E501
            raise ValueError("Invalid value for `arrival_location_ids`, must not be `None`")  # noqa: E501

        self._arrival_location_ids = arrival_location_ids

    @property
    def transportation(self):
        """Gets the transportation of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The transportation of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: RequestTransportationFast
        """
        return self._transportation

    @transportation.setter
    def transportation(self, transportation):
        """Sets the transportation of this RequestTimeFilterFastArrivalOneToManySearch.


        :param transportation: The transportation of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type transportation: RequestTransportationFast
        """
        if self.local_vars_configuration.client_side_validation and transportation is None:  # noqa: E501
            raise ValueError("Invalid value for `transportation`, must not be `None`")  # noqa: E501

        self._transportation = transportation

    @property
    def travel_time(self):
        """Gets the travel_time of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The travel_time of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: int
        """
        return self._travel_time

    @travel_time.setter
    def travel_time(self, travel_time):
        """Sets the travel_time of this RequestTimeFilterFastArrivalOneToManySearch.


        :param travel_time: The travel_time of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type travel_time: int
        """
        if self.local_vars_configuration.client_side_validation and travel_time is None:  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must not be `None`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                travel_time is not None and travel_time > 14400):  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value less than or equal to `14400`")  # noqa: E501
        if (self.local_vars_configuration.client_side_validation and
                travel_time is not None and travel_time < 60):  # noqa: E501
            raise ValueError("Invalid value for `travel_time`, must be a value greater than or equal to `60`")  # noqa: E501

        self._travel_time = travel_time

    @property
    def arrival_time_period(self):
        """Gets the arrival_time_period of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The arrival_time_period of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: RequestArrivalTimePeriod
        """
        return self._arrival_time_period

    @arrival_time_period.setter
    def arrival_time_period(self, arrival_time_period):
        """Sets the arrival_time_period of this RequestTimeFilterFastArrivalOneToManySearch.


        :param arrival_time_period: The arrival_time_period of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type arrival_time_period: RequestArrivalTimePeriod
        """
        if self.local_vars_configuration.client_side_validation and arrival_time_period is None:  # noqa: E501
            raise ValueError("Invalid value for `arrival_time_period`, must not be `None`")  # noqa: E501

        self._arrival_time_period = arrival_time_period

    @property
    def properties(self):
        """Gets the properties of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501


        :return: The properties of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :rtype: list[RequestTimeFilterFastProperty]
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this RequestTimeFilterFastArrivalOneToManySearch.


        :param properties: The properties of this RequestTimeFilterFastArrivalOneToManySearch.  # noqa: E501
        :type properties: list[RequestTimeFilterFastProperty]
        """
        if self.local_vars_configuration.client_side_validation and properties is None:  # noqa: E501
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties

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
        if not isinstance(other, RequestTimeFilterFastArrivalOneToManySearch):
            return False

        return self.to_dict() == other.to_dict()

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        if not isinstance(other, RequestTimeFilterFastArrivalOneToManySearch):
            return True

        return self.to_dict() != other.to_dict()
