# TravelTime API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# The version of the OpenAPI document: 1.2.1
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech

#' @docType class
#' @title ResponseTimeMapBoundingBoxes
#'
#' @description ResponseTimeMapBoundingBoxes Class
#'
#' @format An \code{R6Class} generator object
#'
#' @field results  list( \link{ResponseTimeMapBoundingBoxesResult} ) 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ResponseTimeMapBoundingBoxes <- R6::R6Class(
  'ResponseTimeMapBoundingBoxes',
  public = list(
    `results` = NULL,
    initialize = function(
        `results`, ...
    ) {
      local.optional.var <- list(...)
      if (!missing(`results`)) {
        stopifnot(is.vector(`results`), length(`results`) != 0)
        sapply(`results`, function(x) stopifnot(R6::is.R6(x)))
        self$`results` <- `results`
      }
    },
    toJSON = function() {
      ResponseTimeMapBoundingBoxesObject <- list()
      if (!is.null(self$`results`)) {
        ResponseTimeMapBoundingBoxesObject[['results']] <-
          lapply(self$`results`, function(x) x$toJSON())
      }

      ResponseTimeMapBoundingBoxesObject
    },
    fromJSON = function(ResponseTimeMapBoundingBoxesJson) {
      ResponseTimeMapBoundingBoxesObject <- jsonlite::fromJSON(ResponseTimeMapBoundingBoxesJson)
      if (!is.null(ResponseTimeMapBoundingBoxesObject$`results`)) {
        self$`results` <- ApiClient$new()$deserializeObj(ResponseTimeMapBoundingBoxesObject$`results`, "array[ResponseTimeMapBoundingBoxesResult]", loadNamespace("openapi"))
      }
      self
    },
    toJSONString = function() {
      jsoncontent <- c(
        if (!is.null(self$`results`)) {
        sprintf(
        '"results":
        [%s]
',
        paste(sapply(self$`results`, function(x) jsonlite::toJSON(x$toJSON(), auto_unbox=TRUE, digits = NA)), collapse=",")
        )}
      )
      jsoncontent <- paste(jsoncontent, collapse = ",")
      paste('{', jsoncontent, '}', sep = "")
    },
    fromJSONString = function(ResponseTimeMapBoundingBoxesJson) {
      ResponseTimeMapBoundingBoxesObject <- jsonlite::fromJSON(ResponseTimeMapBoundingBoxesJson)
      self$`results` <- ApiClient$new()$deserializeObj(ResponseTimeMapBoundingBoxesObject$`results`, "array[ResponseTimeMapBoundingBoxesResult]", loadNamespace("openapi"))
      self
    }
  )
)

