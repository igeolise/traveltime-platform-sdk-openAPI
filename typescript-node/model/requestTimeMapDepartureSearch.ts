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
import { Coords } from './coords';
import { RequestRangeNoMaxResults } from './requestRangeNoMaxResults';
import { RequestTimeMapProperty } from './requestTimeMapProperty';
import { RequestTransportation } from './requestTransportation';

export class RequestTimeMapDepartureSearch {
    'id': string;
    'coords': Coords;
    'transportation': RequestTransportation;
    'travelTime': number;
    'departureTime': Date;
    'properties'?: Array<RequestTimeMapProperty>;
    'range'?: RequestRangeNoMaxResults;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "coords",
            "baseName": "coords",
            "type": "Coords"
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
            "name": "departureTime",
            "baseName": "departure_time",
            "type": "Date"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "Array<RequestTimeMapProperty>"
        },
        {
            "name": "range",
            "baseName": "range",
            "type": "RequestRangeNoMaxResults"
        }    ];

    static getAttributeTypeMap() {
        return RequestTimeMapDepartureSearch.attributeTypeMap;
    }
}

