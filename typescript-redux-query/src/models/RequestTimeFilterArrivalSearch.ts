// tslint:disable
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

import { exists, mapValues } from '../runtime';
import {
    RequestRangeFull,
    RequestRangeFullFromJSON,
    RequestRangeFullToJSON,
    RequestTimeFilterProperty,
    RequestTimeFilterPropertyFromJSON,
    RequestTimeFilterPropertyToJSON,
    RequestTransportation,
    RequestTransportationFromJSON,
    RequestTransportationToJSON,
} from './';

/**
 * 
 * @export
 * @interface RequestTimeFilterArrivalSearch
 */
export interface RequestTimeFilterArrivalSearch  {
    /**
     * 
     * @type {string}
     * @memberof RequestTimeFilterArrivalSearch
     */
    id: string;
    /**
     * 
     * @type {Array<string>}
     * @memberof RequestTimeFilterArrivalSearch
     */
    departureLocationIds: Array<string>;
    /**
     * 
     * @type {string}
     * @memberof RequestTimeFilterArrivalSearch
     */
    arrivalLocationId: string;
    /**
     * 
     * @type {RequestTransportation}
     * @memberof RequestTimeFilterArrivalSearch
     */
    transportation: RequestTransportation;
    /**
     * 
     * @type {number}
     * @memberof RequestTimeFilterArrivalSearch
     */
    travelTime: number;
    /**
     * 
     * @type {Date}
     * @memberof RequestTimeFilterArrivalSearch
     */
    arrivalTime: Date;
    /**
     * 
     * @type {Array<RequestTimeFilterProperty>}
     * @memberof RequestTimeFilterArrivalSearch
     */
    properties: Array<RequestTimeFilterProperty>;
    /**
     * 
     * @type {RequestRangeFull}
     * @memberof RequestTimeFilterArrivalSearch
     */
    range?: RequestRangeFull;
}

export function RequestTimeFilterArrivalSearchFromJSON(json: any): RequestTimeFilterArrivalSearch {
    return {
        'id': json['id'],
        'departureLocationIds': json['departure_location_ids'],
        'arrivalLocationId': json['arrival_location_id'],
        'transportation': RequestTransportationFromJSON(json['transportation']),
        'travelTime': json['travel_time'],
        'arrivalTime': new Date(json['arrival_time']),
        'properties': (json['properties'] as Array<any>).map(RequestTimeFilterPropertyFromJSON),
        'range': !exists(json, 'range') ? undefined : RequestRangeFullFromJSON(json['range']),
    };
}

export function RequestTimeFilterArrivalSearchToJSON(value?: RequestTimeFilterArrivalSearch): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'id': value.id,
        'departure_location_ids': value.departureLocationIds,
        'arrival_location_id': value.arrivalLocationId,
        'transportation': RequestTransportationToJSON(value.transportation),
        'travel_time': value.travelTime,
        'arrival_time': value.arrivalTime.toISOString(),
        'properties': (value.properties as Array<any>).map(RequestTimeFilterPropertyToJSON),
        'range': RequestRangeFullToJSON(value.range),
    };
}

