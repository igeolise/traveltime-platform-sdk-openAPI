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
pub struct ResponseFaresFast {
    #[serde(rename = "tickets_total")]
    pub tickets_total: Vec<crate::models::ResponseFareTicket>,
}

impl ResponseFaresFast {
    pub fn new(tickets_total: Vec<crate::models::ResponseFareTicket>) -> ResponseFaresFast {
        ResponseFaresFast {
            tickets_total,
        }
    }
}


