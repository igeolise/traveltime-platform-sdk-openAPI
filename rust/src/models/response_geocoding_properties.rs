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
pub struct ResponseGeocodingProperties {
  #[serde(rename = "name")]
  name: String,
  #[serde(rename = "label")]
  label: String,
  #[serde(rename = "score")]
  score: Option<f64>,
  #[serde(rename = "house_number")]
  house_number: Option<String>,
  #[serde(rename = "street")]
  street: Option<String>,
  #[serde(rename = "region")]
  region: Option<String>,
  #[serde(rename = "region_code")]
  region_code: Option<String>,
  #[serde(rename = "neighbourhood")]
  neighbourhood: Option<String>,
  #[serde(rename = "county")]
  county: Option<String>,
  #[serde(rename = "macroregion")]
  macroregion: Option<String>,
  #[serde(rename = "city")]
  city: Option<String>,
  #[serde(rename = "country")]
  country: Option<String>,
  #[serde(rename = "country_code")]
  country_code: Option<String>,
  #[serde(rename = "continent")]
  continent: Option<String>,
  #[serde(rename = "postcode")]
  postcode: Option<String>,
  #[serde(rename = "features")]
  features: Option<::models::ResponseMapInfoFeatures>
}

impl ResponseGeocodingProperties {
  pub fn new(name: String, label: String) -> ResponseGeocodingProperties {
    ResponseGeocodingProperties {
      name: name,
      label: label,
      score: None,
      house_number: None,
      street: None,
      region: None,
      region_code: None,
      neighbourhood: None,
      county: None,
      macroregion: None,
      city: None,
      country: None,
      country_code: None,
      continent: None,
      postcode: None,
      features: None
    }
  }

  pub fn set_name(&mut self, name: String) {
    self.name = name;
  }

  pub fn with_name(mut self, name: String) -> ResponseGeocodingProperties {
    self.name = name;
    self
  }

  pub fn name(&self) -> &String {
    &self.name
  }


  pub fn set_label(&mut self, label: String) {
    self.label = label;
  }

  pub fn with_label(mut self, label: String) -> ResponseGeocodingProperties {
    self.label = label;
    self
  }

  pub fn label(&self) -> &String {
    &self.label
  }


  pub fn set_score(&mut self, score: f64) {
    self.score = Some(score);
  }

  pub fn with_score(mut self, score: f64) -> ResponseGeocodingProperties {
    self.score = Some(score);
    self
  }

  pub fn score(&self) -> Option<&f64> {
    self.score.as_ref()
  }

  pub fn reset_score(&mut self) {
    self.score = None;
  }

  pub fn set_house_number(&mut self, house_number: String) {
    self.house_number = Some(house_number);
  }

  pub fn with_house_number(mut self, house_number: String) -> ResponseGeocodingProperties {
    self.house_number = Some(house_number);
    self
  }

  pub fn house_number(&self) -> Option<&String> {
    self.house_number.as_ref()
  }

  pub fn reset_house_number(&mut self) {
    self.house_number = None;
  }

  pub fn set_street(&mut self, street: String) {
    self.street = Some(street);
  }

  pub fn with_street(mut self, street: String) -> ResponseGeocodingProperties {
    self.street = Some(street);
    self
  }

  pub fn street(&self) -> Option<&String> {
    self.street.as_ref()
  }

  pub fn reset_street(&mut self) {
    self.street = None;
  }

  pub fn set_region(&mut self, region: String) {
    self.region = Some(region);
  }

  pub fn with_region(mut self, region: String) -> ResponseGeocodingProperties {
    self.region = Some(region);
    self
  }

  pub fn region(&self) -> Option<&String> {
    self.region.as_ref()
  }

  pub fn reset_region(&mut self) {
    self.region = None;
  }

  pub fn set_region_code(&mut self, region_code: String) {
    self.region_code = Some(region_code);
  }

  pub fn with_region_code(mut self, region_code: String) -> ResponseGeocodingProperties {
    self.region_code = Some(region_code);
    self
  }

