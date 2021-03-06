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

import { Coords } from './Coords';
import { HttpFile } from '../http/http';

export class RequestLocation {
    'id': string;
    'coords': Coords;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "coords",
            "baseName": "coords",
            "type": "Coords",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return RequestLocation.attributeTypeMap;
    }
    
    public constructor() {
    }
}

