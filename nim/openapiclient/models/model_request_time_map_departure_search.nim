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

import model_coords
import model_request_range_no_max_results
import model_request_time_map_property
import model_request_transportation

type RequestTimeMapDepartureSearch* = object
  ## 
  id*: string
  coords*: Coords
  transportation*: RequestTransportation
  travel_time*: int
  departure_time*: string
  properties*: seq[RequestTimeMapProperty]
  range*: RequestRangeNoMaxResults
