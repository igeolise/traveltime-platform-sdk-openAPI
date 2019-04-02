/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 *
 * OpenAPI Generator version: 3.3.4
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/ResponseFares', 'model/ResponseRoute'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ResponseFares'), require('./ResponseRoute'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseRoutesProperties = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.ResponseFares, root.TravelTimePlatformApi.ResponseRoute);
  }
}(this, function(ApiClient, ResponseFares, ResponseRoute) {
  'use strict';



  /**
   * The ResponseRoutesProperties model module.
   * @module model/ResponseRoutesProperties
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseRoutesProperties</code>.
   * @alias module:model/ResponseRoutesProperties
   * @class
   */
  var exports = function() {
    var _this = this;

  };

  /**
   * Constructs a <code>ResponseRoutesProperties</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseRoutesProperties} obj Optional instance to populate.
   * @return {module:model/ResponseRoutesProperties} The populated <code>ResponseRoutesProperties</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('travel_time')) {
        obj['travel_time'] = ApiClient.convertToType(data['travel_time'], 'Number');
      }
      if (data.hasOwnProperty('distance')) {
        obj['distance'] = ApiClient.convertToType(data['distance'], 'Number');
      }
      if (data.hasOwnProperty('fares')) {
        obj['fares'] = ResponseFares.constructFromObject(data['fares']);
      }
      if (data.hasOwnProperty('route')) {
        obj['route'] = ResponseRoute.constructFromObject(data['route']);
      }
    }
    return obj;
  }

  /**
   * @member {Number} travel_time
   */
  exports.prototype['travel_time'] = undefined;
  /**
   * @member {Number} distance
   */
  exports.prototype['distance'] = undefined;
  /**
   * @member {module:model/ResponseFares} fares
   */
  exports.prototype['fares'] = undefined;
  /**
   * @member {module:model/ResponseRoute} route
   */
  exports.prototype['route'] = undefined;



  return exports;
}));


