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

import { ResponseTimeFilterLocation } from './responseTimeFilterLocation';

export class ResponseTimeFilterResult {
    'searchId': string;
    'locations': Array<ResponseTimeFilterLocation>;
    'unreachable': Array<string>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "searchId",
            "baseName": "search_id",
            "type": "string"
        },
        {
            "name": "locations",
            "baseName": "locations",
            "type": "Array<ResponseTimeFilterLocation>"
        },
        {
            "name": "unreachable",
            "baseName": "unreachable",
            "type": "Array<string>"
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeFilterResult.attributeTypeMap;
    }
}

