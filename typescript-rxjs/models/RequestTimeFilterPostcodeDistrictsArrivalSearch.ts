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
    RequestRangeFull,
    RequestTimeFilterPostcodeDistrictsProperty,
    RequestTransportation,
} from './';

/**
 * @export
 * @interface RequestTimeFilterPostcodeDistrictsArrivalSearch
 */
export interface RequestTimeFilterPostcodeDistrictsArrivalSearch {
    /**
     * @type {string}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    id: string;
    /**
     * @type {RequestTransportation}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    transportation: RequestTransportation;
    /**
     * @type {number}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    travel_time: number;
    /**
     * @type {string}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    arrival_time: string;
    /**
     * @type {number}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    reachable_postcodes_threshold: number;
    /**
     * @type {Array<RequestTimeFilterPostcodeDistrictsProperty>}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    properties: Array<RequestTimeFilterPostcodeDistrictsProperty>;
    /**
     * @type {RequestRangeFull}
     * @memberof RequestTimeFilterPostcodeDistrictsArrivalSearch
     */
    range?: RequestRangeFull;
}
