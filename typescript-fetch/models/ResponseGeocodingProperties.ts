/* tslint:disable */
/* eslint-disable */
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

import { exists, mapValues } from '../runtime';
import {
    ResponseMapInfoFeatures,
    ResponseMapInfoFeaturesFromJSON,
    ResponseMapInfoFeaturesFromJSONTyped,
    ResponseMapInfoFeaturesToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseGeocodingProperties
 */
export interface ResponseGeocodingProperties {
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    name: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    label: string;
    /**
     * 
     * @type {number}
     * @memberof ResponseGeocodingProperties
     */
    score?: number;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    houseNumber?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    street?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    region?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    regionCode?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    neighbourhood?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    county?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    macroregion?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    city?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    country?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    countryCode?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    continent?: string;
    /**
     * 
     * @type {string}
     * @memberof ResponseGeocodingProperties
     */
    postcode?: string;
    /**
     * 
     * @type {ResponseMapInfoFeatures}
     * @memberof ResponseGeocodingProperties
     */
    features?: ResponseMapInfoFeatures;
}

export function ResponseGeocodingPropertiesFromJSON(json: any): ResponseGeocodingProperties {
    return ResponseGeocodingPropertiesFromJSONTyped(json, false);
}

export function ResponseGeocodingPropertiesFromJSONTyped(json: any, ignoreDiscriminator: boolean): ResponseGeocodingProperties {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'name': json['name'],
        'label': json['label'],
        'score': !exists(json, 'score') ? undefined : json['score'],
        'houseNumber': !exists(json, 'house_number') ? undefined : json['house_number'],
        'street': !exists(json, 'street') ? undefined : json['street'],
        'region': !exists(json, 'region') ? undefined : json['region'],
        'regionCode': !exists(json, 'region_code') ? undefined : json['region_code'],
        'neighbourhood': !exists(json, 'neighbourhood') ? undefined : json['neighbourhood'],
        'county': !exists(json, 'county') ? undefined : json['county'],
        'macroregion': !exists(json, 'macroregion') ? undefined : json['macroregion'],
        'city': !exists(json, 'city') ? undefined : json['city'],
        'country': !exists(json, 'country') ? undefined : json['country'],
        'countryCode': !exists(json, 'country_code') ? undefined : json['country_code'],
        'continent': !exists(json, 'continent') ? undefined : json['continent'],
        'postcode': !exists(json, 'postcode') ? undefined : json['postcode'],
        'features': !exists(json, 'features') ? undefined : ResponseMapInfoFeaturesFromJSON(json['features']),
    };
}

export function ResponseGeocodingPropertiesToJSON(value?: ResponseGeocodingProperties | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'name': value.name,
        'label': value.label,
        'score': value.score,
        'house_number': value.houseNumber,
        'street': value.street,
        'region': value.region,
        'region_code': value.regionCode,
        'neighbourhood': value.neighbourhood,
        'county': value.county,
        'macroregion': value.macroregion,
        'city': value.city,
        'country': value.country,
        'country_code': value.countryCode,
        'continent': value.continent,
        'postcode': value.postcode,
        'features': ResponseMapInfoFeaturesToJSON(value.features),
    };
}


