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
    ResponseFareTicket,
    ResponseFaresBreakdownItem,
} from './';

/**
 * @export
 * @interface ResponseFares
 */
export interface ResponseFares {
    /**
     * @type {Array<ResponseFaresBreakdownItem>}
     * @memberof ResponseFares
     */
    breakdown: Array<ResponseFaresBreakdownItem>;
    /**
     * @type {Array<ResponseFareTicket>}
     * @memberof ResponseFares
     */
    tickets_total: Array<ResponseFareTicket>;
}
