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
pub struct ResponseShape {
    #[serde(rename = "shell")]
    pub shell: Vec<::models::Coords>,
    #[serde(rename = "holes")]
    pub holes: Vec<Vec<::models::Coords>>,
}

impl ResponseShape {
    pub fn new(shell: Vec<::models::Coords>, holes: Vec<Vec<::models::Coords>>) -> ResponseShape {
        ResponseShape {
            shell: shell,
            holes: holes,
        }
    }
}
