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
    RequestLocation,
    RequestLocationFromJSON,
    RequestLocationFromJSONTyped,
    RequestLocationToJSON,
} from './';

/**
 * 
 * @export
 * @interface RequestSupportedLocations
 */
export interface RequestSupportedLocations {
    /**
     * 
     * @type {Array<RequestLocation>}
     * @memberof RequestSupportedLocations
     */
    locations: Array<RequestLocation>;
}

export function RequestSupportedLocationsFromJSON(json: any): RequestSupportedLocations {
    return RequestSupportedLocationsFromJSONTyped(json, false);
}

export function RequestSupportedLocationsFromJSONTyped(json: any, ignoreDiscriminator: boolean): RequestSupportedLocations {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'locations': ((json['locations'] as Array<any>).map(RequestLocationFromJSON)),
    };
}

export function RequestSupportedLocationsToJSON(value?: RequestSupportedLocations | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'locations': ((value.locations as Array<any>).map(RequestLocationToJSON)),
    };
}


