# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestRoutesProperty(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    TRAVEL_TIME = "travel_time"
    DISTANCE = "distance"
    FARES = "fares"
    ROUTE = "route"

    def __init__(self):
        """RequestRoutesProperty - a model defined in OpenAPI

        """
        self.openapi_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestRoutesProperty':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestRoutesProperty of this RequestRoutesProperty.
        """
        return util.deserialize_model(dikt, cls)
