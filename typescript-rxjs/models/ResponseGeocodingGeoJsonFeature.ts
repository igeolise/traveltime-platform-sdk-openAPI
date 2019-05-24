// tslint:disable
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

import {
    ResponseGeocodingGeometry,
    ResponseGeocodingProperties,
} from './';

/**
 * @export
 * @interface ResponseGeocodingGeoJsonFeature
 */
export interface ResponseGeocodingGeoJsonFeature {
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingGeoJsonFeature
     */
    type: string;
    /**
     * 
     * @type {ResponseGeocodingGeometry}
     * @memberof ResponseGeocodingGeoJsonFeature
     */
    geometry: ResponseGeocodingGeometry;
    /**
     * 
     * @type {ResponseGeocodingProperties}
     * @memberof ResponseGeocodingGeoJsonFeature
     */
    properties: ResponseGeocodingProperties;
}
