/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */


import ApiClient from "../ApiClient";
import RequestRoutes from '../model/RequestRoutes';
import RequestSupportedLocations from '../model/RequestSupportedLocations';
import RequestTimeFilter from '../model/RequestTimeFilter';
import RequestTimeFilterFast from '../model/RequestTimeFilterFast';
import RequestTimeFilterPostcodeDistricts from '../model/RequestTimeFilterPostcodeDistricts';
import RequestTimeFilterPostcodeSectors from '../model/RequestTimeFilterPostcodeSectors';
import RequestTimeFilterPostcodes from '../model/RequestTimeFilterPostcodes';
import RequestTimeMap from '../model/RequestTimeMap';
import ResponseError from '../model/ResponseError';
import ResponseGeocoding from '../model/ResponseGeocoding';
import ResponseMapInfo from '../model/ResponseMapInfo';
import ResponseRoutes from '../model/ResponseRoutes';
import ResponseSupportedLocations from '../model/ResponseSupportedLocations';
import ResponseTimeFilter from '../model/ResponseTimeFilter';
import ResponseTimeFilterFast from '../model/ResponseTimeFilterFast';
import ResponseTimeFilterPostcodeDistricts from '../model/ResponseTimeFilterPostcodeDistricts';
import ResponseTimeFilterPostcodeSectors from '../model/ResponseTimeFilterPostcodeSectors';
import ResponseTimeFilterPostcodes from '../model/ResponseTimeFilterPostcodes';
import ResponseTimeMap from '../model/ResponseTimeMap';

/**
* Default service.
* @module api/DefaultApi
* @version 1.0.0
*/
export default class DefaultApi {

    /**
    * Constructs a new DefaultApi. 
    * @alias module:api/DefaultApi
    * @class
    * @param {module:ApiClient} [apiClient] Optional API client implementation to use,
    * default to {@link module:ApiClient#instance} if unspecified.
    */
    constructor(apiClient) {
        this.apiClient = apiClient || ApiClient.instance;
    }


