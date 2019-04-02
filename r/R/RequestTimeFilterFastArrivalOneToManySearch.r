# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestTimeFilterFastArrivalOneToManySearch Class
#'
#' @field id 
#' @field departure_location_id 
#' @field arrival_location_ids 
#' @field transportation 
#' @field travel_time 
#' @field arrival_time_period 
#' @field properties 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeFilterFastArrivalOneToManySearch <- R6::R6Class(
  'RequestTimeFilterFastArrivalOneToManySearch',
  public = list(
    `id` = NULL,
    `departure_location_id` = NULL,
    `arrival_location_ids` = NULL,
    `transportation` = NULL,
    `travel_time` = NULL,
    `arrival_time_period` = NULL,
    `properties` = NULL,
    initialize = function(`id`, `departure_location_id`, `arrival_location_ids`, `transportation`, `travel_time`, `arrival_time_period`, `properties`){
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`departure_location_id`)) {
        stopifnot(is.character(`departure_location_id`), length(`departure_location_id`) == 1)
        self$`departure_location_id` <- `departure_location_id`
      }
      if (!missing(`arrival_location_ids`)) {
        stopifnot(is.list(`arrival_location_ids`), length(`arrival_location_ids`) != 0)
        lapply(`arrival_location_ids`, function(x) stopifnot(is.character(x)))
        self$`arrival_location_ids` <- `arrival_location_ids`
      }
      if (!missing(`transportation`)) {
        stopifnot(R6::is.R6(`transportation`))
        self$`transportation` <- `transportation`
      }
      if (!missing(`travel_time`)) {
        stopifnot(is.numeric(`travel_time`), length(`travel_time`) == 1)
        self$`travel_time` <- `travel_time`
      }
      if (!missing(`arrival_time_period`)) {
        stopifnot(R6::is.R6(`arrival_time_period`))
        self$`arrival_time_period` <- `arrival_time_period`
      }
      if (!missing(`properties`)) {
        stopifnot(is.list(`properties`), length(`properties`) != 0)
        lapply(`properties`, function(x) stopifnot(R6::is.R6(x)))
        self$`properties` <- `properties`
      }
    },
    toJSON = function() {
      RequestTimeFilterFastArrivalOneToManySearchObject <- list()
      if (!is.null(self$`id`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['id']] <- self$`id`
      }
      if (!is.null(self$`departure_location_id`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['departure_location_id']] <- self$`departure_location_id`
      }
      if (!is.null(self$`arrival_location_ids`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['arrival_location_ids']] <- self$`arrival_location_ids`
      }
      if (!is.null(self$`transportation`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['transportation']] <- self$`transportation`$toJSON()
      }
      if (!is.null(self$`travel_time`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['travel_time']] <- self$`travel_time`
      }
      if (!is.null(self$`arrival_time_period`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['arrival_time_period']] <- self$`arrival_time_period`$toJSON()
      }
      if (!is.null(self$`properties`)) {
        RequestTimeFilterFastArrivalOneToManySearchObject[['properties']] <- lapply(self$`properties`, function(x) x$toJSON())
      }

      RequestTimeFilterFastArrivalOneToManySearchObject
    },
    fromJSON = function(RequestTimeFilterFastArrivalOneToManySearchJson) {
      RequestTimeFilterFastArrivalOneToManySearchObject <- jsonlite::fromJSON(RequestTimeFilterFastArrivalOneToManySearchJson)
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`id`)) {
        self$`id` <- RequestTimeFilterFastArrivalOneToManySearchObject$`id`
      }
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`departure_location_id`)) {
        self$`departure_location_id` <- RequestTimeFilterFastArrivalOneToManySearchObject$`departure_location_id`
      }
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`arrival_location_ids`)) {
        self$`arrival_location_ids` <- RequestTimeFilterFastArrivalOneToManySearchObject$`arrival_location_ids`
      }
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`transportation`)) {
        transportationObject <- RequestTransportationFast$new()
        transportationObject$fromJSON(jsonlite::toJSON(RequestTimeFilterFastArrivalOneToManySearchObject$transportation, auto_unbox = TRUE))
        self$`transportation` <- transportationObject
      }
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`travel_time`)) {
        self$`travel_time` <- RequestTimeFilterFastArrivalOneToManySearchObject$`travel_time`
      }
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`arrival_time_period`)) {
        arrival_time_periodObject <- RequestArrivalTimePeriod$new()
        arrival_time_periodObject$fromJSON(jsonlite::toJSON(RequestTimeFilterFastArrivalOneToManySearchObject$arrival_time_period, auto_unbox = TRUE))
        self$`arrival_time_period` <- arrival_time_periodObject
      }
      if (!is.null(RequestTimeFilterFastArrivalOneToManySearchObject$`properties`)) {
        self$`properties` <- lapply(RequestTimeFilterFastArrivalOneToManySearchObject$`properties`, function(x) {
          propertiesObject <- RequestTimeFilterFastProperty$new()
          propertiesObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          propertiesObject
        })
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "id": %s,
           "departure_location_id": %s,
           "arrival_location_ids": [%s],
           "transportation": %s,
           "travel_time": %d,
           "arrival_time_period": %s,
           "properties": [%s]
        }',
        self$`id`,
        self$`departure_location_id`,
        lapply(self$`arrival_location_ids`, function(x) paste(paste0('"', x, '"'), sep=",")),
        self$`transportation`$toJSON(),
        self$`travel_time`,
        self$`arrival_time_period`$toJSON(),
        lapply(self$`properties`, function(x) paste(x$toJSON(), sep=","))
      )
    },
    fromJSONString = function(RequestTimeFilterFastArrivalOneToManySearchJson) {
      RequestTimeFilterFastArrivalOneToManySearchObject <- jsonlite::fromJSON(RequestTimeFilterFastArrivalOneToManySearchJson)
      self$`id` <- RequestTimeFilterFastArrivalOneToManySearchObject$`id`
      self$`departure_location_id` <- RequestTimeFilterFastArrivalOneToManySearchObject$`departure_location_id`
      self$`arrival_location_ids` <- RequestTimeFilterFastArrivalOneToManySearchObject$`arrival_location_ids`
      RequestTransportationFastObject <- RequestTransportationFast$new()
      self$`transportation` <- RequestTransportationFastObject$fromJSON(jsonlite::toJSON(RequestTimeFilterFastArrivalOneToManySearchObject$transportation, auto_unbox = TRUE))
      self$`travel_time` <- RequestTimeFilterFastArrivalOneToManySearchObject$`travel_time`
      RequestArrivalTimePeriodObject <- RequestArrivalTimePeriod$new()
      self$`arrival_time_period` <- RequestArrivalTimePeriodObject$fromJSON(jsonlite::toJSON(RequestTimeFilterFastArrivalOneToManySearchObject$arrival_time_period, auto_unbox = TRUE))
      self$`properties` <- lapply(RequestTimeFilterFastArrivalOneToManySearchObject$`properties`, function(x) RequestTimeFilterFastProperty$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
    }
  )
)