  pub fn region_code(&self) -> Option<&String> {
    self.region_code.as_ref()
  }

  pub fn reset_region_code(&mut self) {
    self.region_code = None;
  }

  pub fn set_neighbourhood(&mut self, neighbourhood: String) {
    self.neighbourhood = Some(neighbourhood);
  }

  pub fn with_neighbourhood(mut self, neighbourhood: String) -> ResponseGeocodingProperties {
    self.neighbourhood = Some(neighbourhood);
    self
  }

  pub fn neighbourhood(&self) -> Option<&String> {
    self.neighbourhood.as_ref()
  }

  pub fn reset_neighbourhood(&mut self) {
    self.neighbourhood = None;
  }

  pub fn set_county(&mut self, county: String) {
    self.county = Some(county);
  }

  pub fn with_county(mut self, county: String) -> ResponseGeocodingProperties {
    self.county = Some(county);
    self
  }

  pub fn county(&self) -> Option<&String> {
    self.county.as_ref()
  }

  pub fn reset_county(&mut self) {
    self.county = None;
  }

  pub fn set_macroregion(&mut self, macroregion: String) {
    self.macroregion = Some(macroregion);
  }

  pub fn with_macroregion(mut self, macroregion: String) -> ResponseGeocodingProperties {
    self.macroregion = Some(macroregion);
    self
  }

  pub fn macroregion(&self) -> Option<&String> {
    self.macroregion.as_ref()
  }

  pub fn reset_macroregion(&mut self) {
    self.macroregion = None;
  }

  pub fn set_city(&mut self, city: String) {
    self.city = Some(city);
  }

  pub fn with_city(mut self, city: String) -> ResponseGeocodingProperties {
    self.city = Some(city);
    self
  }

  pub fn city(&self) -> Option<&String> {
    self.city.as_ref()
  }

  pub fn reset_city(&mut self) {
    self.city = None;
  }

  pub fn set_country(&mut self, country: String) {
    self.country = Some(country);
  }

  pub fn with_country(mut self, country: String) -> ResponseGeocodingProperties {
    self.country = Some(country);
    self
  }

  pub fn country(&self) -> Option<&String> {
    self.country.as_ref()
  }

  pub fn reset_country(&mut self) {
    self.country = None;
  }

  pub fn set_country_code(&mut self, country_code: String) {
    self.country_code = Some(country_code);
  }

  pub fn with_country_code(mut self, country_code: String) -> ResponseGeocodingProperties {
    self.country_code = Some(country_code);
    self
  }

  pub fn country_code(&self) -> Option<&String> {
    self.country_code.as_ref()
  }

  pub fn reset_country_code(&mut self) {
    self.country_code = None;
  }

  pub fn set_continent(&mut self, continent: String) {
    self.continent = Some(continent);
  }

  pub fn with_continent(mut self, continent: String) -> ResponseGeocodingProperties {
    self.continent = Some(continent);
    self
  }

  pub fn continent(&self) -> Option<&String> {
    self.continent.as_ref()
  }

  pub fn reset_continent(&mut self) {
    self.continent = None;
  }

  pub fn set_postcode(&mut self, postcode: String) {
    self.postcode = Some(postcode);
  }

  pub fn with_postcode(mut self, postcode: String) -> ResponseGeocodingProperties {
    self.postcode = Some(postcode);
    self
  }

  pub fn postcode(&self) -> Option<&String> {
    self.postcode.as_ref()
  }

  pub fn reset_postcode(&mut self) {
    self.postcode = None;
  }

  pub fn set_features(&mut self, features: ::models::ResponseMapInfoFeatures) {
    self.features = Some(features);
  }

  pub fn with_features(mut self, features: ::models::ResponseMapInfoFeatures) -> ResponseGeocodingProperties {
    self.features = Some(features);
    self
  }

  pub fn features(&self) -> Option<&::models::ResponseMapInfoFeatures> {
    self.features.as_ref()
  }

  pub fn reset_features(&mut self) {
    self.features = None;
  }

}



