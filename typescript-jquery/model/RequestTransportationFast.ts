/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

import * as models from './models';

export interface RequestTransportationFast {
    type: RequestTransportationFast.TypeEnum;

}
export namespace RequestTransportationFast {
    export enum TypeEnum {
        PublicTransport = <any> 'public_transport',
        Driving = <any> 'driving',
        DrivingpublicTransport = <any> 'driving+public_transport'
    }
}
