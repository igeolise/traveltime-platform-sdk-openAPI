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
/**
 * 
 * @export
 * @interface ResponseSupportedLocation
 */
export interface ResponseSupportedLocation {
    /**
     * 
     * @type {string}
     * @memberof ResponseSupportedLocation
     */
    id: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseSupportedLocation
     */
    mapName: string;
}

export function ResponseSupportedLocationFromJSON(json: any): ResponseSupportedLocation {
    return ResponseSupportedLocationFromJSONTyped(json, false);
}

export function ResponseSupportedLocationFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseSupportedLocation {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'id': json['id'],
        'mapName': json['map_name'],
    };
}

export function ResponseSupportedLocationToJSON(value?: ResponseSupportedLocation | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'id': value.id,
        'map_name': value.mapName,
    };
}


