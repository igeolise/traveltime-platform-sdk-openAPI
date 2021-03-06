/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


package org.openapitools.api;

import org.openapitools.model.RequestRoutes;
import org.openapitools.model.RequestSupportedLocations;
import org.openapitools.model.RequestTimeFilter;
import org.openapitools.model.RequestTimeFilterFast;
import org.openapitools.model.RequestTimeFilterPostcodeDistricts;
import org.openapitools.model.RequestTimeFilterPostcodeSectors;
import org.openapitools.model.RequestTimeFilterPostcodes;
import org.openapitools.model.RequestTimeMap;
import org.openapitools.model.ResponseError;
import org.openapitools.model.ResponseGeocoding;
import org.openapitools.model.ResponseMapInfo;
import org.openapitools.model.ResponseRoutes;
import org.openapitools.model.ResponseSupportedLocations;
import org.openapitools.model.ResponseTimeFilter;
import org.openapitools.model.ResponseTimeFilterFast;
import org.openapitools.model.ResponseTimeFilterPostcodeDistricts;
import org.openapitools.model.ResponseTimeFilterPostcodeSectors;
import org.openapitools.model.ResponseTimeFilterPostcodes;
import org.openapitools.model.ResponseTimeMap;
import org.junit.Test;
import org.junit.Before;
import static org.junit.Assert.*;

import javax.ws.rs.core.MediaType;
import javax.ws.rs.core.Response;
import org.apache.cxf.jaxrs.client.JAXRSClientFactory;
import org.apache.cxf.jaxrs.client.ClientConfiguration;
import org.apache.cxf.jaxrs.client.WebClient;
import org.apache.cxf.jaxrs.ext.multipart.Attachment;


import com.fasterxml.jackson.jaxrs.json.JacksonJsonProvider;
import com.fasterxml.jackson.jaxrs.xml.JacksonXMLProvider;
import org.apache.cxf.jaxrs.provider.MultipartProvider;

import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;


/**
 * TravelTime API
 *
 * <p>No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API tests for DefaultApi.
 */
public class DefaultApiTest {

    private DefaultApi api;

    @Before
    public void setup() {
        List<?> providers = Arrays.asList(new JacksonJsonProvider(), new JacksonXMLProvider(), new MultipartProvider());

        api = JAXRSClientFactory.create("https://api.traveltimeapp.com", DefaultApi.class, providers);
        org.apache.cxf.jaxrs.client.Client client = WebClient.client(api);

        ClientConfiguration config = WebClient.getConfig(client); 
    }

    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void geocodingReverseSearchTest() throws Exception {
        // TODO: assign appropriate parameter values
        Double lat = null;
        Double lng = null;
        String withinCountry = null;

        // TODO: delete this line and uncomment the next
        // ResponseGeocoding response = api.geocodingReverseSearch(lat, lng, withinCountry);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void geocodingSearchTest() throws Exception {
        // TODO: assign appropriate parameter values
        String query = null;
        Double focusLat = null;
        Double focusLng = null;
        String withinCountry = null;

        // TODO: delete this line and uncomment the next
        // ResponseGeocoding response = api.geocodingSearch(query, focusLat, focusLng, withinCountry);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void mapInfoTest() throws Exception {

        // TODO: delete this line and uncomment the next
        // ResponseMapInfo response = api.mapInfo();
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void routesTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestRoutes requestRoutes = null;

        // TODO: delete this line and uncomment the next
        // ResponseRoutes response = api.routes(requestRoutes);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void supportedLocationsTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestSupportedLocations requestSupportedLocations = null;

        // TODO: delete this line and uncomment the next
        // ResponseSupportedLocations response = api.supportedLocations(requestSupportedLocations);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void timeFilterTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestTimeFilter requestTimeFilter = null;

        // TODO: delete this line and uncomment the next
        // ResponseTimeFilter response = api.timeFilter(requestTimeFilter);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void timeFilterFastTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestTimeFilterFast requestTimeFilterFast = null;

        // TODO: delete this line and uncomment the next
        // ResponseTimeFilterFast response = api.timeFilterFast(requestTimeFilterFast);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void timeFilterPostcodeDistrictsTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestTimeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts = null;

        // TODO: delete this line and uncomment the next
        // ResponseTimeFilterPostcodeDistricts response = api.timeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void timeFilterPostcodeSectorsTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors = null;

        // TODO: delete this line and uncomment the next
        // ResponseTimeFilterPostcodeSectors response = api.timeFilterPostcodeSectors(requestTimeFilterPostcodeSectors);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void timeFilterPostcodesTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestTimeFilterPostcodes requestTimeFilterPostcodes = null;

        // TODO: delete this line and uncomment the next
        // ResponseTimeFilterPostcodes response = api.timeFilterPostcodes(requestTimeFilterPostcodes);
        // TODO: complete test assertions
    }
    
    /**
     * @throws ApiException if the API call fails
     */
    @Test
    public void timeMapTest() throws Exception {
        // TODO: assign appropriate parameter values
        RequestTimeMap requestTimeMap = null;

        // TODO: delete this line and uncomment the next
        // ResponseTimeMap response = api.timeMap(requestTimeMap);
        // TODO: complete test assertions
    }
    
}
