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

import { ResponseMapInfoFeatures } from './responseMapInfoFeatures';

export class ResponseGeocodingProperties {
    'name': string;
    'label': string;
    'score'?: number;
    'houseNumber'?: string;
    'street'?: string;
    'region'?: string;
    'regionCode'?: string;
    'neighbourhood'?: string;
    'county'?: string;
    'macroregion'?: string;
    'city'?: string;
    'country'?: string;
    'countryCode'?: string;
    'continent'?: string;
    'postcode'?: string;
    'features'?: ResponseMapInfoFeatures;

    static discriminator: string | undefined = undefined;

    static attributeTypeMap: Array<{name: string, baseName: string, type: string}> = [
        {
            "name": "name",
            "baseName": "name",
            "type": "string"
        },
        {
            "name": "label",
            "baseName": "label",
            "type": "string"
        },
        {
            "name": "score",
            "baseName": "score",
            "type": "number"
        },
        {
            "name": "houseNumber",
            "baseName": "house_number",
            "type": "string"
        },
        {
            "name": "street",
            "baseName": "street",
            "type": "string"
        },
        {
            "name": "region",
            "baseName": "region",
            "type": "string"
        },
        {
            "name": "regionCode",
            "baseName": "region_code",
            "type": "string"
        },
        {
            "name": "neighbourhood",
            "baseName": "neighbourhood",
            "type": "string"
        },
        {
            "name": "county",
            "baseName": "county",
            "type": "string"
        },
        {
            "name": "macroregion",
            "baseName": "macroregion",
            "type": "string"
        },
        {
            "name": "city",
            "baseName": "city",
            "type": "string"
        },
        {
            "name": "country",
            "baseName": "country",
            "type": "string"
        },
        {
            "name": "countryCode",
            "baseName": "country_code",
            "type": "string"
        },
        {
            "name": "continent",
            "baseName": "continent",
            "type": "string"
        },
        {
            "name": "postcode",
            "baseName": "postcode",
            "type": "string"
        },
        {
            "name": "features",
            "baseName": "features",
            "type": "ResponseMapInfoFeatures"
        }    ];

    static getAttributeTypeMap() {
        return ResponseGeocodingProperties.attributeTypeMap;
    }
}

