# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestTimeMapProperty Class
#'
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeMapProperty <- R6::R6Class(
  'RequestTimeMapProperty',
  public = list(
    initialize = function(){
    },
    toJSON = function() {
      RequestTimeMapPropertyObject <- list()

      RequestTimeMapPropertyObject
    },
    fromJSON = function(RequestTimeMapPropertyJson) {
      RequestTimeMapPropertyObject <- jsonlite::fromJSON(RequestTimeMapPropertyJson)
    },
    toJSONString = function() {
       sprintf(
        '{
        }',
      )
    },
    fromJSONString = function(RequestTimeMapPropertyJson) {
      RequestTimeMapPropertyObject <- jsonlite::fromJSON(RequestTimeMapPropertyJson)
    }
  )
)
