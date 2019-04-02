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


export interface RequestTransportation { 
    type: RequestTransportation.TypeEnum;
    ptChangeDelay?: number;
    walkingTime?: number;
    drivingTimeToStation?: number;
    parkingTime?: number;
    boardingTime?: number;
}
export namespace RequestTransportation {
    export type TypeEnum = 'cycling' | 'driving' | 'driving+train' | 'public_transport' | 'walking' | 'coach' | 'bus' | 'train' | 'ferry' | 'driving+ferry' | 'cycling+ferry';
    export const TypeEnum = {
        Cycling: 'cycling' as TypeEnum,
        Driving: 'driving' as TypeEnum,
        Drivingtrain: 'driving+train' as TypeEnum,
        PublicTransport: 'public_transport' as TypeEnum,
        Walking: 'walking' as TypeEnum,
        Coach: 'coach' as TypeEnum,
        Bus: 'bus' as TypeEnum,
        Train: 'train' as TypeEnum,
        Ferry: 'ferry' as TypeEnum,
        Drivingferry: 'driving+ferry' as TypeEnum,
        Cyclingferry: 'cycling+ferry' as TypeEnum
    };
}
