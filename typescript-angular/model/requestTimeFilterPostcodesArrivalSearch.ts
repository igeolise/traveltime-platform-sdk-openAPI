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
import { RequestTransportation } from './requestTransportation';
import { RequestTimeFilterPostcodesProperty } from './requestTimeFilterPostcodesProperty';
import { RequestRangeFull } from './requestRangeFull';


export interface RequestTimeFilterPostcodesArrivalSearch { 
    id: string;
    transportation: RequestTransportation;
    travel_time: number;
    arrival_time: string;
    properties: Array<RequestTimeFilterPostcodesProperty>;
    range?: RequestRangeFull;
}

