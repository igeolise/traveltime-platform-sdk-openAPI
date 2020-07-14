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

import { RequestFile } from '../api';

export class RequestTransportationFast {
    'type': RequestTransportationFast.TypeEnum;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "type",
            "baseName": "type",
            "type": "RequestTransportationFast.TypeEnum"
        }    ];

    static getAttributeTypeMap() {
        return RequestTransportationFast.attributeTypeMap;
    }
}

export namespace RequestTransportationFast {
    export enum TypeEnum {
        PublicTransport = <any> 'public_transport',
        Driving = <any> 'driving',
        DrivingpublicTransport = <any> 'driving+public_transport'
    }
}
