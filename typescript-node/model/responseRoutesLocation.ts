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

import { ResponseRoutesProperties } from './responseRoutesProperties';

export class ResponseRoutesLocation {
    'id': string;
    'properties': Array<ResponseRoutesProperties>;

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
            "type": "Array<ResponseRoutesProperties>"
        }    ];

    static getAttributeTypeMap() {
        return ResponseRoutesLocation.attributeTypeMap;
    }
}

