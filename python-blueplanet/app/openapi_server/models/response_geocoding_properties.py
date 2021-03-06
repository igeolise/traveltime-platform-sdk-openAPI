# coding: utf-8

from __future__ import absolute_import
from datetime import date, datetime  # noqa: F401

from typing import List, Dict  # noqa: F401

from app.openapi_server.models.base_model_ import Model
from app.openapi_server.models.response_map_info_features import ResponseMapInfoFeatures  # noqa: F401,E501
from openapi_server import util


class ResponseGeocodingProperties(Model):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    def __init__(self, name: str=None, label: str=None, score: float=None, house_number: str=None, street: str=None, region: str=None, region_code: str=None, neighbourhood: str=None, county: str=None, macroregion: str=None, city: str=None, country: str=None, country_code: str=None, continent: str=None, postcode: str=None, features: ResponseMapInfoFeatures=None):  # noqa: E501
        """ResponseGeocodingProperties - a model defined in Swagger

        :param name: The name of this ResponseGeocodingProperties.  # noqa: E501
        :type name: str
        :param label: The label of this ResponseGeocodingProperties.  # noqa: E501
        :type label: str
        :param score: The score of this ResponseGeocodingProperties.  # noqa: E501
        :type score: float
        :param house_number: The house_number of this ResponseGeocodingProperties.  # noqa: E501
        :type house_number: str
        :param street: The street of this ResponseGeocodingProperties.  # noqa: E501
        :type street: str
        :param region: The region of this ResponseGeocodingProperties.  # noqa: E501
        :type region: str
        :param region_code: The region_code of this ResponseGeocodingProperties.  # noqa: E501
        :type region_code: str
        :param neighbourhood: The neighbourhood of this ResponseGeocodingProperties.  # noqa: E501
        :type neighbourhood: str
        :param county: The county of this ResponseGeocodingProperties.  # noqa: E501
        :type county: str
        :param macroregion: The macroregion of this ResponseGeocodingProperties.  # noqa: E501
        :type macroregion: str
        :param city: The city of this ResponseGeocodingProperties.  # noqa: E501
        :type city: str
        :param country: The country of this ResponseGeocodingProperties.  # noqa: E501
        :type country: str
        :param country_code: The country_code of this ResponseGeocodingProperties.  # noqa: E501
        :type country_code: str
        :param continent: The continent of this ResponseGeocodingProperties.  # noqa: E501
        :type continent: str
        :param postcode: The postcode of this ResponseGeocodingProperties.  # noqa: E501
        :type postcode: str
        :param features: The features of this ResponseGeocodingProperties.  # noqa: E501
        :type features: ResponseMapInfoFeatures
        """
        self.swagger_types = {
            'name': str,
            'label': str,
            'score': float,
            'house_number': str,
            'street': str,
            'region': str,
            'region_code': str,
            'neighbourhood': str,
            'county': str,
            'macroregion': str,
            'city': str,
            'country': str,
            'country_code': str,
            'continent': str,
            'postcode': str,
            'features': ResponseMapInfoFeatures
        }

        self.attribute_map = {
            'name': 'name',
            'label': 'label',
            'score': 'score',
            'house_number': 'house_number',
            'street': 'street',
            'region': 'region',
            'region_code': 'region_code',
            'neighbourhood': 'neighbourhood',
            'county': 'county',
            'macroregion': 'macroregion',
            'city': 'city',
            'country': 'country',
            'country_code': 'country_code',
            'continent': 'continent',
            'postcode': 'postcode',
            'features': 'features'
        }

        self._name = name
        self._label = label
        self._score = score
        self._house_number = house_number
        self._street = street
        self._region = region
        self._region_code = region_code
        self._neighbourhood = neighbourhood
        self._county = county
        self._macroregion = macroregion
        self._city = city
        self._country = country
        self._country_code = country_code
        self._continent = continent
        self._postcode = postcode
        self._features = features

    @classmethod
    def from_dict(cls, dikt) -> 'ResponseGeocodingProperties':
        """Returns the dict as a model

        :param dikt: A dict.
        :type: dict
        :return: The ResponseGeocodingProperties of this ResponseGeocodingProperties.  # noqa: E501
        :rtype: ResponseGeocodingProperties
        """
        return util.deserialize_model(dikt, cls)

    @property
    def name(self) -> str:
        """Gets the name of this ResponseGeocodingProperties.


        :return: The name of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._name

    @name.setter
    def name(self, name: str):
        """Sets the name of this ResponseGeocodingProperties.


        :param name: The name of this ResponseGeocodingProperties.
        :type name: str
        """
        if name is None:
            raise ValueError("Invalid value for `name`, must not be `None`")  # noqa: E501

        self._name = name

    @property
    def label(self) -> str:
        """Gets the label of this ResponseGeocodingProperties.


        :return: The label of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._label

    @label.setter
    def label(self, label: str):
        """Sets the label of this ResponseGeocodingProperties.


        :param label: The label of this ResponseGeocodingProperties.
        :type label: str
        """
        if label is None:
            raise ValueError("Invalid value for `label`, must not be `None`")  # noqa: E501

        self._label = label

    @property
    def score(self) -> float:
        """Gets the score of this ResponseGeocodingProperties.


        :return: The score of this ResponseGeocodingProperties.
        :rtype: float
        """
        return self._score

    @score.setter
    def score(self, score: float):
        """Sets the score of this ResponseGeocodingProperties.


        :param score: The score of this ResponseGeocodingProperties.
        :type score: float
        """

        self._score = score

    @property
    def house_number(self) -> str:
        """Gets the house_number of this ResponseGeocodingProperties.


        :return: The house_number of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._house_number

    @house_number.setter
    def house_number(self, house_number: str):
        """Sets the house_number of this ResponseGeocodingProperties.


        :param house_number: The house_number of this ResponseGeocodingProperties.
        :type house_number: str
        """

        self._house_number = house_number

    @property
    def street(self) -> str:
        """Gets the street of this ResponseGeocodingProperties.


        :return: The street of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._street

    @street.setter
    def street(self, street: str):
        """Sets the street of this ResponseGeocodingProperties.


        :param street: The street of this ResponseGeocodingProperties.
        :type street: str
        """

        self._street = street

    @property
    def region(self) -> str:
        """Gets the region of this ResponseGeocodingProperties.


        :return: The region of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._region

    @region.setter
    def region(self, region: str):
        """Sets the region of this ResponseGeocodingProperties.


        :param region: The region of this ResponseGeocodingProperties.
        :type region: str
        """

        self._region = region

    @property
    def region_code(self) -> str:
        """Gets the region_code of this ResponseGeocodingProperties.


        :return: The region_code of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._region_code

    @region_code.setter
    def region_code(self, region_code: str):
        """Sets the region_code of this ResponseGeocodingProperties.


        :param region_code: The region_code of this ResponseGeocodingProperties.
        :type region_code: str
        """

        self._region_code = region_code

    @property
    def neighbourhood(self) -> str:
        """Gets the neighbourhood of this ResponseGeocodingProperties.


        :return: The neighbourhood of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._neighbourhood

    @neighbourhood.setter
    def neighbourhood(self, neighbourhood: str):
        """Sets the neighbourhood of this ResponseGeocodingProperties.


        :param neighbourhood: The neighbourhood of this ResponseGeocodingProperties.
        :type neighbourhood: str
        """

        self._neighbourhood = neighbourhood

    @property
    def county(self) -> str:
        """Gets the county of this ResponseGeocodingProperties.


        :return: The county of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._county

    @county.setter
    def county(self, county: str):
        """Sets the county of this ResponseGeocodingProperties.


        :param county: The county of this ResponseGeocodingProperties.
        :type county: str
        """

        self._county = county

    @property
    def macroregion(self) -> str:
        """Gets the macroregion of this ResponseGeocodingProperties.


        :return: The macroregion of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._macroregion

    @macroregion.setter
    def macroregion(self, macroregion: str):
        """Sets the macroregion of this ResponseGeocodingProperties.


        :param macroregion: The macroregion of this ResponseGeocodingProperties.
        :type macroregion: str
        """

        self._macroregion = macroregion

    @property
    def city(self) -> str:
        """Gets the city of this ResponseGeocodingProperties.


        :return: The city of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._city

    @city.setter
    def city(self, city: str):
        """Sets the city of this ResponseGeocodingProperties.


        :param city: The city of this ResponseGeocodingProperties.
        :type city: str
        """

        self._city = city

    @property
    def country(self) -> str:
        """Gets the country of this ResponseGeocodingProperties.


        :return: The country of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._country

    @country.setter
    def country(self, country: str):
        """Sets the country of this ResponseGeocodingProperties.


        :param country: The country of this ResponseGeocodingProperties.
        :type country: str
        """

        self._country = country

    @property
    def country_code(self) -> str:
        """Gets the country_code of this ResponseGeocodingProperties.


        :return: The country_code of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._country_code

    @country_code.setter
    def country_code(self, country_code: str):
        """Sets the country_code of this ResponseGeocodingProperties.


        :param country_code: The country_code of this ResponseGeocodingProperties.
        :type country_code: str
        """

        self._country_code = country_code

    @property
    def continent(self) -> str:
        """Gets the continent of this ResponseGeocodingProperties.


        :return: The continent of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._continent

    @continent.setter
    def continent(self, continent: str):
        """Sets the continent of this ResponseGeocodingProperties.


        :param continent: The continent of this ResponseGeocodingProperties.
        :type continent: str
        """

        self._continent = continent

    @property
    def postcode(self) -> str:
        """Gets the postcode of this ResponseGeocodingProperties.


        :return: The postcode of this ResponseGeocodingProperties.
        :rtype: str
        """
        return self._postcode

    @postcode.setter
    def postcode(self, postcode: str):
        """Sets the postcode of this ResponseGeocodingProperties.


        :param postcode: The postcode of this ResponseGeocodingProperties.
        :type postcode: str
        """

        self._postcode = postcode

    @property
    def features(self) -> ResponseMapInfoFeatures:
        """Gets the features of this ResponseGeocodingProperties.


        :return: The features of this ResponseGeocodingProperties.
        :rtype: ResponseMapInfoFeatures
        """
        return self._features

    @features.setter
    def features(self, features: ResponseMapInfoFeatures):
        """Sets the features of this ResponseGeocodingProperties.


        :param features: The features of this ResponseGeocodingProperties.
        :type features: ResponseMapInfoFeatures
        """

        self._features = features