    /**
     * Callback function to receive the result of the geocodingReverseSearch operation.
     * @callback module:api/DefaultApi~geocodingReverseSearchCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseGeocoding} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {Number} focusLat 
     * @param {Number} focusLng 
     * @param {Object} opts Optional parameters
     * @param {String} opts.withinCountry 
     * @param {module:api/DefaultApi~geocodingReverseSearchCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseGeocoding}
     */
    geocodingReverseSearch(focusLat, focusLng, opts, callback) {
      opts = opts || {};
      let postBody = null;
      // verify the required parameter 'focusLat' is set
      if (focusLat === undefined || focusLat === null) {
        throw new Error("Missing the required parameter 'focusLat' when calling geocodingReverseSearch");
      }
      // verify the required parameter 'focusLng' is set
      if (focusLng === undefined || focusLng === null) {
        throw new Error("Missing the required parameter 'focusLng' when calling geocodingReverseSearch");
      }

      let pathParams = {
      };
      let queryParams = {
        'focus.lat': focusLat,
        'focus.lng': focusLng,
        'within.country': opts['withinCountry']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ResponseGeocoding;
      return this.apiClient.callApi(
        '/v4/geocoding/reverse', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the geocodingSearch operation.
     * @callback module:api/DefaultApi~geocodingSearchCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseGeocoding} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {String} query 
     * @param {Object} opts Optional parameters
     * @param {String} opts.withinCountry 
     * @param {Number} opts.focusLat 
     * @param {Number} opts.focusLng 
     * @param {module:api/DefaultApi~geocodingSearchCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseGeocoding}
     */
    geocodingSearch(query, opts, callback) {
      opts = opts || {};
      let postBody = null;
      // verify the required parameter 'query' is set
      if (query === undefined || query === null) {
        throw new Error("Missing the required parameter 'query' when calling geocodingSearch");
      }

      let pathParams = {
      };
      let queryParams = {
        'query': query,
        'within.country': opts['withinCountry'],
        'focus.lat': opts['focusLat'],
        'focus.lng': opts['focusLng']
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ResponseGeocoding;
      return this.apiClient.callApi(
        '/v4/geocoding/search', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the mapInfo operation.
     * @callback module:api/DefaultApi~mapInfoCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseMapInfo} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:api/DefaultApi~mapInfoCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseMapInfo}
     */
    mapInfo(callback) {
      let postBody = null;

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = [];
      let accepts = ['application/json'];
      let returnType = ResponseMapInfo;
      return this.apiClient.callApi(
        '/v4/map-info', 'GET',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the routes operation.
     * @callback module:api/DefaultApi~routesCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseRoutes} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestRoutes} requestRoutes 
     * @param {module:api/DefaultApi~routesCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseRoutes}
     */
    routes(requestRoutes, callback) {
      let postBody = requestRoutes;
      // verify the required parameter 'requestRoutes' is set
      if (requestRoutes === undefined || requestRoutes === null) {
        throw new Error("Missing the required parameter 'requestRoutes' when calling routes");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseRoutes;
      return this.apiClient.callApi(
        '/v4/routes', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the supportedLocations operation.
     * @callback module:api/DefaultApi~supportedLocationsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseSupportedLocations} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestSupportedLocations} requestSupportedLocations 
     * @param {module:api/DefaultApi~supportedLocationsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseSupportedLocations}
     */
    supportedLocations(requestSupportedLocations, callback) {
      let postBody = requestSupportedLocations;
      // verify the required parameter 'requestSupportedLocations' is set
      if (requestSupportedLocations === undefined || requestSupportedLocations === null) {
        throw new Error("Missing the required parameter 'requestSupportedLocations' when calling supportedLocations");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseSupportedLocations;
      return this.apiClient.callApi(
        '/v4/supported-locations', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the timeFilter operation.
     * @callback module:api/DefaultApi~timeFilterCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseTimeFilter} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestTimeFilter} requestTimeFilter 
     * @param {module:api/DefaultApi~timeFilterCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseTimeFilter}
     */
    timeFilter(requestTimeFilter, callback) {
      let postBody = requestTimeFilter;
      // verify the required parameter 'requestTimeFilter' is set
      if (requestTimeFilter === undefined || requestTimeFilter === null) {
        throw new Error("Missing the required parameter 'requestTimeFilter' when calling timeFilter");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseTimeFilter;
      return this.apiClient.callApi(
        '/v4/time-filter', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the timeFilterFast operation.
     * @callback module:api/DefaultApi~timeFilterFastCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseTimeFilterFast} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestTimeFilterFast} requestTimeFilterFast 
     * @param {module:api/DefaultApi~timeFilterFastCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseTimeFilterFast}
     */
    timeFilterFast(requestTimeFilterFast, callback) {
      let postBody = requestTimeFilterFast;
      // verify the required parameter 'requestTimeFilterFast' is set
      if (requestTimeFilterFast === undefined || requestTimeFilterFast === null) {
        throw new Error("Missing the required parameter 'requestTimeFilterFast' when calling timeFilterFast");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseTimeFilterFast;
      return this.apiClient.callApi(
        '/v4/time-filter/fast', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the timeFilterPostcodeDistricts operation.
     * @callback module:api/DefaultApi~timeFilterPostcodeDistrictsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseTimeFilterPostcodeDistricts} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestTimeFilterPostcodeDistricts} requestTimeFilterPostcodeDistricts 
     * @param {module:api/DefaultApi~timeFilterPostcodeDistrictsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseTimeFilterPostcodeDistricts}
     */
    timeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts, callback) {
      let postBody = requestTimeFilterPostcodeDistricts;
      // verify the required parameter 'requestTimeFilterPostcodeDistricts' is set
      if (requestTimeFilterPostcodeDistricts === undefined || requestTimeFilterPostcodeDistricts === null) {
        throw new Error("Missing the required parameter 'requestTimeFilterPostcodeDistricts' when calling timeFilterPostcodeDistricts");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseTimeFilterPostcodeDistricts;
      return this.apiClient.callApi(
        '/v4/time-filter/postcode-districts', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the timeFilterPostcodeSectors operation.
     * @callback module:api/DefaultApi~timeFilterPostcodeSectorsCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseTimeFilterPostcodeSectors} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestTimeFilterPostcodeSectors} requestTimeFilterPostcodeSectors 
     * @param {module:api/DefaultApi~timeFilterPostcodeSectorsCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseTimeFilterPostcodeSectors}
     */
    timeFilterPostcodeSectors(requestTimeFilterPostcodeSectors, callback) {
      let postBody = requestTimeFilterPostcodeSectors;
      // verify the required parameter 'requestTimeFilterPostcodeSectors' is set
      if (requestTimeFilterPostcodeSectors === undefined || requestTimeFilterPostcodeSectors === null) {
        throw new Error("Missing the required parameter 'requestTimeFilterPostcodeSectors' when calling timeFilterPostcodeSectors");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseTimeFilterPostcodeSectors;
      return this.apiClient.callApi(
        '/v4/time-filter/postcode-sectors', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the timeFilterPostcodes operation.
     * @callback module:api/DefaultApi~timeFilterPostcodesCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseTimeFilterPostcodes} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestTimeFilterPostcodes} requestTimeFilterPostcodes 
     * @param {module:api/DefaultApi~timeFilterPostcodesCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseTimeFilterPostcodes}
     */
    timeFilterPostcodes(requestTimeFilterPostcodes, callback) {
      let postBody = requestTimeFilterPostcodes;
      // verify the required parameter 'requestTimeFilterPostcodes' is set
      if (requestTimeFilterPostcodes === undefined || requestTimeFilterPostcodes === null) {
        throw new Error("Missing the required parameter 'requestTimeFilterPostcodes' when calling timeFilterPostcodes");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json'];
      let returnType = ResponseTimeFilterPostcodes;
      return this.apiClient.callApi(
        '/v4/time-filter/postcodes', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }

    /**
     * Callback function to receive the result of the timeMap operation.
     * @callback module:api/DefaultApi~timeMapCallback
     * @param {String} error Error message, if any.
     * @param {module:model/ResponseTimeMap} data The data returned by the service call.
     * @param {String} response The complete HTTP response.
     */

    /**
     * @param {module:model/RequestTimeMap} requestTimeMap 
     * @param {module:api/DefaultApi~timeMapCallback} callback The callback function, accepting three arguments: error, data, response
     * data is of type: {@link module:model/ResponseTimeMap}
     */
    timeMap(requestTimeMap, callback) {
      let postBody = requestTimeMap;
      // verify the required parameter 'requestTimeMap' is set
      if (requestTimeMap === undefined || requestTimeMap === null) {
        throw new Error("Missing the required parameter 'requestTimeMap' when calling timeMap");
      }

      let pathParams = {
      };
      let queryParams = {
      };
      let headerParams = {
      };
      let formParams = {
      };

      let authNames = ['ApiKey', 'ApplicationId'];
      let contentTypes = ['application/json'];
      let accepts = ['application/json', 'application/vnd.wkt+json', 'application/vnd.wkt-no-holes+json', 'application/vnd.bounding-boxes+json'];
      let returnType = ResponseTimeMap;
      return this.apiClient.callApi(
        '/v4/time-map', 'POST',
        pathParams, queryParams, headerParams, formParams, postBody,
        authNames, contentTypes, accepts, returnType, null, callback
      );
    }


}
