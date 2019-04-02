# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestTimeFilterFastProperty Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeFilterFastProperty <- R6::R6Class(
  'RequestTimeFilterFastProperty',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      RequestTimeFilterFastPropertyObject <- list()

      RequestTimeFilterFastPropertyObject
    },
    fromJSON = function(RequestTimeFilterFastPropertyJson) {
      RequestTimeFilterFastPropertyObject <- jsonlite::fromJSON(RequestTimeFilterFastPropertyJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(RequestTimeFilterFastPropertyJson) {
      RequestTimeFilterFastPropertyObject <- jsonlite::fromJSON(RequestTimeFilterFastPropertyJson)
    }
  )
)
