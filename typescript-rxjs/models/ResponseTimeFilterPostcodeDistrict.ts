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

import {
    ModelString,
    ResponseTimeFilterPostcodeDistrictProperties,
} from './';

/**
 * @export
 * @interface ResponseTimeFilterPostcodeDistrict
 */
export interface ResponseTimeFilterPostcodeDistrict {
    /**
     * @type {ModelString}
     * @memberof ResponseTimeFilterPostcodeDistrict
     */
    code: ModelString;
    /**
     * @type {ResponseTimeFilterPostcodeDistrictProperties}
     * @memberof ResponseTimeFilterPostcodeDistrict
     */
    properties: ResponseTimeFilterPostcodeDistrictProperties;
}
