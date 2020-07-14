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
 * ResponseRoutePart
 *
 * @package OpenAPIServer\Model
 * @author  OpenAPI Generator team
 * @link    https://github.com/openapitools/openapi-generator
 */
class ResponseRoutePart extends BaseModel
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
  "required" : [ "coords", "directions", "distance", "id", "mode", "travel_time", "type" ],
  "type" : "object",
  "properties" : {
    "id" : {
      "type" : "string"
    },
    "type" : {
      "type" : "string",
      "enum" : [ "basic", "start_end", "road", "public_transport" ]
    },
    "mode" : {
      "$ref" : "#/components/schemas/ResponseTransportationMode"
    },
    "directions" : {
      "type" : "string"
    },
    "distance" : {
      "$ref" : "#/components/schemas/ResponseDistance"
    },
    "travel_time" : {
      "$ref" : "#/components/schemas/ResponseTravelTime"
    },
    "coords" : {
      "type" : "array",
      "items" : {
        "$ref" : "#/components/schemas/Coords"
      }
    },
    "direction" : {
      "type" : "string"
    },
    "road" : {
      "type" : "string"
    },
    "turn" : {
      "type" : "string"
    },
    "line" : {
      "type" : "string"
    },
    "departure_station" : {
      "type" : "string"
    },
    "arrival_station" : {
      "type" : "string"
    },
    "departs_at" : {
      "$ref" : "#/components/schemas/ResponseLocalTime"
    },
    "arrives_at" : {
      "$ref" : "#/components/schemas/ResponseLocalTime"
    },
    "num_stops" : {
      "type" : "integer"
    }
  }
}
SCHEMA;
}
