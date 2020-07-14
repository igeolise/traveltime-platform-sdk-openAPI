/**
 * @fileoverview AUTOMATICALLY GENERATED service for API.Client.DefaultApi.
 * Do not edit this file by hand or your changes will be lost next time it is
 * generated.
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 * Version: 1.2.1
 * Generated by: org.openapitools.codegen.languages.JavascriptClosureAngularClientCodegen
 */
goog.provide('API.Client.DefaultApi');

goog.require('API.Client.RequestRoutes');
goog.require('API.Client.RequestSupportedLocations');
goog.require('API.Client.RequestTimeFilter');
goog.require('API.Client.RequestTimeFilterFast');
goog.require('API.Client.RequestTimeFilterPostcodeDistricts');
goog.require('API.Client.RequestTimeFilterPostcodeSectors');
goog.require('API.Client.RequestTimeFilterPostcodes');
goog.require('API.Client.RequestTimeMap');
goog.require('API.Client.ResponseError');
goog.require('API.Client.ResponseGeocoding');
goog.require('API.Client.ResponseMapInfo');
goog.require('API.Client.ResponseRoutes');
goog.require('API.Client.ResponseSupportedLocations');
goog.require('API.Client.ResponseTimeFilter');
goog.require('API.Client.ResponseTimeFilterFast');
goog.require('API.Client.ResponseTimeFilterPostcodeDistricts');
goog.require('API.Client.ResponseTimeFilterPostcodeSectors');
goog.require('API.Client.ResponseTimeFilterPostcodes');
goog.require('API.Client.ResponseTimeMap');

/**
 * @constructor
 * @param {!angular.$http} $http
 * @param {!Object} $httpParamSerializer
 * @param {!angular.$injector} $injector
 * @struct
 */
API.Client.DefaultApi = function($http, $httpParamSerializer, $injector) {
  /** @private {!string} */
  this.basePath_ = $injector.has('DefaultApiBasePath') ?
                   /** @type {!string} */ ($injector.get('DefaultApiBasePath')) :
                   'https://api.traveltimeapp.com';

  /** @private {!Object<string, string>} */
  this.defaultHeaders_ = $injector.has('DefaultApiDefaultHeaders') ?
                   /** @type {!Object<string, string>} */ (
                       $injector.get('DefaultApiDefaultHeaders')) :
                   {};

  /** @private {!angular.$http} */
  this.http_ = $http;

  /** @package {!Object} */
  this.httpParamSerializer = $injector.get('$httpParamSerializer');
}
API.Client.DefaultApi.$inject = ['$http', '$httpParamSerializer', '$injector'];

/**
 * 
 * 
 * @param {!number} lat 
 * @param {!number} lng 
 * @param {!string=} opt_withinCountry 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseGeocoding>}
 */
API.Client.DefaultApi.prototype.geocodingReverseSearch = function(lat, lng, opt_withinCountry, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/geocoding/reverse';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'lat' is set
  if (!lat) {
    throw new Error('Missing required parameter lat when calling geocodingReverseSearch');
  }
  // verify required parameter 'lng' is set
  if (!lng) {
    throw new Error('Missing required parameter lng when calling geocodingReverseSearch');
  }
  if (lat !== undefined) {
    queryParameters['lat'] = lat;
  }

  if (lng !== undefined) {
    queryParameters['lng'] = lng;
  }

  if (opt_withinCountry !== undefined) {
    queryParameters['within.country'] = opt_withinCountry;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!string} query 
 * @param {!number=} opt_focusLat 
 * @param {!number=} opt_focusLng 
 * @param {!string=} opt_withinCountry 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseGeocoding>}
 */
API.Client.DefaultApi.prototype.geocodingSearch = function(query, opt_focusLat, opt_focusLng, opt_withinCountry, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/geocoding/search';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'query' is set
  if (!query) {
    throw new Error('Missing required parameter query when calling geocodingSearch');
  }
  if (query !== undefined) {
    queryParameters['query'] = query;
  }

  if (opt_focusLat !== undefined) {
    queryParameters['focus.lat'] = opt_focusLat;
  }

  if (opt_focusLng !== undefined) {
    queryParameters['focus.lng'] = opt_focusLng;
  }

  if (opt_withinCountry !== undefined) {
    queryParameters['within.country'] = opt_withinCountry;
  }

  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseMapInfo>}
 */
