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
pub struct ResponseRoutePart {
    #[serde(rename = "id")]
    pub id: String,
    #[serde(rename = "type")]
    pub _type: Type,
    #[serde(rename = "mode")]
    pub mode: crate::models::ResponseTransportationMode,
    #[serde(rename = "directions")]
    pub directions: String,
    #[serde(rename = "distance")]
    pub distance: i32,
    #[serde(rename = "travel_time")]
    pub travel_time: i32,
    #[serde(rename = "coords")]
    pub coords: Vec<crate::models::Coords>,
    #[serde(rename = "direction", skip_serializing_if = "Option::is_none")]
    pub direction: Option<String>,
    #[serde(rename = "road", skip_serializing_if = "Option::is_none")]
    pub road: Option<String>,
    #[serde(rename = "turn", skip_serializing_if = "Option::is_none")]
    pub turn: Option<String>,
    #[serde(rename = "line", skip_serializing_if = "Option::is_none")]
    pub line: Option<String>,
    #[serde(rename = "departure_station", skip_serializing_if = "Option::is_none")]
    pub departure_station: Option<String>,
    #[serde(rename = "arrival_station", skip_serializing_if = "Option::is_none")]
    pub arrival_station: Option<String>,
    #[serde(rename = "departs_at", skip_serializing_if = "Option::is_none")]
    pub departs_at: Option<String>,
    #[serde(rename = "arrives_at", skip_serializing_if = "Option::is_none")]
    pub arrives_at: Option<String>,
    #[serde(rename = "num_stops", skip_serializing_if = "Option::is_none")]
    pub num_stops: Option<i32>,
}

impl ResponseRoutePart {
    pub fn new(id: String, _type: Type, mode: crate::models::ResponseTransportationMode, directions: String, distance: i32, travel_time: i32, coords: Vec<crate::models::Coords>) -> ResponseRoutePart {
        ResponseRoutePart {
            id,
            _type,
            mode,
            directions,
            distance,
            travel_time,
            coords,
            direction: None,
            road: None,
            turn: None,
            line: None,
            departure_station: None,
            arrival_station: None,
            departs_at: None,
            arrives_at: None,
            num_stops: None,
        }
    }
}

/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum Type {
    #[serde(rename = "basic")]
    Basic,
    #[serde(rename = "start_end")]
    StartEnd,
    #[serde(rename = "road")]
    Road,
    #[serde(rename = "public_transport")]
    PublicTransport,
}

