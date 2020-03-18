/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */




#[derive(Clone, Debug, PartialEq, Serialize, Deserialize)]
pub struct RequestSupportedLocations {
    #[serde(rename = "locations")]
    pub locations: Vec<crate::models::RequestLocation>,
}

impl RequestSupportedLocations {
    pub fn new(locations: Vec<crate::models::RequestLocation>) -> RequestSupportedLocations {
        RequestSupportedLocations {
            locations,
        }
    }
}


