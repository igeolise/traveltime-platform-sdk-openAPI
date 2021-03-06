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
pub struct ResponseGeocodingProperties {
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "label")]
    pub label: String,
    #[serde(rename = "score", skip_serializing_if = "Option::is_none")]
    pub score: Option<f64>,
    #[serde(rename = "house_number", skip_serializing_if = "Option::is_none")]
    pub house_number: Option<String>,
    #[serde(rename = "street", skip_serializing_if = "Option::is_none")]
    pub street: Option<String>,
    #[serde(rename = "region", skip_serializing_if = "Option::is_none")]
    pub region: Option<String>,
    #[serde(rename = "region_code", skip_serializing_if = "Option::is_none")]
    pub region_code: Option<String>,
    #[serde(rename = "neighbourhood", skip_serializing_if = "Option::is_none")]
    pub neighbourhood: Option<String>,
    #[serde(rename = "county", skip_serializing_if = "Option::is_none")]
    pub county: Option<String>,
    #[serde(rename = "macroregion", skip_serializing_if = "Option::is_none")]
    pub macroregion: Option<String>,
    #[serde(rename = "city", skip_serializing_if = "Option::is_none")]
    pub city: Option<String>,
    #[serde(rename = "country", skip_serializing_if = "Option::is_none")]
    pub country: Option<String>,
    #[serde(rename = "country_code", skip_serializing_if = "Option::is_none")]
    pub country_code: Option<String>,
    #[serde(rename = "continent", skip_serializing_if = "Option::is_none")]
    pub continent: Option<String>,
    #[serde(rename = "postcode", skip_serializing_if = "Option::is_none")]
    pub postcode: Option<String>,
    #[serde(rename = "features", skip_serializing_if = "Option::is_none")]
    pub features: Option<crate::models::ResponseMapInfoFeatures>,
}

impl ResponseGeocodingProperties {
    pub fn new(name: String, label: String) -> ResponseGeocodingProperties {
        ResponseGeocodingProperties {
            name,
            label,
            score: None,
            house_number: None,
            street: None,
            region: None,
            region_code: None,
            neighbourhood: None,
            county: None,
            macroregion: None,
            city: None,
            country: None,
            country_code: None,
            continent: None,
            postcode: None,
            features: None,
        }
    }
}


