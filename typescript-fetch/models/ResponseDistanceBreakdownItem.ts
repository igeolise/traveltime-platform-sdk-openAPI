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
    ResponseTransportationMode,
    ResponseTransportationModeFromJSON,
    ResponseTransportationModeToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseDistanceBreakdownItem
 */
export interface ResponseDistanceBreakdownItem {
    /**
     * 
     * @type {ResponseTransportationMode}
     * @memberof ResponseDistanceBreakdownItem
     */
    mode: ResponseTransportationMode;
    /**
     * 
     * @type {number}
     * @memberof ResponseDistanceBreakdownItem
     */
    distance: number;
}

export function ResponseDistanceBreakdownItemFromJSON(json: any): ResponseDistanceBreakdownItem {
    return {
        'mode': ResponseTransportationModeFromJSON(json['mode']),
        'distance': json['distance'],
    };
}

export function ResponseDistanceBreakdownItemToJSON(value?: ResponseDistanceBreakdownItem): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'mode': ResponseTransportationModeToJSON(value.mode),
        'distance': value.distance,
    };
}


