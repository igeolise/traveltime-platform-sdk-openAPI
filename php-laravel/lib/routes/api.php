<?php

/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 * Source files are located at:
 *
 * > https://github.com/OpenAPITools/openapi-generator/blob/master/modules/openapi-generator/src/main/resources/php-laravel/
 */

/**
 * get geocodingReverseSearch
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::get('/v4/geocoding/reverse', 'DefaultController@geocodingReverseSearch');
/**
 * get geocodingSearch
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::get('/v4/geocoding/search', 'DefaultController@geocodingSearch');
/**
 * get mapInfo
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::get('/v4/map-info', 'DefaultController@mapInfo');
/**
 * post routes
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/routes', 'DefaultController@routes');
/**
 * post supportedLocations
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/supported-locations', 'DefaultController@supportedLocations');
/**
 * post timeFilter
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/time-filter', 'DefaultController@timeFilter');
/**
 * post timeFilterFast
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/time-filter/fast', 'DefaultController@timeFilterFast');
/**
 * post timeFilterPostcodeDistricts
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/time-filter/postcode-districts', 'DefaultController@timeFilterPostcodeDistricts');
/**
 * post timeFilterPostcodeSectors
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/time-filter/postcode-sectors', 'DefaultController@timeFilterPostcodeSectors');
/**
 * post timeFilterPostcodes
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json]
 */
Route::post('/v4/time-filter/postcodes', 'DefaultController@timeFilterPostcodes');
/**
 * post timeMap
 * Summary: 
 * Notes: 
 * Output-Formats: [application/json, application/vnd.wkt+json, application/vnd.wkt-no-holes+json, application/vnd.bounding-boxes+json]
 */
Route::post('/v4/time-map', 'DefaultController@timeMap');

