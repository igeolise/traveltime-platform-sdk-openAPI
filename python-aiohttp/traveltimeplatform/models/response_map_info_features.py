# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.response_map_info_features_public_transport import ResponseMapInfoFeaturesPublicTransport
from traveltimeplatform import util


class ResponseMapInfoFeatures(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, public_transport: ResponseMapInfoFeaturesPublicTransport=None, fares: bool=None, postcodes: bool=None):
        """ResponseMapInfoFeatures - a model defined in OpenAPI

        :param public_transport: The public_transport of this ResponseMapInfoFeatures.
        :param fares: The fares of this ResponseMapInfoFeatures.
        :param postcodes: The postcodes of this ResponseMapInfoFeatures.
        """
        self.openapi_types = {
            'public_transport': ResponseMapInfoFeaturesPublicTransport,
            'fares': bool,
            'postcodes': bool
        }

        self.attribute_map = {
            'public_transport': 'public_transport',
            'fares': 'fares',
            'postcodes': 'postcodes'
        }

        self._public_transport = public_transport
        self._fares = fares
        self._postcodes = postcodes

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseMapInfoFeatures':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseMapInfoFeatures of this ResponseMapInfoFeatures.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def public_transport(self):
        """Gets the public_transport of this ResponseMapInfoFeatures.


        :return: The public_transport of this ResponseMapInfoFeatures.
        :rtype: ResponseMapInfoFeaturesPublicTransport
        """
        return self._public_transport

    @public_transport.setter
    def public_transport(self, public_transport):
        """Sets the public_transport of this ResponseMapInfoFeatures.


        :param public_transport: The public_transport of this ResponseMapInfoFeatures.
        :type public_transport: ResponseMapInfoFeaturesPublicTransport
        """

        self._public_transport = public_transport

    @property
    def fares(self):
        """Gets the fares of this ResponseMapInfoFeatures.


        :return: The fares of this ResponseMapInfoFeatures.
        :rtype: bool
        """
        return self._fares

    @fares.setter
    def fares(self, fares):
        """Sets the fares of this ResponseMapInfoFeatures.


        :param fares: The fares of this ResponseMapInfoFeatures.
        :type fares: bool
        """
        if fares is None:
            raise ValueError("Invalid value for `fares`, must not be `None`")

        self._fares = fares

    @property
    def postcodes(self):
        """Gets the postcodes of this ResponseMapInfoFeatures.


        :return: The postcodes of this ResponseMapInfoFeatures.
        :rtype: bool
        """
        return self._postcodes

    @postcodes.setter
    def postcodes(self, postcodes):
        """Sets the postcodes of this ResponseMapInfoFeatures.


        :param postcodes: The postcodes of this ResponseMapInfoFeatures.
        :type postcodes: bool
        """
        if postcodes is None:
            raise ValueError("Invalid value for `postcodes`, must not be `None`")

        self._postcodes = postcodes
