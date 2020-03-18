# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from openapi_server.models.base_model_ import Model
from openapi_server import util


class RequestTimeFilterFastProperty(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    TRAVEL_TIME = "travel_time"
    FARES = "fares"

    def __init__(self):
        """RequestTimeFilterFastProperty - a model defined in OpenAPI

        """
        self.openapi_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestTimeFilterFastProperty':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestTimeFilterFastProperty of this RequestTimeFilterFastProperty.
        """
        return util.deserialize_model(dikt, cls)