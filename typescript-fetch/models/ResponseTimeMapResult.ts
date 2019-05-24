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

import { exists } from '../runtime';
import {
    ResponseShape,
    ResponseShapeFromJSON,
    ResponseShapeToJSON,
    ResponseTimeMapProperties,
    ResponseTimeMapPropertiesFromJSON,
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
    return {
        'searchId': json['search_id'],
        'shapes': (json['shapes'] as Array<any>).map(ResponseShapeFromJSON),
        'properties': ResponseTimeMapPropertiesFromJSON(json['properties']),
    };
}

export function ResponseTimeMapResultToJSON(value?: ResponseTimeMapResult): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'search_id': value.searchId,
        'shapes': (value.shapes as Array<any>).map(ResponseShapeToJSON),
        'properties': ResponseTimeMapPropertiesToJSON(value.properties),
    };
}


