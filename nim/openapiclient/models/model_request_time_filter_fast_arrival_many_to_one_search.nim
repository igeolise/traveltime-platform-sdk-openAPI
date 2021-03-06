#
# TravelTime API
# 
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
# The version of the OpenAPI document: 1.2.1
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech
#

import json
import tables

import model_request_arrival_time_period
import model_request_time_filter_fast_property
import model_request_transportation_fast

type RequestTimeFilterFastArrivalManyToOneSearch* = object
  ## 
  id*: string
  arrival_location_id*: string
  departure_location_ids*: seq[string]
  transportation*: RequestTransportationFast
  travel_time*: int
  arrival_time_period*: RequestArrivalTimePeriod
  properties*: seq[RequestTimeFilterFastProperty]
