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

import model_response_map_info_features

type ResponseGeocodingProperties* = object
  ## 
  name*: string
  label*: string
  score*: float64
  house_number*: string
  street*: string
  region*: string
  region_code*: string
  neighbourhood*: string
  county*: string
  macroregion*: string
  city*: string
  country*: string
  country_code*: string
  continent*: string
  postcode*: string
  features*: ResponseMapInfoFeatures
