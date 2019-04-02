/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { RequestRangeFull } from './requestRangeFull';
import { RequestTimeFilterProperty } from './requestTimeFilterProperty';
import { RequestTransportation } from './requestTransportation';

export class RequestTimeFilterArrivalSearch {
    'id': string;
    'departureLocationIds': Array<string>;
    'arrivalLocationId': string;
    'transportation': RequestTransportation;
    'travelTime': number;
    'arrivalTime': Date;
    'properties': Array<RequestTimeFilterProperty>;
    'range'?: RequestRangeFull;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "departureLocationIds",
            "baseName": "departure_location_ids",
            "type": "Array<string>"
        },
        {
            "name": "arrivalLocationId",
            "baseName": "arrival_location_id",
            "type": "string"
        },
        {
            "name": "transportation",
            "baseName": "transportation",
            "type": "RequestTransportation"
        },
        {
            "name": "travelTime",
            "baseName": "travel_time",
            "type": "number"
        },
        {
            "name": "arrivalTime",
            "baseName": "arrival_time",
            "type": "Date"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "Array<RequestTimeFilterProperty>"
        },
        {
            "name": "range",
            "baseName": "range",
            "type": "RequestRangeFull"
        }    ];

    static getAttributeTypeMap() {
        return RequestTimeFilterArrivalSearch.attributeTypeMap;
    }
}

