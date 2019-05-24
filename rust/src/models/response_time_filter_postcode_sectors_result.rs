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
pub struct ResponseTimeFilterPostcodeSectorsResult {
    #[serde(rename = "search_id")]
    pub search_id: String,
    #[serde(rename = "sectors")]
    pub sectors: Vec<::models::ResponseTimeFilterPostcodeSector>,
}

impl ResponseTimeFilterPostcodeSectorsResult {
    pub fn new(search_id: String, sectors: Vec<::models::ResponseTimeFilterPostcodeSector>) -> ResponseTimeFilterPostcodeSectorsResult {
        ResponseTimeFilterPostcodeSectorsResult {
            search_id: search_id,
            sectors: sectors,
        }
    }
}
