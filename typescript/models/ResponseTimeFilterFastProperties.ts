/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { ResponseFaresFast } from './ResponseFaresFast';
import { HttpFile } from '../http/http';

export class ResponseTimeFilterFastProperties {
    'travelTime'?: number;
    'fares'?: ResponseFaresFast;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "travelTime",
            "baseName": "travel_time",
            "type": "number",
            "format": ""
        },
        {
            "name": "fares",
            "baseName": "fares",
            "type": "ResponseFaresFast",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeFilterFastProperties.attributeTypeMap;
    }
    
    public constructor() {
    }
}

