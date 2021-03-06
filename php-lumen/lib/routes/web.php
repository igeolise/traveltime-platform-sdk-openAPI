<?php

/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 * PHP version 7.1.3
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/**
 * TravelTime API
 * @version 1.2.1
 */

$router->get('/', function () use ($router) {
    return $router->app->version();
});

/**
 * get geocodingReverseSearch
 * Summary: 
 * Notes: 
 */
$router->get('/v4/geocoding/reverse', 'DefaultApi@geocodingReverseSearch');
/**
 * get geocodingSearch
 * Summary: 
 * Notes: 
 */
$router->get('/v4/geocoding/search', 'DefaultApi@geocodingSearch');
/**
 * get mapInfo
 * Summary: 
 * Notes: 
 */
$router->get('/v4/map-info', 'DefaultApi@mapInfo');
/**
 * post routes
 * Summary: 
 * Notes: 
 */
$router->post('/v4/routes', 'DefaultApi@routes');
/**
 * post supportedLocations
 * Summary: 
 * Notes: 
 */
$router->post('/v4/supported-locations', 'DefaultApi@supportedLocations');
/**
 * post timeFilter
 * Summary: 
 * Notes: 
 */
$router->post('/v4/time-filter', 'DefaultApi@timeFilter');
/**
 * post timeFilterFast
 * Summary: 
 * Notes: 
 */
$router->post('/v4/time-filter/fast', 'DefaultApi@timeFilterFast');
/**
 * post timeFilterPostcodeDistricts
 * Summary: 
 * Notes: 
 */
$router->post('/v4/time-filter/postcode-districts', 'DefaultApi@timeFilterPostcodeDistricts');
/**
 * post timeFilterPostcodeSectors
 * Summary: 
 * Notes: 
 */
$router->post('/v4/time-filter/postcode-sectors', 'DefaultApi@timeFilterPostcodeSectors');
/**
 * post timeFilterPostcodes
 * Summary: 
 * Notes: 
 */
$router->post('/v4/time-filter/postcodes', 'DefaultApi@timeFilterPostcodes');
/**
 * post timeMap
 * Summary: 
 * Notes: 
 */
$router->post('/v4/time-map', 'DefaultApi@timeMap');

