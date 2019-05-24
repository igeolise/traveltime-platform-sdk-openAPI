// tslint:disable
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

import { exists } from '../runtime';
import {
    ResponseTimeFilterPostcode,
    ResponseTimeFilterPostcodeFromJSON,
    ResponseTimeFilterPostcodeToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeFilterPostcodesResult
 */
export interface ResponseTimeFilterPostcodesResult {
    /**
     * 
     * @type {string}
     * @memberof ResponseTimeFilterPostcodesResult
     */
    searchId: string;
    /**
     * 
     * @type {Array<ResponseTimeFilterPostcode>}
     * @memberof ResponseTimeFilterPostcodesResult
     */
    postcodes: Array<ResponseTimeFilterPostcode>;
}

export function ResponseTimeFilterPostcodesResultFromJSON(json: any): ResponseTimeFilterPostcodesResult {
    return {
        'searchId': json['search_id'],
        'postcodes': (json['postcodes'] as Array<any>).map(ResponseTimeFilterPostcodeFromJSON),
    };
}

export function ResponseTimeFilterPostcodesResultToJSON(value?: ResponseTimeFilterPostcodesResult): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'search_id': value.searchId,
        'postcodes': (value.postcodes as Array<any>).map(ResponseTimeFilterPostcodeToJSON),
    };
}


