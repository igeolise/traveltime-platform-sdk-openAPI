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
pub struct RequestRoutes {
  #[serde(rename = "locations")]
  locations: Vec<::models::RequestLocation>,
  #[serde(rename = "departure_searches")]
  departure_searches: Option<Vec<::models::RequestRoutesDepartureSearch>>,
  #[serde(rename = "arrival_searches")]
  arrival_searches: Option<Vec<::models::RequestRoutesArrivalSearch>>
}

impl RequestRoutes {
  pub fn new(locations: Vec<::models::RequestLocation>) -> RequestRoutes {
    RequestRoutes {
      locations: locations,
      departure_searches: None,
      arrival_searches: None
    }
  }

  pub fn set_locations(&mut self, locations: Vec<::models::RequestLocation>) {
    self.locations = locations;
  }

  pub fn with_locations(mut self, locations: Vec<::models::RequestLocation>) -> RequestRoutes {
    self.locations = locations;
    self
  }

  pub fn locations(&self) -> &Vec<::models::RequestLocation> {
    &self.locations
  }


  pub fn set_departure_searches(&mut self, departure_searches: Vec<::models::RequestRoutesDepartureSearch>) {
    self.departure_searches = Some(departure_searches);
  }

  pub fn with_departure_searches(mut self, departure_searches: Vec<::models::RequestRoutesDepartureSearch>) -> RequestRoutes {
    self.departure_searches = Some(departure_searches);
    self
  }

  pub fn departure_searches(&self) -> Option<&Vec<::models::RequestRoutesDepartureSearch>> {
    self.departure_searches.as_ref()
  }

  pub fn reset_departure_searches(&mut self) {
    self.departure_searches = None;
  }

  pub fn set_arrival_searches(&mut self, arrival_searches: Vec<::models::RequestRoutesArrivalSearch>) {
    self.arrival_searches = Some(arrival_searches);
  }

  pub fn with_arrival_searches(mut self, arrival_searches: Vec<::models::RequestRoutesArrivalSearch>) -> RequestRoutes {
    self.arrival_searches = Some(arrival_searches);
    self
  }

  pub fn arrival_searches(&self) -> Option<&Vec<::models::RequestRoutesArrivalSearch>> {
    self.arrival_searches.as_ref()
  }

  pub fn reset_arrival_searches(&mut self) {
    self.arrival_searches = None;
  }

}



