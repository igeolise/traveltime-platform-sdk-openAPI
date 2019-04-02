/*
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


package com.prokarma.pkmst.controller;

import com.fasterxml.jackson.databind.ObjectMapper;
import com.prokarma.pkmst.model.RequestRoutes;
import com.prokarma.pkmst.model.RequestSupportedLocations;
import com.prokarma.pkmst.model.RequestTimeFilter;
import com.prokarma.pkmst.model.RequestTimeFilterFast;
import com.prokarma.pkmst.model.RequestTimeFilterPostcodeDistricts;
import com.prokarma.pkmst.model.RequestTimeFilterPostcodeSectors;
import com.prokarma.pkmst.model.RequestTimeFilterPostcodes;
import com.prokarma.pkmst.model.RequestTimeMap;
import com.prokarma.pkmst.model.ResponseError;
import com.prokarma.pkmst.model.ResponseGeocoding;
import com.prokarma.pkmst.model.ResponseMapInfo;
import com.prokarma.pkmst.model.ResponseRoutes;
import com.prokarma.pkmst.model.ResponseSupportedLocations;
import com.prokarma.pkmst.model.ResponseTimeFilter;
import com.prokarma.pkmst.model.ResponseTimeFilterFast;
import com.prokarma.pkmst.model.ResponseTimeFilterPostcodeDistricts;
import com.prokarma.pkmst.model.ResponseTimeFilterPostcodeSectors;
import com.prokarma.pkmst.model.ResponseTimeFilterPostcodes;
import com.prokarma.pkmst.model.ResponseTimeMap;
import org.junit.Test;
import org.junit.Ignore;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import org.springframework.http.ResponseEntity;
import org.springframework.web.multipart.MultipartFile;

/**
 * API tests for DefaultApi
 */
@Ignore
public class DefaultApiTest {

    private final ObjectMapper objectMapper = new ObjectMapper();

    private final DefaultApi api = new DefaultApiController(objectMapper);

    private final String accept = "application/json";

    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void geocodingReverseSearchTest() throws Exception {
        Double focusLat = null;
        Double focusLng = null;
        String withinCountry = null;
    ResponseEntity<ResponseGeocoding> response = api.geocodingReverseSearch(focusLat, focusLng, withinCountry , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void geocodingSearchTest() throws Exception {
        String query = null;
        String withinCountry = null;
        Double focusLat = null;
        Double focusLng = null;
    ResponseEntity<ResponseGeocoding> response = api.geocodingSearch(query, withinCountry, focusLat, focusLng , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void mapInfoTest() throws Exception {
    ResponseEntity<ResponseMapInfo> response = api.mapInfo(  accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void routesTest() throws Exception {
        RequestRoutes requestRoutes = null;
    ResponseEntity<ResponseRoutes> response = api.routes(requestRoutes , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void supportedLocationsTest() throws Exception {
        RequestSupportedLocations requestSupportedLocations = null;
    ResponseEntity<ResponseSupportedLocations> response = api.supportedLocations(requestSupportedLocations , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void timeFilterTest() throws Exception {
        RequestTimeFilter requestTimeFilter = null;
    ResponseEntity<ResponseTimeFilter> response = api.timeFilter(requestTimeFilter , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void timeFilterFastTest() throws Exception {
        RequestTimeFilterFast requestTimeFilterFast = null;
    ResponseEntity<ResponseTimeFilterFast> response = api.timeFilterFast(requestTimeFilterFast , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void timeFilterPostcodeDistrictsTest() throws Exception {
        RequestTimeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts = null;
    ResponseEntity<ResponseTimeFilterPostcodeDistricts> response = api.timeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void timeFilterPostcodeSectorsTest() throws Exception {
        RequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors = null;
    ResponseEntity<ResponseTimeFilterPostcodeSectors> response = api.timeFilterPostcodeSectors(requestTimeFilterPostcodeSectors , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void timeFilterPostcodesTest() throws Exception {
        RequestTimeFilterPostcodes requestTimeFilterPostcodes = null;
    ResponseEntity<ResponseTimeFilterPostcodes> response = api.timeFilterPostcodes(requestTimeFilterPostcodes , accept);

        // TODO: test validations
    }
    
    /**
     * 
     *
     * 
     *
     * @throws Exception
     *          if the Api call fails
     */
    @Test
    public void timeMapTest() throws Exception {
        RequestTimeMap requestTimeMap = null;
    ResponseEntity<ResponseTimeMap> response = api.timeMap(requestTimeMap , accept);

        // TODO: test validations
    }
    
}
