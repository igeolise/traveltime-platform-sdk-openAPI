// tslint:disable
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

import { exists } from '../runtime';
import {
    RequestLocation,
    RequestLocationFromJSON,
    RequestLocationToJSON,
    RequestRoutesArrivalSearch,
    RequestRoutesArrivalSearchFromJSON,
    RequestRoutesArrivalSearchToJSON,
    RequestRoutesDepartureSearch,
    RequestRoutesDepartureSearchFromJSON,
    RequestRoutesDepartureSearchToJSON,
} from './';

/**
 * 
 * @export
 * @interface RequestRoutes
 */
export interface RequestRoutes {
    /**
     * 
     * @type {Array<RequestLocation>}
     * @memberof RequestRoutes
     */
    locations: Array<RequestLocation>;
    /**
     * 
     * @type {Array<RequestRoutesDepartureSearch>}
     * @memberof RequestRoutes
     */
    departureSearches?: Array<RequestRoutesDepartureSearch>;
    /**
     * 
     * @type {Array<RequestRoutesArrivalSearch>}
     * @memberof RequestRoutes
     */
    arrivalSearches?: Array<RequestRoutesArrivalSearch>;
}

export function RequestRoutesFromJSON(json: any): RequestRoutes {
    return {
        'locations': (json['locations'] as Array<any>).map(RequestLocationFromJSON),
        'departureSearches': !exists(json, 'departure_searches') ? undefined : (json['departure_searches'] as Array<any>).map(RequestRoutesDepartureSearchFromJSON),
        'arrivalSearches': !exists(json, 'arrival_searches') ? undefined : (json['arrival_searches'] as Array<any>).map(RequestRoutesArrivalSearchFromJSON),
    };
}

export function RequestRoutesToJSON(value?: RequestRoutes): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'locations': (value.locations as Array<any>).map(RequestLocationToJSON),
        'departure_searches': value.departureSearches === undefined ? undefined : (value.departureSearches as Array<any>).map(RequestRoutesDepartureSearchToJSON),
        'arrival_searches': value.arrivalSearches === undefined ? undefined : (value.arrivalSearches as Array<any>).map(RequestRoutesArrivalSearchToJSON),
    };
}

