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

import { ResponseSupportedLocation } from './ResponseSupportedLocation';
import { HttpFile } from '../http/http';

export class ResponseSupportedLocations {
    'locations': Array<ResponseSupportedLocation>;
    'unsupportedLocations': Array<string>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "locations",
            "baseName": "locations",
            "type": "Array<ResponseSupportedLocation>",
            "format": ""
        },
        {
            "name": "unsupportedLocations",
            "baseName": "unsupported_locations",
            "type": "Array<string>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ResponseSupportedLocations.attributeTypeMap;
    }
    
    public constructor() {
    }
}

