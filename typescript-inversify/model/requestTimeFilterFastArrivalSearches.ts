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
import { RequestTimeFilterFastArrivalManyToOneSearch } from './requestTimeFilterFastArrivalManyToOneSearch';
import { RequestTimeFilterFastArrivalOneToManySearch } from './requestTimeFilterFastArrivalOneToManySearch';


export interface RequestTimeFilterFastArrivalSearches { 
    many_to_one?: Array<RequestTimeFilterFastArrivalManyToOneSearch>;
    one_to_many?: Array<RequestTimeFilterFastArrivalOneToManySearch>;
}
