<?php

/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Source files are located at:
 *
 * > swagger-codegen/modules/swagger-codegen/src/main/resources/php-laravel/
 */


namespace App\Http\Controllers;

use Illuminate\Support\Facades\Request;

class DefaultController extends Controller
{
    /**
     * Constructor
     */
    public function __construct()
    {
    }

    /**
     * Operation geocodingReverseSearch
     *
     * .
     *
     *
     * @return Http response
     */
    public function geocodingReverseSearch()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['focusLat'])) {
            throw new \InvalidArgumentException('Missing the required parameter $focusLat when calling geocodingReverseSearch');
        }
        $focusLat = $input['focusLat'];

        if (!isset($input['focusLng'])) {
            throw new \InvalidArgumentException('Missing the required parameter $focusLng when calling geocodingReverseSearch');
        }
        $focusLng = $input['focusLng'];

        $withinCountry = $input['withinCountry'];


        return response('How about implementing geocodingReverseSearch as a get method ?');
    }
    /**
     * Operation geocodingSearch
     *
     * .
     *
     *
     * @return Http response
     */
    public function geocodingSearch()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['query'])) {
            throw new \InvalidArgumentException('Missing the required parameter $query when calling geocodingSearch');
        }
        $query = $input['query'];

        $withinCountry = $input['withinCountry'];

        $focusLat = $input['focusLat'];

        $focusLng = $input['focusLng'];


        return response('How about implementing geocodingSearch as a get method ?');
    }
    /**
     * Operation mapInfo
     *
     * .
     *
     *
     * @return Http response
     */
    public function mapInfo()
    {
        $input = Request::all();

        //path params validation


        //not path params validation

        return response('How about implementing mapInfo as a get method ?');
    }
    /**
     * Operation routes
     *
     * .
     *
     *
     * @return Http response
     */
    public function routes()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestRoutes'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestRoutes when calling routes');
        }
        $requestRoutes = $input['requestRoutes'];


        return response('How about implementing routes as a post method ?');
    }
    /**
     * Operation supportedLocations
     *
     * .
     *
     *
     * @return Http response
     */
    public function supportedLocations()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestSupportedLocations'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestSupportedLocations when calling supportedLocations');
        }
        $requestSupportedLocations = $input['requestSupportedLocations'];


        return response('How about implementing supportedLocations as a post method ?');
    }
    /**
     * Operation timeFilter
     *
     * .
     *
     *
     * @return Http response
     */
    public function timeFilter()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestTimeFilter'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestTimeFilter when calling timeFilter');
        }
        $requestTimeFilter = $input['requestTimeFilter'];


        return response('How about implementing timeFilter as a post method ?');
    }
    /**
     * Operation timeFilterFast
     *
     * .
     *
     *
     * @return Http response
     */
    public function timeFilterFast()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestTimeFilterFast'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestTimeFilterFast when calling timeFilterFast');
        }
        $requestTimeFilterFast = $input['requestTimeFilterFast'];


        return response('How about implementing timeFilterFast as a post method ?');
    }
    /**
     * Operation timeFilterPostcodeDistricts
     *
     * .
     *
     *
     * @return Http response
     */
    public function timeFilterPostcodeDistricts()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestTimeFilterPostcodeDistricts'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestTimeFilterPostcodeDistricts when calling timeFilterPostcodeDistricts');
        }
        $requestTimeFilterPostcodeDistricts = $input['requestTimeFilterPostcodeDistricts'];


        return response('How about implementing timeFilterPostcodeDistricts as a post method ?');
    }
    /**
     * Operation timeFilterPostcodeSectors
     *
     * .
     *
     *
     * @return Http response
     */
    public function timeFilterPostcodeSectors()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestTimeFilterPostcodeSectors'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestTimeFilterPostcodeSectors when calling timeFilterPostcodeSectors');
        }
        $requestTimeFilterPostcodeSectors = $input['requestTimeFilterPostcodeSectors'];


        return response('How about implementing timeFilterPostcodeSectors as a post method ?');
    }
    /**
     * Operation timeFilterPostcodes
     *
     * .
     *
     *
     * @return Http response
     */
    public function timeFilterPostcodes()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestTimeFilterPostcodes'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestTimeFilterPostcodes when calling timeFilterPostcodes');
        }
        $requestTimeFilterPostcodes = $input['requestTimeFilterPostcodes'];


        return response('How about implementing timeFilterPostcodes as a post method ?');
    }
    /**
     * Operation timeMap
     *
     * .
     *
     *
     * @return Http response
     */
    public function timeMap()
    {
        $input = Request::all();

        //path params validation


        //not path params validation
        if (!isset($input['requestTimeMap'])) {
            throw new \InvalidArgumentException('Missing the required parameter $requestTimeMap when calling timeMap');
        }
        $requestTimeMap = $input['requestTimeMap'];


        return response('How about implementing timeMap as a post method ?');
    }
}
