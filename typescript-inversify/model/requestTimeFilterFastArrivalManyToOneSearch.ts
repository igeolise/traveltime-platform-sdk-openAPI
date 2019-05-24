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
import { RequestArrivalTimePeriod } from './requestArrivalTimePeriod';
import { RequestTimeFilterFastProperty } from './requestTimeFilterFastProperty';
import { RequestTransportationFast } from './requestTransportationFast';


export interface RequestTimeFilterFastArrivalManyToOneSearch { 
    id: string;
    arrivalLocationId: string;
    departureLocationIds: Array<string>;
    transportation: RequestTransportationFast;
    travelTime: number;
    arrivalTimePeriod: RequestArrivalTimePeriod;
    properties: Array<RequestTimeFilterFastProperty>;
}
