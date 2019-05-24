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
import { RequestRangeFull } from './requestRangeFull';
import { RequestTimeFilterProperty } from './requestTimeFilterProperty';
import { RequestTransportation } from './requestTransportation';


export interface RequestTimeFilterArrivalSearch { 
    id: string;
    departureLocationIds: Array<string>;
    arrivalLocationId: string;
    transportation: RequestTransportation;
    travelTime: number;
    arrivalTime: Date;
    properties: Array<RequestTimeFilterProperty>;
    range?: RequestRangeFull;
}
