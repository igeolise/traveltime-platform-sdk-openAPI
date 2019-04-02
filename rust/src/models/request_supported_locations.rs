/* 
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */


#[allow(unused_imports)]
use serde_json::Value;

#[derive(Debug, Serialize, Deserialize)]
pub struct RequestSupportedLocations {
  #[serde(rename = "locations")]
  locations: Vec<::models::RequestLocation>
}

impl RequestSupportedLocations {
  pub fn new(locations: Vec<::models::RequestLocation>) -> RequestSupportedLocations {
    RequestSupportedLocations {
      locations: locations
    }
  }

  pub fn set_locations(&mut self, locations: Vec<::models::RequestLocation>) {
    self.locations = locations;
  }

  pub fn with_locations(mut self, locations: Vec<::models::RequestLocation>) -> RequestSupportedLocations {
    self.locations = locations;
    self
  }

  pub fn locations(&self) -> &Vec<::models::RequestLocation> {
    &self.locations
  }


}



