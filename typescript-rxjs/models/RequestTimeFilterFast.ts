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
    RequestLocation,
    RequestTimeFilterFastArrivalSearches,
} from './';

/**
 * @export
 * @interface RequestTimeFilterFast
 */
export interface RequestTimeFilterFast {
    /**
     * 
     * @type {Array<RequestLocation>}
     * @memberof RequestTimeFilterFast
     */
    locations: Array<RequestLocation>;
    /**
     * 
     * @type {RequestTimeFilterFastArrivalSearches}
     * @memberof RequestTimeFilterFast
     */
    arrivalSearches: RequestTimeFilterFastArrivalSearches;
}
