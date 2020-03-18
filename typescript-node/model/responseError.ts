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

import { RequestFile } from '../api';

export class ResponseError {
    'httpStatus'?: number;
    'errorCode'?: number;
    'description'?: string;
    'documentationLink'?: string;
    'additionalInfo'?: { [key: string]: Array<string>; };

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "httpStatus",
            "baseName": "http_status",
            "type": "number"
        },
        {
            "name": "errorCode",
            "baseName": "error_code",
            "type": "number"
        },
        {
            "name": "description",
            "baseName": "description",
            "type": "string"
        },
        {
            "name": "documentationLink",
            "baseName": "documentation_link",
            "type": "string"
        },
        {
            "name": "additionalInfo",
            "baseName": "additional_info",
            "type": "{ [key: string]: Array<string>; }"
        }    ];

    static getAttributeTypeMap() {
        return ResponseError.attributeTypeMap;
    }
}

