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
    define(['ApiClient', 'model/ResponseTimeFilterPostcodeDistrictsResult'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ResponseTimeFilterPostcodeDistrictsResult'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseTimeFilterPostcodeDistricts = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.ResponseTimeFilterPostcodeDistrictsResult);
  }
}(this, function(ApiClient, ResponseTimeFilterPostcodeDistrictsResult) {
  'use strict';



  /**
   * The ResponseTimeFilterPostcodeDistricts model module.
   * @module model/ResponseTimeFilterPostcodeDistricts
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseTimeFilterPostcodeDistricts</code>.
   * @alias module:model/ResponseTimeFilterPostcodeDistricts
   * @class
   * @param results {Array.<module:model/ResponseTimeFilterPostcodeDistrictsResult>} 
   */
  var exports = function(results) {
    var _this = this;

    _this['results'] = results;
  };

  /**
   * Constructs a <code>ResponseTimeFilterPostcodeDistricts</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseTimeFilterPostcodeDistricts} obj Optional instance to populate.
   * @return {module:model/ResponseTimeFilterPostcodeDistricts} The populated <code>ResponseTimeFilterPostcodeDistricts</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('results')) {
        obj['results'] = ApiClient.convertToType(data['results'], [ResponseTimeFilterPostcodeDistrictsResult]);
      }
    }
    return obj;
  }

  /**
   * @member {Array.<module:model/ResponseTimeFilterPostcodeDistrictsResult>} results
   */
  exports.prototype['results'] = undefined;



  return exports;
}));


