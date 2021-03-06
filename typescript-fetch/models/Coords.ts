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
/**
 * 
 * @export
 * @interface Coords
 */
export interface Coords {
    /**
     * 
     * @type {number}
     * @memberof Coords
     */
    lat: number;
    /**
     * 
     * @type {number}
     * @memberof Coords
     */
    lng: number;
}

export function CoordsFromJSON(json: any): Coords {
    return CoordsFromJSONTyped(json, false);
}

export function CoordsFromJSONTyped(json: any, ignoreDiscriminator: boolean): Coords {
    if ((json === undefined) || (json === null)) {
        return json;
    }
    return {
        
        'lat': json['lat'],
        'lng': json['lng'],
    };
}

export function CoordsToJSON(value?: Coords | null): any {
    if (value === undefined) {
        return undefined;
    }
    if (value === null) {
        return null;
    }
    return {
        
        'lat': value.lat,
        'lng': value.lng,
    };
}


