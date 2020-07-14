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

import model_response_distance_breakdown_item
import model_response_fares
import model_response_route

type ResponseTimeFilterProperties* = object
  ## 
  travel_time*: int
  distance*: int
  distance_breakdown*: seq[ResponseDistanceBreakdownItem]
  fares*: ResponseFares
  route*: ResponseRoute
