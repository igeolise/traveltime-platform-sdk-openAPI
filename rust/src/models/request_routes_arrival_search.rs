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
pub struct RequestRoutesArrivalSearch {
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "departure_location_ids")]
    pub departure_location_ids: Vec<String>,
    #[serde(rename = "arrival_location_id")]
    pub arrival_location_id: String,
    #[serde(rename = "transportation")]
    pub transportation: crate::models::RequestTransportation,
    #[serde(rename = "arrival_time")]
    pub arrival_time: String,
    #[serde(rename = "properties")]
    pub properties: Vec<crate::models::RequestRoutesProperty>,
    #[serde(rename = "range", skip_serializing_if = "Option::is_none")]
    pub range: Option<crate::models::RequestRangeFull>,
}

impl RequestRoutesArrivalSearch {
    pub fn new(id: String, departure_location_ids: Vec<String>, arrival_location_id: String, transportation: crate::models::RequestTransportation, arrival_time: String, properties: Vec<crate::models::RequestRoutesProperty>) -> RequestRoutesArrivalSearch {
        RequestRoutesArrivalSearch {
            id,
            departure_location_ids,
            arrival_location_id,
            transportation,
            arrival_time,
            properties,
            range: None,
        }
    }
}


