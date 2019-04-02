/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { ResponseTransportationMode } from './responseTransportationMode';

export class ResponseDistanceBreakdownItem {
    'mode': ResponseTransportationMode;
    'distance': number;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "mode",
            "baseName": "mode",
            "type": "ResponseTransportationMode"
        },
        {
            "name": "distance",
            "baseName": "distance",
            "type": "number"
        }    ];

    static getAttributeTypeMap() {
        return ResponseDistanceBreakdownItem.attributeTypeMap;
    }
}

