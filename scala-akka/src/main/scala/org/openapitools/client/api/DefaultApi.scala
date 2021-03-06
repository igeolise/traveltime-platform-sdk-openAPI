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
 */
package org.openapitools.client.api

import org.openapitools.client.model.RequestRoutes
import org.openapitools.client.model.RequestSupportedLocations
import org.openapitools.client.model.RequestTimeFilter
import org.openapitools.client.model.RequestTimeFilterFast
import org.openapitools.client.model.RequestTimeFilterPostcodeDistricts
import org.openapitools.client.model.RequestTimeFilterPostcodeSectors
import org.openapitools.client.model.RequestTimeFilterPostcodes
import org.openapitools.client.model.RequestTimeMap
import org.openapitools.client.model.ResponseError
import org.openapitools.client.model.ResponseGeocoding
import org.openapitools.client.model.ResponseMapInfo
import org.openapitools.client.model.ResponseRoutes
import org.openapitools.client.model.ResponseSupportedLocations
import org.openapitools.client.model.ResponseTimeFilter
import org.openapitools.client.model.ResponseTimeFilterFast
import org.openapitools.client.model.ResponseTimeFilterPostcodeDistricts
import org.openapitools.client.model.ResponseTimeFilterPostcodeSectors
import org.openapitools.client.model.ResponseTimeFilterPostcodes
import org.openapitools.client.model.ResponseTimeMap
import org.openapitools.client.core._
import org.openapitools.client.core.CollectionFormats._
import org.openapitools.client.core.ApiKeyLocations._

object DefaultApi {

  def apply(baseUrl: String = "https://api.traveltimeapp.com") = new DefaultApi(baseUrl)
}

class DefaultApi(baseUrl: String) {
  
