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

import { ResponseBoundingBox } from './responseBoundingBox';
import { ResponseTimeMapProperties } from './responseTimeMapProperties';

export class ResponseTimeMapBoundingBoxesResult {
    'searchId': string;
    'boundingBoxes': Array<ResponseBoundingBox>;
    'properties': ResponseTimeMapProperties;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "searchId",
            "baseName": "search_id",
            "type": "string"
        },
        {
            "name": "boundingBoxes",
            "baseName": "bounding_boxes",
            "type": "Array<ResponseBoundingBox>"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "ResponseTimeMapProperties"
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeMapBoundingBoxesResult.attributeTypeMap;
    }
}

