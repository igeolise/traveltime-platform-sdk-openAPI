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
    ResponseTravelTimeStatistics,
    ResponseTravelTimeStatisticsFromJSON,
    ResponseTravelTimeStatisticsToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeFilterPostcodeDistrictProperties
 */
export interface ResponseTimeFilterPostcodeDistrictProperties {
    /**
     * 
     * @type {ResponseTravelTimeStatistics}
     * @memberof ResponseTimeFilterPostcodeDistrictProperties
     */
    travelTimeReachable?: ResponseTravelTimeStatistics;
    /**
     * 
     * @type {ResponseTravelTimeStatistics}
     * @memberof ResponseTimeFilterPostcodeDistrictProperties
     */
    travelTimeAll?: ResponseTravelTimeStatistics;
    /**
     * 
     * @type {number}
     * @memberof ResponseTimeFilterPostcodeDistrictProperties
     */
    coverage?: number;
}

export function ResponseTimeFilterPostcodeDistrictPropertiesFromJSON(json: any): ResponseTimeFilterPostcodeDistrictProperties {
    return {
        'travelTimeReachable': !exists(json, 'travel_time_reachable') ? undefined : ResponseTravelTimeStatisticsFromJSON(json['travel_time_reachable']),
        'travelTimeAll': !exists(json, 'travel_time_all') ? undefined : ResponseTravelTimeStatisticsFromJSON(json['travel_time_all']),
        'coverage': !exists(json, 'coverage') ? undefined : json['coverage'],
    };
}

export function ResponseTimeFilterPostcodeDistrictPropertiesToJSON(value?: ResponseTimeFilterPostcodeDistrictProperties): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'travel_time_reachable': ResponseTravelTimeStatisticsToJSON(value.travelTimeReachable),
        'travel_time_all': ResponseTravelTimeStatisticsToJSON(value.travelTimeAll),
        'coverage': value.coverage,
    };
}


