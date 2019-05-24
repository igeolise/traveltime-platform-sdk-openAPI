# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_geocoding_geo_json_feature import ResponseGeocodingGeoJsonFeature
from traveltimeplatform import util


class ResponseGeocoding(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, type: str=None, features: List[ResponseGeocodingGeoJsonFeature]=None):
        """ResponseGeocoding - a model defined in OpenAPI

        :param type: The type of this ResponseGeocoding.
        :param features: The features of this ResponseGeocoding.
        """
        self.openapi_types = {
            'type': str,
            'features': List[ResponseGeocodingGeoJsonFeature]
        }

        self.attribute_map = {
            'type': 'type',
            'features': 'features'
        }

        self._type = type
        self._features = features

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseGeocoding':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseGeocoding of this ResponseGeocoding.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def type(self):
        """Gets the type of this ResponseGeocoding.


        :return: The type of this ResponseGeocoding.
        :rtype: str
        """
        return self._type

    @type.setter
    def type(self, type):
        """Sets the type of this ResponseGeocoding.


        :param type: The type of this ResponseGeocoding.
        :type type: str
        """
        if type is None:
            raise ValueError("Invalid value for `type`, must not be `None`")

        self._type = type

    @property
    def features(self):
        """Gets the features of this ResponseGeocoding.


        :return: The features of this ResponseGeocoding.
        :rtype: List[ResponseGeocodingGeoJsonFeature]
        """
        return self._features

    @features.setter
    def features(self, features):
        """Sets the features of this ResponseGeocoding.


        :param features: The features of this ResponseGeocoding.
        :type features: List[ResponseGeocodingGeoJsonFeature]
        """
        if features is None:
            raise ValueError("Invalid value for `features`, must not be `None`")

        self._features = features
