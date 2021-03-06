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
    ResponseTimeFilterLocation,
    ResponseTimeFilterLocationFromJSON,
    ResponseTimeFilterLocationFromJSONTyped,
    ResponseTimeFilterLocationToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeFilterResult
 */
export interface ResponseTimeFilterResult {
    /**
     * 
     * @type {string}
     * @memberof ResponseTimeFilterResult
     */
    searchId: string;
    /**
     * 
     * @type {Array<ResponseTimeFilterLocation>}
     * @memberof ResponseTimeFilterResult
     */
    locations: Array<ResponseTimeFilterLocation>;
    /**
     * 
     * @type {Array<string>}
     * @memberof ResponseTimeFilterResult
     */
    unreachable: Array<string>;
}

export function ResponseTimeFilterResultFromJSON(json: any): ResponseTimeFilterResult {
    return ResponseTimeFilterResultFromJSONTyped(json, false);
}

export function ResponseTimeFilterResultFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseTimeFilterResult {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'searchId': json['search_id'],
        'locations': ((json['locations'] as Array<any>).map(ResponseTimeFilterLocationFromJSON)),
        'unreachable': json['unreachable'],
    };
}

export function ResponseTimeFilterResultToJSON(value?: ResponseTimeFilterResult | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'search_id': value.searchId,
        'locations': ((value.locations as Array<any>).map(ResponseTimeFilterLocationToJSON)),
        'unreachable': value.unreachable,
    };
}


