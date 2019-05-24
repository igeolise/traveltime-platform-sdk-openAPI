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

import { ResponseTimeFilterProperties } from './responseTimeFilterProperties';

export class ResponseTimeFilterLocation {
    'id': string;
    'properties': Array<ResponseTimeFilterProperties>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "Array<ResponseTimeFilterProperties>"
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeFilterLocation.attributeTypeMap;
    }
}

