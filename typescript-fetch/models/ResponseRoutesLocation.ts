/* tslint:disable */
/* eslint-disable */
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
    ResponseRoutesProperties,
    ResponseRoutesPropertiesFromJSON,
    ResponseRoutesPropertiesFromJSONTyped,
    ResponseRoutesPropertiesToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseRoutesLocation
 */
export interface ResponseRoutesLocation {
    /**
     * 
     * @type {string}
     * @memberof ResponseRoutesLocation
     */
    id: string;
    /**
     * 
     * @type {Array<ResponseRoutesProperties>}
     * @memberof ResponseRoutesLocation
     */
    properties: Array<ResponseRoutesProperties>;
}

export function ResponseRoutesLocationFromJSON(json: any): ResponseRoutesLocation {
    return ResponseRoutesLocationFromJSONTyped(json, false);
}

export function ResponseRoutesLocationFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseRoutesLocation {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'id': json['id'],
        'properties': ((json['properties'] as Array<any>).map(ResponseRoutesPropertiesFromJSON)),
    };
}

export function ResponseRoutesLocationToJSON(value?: ResponseRoutesLocation | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'id': value.id,
        'properties': ((value.properties as Array<any>).map(ResponseRoutesPropertiesToJSON)),
    };
}


