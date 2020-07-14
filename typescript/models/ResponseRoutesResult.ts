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

import { ResponseRoutesLocation } from './ResponseRoutesLocation';
import { HttpFile } from '../http/http';

export class ResponseRoutesResult {
    'searchId': string;
    'locations': Array<ResponseRoutesLocation>;
    'unreachable': Array<string>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "searchId",
            "baseName": "search_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "locations",
            "baseName": "locations",
            "type": "Array<ResponseRoutesLocation>",
            "format": ""
        },
        {
            "name": "unreachable",
            "baseName": "unreachable",
            "type": "Array<string>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ResponseRoutesResult.attributeTypeMap;
    }
    
    public constructor() {
    }
}

