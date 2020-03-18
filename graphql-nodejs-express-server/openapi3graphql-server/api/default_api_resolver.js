/**
 * 
 * TravelTime Platform API
 * 
 * 
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 * 
 * Version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by OpenAPI Generator: https://openapi-generator.tech
 */

// package openapi3graphql-server

// default_api

export default {
    Query: {

        // @return ResponseGeocoding
        GeocodingReverseSearch: ($lat, $lng, $withinCountry) => {
            return {
                "lat": "1.2",
                "lng": "1.2",
                "withinCountry": "withinCountry_example"
            };
        },

        // @return ResponseGeocoding
        GeocodingSearch: ($Query_, $focusLat, $focusLng, $withinCountry) => {
            return {
                "Query_": "Query__example",
                "focusLat": "1.2",
                "focusLng": "1.2",
                "withinCountry": "withinCountry_example"
            };
        },

        // @return ResponseMapInfo
        MapInfo: () => {
            return {
                
            };
        },

    },

    Mutation: {

        // @return ResponseRoutes
        Routes: ($requestRoutes) => {
            return {
                "requestRoutes": ""
            };
        },

        // @return ResponseSupportedLocations
        SupportedLocations: ($requestSupportedLocations) => {
            return {
                "requestSupportedLocations": ""
            };
        },

        // @return ResponseTimeFilter
        TimeFilter: ($requestTimeFilter) => {
            return {
                "requestTimeFilter": ""
            };
        },

        // @return ResponseTimeFilterFast
        TimeFilterFast: ($requestTimeFilterFast) => {
            return {
                "requestTimeFilterFast": ""
            };
        },

        // @return ResponseTimeFilterPostcodeDistricts
        TimeFilterPostcodeDistricts: ($requestTimeFilterPostcodeDistricts) => {
            return {
                "requestTimeFilterPostcodeDistricts": ""
            };
        },

        // @return ResponseTimeFilterPostcodeSectors
        TimeFilterPostcodeSectors: ($requestTimeFilterPostcodeSectors) => {
            return {
                "requestTimeFilterPostcodeSectors": ""
            };
        },

        // @return ResponseTimeFilterPostcodes
        TimeFilterPostcodes: ($requestTimeFilterPostcodes) => {
            return {
                "requestTimeFilterPostcodes": ""
            };
        },

        // @return ResponseTimeMap
        TimeMap: ($requestTimeMap) => {
            return {
                "requestTimeMap": ""
            };
        },

    }
}