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
import { ResponseMapInfoFeatures } from './responseMapInfoFeatures';


export interface ResponseGeocodingProperties { 
    name: string;
    label: string;
    score?: number;
    house_number?: string;
    street?: string;
    region?: string;
    region_code?: string;
    neighbourhood?: string;
    county?: string;
    macroregion?: string;
    city?: string;
    country?: string;
    country_code?: string;
    continent?: string;
    postcode?: string;
    features?: ResponseMapInfoFeatures;
}
