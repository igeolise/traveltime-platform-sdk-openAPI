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

import { RequestRangeFull } from './RequestRangeFull';
import { RequestTimeFilterPostcodesProperty } from './RequestTimeFilterPostcodesProperty';
import { RequestTransportation } from './RequestTransportation';
import { HttpFile } from '../http/http';

export class RequestTimeFilterPostcodesArrivalSearch {
    'id': string;
    'transportation': RequestTransportation;
    'travelTime': number;
    'arrivalTime': Date;
    'properties': Array<RequestTimeFilterPostcodesProperty>;
    'range'?: RequestRangeFull;

    static readonly discriminator: string | undefined = undefined;

    static readonly attributeTypeMap: Array<{name: string, baseName: string, type: string, format: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string",
            "format": ""
        },
        {
            "name": "transportation",
            "baseName": "transportation",
            "type": "RequestTransportation",
            "format": ""
        },
        {
            "name": "travelTime",
            "baseName": "travel_time",
            "type": "number",
            "format": ""
        },
        {
            "name": "arrivalTime",
            "baseName": "arrival_time",
            "type": "Date",
            "format": "date-time"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "Array<RequestTimeFilterPostcodesProperty>",
            "format": ""
        },
        {
            "name": "range",
            "baseName": "range",
            "type": "RequestRangeFull",
            "format": ""
        }    ];

    static getAttributeTypeMap() {
        return RequestTimeFilterPostcodesArrivalSearch.attributeTypeMap;
    }
    
    public constructor() {
    }
}

