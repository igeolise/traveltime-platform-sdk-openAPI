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
    RequestTimeFilterFastArrivalManyToOneSearch,
    RequestTimeFilterFastArrivalOneToManySearch,
} from './';

/**
 * @export
 * @interface RequestTimeFilterFastArrivalSearches
 */
export interface RequestTimeFilterFastArrivalSearches {
    /**
     * 
     * @type {Array<RequestTimeFilterFastArrivalManyToOneSearch>}
     * @memberof RequestTimeFilterFastArrivalSearches
     */
    manyToOne?: Array<RequestTimeFilterFastArrivalManyToOneSearch>;
    /**
     * 
     * @type {Array<RequestTimeFilterFastArrivalOneToManySearch>}
     * @memberof RequestTimeFilterFastArrivalSearches
     */
    oneToMany?: Array<RequestTimeFilterFastArrivalOneToManySearch>;
}
