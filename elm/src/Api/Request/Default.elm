{-
   TravelTime API
   No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

   The version of the OpenAPI document: 1.2.1
   Contact: support@igeolise.com

   NOTE: This file is auto generated by the openapi-generator.
   https://github.com/openapitools/openapi-generator.git

   DO NOT EDIT THIS FILE MANUALLY.

   For more info on generating Elm code, see https://eriktim.github.io/openapi-elm/
-}


module Api.Request.Default exposing
    ( geocodingReverseSearch
    , geocodingSearch
    , mapInfo
    , routes
    , supportedLocations
    , timeFilter
    , timeFilterFast
    , timeFilterPostcodeDistricts
    , timeFilterPostcodeSectors
    , timeFilterPostcodes
    , timeMap
    )

import Api
import Api.Data
import Dict
import Http
import Json.Decode
import Json.Encode



geocodingReverseSearch : Float -> Float -> Maybe String -> Api.Request Api.Data.ResponseGeocoding
geocodingReverseSearch lat_query lng_query withinPeriodcountry_query =
    Api.request
        "GET"
        "/v4/geocoding/reverse"
        []
        [ ( "lat", Just <| String.fromFloat lat_query ), ( "lng", Just <| String.fromFloat lng_query ), ( "within.country", Maybe.map identity withinPeriodcountry_query ) ]
        []
        Nothing
        Api.Data.responseGeocodingDecoder



geocodingSearch : String -> Maybe Float -> Maybe Float -> Maybe String -> Api.Request Api.Data.ResponseGeocoding
geocodingSearch query_query focusPeriodlat_query focusPeriodlng_query withinPeriodcountry_query =
    Api.request
        "GET"
        "/v4/geocoding/search"
        []
        [ ( "query", Just <| identity query_query ), ( "focus.lat", Maybe.map String.fromFloat focusPeriodlat_query ), ( "focus.lng", Maybe.map String.fromFloat focusPeriodlng_query ), ( "within.country", Maybe.map identity withinPeriodcountry_query ) ]
        []
        Nothing
        Api.Data.responseGeocodingDecoder



mapInfo : Api.Request Api.Data.ResponseMapInfo
mapInfo =
    Api.request
        "GET"
        "/v4/map-info"
        []
        []
        []
        Nothing
        Api.Data.responseMapInfoDecoder



routes : Api.Data.RequestRoutes -> Api.Request Api.Data.ResponseRoutes
routes requestRoutes_body =
    Api.request
        "POST"
        "/v4/routes"
        []
        []
        []
        (Just (Api.Data.encodeRequestRoutes requestRoutes_body))
        Api.Data.responseRoutesDecoder



supportedLocations : Api.Data.RequestSupportedLocations -> Api.Request Api.Data.ResponseSupportedLocations
supportedLocations requestSupportedLocations_body =
    Api.request
        "POST"
        "/v4/supported-locations"
        []
        []
        []
        (Just (Api.Data.encodeRequestSupportedLocations requestSupportedLocations_body))
        Api.Data.responseSupportedLocationsDecoder



timeFilter : Api.Data.RequestTimeFilter -> Api.Request Api.Data.ResponseTimeFilter
timeFilter requestTimeFilter_body =
    Api.request
        "POST"
        "/v4/time-filter"
        []
        []
        []
        (Just (Api.Data.encodeRequestTimeFilter requestTimeFilter_body))
        Api.Data.responseTimeFilterDecoder



timeFilterFast : Api.Data.RequestTimeFilterFast -> Api.Request Api.Data.ResponseTimeFilterFast
timeFilterFast requestTimeFilterFast_body =
    Api.request
        "POST"
        "/v4/time-filter/fast"
        []
        []
        []
        (Just (Api.Data.encodeRequestTimeFilterFast requestTimeFilterFast_body))
        Api.Data.responseTimeFilterFastDecoder



timeFilterPostcodeDistricts : Api.Data.RequestTimeFilterPostcodeDistricts -> Api.Request Api.Data.ResponseTimeFilterPostcodeDistricts
timeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts_body =
    Api.request
        "POST"
        "/v4/time-filter/postcode-districts"
        []
        []
        []
        (Just (Api.Data.encodeRequestTimeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts_body))
        Api.Data.responseTimeFilterPostcodeDistrictsDecoder



timeFilterPostcodeSectors : Api.Data.RequestTimeFilterPostcodeSectors -> Api.Request Api.Data.ResponseTimeFilterPostcodeSectors
timeFilterPostcodeSectors requestTimeFilterPostcodeSectors_body =
    Api.request
        "POST"
        "/v4/time-filter/postcode-sectors"
        []
        []
        []
        (Just (Api.Data.encodeRequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors_body))
        Api.Data.responseTimeFilterPostcodeSectorsDecoder



timeFilterPostcodes : Api.Data.RequestTimeFilterPostcodes -> Api.Request Api.Data.ResponseTimeFilterPostcodes
timeFilterPostcodes requestTimeFilterPostcodes_body =
    Api.request
        "POST"
        "/v4/time-filter/postcodes"
        []
        []
        []
        (Just (Api.Data.encodeRequestTimeFilterPostcodes requestTimeFilterPostcodes_body))
        Api.Data.responseTimeFilterPostcodesDecoder



timeMap : Api.Data.RequestTimeMap -> Api.Request Api.Data.ResponseTimeMap
timeMap requestTimeMap_body =
    Api.request
        "POST"
        "/v4/time-map"
        []
        []
        []
        (Just (Api.Data.encodeRequestTimeMap requestTimeMap_body))
        Api.Data.responseTimeMapDecoder
