/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */
import { ResponseGeocodingGeometry } from './responseGeocodingGeometry';
import { ResponseGeocodingProperties } from './responseGeocodingProperties';


export interface ResponseGeocodingGeoJsonFeature { 
    type: string;
    geometry: ResponseGeocodingGeometry;
    properties: ResponseGeocodingProperties;
}
