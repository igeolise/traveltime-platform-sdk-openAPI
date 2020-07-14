/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestFile } from '../api';
import { ModelString } from './modelString';
import { ResponseTimeFilterPostcodesProperties } from './responseTimeFilterPostcodesProperties';

export class ResponseTimeFilterPostcode {
    'code': ModelString;
    'properties': Array<ResponseTimeFilterPostcodesProperties>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "code",
            "baseName": "code",
            "type": "ModelString"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "Array<ResponseTimeFilterPostcodesProperties>"
        }    ];

    static getAttributeTypeMap() {
        return ResponseTimeFilterPostcode.attributeTypeMap;
    }
}

