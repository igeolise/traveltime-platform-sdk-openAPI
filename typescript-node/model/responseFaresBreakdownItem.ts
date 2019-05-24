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

export class ResponseFaresBreakdownItem {
    'modes': Array<ResponseTransportationMode>;
    'routePartIds': Array<number>;
    'tickets': Array<ResponseFareTicket>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "modes",
            "baseName": "modes",
            "type": "Array<ResponseTransportationMode>"
        },
        {
            "name": "routePartIds",
            "baseName": "route_part_ids",
            "type": "Array<number>"
        },
        {
            "name": "tickets",
            "baseName": "tickets",
            "type": "Array<ResponseFareTicket>"
        }    ];

    static getAttributeTypeMap() {
        return ResponseFaresBreakdownItem.attributeTypeMap;
    }
}

