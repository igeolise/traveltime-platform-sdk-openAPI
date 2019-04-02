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
import { RequestTimeFilterPostcodeDistrictsProperty } from './requestTimeFilterPostcodeDistrictsProperty';
import { RequestTransportation } from './requestTransportation';


export interface RequestTimeFilterPostcodeDistrictsArrivalSearch { 
    id: string;
    transportation: RequestTransportation;
    travelTime: number;
    arrivalTime: Date;
    reachablePostcodesThreshold: number;
    properties: Array<RequestTimeFilterPostcodeDistrictsProperty>;
    range?: RequestRangeFull;
}
