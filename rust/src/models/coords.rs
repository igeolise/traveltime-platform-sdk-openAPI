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
pub struct Coords {
  #[serde(rename = "lat")]
  lat: f64,
  #[serde(rename = "lng")]
  lng: f64
}

impl Coords {
  pub fn new(lat: f64, lng: f64) -> Coords {
    Coords {
      lat: lat,
      lng: lng
    }
  }

  pub fn set_lat(&mut self, lat: f64) {
    self.lat = lat;
  }

  pub fn with_lat(mut self, lat: f64) -> Coords {
    self.lat = lat;
    self
  }

  pub fn lat(&self) -> &f64 {
    &self.lat
  }


  pub fn set_lng(&mut self, lng: f64) {
    self.lng = lng;
  }

  pub fn with_lng(mut self, lng: f64) -> Coords {
    self.lng = lng;
    self
  }

  pub fn lng(&self) -> &f64 {
    &self.lng
  }


}



