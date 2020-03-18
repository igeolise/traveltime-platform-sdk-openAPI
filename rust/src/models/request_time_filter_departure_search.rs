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
pub struct RequestTimeFilterDepartureSearch {
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "departure_location_id")]
    pub departure_location_id: String,
    #[serde(rename = "arrival_location_ids")]
    pub arrival_location_ids: Vec<String>,
    #[serde(rename = "transportation")]
    pub transportation: crate::models::RequestTransportation,
    #[serde(rename = "travel_time")]
    pub travel_time: i32,
    #[serde(rename = "departure_time")]
    pub departure_time: String,
    #[serde(rename = "properties")]
    pub properties: Vec<crate::models::RequestTimeFilterProperty>,
    #[serde(rename = "range", skip_serializing_if = "Option::is_none")]
    pub range: Option<crate::models::RequestRangeFull>,
}

impl RequestTimeFilterDepartureSearch {
    pub fn new(id: String, departure_location_id: String, arrival_location_ids: Vec<String>, transportation: crate::models::RequestTransportation, travel_time: i32, departure_time: String, properties: Vec<crate::models::RequestTimeFilterProperty>) -> RequestTimeFilterDepartureSearch {
        RequestTimeFilterDepartureSearch {
            id,
            departure_location_id,
            arrival_location_ids,
            transportation,
            travel_time,
            departure_time,
            properties,
            range: None,
        }
    }
}


