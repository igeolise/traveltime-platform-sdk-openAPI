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

import { RequestFile } from '../api';
import { RequestTimeFilterPostcodesArrivalSearch } from './requestTimeFilterPostcodesArrivalSearch';
import { RequestTimeFilterPostcodesDepartureSearch } from './requestTimeFilterPostcodesDepartureSearch';

export class RequestTimeFilterPostcodes {
    'departureSearches'?: Array<RequestTimeFilterPostcodesDepartureSearch>;
    'arrivalSearches'?: Array<RequestTimeFilterPostcodesArrivalSearch>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "departureSearches",
            "baseName": "departure_searches",
            "type": "Array<RequestTimeFilterPostcodesDepartureSearch>"
        },
        {
            "name": "arrivalSearches",
            "baseName": "arrival_searches",
            "type": "Array<RequestTimeFilterPostcodesArrivalSearch>"
        }    ];

    static getAttributeTypeMap() {
        return RequestTimeFilterPostcodes.attributeTypeMap;
    }
}

