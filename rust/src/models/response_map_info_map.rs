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
pub struct ResponseMapInfoMap {
    #[serde(rename = "name")]
    pub name: String,
    #[serde(rename = "features")]
    pub features: crate::models::ResponseMapInfoFeatures,
}

impl ResponseMapInfoMap {
    pub fn new(name: String, features: crate::models::ResponseMapInfoFeatures) -> ResponseMapInfoMap {
        ResponseMapInfoMap {
            name,
            features,
        }
    }
}


