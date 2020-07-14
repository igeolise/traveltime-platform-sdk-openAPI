<?php

/**
 * TravelTime API
 * PHP version 7.2
 *
 * @package OpenAPIServer
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */

/**
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

/**
 * NOTE: This class is auto generated by the openapi generator program.
 * https://github.com/openapitools/openapi-generator
 */
namespace OpenAPIServer\Model;

use OpenAPIServer\BaseModel;

/**
 * RequestRoutesArrivalSearch
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */
class RequestRoutesArrivalSearch extends BaseModel
{
    /**
     * @var string Models namespace.
     * Can be required for data deserialization when model contains referenced schemas.
     */
    protected const MODELS_NAMESPACE = '\OpenAPIServer\Model';

    /**
     * @var string Constant with OAS schema of current class.
     * Should be overwritten by inherited class.
     */
    protected const MODEL_SCHEMA = <<<'SCHEMA'
{
  "required" : [ "arrival_location_id", "arrival_time", "departure_location_ids", "id", "properties", "transportation" ],
  "type" : "object",
  "properties" : {
    "id" : {
      "$ref" : "#/components/schemas/RequestSearchId"
    },
    "departure_location_ids" : {
      "maxItems" : 2,
      "minItems" : 1,
      "type" : "array",
      "items" : {
        "type" : "string"
      }
    },
    "arrival_location_id" : {
      "type" : "string"
    },
    "transportation" : {
      "$ref" : "#/components/schemas/RequestTransportation"
    },
    "arrival_time" : {
      "$ref" : "#/components/schemas/RequestDepartureArrivalTime"
    },
    "properties" : {
      "type" : "array",
      "items" : {
        "$ref" : "#/components/schemas/RequestRoutesProperty"
      }
    },
    "range" : {
      "$ref" : "#/components/schemas/RequestRangeFull"
    }
  }
}
SCHEMA;
}
