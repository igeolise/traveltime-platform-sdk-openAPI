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

import * as models from './models';

export interface RequestTimeFilterArrivalSearch {
    "id": string;
    "departureLocationIds": Array<string>;
    "arrivalLocationId": string;
    "transportation": models.RequestTransportation;
    "travelTime": number;
    "arrivalTime": Date;
    "properties": Array<models.RequestTimeFilterProperty>;
    "range"?: models.RequestRangeFull;
}

