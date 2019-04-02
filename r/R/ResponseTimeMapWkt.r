# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' ResponseTimeMapWkt Class
#'
#' @field results 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseTimeMapWkt <- R6::R6Class(
  'ResponseTimeMapWkt',
  public = list(
    `results` = NULL,
    initialize = function(`results`){
      if (!missing(`results`)) {
        stopifnot(is.list(`results`), length(`results`) != 0)
        lapply(`results`, function(x) stopifnot(R6::is.R6(x)))
        self$`results` <- `results`
      }
    },
    toJSON = function() {
      ResponseTimeMapWktObject <- list()
      if (!is.null(self$`results`)) {
        ResponseTimeMapWktObject[['results']] <- lapply(self$`results`, function(x) x$toJSON())
      }

      ResponseTimeMapWktObject
    },
    fromJSON = function(ResponseTimeMapWktJson) {
      ResponseTimeMapWktObject <- jsonlite::fromJSON(ResponseTimeMapWktJson)
      if (!is.null(ResponseTimeMapWktObject$`results`)) {
        self$`results` <- lapply(ResponseTimeMapWktObject$`results`, function(x) {
          resultsObject <- ResponseTimeMapWktResult$new()
          resultsObject$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE))
          resultsObject
        })
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "results": [%s]
        }',
        lapply(self$`results`, function(x) paste(x$toJSON(), sep=","))
      )
    },
    fromJSONString = function(ResponseTimeMapWktJson) {
      ResponseTimeMapWktObject <- jsonlite::fromJSON(ResponseTimeMapWktJson)
      self$`results` <- lapply(ResponseTimeMapWktObject$`results`, function(x) ResponseTimeMapWktResult$new()$fromJSON(jsonlite::toJSON(x, auto_unbox = TRUE)))
    }
  )
)
