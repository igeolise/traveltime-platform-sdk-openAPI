# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class ResponseGeocodingGeoJsonFeature(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, type=None, geometry=None, properties=None):  # noqa: E501
        """ResponseGeocodingGeoJsonFeature - a model defined in OpenAPI

        :param type: The type of this ResponseGeocodingGeoJsonFeature.  # noqa: E501
        :type type: str
        :param geometry: The geometry of this ResponseGeocodingGeoJsonFeature.  # noqa: E501
        :type geometry: ResponseGeocodingGeometry
        :param properties: The properties of this ResponseGeocodingGeoJsonFeature.  # noqa: E501
        :type properties: ResponseGeocodingProperties
        """
        self.openapi_types = {
            'type': str,
            'geometry': ResponseGeocodingGeometry,
            'properties': ResponseGeocodingProperties
        }

        self.attribute_map = {
            'type': 'type',
            'geometry': 'geometry',
            'properties': 'properties'
        }

        self._type = type
        self._geometry = geometry
        self._properties = properties

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseGeocodingGeoJsonFeature':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseGeocodingGeoJsonFeature of this ResponseGeocodingGeoJsonFeature.  # noqa: E501
        :rtype: ResponseGeocodingGeoJsonFeature
        """
        return util.deserialize_model(dikt, cls)

    @property
    def type(self):
        """Gets the type of this ResponseGeocodingGeoJsonFeature.


        :return: The type of this ResponseGeocodingGeoJsonFeature.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this ResponseGeocodingGeoJsonFeature.


        :param type: The type of this ResponseGeocodingGeoJsonFeature.
        :type type: str
        """
        if type is None:
            raise ValueError("Invalid value for `type`, must not be `None`")  # noqa: E501

        self._type = type

    @property
    def geometry(self):
        """Gets the geometry of this ResponseGeocodingGeoJsonFeature.


        :return: The geometry of this ResponseGeocodingGeoJsonFeature.
        :rtype: ResponseGeocodingGeometry
        """
        return self._geometry

    @geometry.setter
    def geometry(self, geometry):
        """Sets the geometry of this ResponseGeocodingGeoJsonFeature.


        :param geometry: The geometry of this ResponseGeocodingGeoJsonFeature.
        :type geometry: ResponseGeocodingGeometry
        """
        if geometry is None:
            raise ValueError("Invalid value for `geometry`, must not be `None`")  # noqa: E501

        self._geometry = geometry

    @property
    def properties(self):
        """Gets the properties of this ResponseGeocodingGeoJsonFeature.


        :return: The properties of this ResponseGeocodingGeoJsonFeature.
        :rtype: ResponseGeocodingProperties
        """
        return self._properties

    @properties.setter
    def properties(self, properties):
        """Sets the properties of this ResponseGeocodingGeoJsonFeature.


        :param properties: The properties of this ResponseGeocodingGeoJsonFeature.
        :type properties: ResponseGeocodingProperties
        """
        if properties is None:
            raise ValueError("Invalid value for `properties`, must not be `None`")  # noqa: E501

        self._properties = properties
