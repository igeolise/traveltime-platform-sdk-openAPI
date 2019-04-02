# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' ResponseTimeFilterFastLocation Class
#'
#' @field id 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseTimeFilterFastLocation <- R6::R6Class(
  'ResponseTimeFilterFastLocation',
  public = list(
    `id` = NULL,
    `properties` = NULL,
    initialize = function(`id`, `properties`){
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`properties`)) {
        stopifnot(is.list(`properties`), length(`properties`) != 0)
        lapply(`properties`, function(x) stopifnot(R6::is.R6(x)))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      ResponseTimeFilterFastLocationObject <- list()
      if (!is.null(self$`id`)) {
        ResponseTimeFilterFastLocationObject[['id']] <- self$`id`
      }
      if (!is.null(self$`properties`)) {
        ResponseTimeFilterFastLocationObject[['properties']] <- lapply(self$`properties`, function(x) x$toJSON())
      }

      ResponseTimeFilterFastLocationObject
    },
    fromJSON = function(ResponseTimeFilterFastLocationJson) {
      ResponseTimeFilterFastLocationObject <- jsonlite::fromJSON(ResponseTimeFilterFastLocationJson)
      if (!is.null(ResponseTimeFilterFastLocationObject$`id`)) {
        self$`id` <- ResponseTimeFilterFastLocationObject$`id`
      }
      if (!is.null(ResponseTimeFilterFastLocationObject$`properties`)) {
        self$`properties` <- lapply(ResponseTimeFilterFastLocationObject$`properties`, function(x) {
          propertiesObject <- ResponseTimeFilterFastProperties$new()
          propertiesObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          propertiesObject
        })
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "id": %s,
           "properties": [%s]
        }',
        self$`id`,
        lapply(self$`properties`, function(x) paste(x$toJSON(), sep=","))
      )
    },
    fromJSONString = function(ResponseTimeFilterFastLocationJson) {
      ResponseTimeFilterFastLocationObject <- jsonlite::fromJSON(ResponseTimeFilterFastLocationJson)
      self$`id` <- ResponseTimeFilterFastLocationObject$`id`
      self$`properties` <- lapply(ResponseTimeFilterFastLocationObject$`properties`, function(x) ResponseTimeFilterFastProperties$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
    }
  )
)
