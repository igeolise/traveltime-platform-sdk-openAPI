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

import model_request_range_full
import model_request_time_filter_property
import model_request_transportation

type RequestTimeFilterArrivalSearch* = object
  ## 
  id*: string
  departure_location_ids*: seq[string]
  arrival_location_id*: string
  transportation*: RequestTransportation
  travel_time*: int
  arrival_time*: string
  properties*: seq[RequestTimeFilterProperty]
  range*: RequestRangeFull
