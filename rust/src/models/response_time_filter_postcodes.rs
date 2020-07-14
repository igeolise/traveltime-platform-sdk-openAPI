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
pub struct ResponseTimeFilterPostcodes {
    #[serde(rename = "results")]
    pub results: Vec<crate::models::ResponseTimeFilterPostcodesResult>,
}

impl ResponseTimeFilterPostcodes {
    pub fn new(results: Vec<crate::models::ResponseTimeFilterPostcodesResult>) -> ResponseTimeFilterPostcodes {
        ResponseTimeFilterPostcodes {
            results,
        }
    }
}


