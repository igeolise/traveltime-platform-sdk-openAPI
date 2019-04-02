//! Server implementation of traveltimeplatform.

#![allow(unused_imports)]

use futures::{self, Future};
use chrono;
use std::collections::HashMap;
use std::marker::PhantomData;

use swagger;
use swagger::{Has, XSpanIdString};

use traveltimeplatform::{Api, ApiError,
                      GeocodingReverseSearchResponse,
                      GeocodingSearchResponse,
                      MapInfoResponse,
                      RoutesResponse,
                      SupportedLocationsResponse,
                      TimeFilterResponse,
                      TimeFilterFastResponse,
                      TimeFilterPostcodeDistrictsResponse,
                      TimeFilterPostcodeSectorsResponse,
                      TimeFilterPostcodesResponse,
                      TimeMapResponse
};
use traveltimeplatform::models;

#[derive(Copy, Clone)]
pub struct Server<C> {
    marker: PhantomData<C>,
}

impl<C> Server<C> {
    pub fn new() -> Self {
        Server{marker: PhantomData}
    }
}

impl<C> Api<C> for Server<C> where C: Has<XSpanIdString>{


    fn geocoding_reverse_search(&self, focus_lat: f64, focus_lng: f64, within_country: Option<String>, context: &C) -> Box<Future<Item=GeocodingReverseSearchResponse, Error=ApiError>> {
        let context = context.clone();
        println!("geocoding_reverse_search({}, {}, {:?}) - X-Span-ID: {:?}", focus_lat, focus_lng, within_country, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn geocoding_search(&self, query: String, within_country: Option<String>, focus_lat: Option<f64>, focus_lng: Option<f64>, context: &C) -> Box<Future<Item=GeocodingSearchResponse, Error=ApiError>> {
        let context = context.clone();
        println!("geocoding_search(\"{}\", {:?}, {:?}, {:?}) - X-Span-ID: {:?}", query, within_country, focus_lat, focus_lng, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn map_info(&self, context: &C) -> Box<Future<Item=MapInfoResponse, Error=ApiError>> {
        let context = context.clone();
        println!("map_info() - X-Span-ID: {:?}", context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn routes(&self, request_routes: models::RequestRoutes, context: &C) -> Box<Future<Item=RoutesResponse, Error=ApiError>> {
        let context = context.clone();
        println!("routes({:?}) - X-Span-ID: {:?}", request_routes, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn supported_locations(&self, request_supported_locations: models::RequestSupportedLocations, context: &C) -> Box<Future<Item=SupportedLocationsResponse, Error=ApiError>> {
        let context = context.clone();
        println!("supported_locations({:?}) - X-Span-ID: {:?}", request_supported_locations, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn time_filter(&self, request_time_filter: models::RequestTimeFilter, context: &C) -> Box<Future<Item=TimeFilterResponse, Error=ApiError>> {
        let context = context.clone();
        println!("time_filter({:?}) - X-Span-ID: {:?}", request_time_filter, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn time_filter_fast(&self, request_time_filter_fast: models::RequestTimeFilterFast, context: &C) -> Box<Future<Item=TimeFilterFastResponse, Error=ApiError>> {
        let context = context.clone();
        println!("time_filter_fast({:?}) - X-Span-ID: {:?}", request_time_filter_fast, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn time_filter_postcode_districts(&self, request_time_filter_postcode_districts: models::RequestTimeFilterPostcodeDistricts, context: &C) -> Box<Future<Item=TimeFilterPostcodeDistrictsResponse, Error=ApiError>> {
        let context = context.clone();
        println!("time_filter_postcode_districts({:?}) - X-Span-ID: {:?}", request_time_filter_postcode_districts, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn time_filter_postcode_sectors(&self, request_time_filter_postcode_sectors: models::RequestTimeFilterPostcodeSectors, context: &C) -> Box<Future<Item=TimeFilterPostcodeSectorsResponse, Error=ApiError>> {
        let context = context.clone();
        println!("time_filter_postcode_sectors({:?}) - X-Span-ID: {:?}", request_time_filter_postcode_sectors, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn time_filter_postcodes(&self, request_time_filter_postcodes: models::RequestTimeFilterPostcodes, context: &C) -> Box<Future<Item=TimeFilterPostcodesResponse, Error=ApiError>> {
        let context = context.clone();
        println!("time_filter_postcodes({:?}) - X-Span-ID: {:?}", request_time_filter_postcodes, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }


    fn time_map(&self, request_time_map: models::RequestTimeMap, context: &C) -> Box<Future<Item=TimeMapResponse, Error=ApiError>> {
        let context = context.clone();
        println!("time_map({:?}) - X-Span-ID: {:?}", request_time_map, context.get().0.clone());
        Box::new(futures::failed("Generic failure".into()))
    }

}
