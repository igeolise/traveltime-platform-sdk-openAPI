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

import { ResponseTransportationMode } from './ResponseTransportationMode';
import { HttpFile } from '../http/http';

export class ResponseDistanceBreakdownItem {
    'mode': ResponseTransportationMode;
    'distance': number;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "mode",
            "baseName": "mode",
            "type": "ResponseTransportationMode",
            "format": ""
        },
        {
            "name": "distance",
            "baseName": "distance",
            "type": "number",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ResponseDistanceBreakdownItem.attributeTypeMap;
    }
    
    public constructor() {
    }
}

