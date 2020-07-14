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
    ResponseMapInfoMap,
    ResponseMapInfoMapFromJSON,
    ResponseMapInfoMapToJSON,
} from './';

/**
 * 
 * @export
 * @interface ResponseMapInfo
 */
export interface ResponseMapInfo  {
    /**
     * 
     * @type {Array<ResponseMapInfoMap>}
     * @memberof ResponseMapInfo
     */
    maps: Array<ResponseMapInfoMap>;
}

export function ResponseMapInfoFromJSON(json: any): ResponseMapInfo {
    return {
        'maps': (json['maps'] as Array<any>).map(ResponseMapInfoMapFromJSON),
    };
}

export function ResponseMapInfoToJSON(value?: ResponseMapInfo): any {
    if (value === undefined) {
        return undefined;
    }
    return {
        'maps': (value.maps as Array<any>).map(ResponseMapInfoMapToJSON),
    };
}


