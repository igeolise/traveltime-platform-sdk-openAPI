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
    RequestTimeFilterPostcodeDistrictsArrivalSearch,
    RequestTimeFilterPostcodeDistrictsDepartureSearch,
} from './';

/**
 * @export
 * @interface RequestTimeFilterPostcodeDistricts
 */
export interface RequestTimeFilterPostcodeDistricts {
    /**
     * @type {Array<RequestTimeFilterPostcodeDistrictsDepartureSearch>}
     * @memberof RequestTimeFilterPostcodeDistricts
     */
    departure_searches?: Array<RequestTimeFilterPostcodeDistrictsDepartureSearch>;
    /**
     * @type {Array<RequestTimeFilterPostcodeDistrictsArrivalSearch>}
     * @memberof RequestTimeFilterPostcodeDistricts
     */
    arrival_searches?: Array<RequestTimeFilterPostcodeDistrictsArrivalSearch>;
}
