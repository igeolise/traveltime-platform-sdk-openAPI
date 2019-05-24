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

import { ResponseTravelTimeStatistics } from './responseTravelTimeStatistics';

export class ResponseTimeFilterPostcodeSectorProperties {
    'travelTimeReachable'?: ResponseTravelTimeStatistics;
    'travelTimeAll'?: ResponseTravelTimeStatistics;
    'coverage'?: number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "travelTimeReachable",
            "baseName": "travel_time_reachable",
            "type": "ResponseTravelTimeStatistics"
        },
        {
            "name": "travelTimeAll",
            "baseName": "travel_time_all",
            "type": "ResponseTravelTimeStatistics"
        },
        {
            "name": "coverage",
            "baseName": "coverage",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeFilterPostcodeSectorProperties.attributeTypeMap;
    }
}

