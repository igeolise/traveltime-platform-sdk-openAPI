# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestTimeFilterDepartureSearch Class
#'
#' @field id 
#' @field departure_location_id 
#' @field arrival_location_ids 
#' @field transportation 
#' @field travel_time 
#' @field departure_time 
#' @field properties 
#' @field range 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestTimeFilterDepartureSearch <- R6::R6Class(
  'RequestTimeFilterDepartureSearch',
  public = list(
    `id` = NULL,
    `departure_location_id` = NULL,
    `arrival_location_ids` = NULL,
    `transportation` = NULL,
    `travel_time` = NULL,
    `departure_time` = NULL,
    `properties` = NULL,
    `range` = NULL,
    initialize = function(`id`, `departure_location_id`, `arrival_location_ids`, `transportation`, `travel_time`, `departure_time`, `properties`, `range`){
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
      if (!missing(`departure_time`)) {
        stopifnot(is.character(`departure_time`), length(`departure_time`) == 1)
        self$`departure_time` <- `departure_time`
      }
      if (!missing(`properties`)) {
        stopifnot(is.list(`properties`), length(`properties`) != 0)
        lapply(`properties`, function(x) stopifnot(R6::is.R6(x)))
        self$`properties` <- `properties`
      }
      if (!missing(`range`)) {
        stopifnot(R6::is.R6(`range`))
        self$`range` <- `range`
      }
    },
    toJSON = function() {
      RequestTimeFilterDepartureSearchObject <- list()
      if (!is.null(self$`id`)) {
        RequestTimeFilterDepartureSearchObject[['id']] <- self$`id`
      }
      if (!is.null(self$`departure_location_id`)) {
        RequestTimeFilterDepartureSearchObject[['departure_location_id']] <- self$`departure_location_id`
      }
      if (!is.null(self$`arrival_location_ids`)) {
        RequestTimeFilterDepartureSearchObject[['arrival_location_ids']] <- self$`arrival_location_ids`
      }
      if (!is.null(self$`transportation`)) {
        RequestTimeFilterDepartureSearchObject[['transportation']] <- self$`transportation`$toJSON()
      }
      if (!is.null(self$`travel_time`)) {
        RequestTimeFilterDepartureSearchObject[['travel_time']] <- self$`travel_time`
      }
      if (!is.null(self$`departure_time`)) {
        RequestTimeFilterDepartureSearchObject[['departure_time']] <- self$`departure_time`
      }
      if (!is.null(self$`properties`)) {
        RequestTimeFilterDepartureSearchObject[['properties']] <- lapply(self$`properties`, function(x) x$toJSON())
      }
      if (!is.null(self$`range`)) {
        RequestTimeFilterDepartureSearchObject[['range']] <- self$`range`$toJSON()
      }

      RequestTimeFilterDepartureSearchObject
    },
    fromJSON = function(RequestTimeFilterDepartureSearchJson) {
      RequestTimeFilterDepartureSearchObject <- jsonlite::fromJSON(RequestTimeFilterDepartureSearchJson)
      if (!is.null(RequestTimeFilterDepartureSearchObject$`id`)) {
        self$`id` <- RequestTimeFilterDepartureSearchObject$`id`
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`departure_location_id`)) {
        self$`departure_location_id` <- RequestTimeFilterDepartureSearchObject$`departure_location_id`
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`arrival_location_ids`)) {
        self$`arrival_location_ids` <- RequestTimeFilterDepartureSearchObject$`arrival_location_ids`
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`transportation`)) {
        transportationObject <- RequestTransportation$new()
        transportationObject$fromJSON(jsonlite::toJSON(RequestTimeFilterDepartureSearchObject$transportation, auto_unbox = TRUE))
        self$`transportation` <- transportationObject
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`travel_time`)) {
        self$`travel_time` <- RequestTimeFilterDepartureSearchObject$`travel_time`
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`departure_time`)) {
        self$`departure_time` <- RequestTimeFilterDepartureSearchObject$`departure_time`
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`properties`)) {
        self$`properties` <- lapply(RequestTimeFilterDepartureSearchObject$`properties`, function(x) {
          propertiesObject <- RequestTimeFilterProperty$new()
          propertiesObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          propertiesObject
        })
      }
      if (!is.null(RequestTimeFilterDepartureSearchObject$`range`)) {
        rangeObject <- RequestRangeFull$new()
        rangeObject$fromJSON(jsonlite::toJSON(RequestTimeFilterDepartureSearchObject$range, auto_unbox = TRUE))
        self$`range` <- rangeObject
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
           "departure_time": %s,
           "properties": [%s],
           "range": %s
        }',
        self$`id`,
        self$`departure_location_id`,
        lapply(self$`arrival_location_ids`, function(x) paste(paste0('"', x, '"'), sep=",")),
        self$`transportation`$toJSON(),
        self$`travel_time`,
        self$`departure_time`,
        lapply(self$`properties`, function(x) paste(x$toJSON(), sep=",")),
        self$`range`$toJSON()
      )
    },
    fromJSONString = function(RequestTimeFilterDepartureSearchJson) {
      RequestTimeFilterDepartureSearchObject <- jsonlite::fromJSON(RequestTimeFilterDepartureSearchJson)
      self$`id` <- RequestTimeFilterDepartureSearchObject$`id`
      self$`departure_location_id` <- RequestTimeFilterDepartureSearchObject$`departure_location_id`
      self$`arrival_location_ids` <- RequestTimeFilterDepartureSearchObject$`arrival_location_ids`
      RequestTransportationObject <- RequestTransportation$new()
      self$`transportation` <- RequestTransportationObject$fromJSON(jsonlite::toJSON(RequestTimeFilterDepartureSearchObject$transportation, auto_unbox = TRUE))
      self$`travel_time` <- RequestTimeFilterDepartureSearchObject$`travel_time`
      self$`departure_time` <- RequestTimeFilterDepartureSearchObject$`departure_time`
      self$`properties` <- lapply(RequestTimeFilterDepartureSearchObject$`properties`, function(x) RequestTimeFilterProperty$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
      RequestRangeFullObject <- RequestRangeFull$new()
      self$`range` <- RequestRangeFullObject$fromJSON(jsonlite::toJSON(RequestTimeFilterDepartureSearchObject$range, auto_unbox = TRUE))
    }
  )
)
