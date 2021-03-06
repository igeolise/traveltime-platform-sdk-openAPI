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
import { ResponseFares } from './responseFares';
import { ResponseRoute } from './responseRoute';

export class ResponseRoutesProperties {
    'travelTime'?: number;
    'distance'?: number;
    'fares'?: ResponseFares;
    'route'?: ResponseRoute;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "travelTime",
            "baseName": "travel_time",
            "type": "number"
        },
        {
            "name": "distance",
            "baseName": "distance",
            "type": "number"
        },
        {
            "name": "fares",
            "baseName": "fares",
            "type": "ResponseFares"
        },
        {
            "name": "route",
            "baseName": "route",
            "type": "ResponseRoute"
        }    ];

    static getAttributeTypeMap() {
        return ResponseRoutesProperties.attributeTypeMap;
    }
}

