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

import model_request_time_map_arrival_search
import model_request_time_map_departure_search
import model_request_union_on_intersection

type RequestTimeMap* = object
  ## 
  departure_searches*: seq[RequestTimeMapDepartureSearch]
  arrival_searches*: seq[RequestTimeMapArrivalSearch]
  unions*: seq[RequestUnionOnIntersection]
  intersections*: seq[RequestUnionOnIntersection]
