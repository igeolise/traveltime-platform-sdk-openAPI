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

/**
 * 
 * @export
 * @enum {string}
 */
export enum RequestArrivalTimePeriod {
    WeekdayMorning = 'weekday_morning'
}

export function RequestArrivalTimePeriodFromJSON(json: any): RequestArrivalTimePeriod {
    return json as RequestArrivalTimePeriod;
}

export function RequestArrivalTimePeriodToJSON(value?: RequestArrivalTimePeriod): any {
    return value as any;
}

