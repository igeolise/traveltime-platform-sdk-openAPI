// tslint:disable
/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import {
    ModelString,
    ResponseTimeFilterPostcodeSectorProperties,
} from './';

/**
 * @export
 * @interface ResponseTimeFilterPostcodeSector
 */
export interface ResponseTimeFilterPostcodeSector {
    /**
     * @type {ModelString}
     * @memberof ResponseTimeFilterPostcodeSector
     */
    code: ModelString;
    /**
     * @type {ResponseTimeFilterPostcodeSectorProperties}
     * @memberof ResponseTimeFilterPostcodeSector
     */
    properties: ResponseTimeFilterPostcodeSectorProperties;
}
