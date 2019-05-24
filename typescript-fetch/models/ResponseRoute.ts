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
    ResponseRoutePart,
    ResponseRoutePartFromJSON,
    ResponseRoutePartToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseRoute
 */
export interface ResponseRoute {
    /**
     * 
     * @type {Date}
     * @memberof ResponseRoute
     */
    departureTime: Date;
    /**
     * 
     * @type {Date}
     * @memberof ResponseRoute
     */
    arrivalTime: Date;
    /**
     * 
     * @type {Array<ResponseRoutePart>}
     * @memberof ResponseRoute
     */
    parts: Array<ResponseRoutePart>;
}

export function ResponseRouteFromJSON(json: any): ResponseRoute {
    return {
        'departureTime': new Date(json['departure_time']),
        'arrivalTime': new Date(json['arrival_time']),
        'parts': (json['parts'] as Array<any>).map(ResponseRoutePartFromJSON),
    };
}

export function ResponseRouteToJSON(value?: ResponseRoute): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'departure_time': value.departureTime.toISOString(),
        'arrival_time': value.arrivalTime.toISOString(),
        'parts': (value.parts as Array<any>).map(ResponseRoutePartToJSON),
    };
}


