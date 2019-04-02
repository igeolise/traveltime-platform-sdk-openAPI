# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' ResponseMapInfo Class
#'
#' @field maps 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseMapInfo <- R6::R6Class(
  'ResponseMapInfo',
  public = list(
    `maps` = NULL,
    initialize = function(`maps`){
      if (!missing(`maps`)) {
        stopifnot(is.list(`maps`), length(`maps`) != 0)
        lapply(`maps`, function(x) stopifnot(R6::is.R6(x)))
        self$`maps` <- `maps`
      }
    },
    toJSON = function() {
      ResponseMapInfoObject <- list()
      if (!is.null(self$`maps`)) {
        ResponseMapInfoObject[['maps']] <- lapply(self$`maps`, function(x) x$toJSON())
      }

      ResponseMapInfoObject
    },
    fromJSON = function(ResponseMapInfoJson) {
      ResponseMapInfoObject <- jsonlite::fromJSON(ResponseMapInfoJson)
      if (!is.null(ResponseMapInfoObject$`maps`)) {
        self$`maps` <- lapply(ResponseMapInfoObject$`maps`, function(x) {
          mapsObject <- ResponseMapInfoMap$new()
          mapsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          mapsObject
        })
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "maps": [%s]
        }',
        lapply(self$`maps`, function(x) paste(x$toJSON(), sep=","))
      )
    },
    fromJSONString = function(ResponseMapInfoJson) {
      ResponseMapInfoObject <- jsonlite::fromJSON(ResponseMapInfoJson)
      self$`maps` <- lapply(ResponseMapInfoObject$`maps`, function(x) ResponseMapInfoMap$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
    }
  )
)
