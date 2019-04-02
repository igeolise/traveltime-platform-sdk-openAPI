# TravelTime Platform API
#
# No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
#
# OpenAPI spec version: 1.0.0
# Contact: support@igeolise.com
# Generated by: https://openapi-generator.tech


#' RequestUnionOnIntersection Class
#'
#' @field id 
#' @field search_ids 
#'
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
RequestUnionOnIntersection <- R6::R6Class(
  'RequestUnionOnIntersection',
  public = list(
    `id` = NULL,
    `search_ids` = NULL,
    initialize = function(`id`, `search_ids`){
      if (!missing(`id`)) {
        stopifnot(is.character(`id`), length(`id`) == 1)
        self$`id` <- `id`
      }
      if (!missing(`search_ids`)) {
        stopifnot(is.list(`search_ids`), length(`search_ids`) != 0)
        lapply(`search_ids`, function(x) stopifnot(is.character(x)))
        self$`search_ids` <- `search_ids`
      }
    },
    toJSON = function() {
      RequestUnionOnIntersectionObject <- list()
      if (!is.null(self$`id`)) {
        RequestUnionOnIntersectionObject[['id']] <- self$`id`
      }
      if (!is.null(self$`search_ids`)) {
        RequestUnionOnIntersectionObject[['search_ids']] <- self$`search_ids`
      }

      RequestUnionOnIntersectionObject
    },
    fromJSON = function(RequestUnionOnIntersectionJson) {
      RequestUnionOnIntersectionObject <- jsonlite::fromJSON(RequestUnionOnIntersectionJson)
      if (!is.null(RequestUnionOnIntersectionObject$`id`)) {
        self$`id` <- RequestUnionOnIntersectionObject$`id`
      }
      if (!is.null(RequestUnionOnIntersectionObject$`search_ids`)) {
        self$`search_ids` <- RequestUnionOnIntersectionObject$`search_ids`
      }
    },
    toJSONString = function() {
       sprintf(
        '{
           "id": %s,
           "search_ids": [%s]
        }',
        self$`id`,
        lapply(self$`search_ids`, function(x) paste(paste0('"', x, '"'), sep=","))
      )
    },
    fromJSONString = function(RequestUnionOnIntersectionJson) {
      RequestUnionOnIntersectionObject <- jsonlite::fromJSON(RequestUnionOnIntersectionJson)
      self$`id` <- RequestUnionOnIntersectionObject$`id`
      self$`search_ids` <- RequestUnionOnIntersectionObject$`search_ids`
    }
  )
)
