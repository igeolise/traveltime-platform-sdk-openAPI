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
/**
 * 
 * @export
 * @interface ResponseTimeFilterPostcodesProperties
 */
export interface ResponseTimeFilterPostcodesProperties {
    /**
     * 
     * @type {number}
     * @memberof ResponseTimeFilterPostcodesProperties
     */
    travelTime?: number;
    /**
     * 
     * @type {number}
     * @memberof ResponseTimeFilterPostcodesProperties
     */
    distance?: number;
}

export function ResponseTimeFilterPostcodesPropertiesFromJSON(json: any): ResponseTimeFilterPostcodesProperties {
    return {
        'travelTime': !exists(json, 'travel_time') ? undefined : json['travel_time'],
        'distance': !exists(json, 'distance') ? undefined : json['distance'],
    };
}

export function ResponseTimeFilterPostcodesPropertiesToJSON(value?: ResponseTimeFilterPostcodesProperties): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'travel_time': value.travelTime,
        'distance': value.distance,
    };
}

