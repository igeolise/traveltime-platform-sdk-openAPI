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
pub struct ResponseTravelTimeStatistics {
    #[serde(rename = "min")]
    pub min: i32,
    #[serde(rename = "max")]
    pub max: i32,
    #[serde(rename = "mean")]
    pub mean: i32,
    #[serde(rename = "median")]
    pub median: i32,
}

impl ResponseTravelTimeStatistics {
    pub fn new(min: i32, max: i32, mean: i32, median: i32) -> ResponseTravelTimeStatistics {
        ResponseTravelTimeStatistics {
            min,
            max,
            mean,
            median,
        }
    }
}


