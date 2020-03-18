/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    ResponseShape,
    ResponseShapeFromJSON,
    ResponseShapeFromJSONTyped,
    ResponseShapeToJSON,
    ResponseTimeMapProperties,
    ResponseTimeMapPropertiesFromJSON,
    ResponseTimeMapPropertiesFromJSONTyped,
    ResponseTimeMapPropertiesToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeMapResult
 */
export interface ResponseTimeMapResult {
    /**
     * 
     * @type {string}
     * @memberof ResponseTimeMapResult
     */
    searchId: string;
    /**
     * 
     * @type {Array<ResponseShape>}
     * @memberof ResponseTimeMapResult
     */
    shapes: Array<ResponseShape>;
    /**
     * 
     * @type {ResponseTimeMapProperties}
     * @memberof ResponseTimeMapResult
     */
    properties: ResponseTimeMapProperties;
}

export function ResponseTimeMapResultFromJSON(json: any): ResponseTimeMapResult {
    return ResponseTimeMapResultFromJSONTyped(json, false);
}

export function ResponseTimeMapResultFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseTimeMapResult {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'searchId': json['search_id'],
        'shapes': ((json['shapes'] as Array<any>).map(ResponseShapeFromJSON)),
        'properties': ResponseTimeMapPropertiesFromJSON(json['properties']),
    };
}

export function ResponseTimeMapResultToJSON(value?: ResponseTimeMapResult | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'search_id': value.searchId,
        'shapes': ((value.shapes as Array<any>).map(ResponseShapeToJSON)),
        'properties': ResponseTimeMapPropertiesToJSON(value.properties),
    };
}


