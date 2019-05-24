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

import {
    RequestRangeFull,
    RequestTimeFilterPostcodesProperty,
    RequestTransportation,
} from './';

/**
 * @export
 * @interface RequestTimeFilterPostcodesDepartureSearch
 */
export interface RequestTimeFilterPostcodesDepartureSearch {
    /**
     * 
     * @type {string}
     * @memberof RequestTimeFilterPostcodesDepartureSearch
     */
    id: string;
    /**
     * 
     * @type {RequestTransportation}
     * @memberof RequestTimeFilterPostcodesDepartureSearch
     */
    transportation: RequestTransportation;
    /**
     * 
     * @type {number}
     * @memberof RequestTimeFilterPostcodesDepartureSearch
     */
    travelTime: number;
    /**
     * 
     * @type {Date}
     * @memberof RequestTimeFilterPostcodesDepartureSearch
     */
    departureTime: Date;
    /**
     * 
     * @type {Array<RequestTimeFilterPostcodesProperty>}
     * @memberof RequestTimeFilterPostcodesDepartureSearch
     */
    properties: Array<RequestTimeFilterPostcodesProperty>;
    /**
     * 
     * @type {RequestRangeFull}
     * @memberof RequestTimeFilterPostcodesDepartureSearch
     */
    range?: RequestRangeFull;
}