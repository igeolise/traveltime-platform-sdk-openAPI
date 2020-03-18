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
import { ResponseFareTicket } from './responseFareTicket';
import { ResponseTransportationMode } from './responseTransportationMode';


export interface ResponseFaresBreakdownItem { 
    modes: Array<ResponseTransportationMode>;
    route_part_ids: Array<number>;
    tickets: Array<ResponseFareTicket>;
}
