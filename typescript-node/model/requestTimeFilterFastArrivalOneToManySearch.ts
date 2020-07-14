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
import { RequestArrivalTimePeriod } from './requestArrivalTimePeriod';
import { RequestTimeFilterFastProperty } from './requestTimeFilterFastProperty';
import { RequestTransportationFast } from './requestTransportationFast';

export class RequestTimeFilterFastArrivalOneToManySearch {
    'id': string;
    'departureLocationId': string;
    'arrivalLocationIds': Array<string>;
    'transportation': RequestTransportationFast;
    'travelTime': number;
    'arrivalTimePeriod': RequestArrivalTimePeriod;
    'properties': Array<RequestTimeFilterFastProperty>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "id",
            "baseName": "id",
            "type": "string"
        },
        {
            "name": "departureLocationId",
            "baseName": "departure_location_id",
            "type": "string"
        },
        {
            "name": "arrivalLocationIds",
            "baseName": "arrival_location_ids",
            "type": "Array<string>"
        },
        {
            "name": "transportation",
            "baseName": "transportation",
            "type": "RequestTransportationFast"
        },
        {
            "name": "travelTime",
            "baseName": "travel_time",
            "type": "number"
        },
        {
            "name": "arrivalTimePeriod",
            "baseName": "arrival_time_period",
            "type": "RequestArrivalTimePeriod"
        },
        {
            "name": "properties",
            "baseName": "properties",
            "type": "Array<RequestTimeFilterFastProperty>"
        }    ];

    static getAttributeTypeMap() {
        return RequestTimeFilterFastArrivalOneToManySearch.attributeTypeMap;
    }
}

