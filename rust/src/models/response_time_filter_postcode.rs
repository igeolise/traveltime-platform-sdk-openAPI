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
pub struct ResponseTimeFilterPostcode {
  #[serde(rename = "code")]
  code: String,
  #[serde(rename = "properties")]
  properties: Vec<::models::ResponseTimeFilterPostcodesProperties>
}

impl ResponseTimeFilterPostcode {
  pub fn new(code: String, properties: Vec<::models::ResponseTimeFilterPostcodesProperties>) -> ResponseTimeFilterPostcode {
    ResponseTimeFilterPostcode {
      code: code,
      properties: properties
    }
  }

  pub fn set_code(&mut self, code: String) {
    self.code = code;
  }

  pub fn with_code(mut self, code: String) -> ResponseTimeFilterPostcode {
    self.code = code;
    self
  }

  pub fn code(&self) -> &String {
    &self.code
  }


  pub fn set_properties(&mut self, properties: Vec<::models::ResponseTimeFilterPostcodesProperties>) {
    self.properties = properties;
  }

  pub fn with_properties(mut self, properties: Vec<::models::ResponseTimeFilterPostcodesProperties>) -> ResponseTimeFilterPostcode {
    self.properties = properties;
    self
  }

  pub fn properties(&self) -> &Vec<::models::ResponseTimeFilterPostcodesProperties> {
    &self.properties
  }


}



