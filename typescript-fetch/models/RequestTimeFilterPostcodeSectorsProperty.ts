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

/**
 * 
 * @export
 * @enum {string}
 */
export enum RequestTimeFilterPostcodeSectorsProperty {
    TravelTimeReachable = 'travel_time_reachable',
    TravelTimeAll = 'travel_time_all',
    Coverage = 'coverage'
}

export function RequestTimeFilterPostcodeSectorsPropertyFromJSON(json: any): RequestTimeFilterPostcodeSectorsProperty {
    return RequestTimeFilterPostcodeSectorsPropertyFromJSONTyped(json, false);
}

export function RequestTimeFilterPostcodeSectorsPropertyFromJSONTyped(json: any, ignoreDiscriminator: boolean): RequestTimeFilterPostcodeSectorsProperty {
    return json as RequestTimeFilterPostcodeSectorsProperty;
}

export function RequestTimeFilterPostcodeSectorsPropertyToJSON(value?: RequestTimeFilterPostcodeSectorsProperty | null): any {
    return value as any;
}

