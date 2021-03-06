/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */


/// 
#[derive(Clone, Copy, Debug, Eq, PartialEq, Ord, PartialOrd, Hash, Serialize, Deserialize)]
pub enum ResponseTransportationMode {
    #[serde(rename = "car")]
    Car,
    #[serde(rename = "parking")]
    Parking,
    #[serde(rename = "boarding")]
    Boarding,
    #[serde(rename = "walk")]
    Walk,
    #[serde(rename = "bike")]
    Bike,
    #[serde(rename = "train")]
    Train,
    #[serde(rename = "rail_national")]
    RailNational,
    #[serde(rename = "rail_overground")]
    RailOverground,
    #[serde(rename = "rail_underground")]
    RailUnderground,
    #[serde(rename = "rail_dlr")]
    RailDlr,
    #[serde(rename = "bus")]
    Bus,
    #[serde(rename = "cable_car")]
    CableCar,
    #[serde(rename = "plane")]
    Plane,
    #[serde(rename = "ferry")]
    Ferry,
    #[serde(rename = "coach")]
    Coach,

}




