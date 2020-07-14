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
import { RequestArrivalTimePeriod } from './requestArrivalTimePeriod';
import { RequestTimeFilterFastProperty } from './requestTimeFilterFastProperty';
import { RequestTransportationFast } from './requestTransportationFast';


export interface RequestTimeFilterFastArrivalOneToManySearch { 
    id: string;
    departure_location_id: string;
    arrival_location_ids: Array<string>;
    transportation: RequestTransportationFast;
    travel_time: number;
    arrival_time_period: RequestArrivalTimePeriod;
    properties: Array<RequestTimeFilterFastProperty>;
}
