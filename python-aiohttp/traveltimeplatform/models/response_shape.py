# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform.models.coords import Coords
from traveltimeplatform import util


class ResponseShape(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    def __init__(self, shell: List[Coords]=None, holes: List[List[Coords]]=None):
        """ResponseShape - a model defined in OpenAPI

        :param shell: The shell of this ResponseShape.
        :param holes: The holes of this ResponseShape.
        """
        self.openapi_types = {
            'shell': List[Coords],
            'holes': List[List[Coords]]
        }

        self.attribute_map = {
            'shell': 'shell',
            'holes': 'holes'
        }

        self._shell = shell
        self._holes = holes

    @classmethod
    def from_dict(cls, dikt: dict) -> 'ResponseShape':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The ResponseShape of this ResponseShape.
        """
        return util.deserialize_model(dikt, cls)

    @property
    def shell(self):
        """Gets the shell of this ResponseShape.


        :return: The shell of this ResponseShape.
        :rtype: List[Coords]
        """
        return self._shell

    @shell.setter
    def shell(self, shell):
        """Sets the shell of this ResponseShape.


        :param shell: The shell of this ResponseShape.
        :type shell: List[Coords]
        """
        if shell is None:
            raise ValueError("Invalid value for `shell`, must not be `None`")

        self._shell = shell

    @property
    def holes(self):
        """Gets the holes of this ResponseShape.


        :return: The holes of this ResponseShape.
        :rtype: List[List[Coords]]
        """
        return self._holes

    @holes.setter
    def holes(self, holes):
        """Sets the holes of this ResponseShape.


        :param holes: The holes of this ResponseShape.
        :type holes: List[List[Coords]]
        """
        if holes is None:
            raise ValueError("Invalid value for `holes`, must not be `None`")

        self._holes = holes
