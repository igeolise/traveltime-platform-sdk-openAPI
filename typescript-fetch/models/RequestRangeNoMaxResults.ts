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
 * @interface RequestRangeNoMaxResults
 */
export interface RequestRangeNoMaxResults {
    /**
     * 
     * @type {boolean}
     * @memberof RequestRangeNoMaxResults
     */
    enabled: boolean;
    /**
     * 
     * @type {number}
     * @memberof RequestRangeNoMaxResults
     */
    width: number;
}

export function RequestRangeNoMaxResultsFromJSON(json: any): RequestRangeNoMaxResults {
    return RequestRangeNoMaxResultsFromJSONTyped(json, false);
}

export function RequestRangeNoMaxResultsFromJSONTyped(json: any, ignoreDiscriminator: boolean): RequestRangeNoMaxResults {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'enabled': json['enabled'],
        'width': json['width'],
    };
}

export function RequestRangeNoMaxResultsToJSON(value?: RequestRangeNoMaxResults | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'enabled': value.enabled,
        'width': value.width,
    };
}


