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
    RequestTimeMapArrivalSearch,
    RequestTimeMapArrivalSearchFromJSON,
    RequestTimeMapArrivalSearchToJSON,
    RequestTimeMapDepartureSearch,
    RequestTimeMapDepartureSearchFromJSON,
    RequestTimeMapDepartureSearchToJSON,
    RequestUnionOnIntersection,
    RequestUnionOnIntersectionFromJSON,
    RequestUnionOnIntersectionToJSON,
} from './';

/**
 * 
 * @export
 * @interface RequestTimeMap
 */
export interface RequestTimeMap  {
    /**
     * 
     * @type {Array<RequestTimeMapDepartureSearch>}
     * @memberof RequestTimeMap
     */
    departureSearches?: Array<RequestTimeMapDepartureSearch>;
    /**
     * 
     * @type {Array<RequestTimeMapArrivalSearch>}
     * @memberof RequestTimeMap
     */
    arrivalSearches?: Array<RequestTimeMapArrivalSearch>;
    /**
     * 
     * @type {Array<RequestUnionOnIntersection>}
     * @memberof RequestTimeMap
     */
    unions?: Array<RequestUnionOnIntersection>;
    /**
     * 
     * @type {Array<RequestUnionOnIntersection>}
     * @memberof RequestTimeMap
     */
    intersections?: Array<RequestUnionOnIntersection>;
}

export function RequestTimeMapFromJSON(json: any): RequestTimeMap {
    return {
        'departureSearches': !exists(json, 'departure_searches') ? undefined : (json['departure_searches'] as Array<any>).map(RequestTimeMapDepartureSearchFromJSON),
        'arrivalSearches': !exists(json, 'arrival_searches') ? undefined : (json['arrival_searches'] as Array<any>).map(RequestTimeMapArrivalSearchFromJSON),
        'unions': !exists(json, 'unions') ? undefined : (json['unions'] as Array<any>).map(RequestUnionOnIntersectionFromJSON),
        'intersections': !exists(json, 'intersections') ? undefined : (json['intersections'] as Array<any>).map(RequestUnionOnIntersectionFromJSON),
    };
}

export function RequestTimeMapToJSON(value?: RequestTimeMap): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'departure_searches': value.departureSearches === undefined ? undefined : (value.departureSearches as Array<any>).map(RequestTimeMapDepartureSearchToJSON),
        'arrival_searches': value.arrivalSearches === undefined ? undefined : (value.arrivalSearches as Array<any>).map(RequestTimeMapArrivalSearchToJSON),
        'unions': value.unions === undefined ? undefined : (value.unions as Array<any>).map(RequestUnionOnIntersectionToJSON),
        'intersections': value.intersections === undefined ? undefined : (value.intersections as Array<any>).map(RequestUnionOnIntersectionToJSON),
    };
}


