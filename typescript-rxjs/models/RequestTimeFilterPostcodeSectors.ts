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
    RequestTimeFilterPostcodeSectorsArrivalSearch,
    RequestTimeFilterPostcodeSectorsDepartureSearch,
} from './';

/**
 * @export
 * @interface RequestTimeFilterPostcodeSectors
 */
export interface RequestTimeFilterPostcodeSectors {
    /**
     * @type {Array<RequestTimeFilterPostcodeSectorsDepartureSearch>}
     * @memberof RequestTimeFilterPostcodeSectors
     */
    departure_searches?: Array<RequestTimeFilterPostcodeSectorsDepartureSearch>;
    /**
     * @type {Array<RequestTimeFilterPostcodeSectorsArrivalSearch>}
     * @memberof RequestTimeFilterPostcodeSectors
     */
    arrival_searches?: Array<RequestTimeFilterPostcodeSectorsArrivalSearch>;
}
