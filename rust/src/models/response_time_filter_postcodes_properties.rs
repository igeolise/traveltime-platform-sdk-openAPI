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
pub struct ResponseTimeFilterPostcodesProperties {
    #[serde(rename = "travel_time", skip_serializing_if = "Option::is_none")]
    pub travel_time: Option<i32>,
    #[serde(rename = "distance", skip_serializing_if = "Option::is_none")]
    pub distance: Option<i32>,
}

impl ResponseTimeFilterPostcodesProperties {
    pub fn new() -> ResponseTimeFilterPostcodesProperties {
        ResponseTimeFilterPostcodesProperties {
            travel_time: None,
            distance: None,
        }
    }
}


