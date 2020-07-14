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
import { RequestLocation } from './requestLocation';
import { RequestTimeFilterArrivalSearch } from './requestTimeFilterArrivalSearch';
import { RequestTimeFilterDepartureSearch } from './requestTimeFilterDepartureSearch';


export interface RequestTimeFilter { 
    locations: Array<RequestLocation>;
    departure_searches?: Array<RequestTimeFilterDepartureSearch>;
    arrival_searches?: Array<RequestTimeFilterArrivalSearch>;
}
