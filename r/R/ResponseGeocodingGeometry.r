# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' ResponseGeocodingGeometry Class
#'
#' @field type 
#' @field coordinates 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseGeocodingGeometry <- R6::R6Class(
  'ResponseGeocodingGeometry',
  public = list(
    `type` = NULL,
    `coordinates` = NULL,
    initialize = function(`type`, `coordinates`){
      if (!missing(`type`)) {
        stopifnot(is.character(`type`), length(`type`) == 1)
        self$`type` <- `type`
      }
      if (!missing(`coordinates`)) {
        stopifnot(is.list(`coordinates`), length(`coordinates`) != 0)
        lapply(`coordinates`, function(x) stopifnot(is.character(x)))
        self$`coordinates` <- `coordinates`
      }
    },
    toJSON = function() {
      ResponseGeocodingGeometryObject <- list()
      if (!is.null(self$`type`)) {
        ResponseGeocodingGeometryObject[['type']] <- self$`type`
      }
      if (!is.null(self$`coordinates`)) {
        ResponseGeocodingGeometryObject[['coordinates']] <- self$`coordinates`
      }

      ResponseGeocodingGeometryObject
    },
    fromJSON = function(ResponseGeocodingGeometryJson) {
      ResponseGeocodingGeometryObject <- jsonlite::fromJSON(ResponseGeocodingGeometryJson)
      if (!is.null(ResponseGeocodingGeometryObject$`type`)) {
        self$`type` <- ResponseGeocodingGeometryObject$`type`
      }
      if (!is.null(ResponseGeocodingGeometryObject$`coordinates`)) {
        self$`coordinates` <- ResponseGeocodingGeometryObject$`coordinates`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "type": %s,
           "coordinates": [%s]
        }',
        self$`type`,
        lapply(self$`coordinates`, function(x) paste(paste0('"', x, '"'), sep=","))
      )
    },
    fromJSONString = function(ResponseGeocodingGeometryJson) {
      ResponseGeocodingGeometryObject <- jsonlite::fromJSON(ResponseGeocodingGeometryJson)
      self$`type` <- ResponseGeocodingGeometryObject$`type`
      self$`coordinates` <- ResponseGeocodingGeometryObject$`coordinates`
    }
  )
)
