/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: https://openapi-generator.tech
 */


use reqwest;

use crate::apis::ResponseContent;
use super::{Error, configuration};


/// struct for typed errors of method `geocoding_reverse_search`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum GeocodingReverseSearchError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `geocoding_search`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum GeocodingSearchError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `map_info`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum MapInfoError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `routes`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum RoutesError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `supported_locations`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum SupportedLocationsError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `time_filter`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum TimeFilterError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `time_filter_fast`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum TimeFilterFastError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `time_filter_postcode_districts`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum TimeFilterPostcodeDistrictsError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `time_filter_postcode_sectors`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum TimeFilterPostcodeSectorsError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `time_filter_postcodes`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum TimeFilterPostcodesError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}

/// struct for typed errors of method `time_map`
#[derive(Debug, Clone, Serialize, Deserialize)]
#[serde(untagged)]
pub enum TimeMapError {
    DefaultResponse(crate::models::ResponseError),
    UnknownValue(serde_json::Value),
}


pub async fn geocoding_reverse_search(configuration: &configuration::Configuration, lat: f64, lng: f64, within_country: Option<&str>) -> Result<crate::models::ResponseGeocoding, Error<GeocodingReverseSearchError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/geocoding/reverse", configuration.base_path);
    let mut req_builder = client.get(uri_str.as_str());

    req_builder = req_builder.query(&[("lat", &lat.to_string())]);
    req_builder = req_builder.query(&[("lng", &lng.to_string())]);
    if let Some(ref s) = within_country {
        req_builder = req_builder.query(&[("within.country", &s.to_string())]);
    }
    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<GeocodingReverseSearchError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn geocoding_search(configuration: &configuration::Configuration, query: &str, focus_lat: Option<f64>, focus_lng: Option<f64>, within_country: Option<&str>) -> Result<crate::models::ResponseGeocoding, Error<GeocodingSearchError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/geocoding/search", configuration.base_path);
    let mut req_builder = client.get(uri_str.as_str());

    req_builder = req_builder.query(&[("query", &query.to_string())]);
    if let Some(ref s) = focus_lat {
        req_builder = req_builder.query(&[("focus.lat", &s.to_string())]);
    }
    if let Some(ref s) = focus_lng {
        req_builder = req_builder.query(&[("focus.lng", &s.to_string())]);
    }
    if let Some(ref s) = within_country {
        req_builder = req_builder.query(&[("within.country", &s.to_string())]);
    }
    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<GeocodingSearchError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn map_info(configuration: &configuration::Configuration, ) -> Result<crate::models::ResponseMapInfo, Error<MapInfoError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/map-info", configuration.base_path);
    let mut req_builder = client.get(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<MapInfoError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn routes(configuration: &configuration::Configuration, request_routes: crate::models::RequestRoutes) -> Result<crate::models::ResponseRoutes, Error<RoutesError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/routes", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_routes);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<RoutesError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn supported_locations(configuration: &configuration::Configuration, request_supported_locations: crate::models::RequestSupportedLocations) -> Result<crate::models::ResponseSupportedLocations, Error<SupportedLocationsError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/supported-locations", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_supported_locations);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<SupportedLocationsError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn time_filter(configuration: &configuration::Configuration, request_time_filter: crate::models::RequestTimeFilter) -> Result<crate::models::ResponseTimeFilter, Error<TimeFilterError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/time-filter", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_time_filter);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<TimeFilterError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn time_filter_fast(configuration: &configuration::Configuration, request_time_filter_fast: crate::models::RequestTimeFilterFast) -> Result<crate::models::ResponseTimeFilterFast, Error<TimeFilterFastError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/time-filter/fast", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_time_filter_fast);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<TimeFilterFastError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn time_filter_postcode_districts(configuration: &configuration::Configuration, request_time_filter_postcode_districts: crate::models::RequestTimeFilterPostcodeDistricts) -> Result<crate::models::ResponseTimeFilterPostcodeDistricts, Error<TimeFilterPostcodeDistrictsError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/time-filter/postcode-districts", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_time_filter_postcode_districts);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<TimeFilterPostcodeDistrictsError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn time_filter_postcode_sectors(configuration: &configuration::Configuration, request_time_filter_postcode_sectors: crate::models::RequestTimeFilterPostcodeSectors) -> Result<crate::models::ResponseTimeFilterPostcodeSectors, Error<TimeFilterPostcodeSectorsError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/time-filter/postcode-sectors", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_time_filter_postcode_sectors);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<TimeFilterPostcodeSectorsError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn time_filter_postcodes(configuration: &configuration::Configuration, request_time_filter_postcodes: crate::models::RequestTimeFilterPostcodes) -> Result<crate::models::ResponseTimeFilterPostcodes, Error<TimeFilterPostcodesError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/time-filter/postcodes", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_time_filter_postcodes);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<TimeFilterPostcodesError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

pub async fn time_map(configuration: &configuration::Configuration, request_time_map: crate::models::RequestTimeMap) -> Result<crate::models::ResponseTimeMap, Error<TimeMapError>> {

    let client = &configuration.client;

    let uri_str = format!("{}/v4/time-map", configuration.base_path);
    let mut req_builder = client.post(uri_str.as_str());

    if let Some(ref user_agent) = configuration.user_agent {
        req_builder = req_builder.header(reqwest::header::USER_AGENT, user_agent.clone());
    }
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Api-Key", val);
    };
    if let Some(ref apikey) = configuration.api_key {
        let key = apikey.key.clone();
        let val = match apikey.prefix {
            Some(ref prefix) => format!("{} {}", prefix, key),
            None => key,
        };
        req_builder = req_builder.header("X-Application-Id", val);
    };
    req_builder = req_builder.json(&request_time_map);

    let req = req_builder.build()?;
    let resp = client.execute(req).await?;

    let status = resp.status();
    let content = resp.text().await?;

    if status.is_success() {
        serde_json::from_str(&content).map_err(Error::from)
    } else {
        let entity: Option<TimeMapError> = serde_json::from_str(&content).ok();
        let error = ResponseContent { status, content, entity };
        Err(Error::ResponseError(error))
    }
}

