# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestTimeFilterPostcodeSectorsProperty Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeFilterPostcodeSectorsProperty <- R6::R6Class(
  'RequestTimeFilterPostcodeSectorsProperty',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      RequestTimeFilterPostcodeSectorsPropertyObject <- list()

      RequestTimeFilterPostcodeSectorsPropertyObject
    },
    fromJSON = function(RequestTimeFilterPostcodeSectorsPropertyJson) {
      RequestTimeFilterPostcodeSectorsPropertyObject <- jsonlite::fromJSON(RequestTimeFilterPostcodeSectorsPropertyJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(RequestTimeFilterPostcodeSectorsPropertyJson) {
      RequestTimeFilterPostcodeSectorsPropertyObject <- jsonlite::fromJSON(RequestTimeFilterPostcodeSectorsPropertyJson)
    }
  )
)