  /**
   * Expected answers:
   *   code 200 : ResponseGeocoding (Match a query string to geographic coordinates. [Docs link](http://docs.traveltime.com/reference/geocoding-search/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param lat 
   * @param lng 
   * @param withinCountry 
   */
  def geocodingReverseSearch(lat: Double, lng: Double, withinCountry: Option[String] = None)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseGeocoding] =
    ApiRequest[ResponseGeocoding](ApiMethods.GET, baseUrl, "/v4/geocoding/reverse", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withQueryParam("lat", lat)
      .withQueryParam("lng", lng)
      .withQueryParam("within.country", withinCountry)
      .withSuccessResponse[ResponseGeocoding](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseGeocoding (Match a query string to geographic coordinates. [Docs link](http://docs.traveltime.com/reference/geocoding-search/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param query 
   * @param focusLat 
   * @param focusLng 
   * @param withinCountry 
   */
  def geocodingSearch(query: String, focusLat: Option[Double] = None, focusLng: Option[Double] = None, withinCountry: Option[String] = None)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseGeocoding] =
    ApiRequest[ResponseGeocoding](ApiMethods.GET, baseUrl, "/v4/geocoding/search", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withQueryParam("query", query)
      .withQueryParam("focus.lat", focusLat)
      .withQueryParam("focus.lng", focusLng)
      .withQueryParam("within.country", withinCountry)
      .withSuccessResponse[ResponseGeocoding](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseMapInfo (Returns information about currently supported countries. [Docs link](http://docs.traveltime.com/reference/map-info/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   */
  def mapInfo()(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseMapInfo] =
    ApiRequest[ResponseMapInfo](ApiMethods.GET, baseUrl, "/v4/map-info", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withSuccessResponse[ResponseMapInfo](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseRoutes (Returns routing information between source and destinations. [Docs link](http://docs.traveltime.com/reference/routes/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestRoutes 
   */
  def routes(requestRoutes: RequestRoutes)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseRoutes] =
    ApiRequest[ResponseRoutes](ApiMethods.POST, baseUrl, "/v4/routes", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestRoutes)
      .withSuccessResponse[ResponseRoutes](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseSupportedLocations (Find out what points are supported by our api. [Docs link](http://docs.traveltime.com/reference/supported-locations/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestSupportedLocations 
   */
  def supportedLocations(requestSupportedLocations: RequestSupportedLocations)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseSupportedLocations] =
    ApiRequest[ResponseSupportedLocations](ApiMethods.POST, baseUrl, "/v4/supported-locations", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestSupportedLocations)
      .withSuccessResponse[ResponseSupportedLocations](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseTimeFilter (Given origin and destination points filter out points that cannot be reached within specified time limit. [Docs link](http://docs.traveltime.com/reference/time-filter))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestTimeFilter 
   */
  def timeFilter(requestTimeFilter: RequestTimeFilter)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseTimeFilter] =
    ApiRequest[ResponseTimeFilter](ApiMethods.POST, baseUrl, "/v4/time-filter", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestTimeFilter)
      .withSuccessResponse[ResponseTimeFilter](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseTimeFilterFast (A very fast version of Time Filter. [Docs link](http://docs.traveltime.com/reference/time-filter-fast/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestTimeFilterFast 
   */
  def timeFilterFast(requestTimeFilterFast: RequestTimeFilterFast)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseTimeFilterFast] =
    ApiRequest[ResponseTimeFilterFast](ApiMethods.POST, baseUrl, "/v4/time-filter/fast", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestTimeFilterFast)
      .withSuccessResponse[ResponseTimeFilterFast](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseTimeFilterPostcodeDistricts (Find districts that have a certain coverage from origin and get statistics about postcodes within such districts. [Docs link](http://docs.traveltime.com/reference/postcode-district-filter/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestTimeFilterPostcodeDistricts 
   */
  def timeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts: RequestTimeFilterPostcodeDistricts)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseTimeFilterPostcodeDistricts] =
    ApiRequest[ResponseTimeFilterPostcodeDistricts](ApiMethods.POST, baseUrl, "/v4/time-filter/postcode-districts", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestTimeFilterPostcodeDistricts)
      .withSuccessResponse[ResponseTimeFilterPostcodeDistricts](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseTimeFilterPostcodeSectors (Find sectors that have a certain coverage from origin and get statistics about postcodes within such sectors. [Docs link](http://docs.traveltime.com/reference/postcode-sector-filter/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestTimeFilterPostcodeSectors 
   */
  def timeFilterPostcodeSectors(requestTimeFilterPostcodeSectors: RequestTimeFilterPostcodeSectors)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseTimeFilterPostcodeSectors] =
    ApiRequest[ResponseTimeFilterPostcodeSectors](ApiMethods.POST, baseUrl, "/v4/time-filter/postcode-sectors", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestTimeFilterPostcodeSectors)
      .withSuccessResponse[ResponseTimeFilterPostcodeSectors](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseTimeFilterPostcodes (Find reachable postcodes from origin and get statistics about such postcodes. [Docs link](http://docs.traveltime.com/reference/postcode-search/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestTimeFilterPostcodes 
   */
  def timeFilterPostcodes(requestTimeFilterPostcodes: RequestTimeFilterPostcodes)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseTimeFilterPostcodes] =
    ApiRequest[ResponseTimeFilterPostcodes](ApiMethods.POST, baseUrl, "/v4/time-filter/postcodes", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestTimeFilterPostcodes)
      .withSuccessResponse[ResponseTimeFilterPostcodes](200)
      .withDefaultErrorResponse[ResponseError]
      

  /**
   * Expected answers:
   *   code 200 : ResponseTimeMap (Given origin coordinates, find shapes of zones reachable within corresponding travel time. [Docs link](http://docs.traveltime.com/reference/time-map/))
   *   code 0 : ResponseError (The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response))
   * 
   * Available security schemes:
   *   ApiKey (apiKey)
   *   ApplicationId (apiKey)
   * 
   * @param requestTimeMap 
   */
  def timeMap(requestTimeMap: RequestTimeMap)(implicit apiKey: ApiKeyValue, apiKey: ApiKeyValue): ApiRequest[ResponseTimeMap] =
    ApiRequest[ResponseTimeMap](ApiMethods.POST, baseUrl, "/v4/time-map", "application/json")
      .withApiKey(apiKey, "X-Api-Key", HEADER)
      .withApiKey(apiKey, "X-Application-Id", HEADER)
      .withBody(requestTimeMap)
      .withSuccessResponse[ResponseTimeMap](200)
      .withDefaultErrorResponse[ResponseError]
      



}

