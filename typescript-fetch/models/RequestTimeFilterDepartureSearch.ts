/* tslint:disable */
/* eslint-disable */
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
    RequestRangeFullFromJSONTyped,
    RequestRangeFullToJSON,
    RequestTimeFilterProperty,
    RequestTimeFilterPropertyFromJSON,
    RequestTimeFilterPropertyFromJSONTyped,
    RequestTimeFilterPropertyToJSON,
    RequestTransportation,
    RequestTransportationFromJSON,
    RequestTransportationFromJSONTyped,
    RequestTransportationToJSON,
} from './';

/**
 * 
 * @export
 * @interface RequestTimeFilterDepartureSearch
 */
export interface RequestTimeFilterDepartureSearch {
    /**
     * 
     * @type {string}
     * @memberof RequestTimeFilterDepartureSearch
     */
    id: string;
    /**
     * 
     * @type {string}
     * @memberof RequestTimeFilterDepartureSearch
     */
    departureLocationId: string;
    /**
     * 
     * @type {Array<string>}
     * @memberof RequestTimeFilterDepartureSearch
     */
    arrivalLocationIds: Array<string>;
    /**
     * 
     * @type {RequestTransportation}
     * @memberof RequestTimeFilterDepartureSearch
     */
    transportation: RequestTransportation;
    /**
     * 
     * @type {number}
     * @memberof RequestTimeFilterDepartureSearch
     */
    travelTime: number;
    /**
     * 
     * @type {Date}
     * @memberof RequestTimeFilterDepartureSearch
     */
    departureTime: Date;
    /**
     * 
     * @type {Array<RequestTimeFilterProperty>}
     * @memberof RequestTimeFilterDepartureSearch
     */
    properties: Array<RequestTimeFilterProperty>;
    /**
     * 
     * @type {RequestRangeFull}
     * @memberof RequestTimeFilterDepartureSearch
     */
    range?: RequestRangeFull;
}

export function RequestTimeFilterDepartureSearchFromJSON(json: any): RequestTimeFilterDepartureSearch {
    return RequestTimeFilterDepartureSearchFromJSONTyped(json, false);
}

export function RequestTimeFilterDepartureSearchFromJSONTyped(json: any, ignoreDiscriminator: boolean): RequestTimeFilterDepartureSearch {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'id': json['id'],
        'departureLocationId': json['departure_location_id'],
        'arrivalLocationIds': json['arrival_location_ids'],
        'transportation': RequestTransportationFromJSON(json['transportation']),
        'travelTime': json['travel_time'],
        'departureTime': (new Date(json['departure_time'])),
        'properties': ((json['properties'] as Array<any>).map(RequestTimeFilterPropertyFromJSON)),
        'range': !exists(json, 'range') ? undefined : RequestRangeFullFromJSON(json['range']),
    };
}

export function RequestTimeFilterDepartureSearchToJSON(value?: RequestTimeFilterDepartureSearch | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'id': value.id,
        'departure_location_id': value.departureLocationId,
        'arrival_location_ids': value.arrivalLocationIds,
        'transportation': RequestTransportationToJSON(value.transportation),
        'travel_time': value.travelTime,
        'departure_time': (value.departureTime.toISOString()),
        'properties': ((value.properties as Array<any>).map(RequestTimeFilterPropertyToJSON)),
        'range': RequestRangeFullToJSON(value.range),
    };
}


