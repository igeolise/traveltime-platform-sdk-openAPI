# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestTimeFilterProperty Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeFilterProperty <- R6::R6Class(
  'RequestTimeFilterProperty',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      RequestTimeFilterPropertyObject <- list()

      RequestTimeFilterPropertyObject
    },
    fromJSON = function(RequestTimeFilterPropertyJson) {
      RequestTimeFilterPropertyObject <- jsonlite::fromJSON(RequestTimeFilterPropertyJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(RequestTimeFilterPropertyJson) {
      RequestTimeFilterPropertyObject <- jsonlite::fromJSON(RequestTimeFilterPropertyJson)
    }
  )
)
