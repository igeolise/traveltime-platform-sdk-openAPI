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

import { ResponseBoundingBox } from './ResponseBoundingBox';
import { ResponseTimeMapProperties } from './ResponseTimeMapProperties';
import { HttpFile } from '../http/http';

export class ResponseTimeMapBoundingBoxesResult {
    'searchId': string;
    'boundingBoxes': Array<ResponseBoundingBox>;
    'properties': ResponseTimeMapProperties;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "searchId",
            "baseName": "search_id",
            "type": "string",
            "format": ""
        },
        {
            "name": "boundingBoxes",
            "baseName": "bounding_boxes",
            "type": "Array<ResponseBoundingBox>",
            "format": ""
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "ResponseTimeMapProperties",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeMapBoundingBoxesResult.attributeTypeMap;
    }
    
    public constructor() {
    }
}

