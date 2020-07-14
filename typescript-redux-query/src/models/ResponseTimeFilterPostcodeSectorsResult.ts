// tslint:disable
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
    ResponseTimeFilterPostcodeSector,
    ResponseTimeFilterPostcodeSectorFromJSON,
    ResponseTimeFilterPostcodeSectorToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseTimeFilterPostcodeSectorsResult
 */
export interface ResponseTimeFilterPostcodeSectorsResult  {
    /**
     * 
     * @type {string}
     * @memberof ResponseTimeFilterPostcodeSectorsResult
     */
    searchId: string;
    /**
     * 
     * @type {Array<ResponseTimeFilterPostcodeSector>}
     * @memberof ResponseTimeFilterPostcodeSectorsResult
     */
    sectors: Array<ResponseTimeFilterPostcodeSector>;
}

export function ResponseTimeFilterPostcodeSectorsResultFromJSON(json: any): ResponseTimeFilterPostcodeSectorsResult {
    return {
        'searchId': json['search_id'],
        'sectors': (json['sectors'] as Array<any>).map(ResponseTimeFilterPostcodeSectorFromJSON),
    };
}

export function ResponseTimeFilterPostcodeSectorsResultToJSON(value?: ResponseTimeFilterPostcodeSectorsResult): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'search_id': value.searchId,
        'sectors': (value.sectors as Array<any>).map(ResponseTimeFilterPostcodeSectorToJSON),
    };
}


