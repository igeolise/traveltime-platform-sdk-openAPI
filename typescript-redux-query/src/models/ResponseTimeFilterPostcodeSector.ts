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

import { exists, mapValues } from '../runtime';
import {
    ModelString,
    ModelStringFromJSON,
    ModelStringToJSON,
    ResponseTimeFilterPostcodeSectorProperties,
    ResponseTimeFilterPostcodeSectorPropertiesFromJSON,
    ResponseTimeFilterPostcodeSectorPropertiesToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeFilterPostcodeSector
 */
export interface ResponseTimeFilterPostcodeSector  {
    /**
     * 
     * @type {ModelString}
     * @memberof ResponseTimeFilterPostcodeSector
     */
    code: ModelString;
    /**
     * 
     * @type {ResponseTimeFilterPostcodeSectorProperties}
     * @memberof ResponseTimeFilterPostcodeSector
     */
    properties: ResponseTimeFilterPostcodeSectorProperties;
}

export function ResponseTimeFilterPostcodeSectorFromJSON(json: any): ResponseTimeFilterPostcodeSector {
    return {
        'code': ModelStringFromJSON(json['code']),
        'properties': ResponseTimeFilterPostcodeSectorPropertiesFromJSON(json['properties']),
    };
}

export function ResponseTimeFilterPostcodeSectorToJSON(value?: ResponseTimeFilterPostcodeSector): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'code': ModelStringToJSON(value.code),
        'properties': ResponseTimeFilterPostcodeSectorPropertiesToJSON(value.properties),
    };
}


