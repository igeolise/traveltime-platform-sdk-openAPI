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

import {
    RequestArrivalTimePeriod,
    RequestTimeFilterFastProperty,
    RequestTransportationFast,
} from './';

/**
 * @export
 * @interface RequestTimeFilterFastArrivalOneToManySearch
 */
export interface RequestTimeFilterFastArrivalOneToManySearch {
    /**
     * @type {string}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    id: string;
    /**
     * @type {string}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    departure_location_id: string;
    /**
     * @type {Array<string>}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    arrival_location_ids: Array<string>;
    /**
     * @type {RequestTransportationFast}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    transportation: RequestTransportationFast;
    /**
     * @type {number}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    travel_time: number;
    /**
     * @type {RequestArrivalTimePeriod}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    arrival_time_period: RequestArrivalTimePeriod;
    /**
     * @type {Array<RequestTimeFilterFastProperty>}
     * @memberof RequestTimeFilterFastArrivalOneToManySearch
     */
    properties: Array<RequestTimeFilterFastProperty>;
}
