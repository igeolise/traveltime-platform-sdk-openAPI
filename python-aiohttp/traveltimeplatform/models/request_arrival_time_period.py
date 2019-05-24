# coding: utf-8

from datetime import date, datetime

from typing import List, Dict, Type

from traveltimeplatform.models.base_model_ import Model
from traveltimeplatform import util


class RequestArrivalTimePeriod(Model):
    """NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).

    Do not edit the class manually.
    """

    """
    allowed enum values
    """
    WEEKDAY_MORNING = "weekday_morning"

    def __init__(self):
        """RequestArrivalTimePeriod - a model defined in OpenAPI

        """
        self.openapi_types = {
        }

        self.attribute_map = {
        }

    @classmethod
    def from_dict(cls, dikt: dict) -> 'RequestArrivalTimePeriod':
        """Returns the dict as a model

        :param dikt: A dict.
        :return: The RequestArrivalTimePeriod of this RequestArrivalTimePeriod.
        """
        return util.deserialize_model(dikt, cls)
