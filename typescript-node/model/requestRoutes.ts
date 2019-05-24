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

import { RequestLocation } from './requestLocation';
import { RequestRoutesArrivalSearch } from './requestRoutesArrivalSearch';
import { RequestRoutesDepartureSearch } from './requestRoutesDepartureSearch';

export class RequestRoutes {
    'locations': Array<RequestLocation>;
    'departureSearches'?: Array<RequestRoutesDepartureSearch>;
    'arrivalSearches'?: Array<RequestRoutesArrivalSearch>;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "locations",
            "baseName": "locations",
            "type": "Array<RequestLocation>"
        },
        {
            "name": "departureSearches",
            "baseName": "departure_searches",
            "type": "Array<RequestRoutesDepartureSearch>"
        },
        {
            "name": "arrivalSearches",
            "baseName": "arrival_searches",
            "type": "Array<RequestRoutesArrivalSearch>"
        }    ];

    static getAttributeTypeMap() {
        return RequestRoutes.attributeTypeMap;
    }
}

