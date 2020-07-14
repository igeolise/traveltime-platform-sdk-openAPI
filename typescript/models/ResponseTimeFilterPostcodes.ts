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

import { ResponseTimeFilterPostcodesResult } from './ResponseTimeFilterPostcodesResult';
import { HttpFile } from '../http/http';

export class ResponseTimeFilterPostcodes {
    'results': Array<ResponseTimeFilterPostcodesResult>;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "results",
            "baseName": "results",
            "type": "Array<ResponseTimeFilterPostcodesResult>",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeFilterPostcodes.attributeTypeMap;
    }
    
    public constructor() {
    }
}

