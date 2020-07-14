/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct ResponseGeocodingGeoJsonFeature {
    #[serde(rename = "type")]
    pub _type: String,
    #[serde(rename = "geometry")]
    pub geometry: crate::models::ResponseGeocodingGeometry,
    #[serde(rename = "properties")]
    pub properties: crate::models::ResponseGeocodingProperties,
}

impl ResponseGeocodingGeoJsonFeature {
    pub fn new(_type: String, geometry: crate::models::ResponseGeocodingGeometry, properties: crate::models::ResponseGeocodingProperties) -> ResponseGeocodingGeoJsonFeature {
        ResponseGeocodingGeoJsonFeature {
            _type,
            geometry,
            properties,
        }
    }
}