API.Client.DefaultApi.prototype.mapInfo = function(opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/map-info';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'GET',
    url: path,
    json: true,
            params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestRoutes} requestRoutes 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseRoutes>}
 */
API.Client.DefaultApi.prototype.routes = function(requestRoutes, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/routes';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestRoutes' is set
  if (!requestRoutes) {
    throw new Error('Missing required parameter requestRoutes when calling routes');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestRoutes,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestSupportedLocations} requestSupportedLocations 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseSupportedLocations>}
 */
API.Client.DefaultApi.prototype.supportedLocations = function(requestSupportedLocations, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/supported-locations';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestSupportedLocations' is set
  if (!requestSupportedLocations) {
    throw new Error('Missing required parameter requestSupportedLocations when calling supportedLocations');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestSupportedLocations,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestTimeFilter} requestTimeFilter 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseTimeFilter>}
 */
API.Client.DefaultApi.prototype.timeFilter = function(requestTimeFilter, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/time-filter';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestTimeFilter' is set
  if (!requestTimeFilter) {
    throw new Error('Missing required parameter requestTimeFilter when calling timeFilter');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestTimeFilter,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestTimeFilterFast} requestTimeFilterFast 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseTimeFilterFast>}
 */
API.Client.DefaultApi.prototype.timeFilterFast = function(requestTimeFilterFast, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/time-filter/fast';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestTimeFilterFast' is set
  if (!requestTimeFilterFast) {
    throw new Error('Missing required parameter requestTimeFilterFast when calling timeFilterFast');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestTimeFilterFast,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestTimeFilterPostcodeDistricts} requestTimeFilterPostcodeDistricts 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseTimeFilterPostcodeDistricts>}
 */
API.Client.DefaultApi.prototype.timeFilterPostcodeDistricts = function(requestTimeFilterPostcodeDistricts, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/time-filter/postcode-districts';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestTimeFilterPostcodeDistricts' is set
  if (!requestTimeFilterPostcodeDistricts) {
    throw new Error('Missing required parameter requestTimeFilterPostcodeDistricts when calling timeFilterPostcodeDistricts');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestTimeFilterPostcodeDistricts,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestTimeFilterPostcodeSectors} requestTimeFilterPostcodeSectors 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseTimeFilterPostcodeSectors>}
 */
API.Client.DefaultApi.prototype.timeFilterPostcodeSectors = function(requestTimeFilterPostcodeSectors, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/time-filter/postcode-sectors';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestTimeFilterPostcodeSectors' is set
  if (!requestTimeFilterPostcodeSectors) {
    throw new Error('Missing required parameter requestTimeFilterPostcodeSectors when calling timeFilterPostcodeSectors');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestTimeFilterPostcodeSectors,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestTimeFilterPostcodes} requestTimeFilterPostcodes 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseTimeFilterPostcodes>}
 */
API.Client.DefaultApi.prototype.timeFilterPostcodes = function(requestTimeFilterPostcodes, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/time-filter/postcodes';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestTimeFilterPostcodes' is set
  if (!requestTimeFilterPostcodes) {
    throw new Error('Missing required parameter requestTimeFilterPostcodes when calling timeFilterPostcodes');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestTimeFilterPostcodes,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}

/**
 * 
 * 
 * @param {!RequestTimeMap} requestTimeMap 
 * @param {!angular.$http.Config=} opt_extraHttpRequestParams Extra HTTP parameters to send.
 * @return {!angular.$q.Promise<!API.Client.ResponseTimeMap>}
 */
API.Client.DefaultApi.prototype.timeMap = function(requestTimeMap, opt_extraHttpRequestParams) {
  /** @const {string} */
  var path = this.basePath_ + '/v4/time-map';

  /** @type {!Object} */
  var queryParameters = {};

  /** @type {!Object} */
  var headerParams = angular.extend({}, this.defaultHeaders_);
  // verify required parameter 'requestTimeMap' is set
  if (!requestTimeMap) {
    throw new Error('Missing required parameter requestTimeMap when calling timeMap');
  }
  /** @type {!Object} */
  var httpRequestParams = {
    method: 'POST',
    url: path,
    json: true,
    data: requestTimeMap,
        params: queryParameters,
    headers: headerParams
  };

  if (opt_extraHttpRequestParams) {
    httpRequestParams = angular.extend(httpRequestParams, opt_extraHttpRequestParams);
  }

  return (/** @type {?} */ (this.http_))(httpRequestParams);
}
