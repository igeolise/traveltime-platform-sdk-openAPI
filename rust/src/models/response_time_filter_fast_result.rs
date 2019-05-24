/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct ResponseTimeFilterFastResult {
    #[serde(rename = "search_id")]
    pub search_id: String,
    #[serde(rename = "locations")]
    pub locations: Vec<::models::ResponseTimeFilterFastLocation>,
    #[serde(rename = "unreachable")]
    pub unreachable: Vec<String>,
}

impl ResponseTimeFilterFastResult {
    pub fn new(search_id: String, locations: Vec<::models::ResponseTimeFilterFastLocation>, unreachable: Vec<String>) -> ResponseTimeFilterFastResult {
        ResponseTimeFilterFastResult {
            search_id: search_id,
            locations: locations,
            unreachable: unreachable,
        }
    }
}
