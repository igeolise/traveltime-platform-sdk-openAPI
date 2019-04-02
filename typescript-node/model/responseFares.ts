/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import { ResponseFareTicket } from './responseFareTicket';
import { ResponseFaresBreakdownItem } from './responseFaresBreakdownItem';

export class ResponseFares {
    'breakdown': Array<ResponseFaresBreakdownItem>;
    'ticketsTotal': Array<ResponseFareTicket>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "breakdown",
            "baseName": "breakdown",
            "type": "Array<ResponseFaresBreakdownItem>"
        },
        {
            "name": "ticketsTotal",
            "baseName": "tickets_total",
            "type": "Array<ResponseFareTicket>"
        }    ];

    static getAttributeTypeMap() {
        return ResponseFares.attributeTypeMap;
    }
}

