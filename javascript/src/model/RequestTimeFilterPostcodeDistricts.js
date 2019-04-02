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
    define(['ApiClient', 'model/RequestTimeFilterPostcodeDistrictsArrivalSearch', 'model/RequestTimeFilterPostcodeDistrictsDepartureSearch'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./RequestTimeFilterPostcodeDistrictsArrivalSearch'), require('./RequestTimeFilterPostcodeDistrictsDepartureSearch'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.RequestTimeFilterPostcodeDistricts = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.RequestTimeFilterPostcodeDistrictsArrivalSearch, root.TravelTimePlatformApi.RequestTimeFilterPostcodeDistrictsDepartureSearch);
  }
}(this, function(ApiClient, RequestTimeFilterPostcodeDistrictsArrivalSearch, RequestTimeFilterPostcodeDistrictsDepartureSearch) {
  'use strict';



  /**
   * The RequestTimeFilterPostcodeDistricts model module.
   * @module model/RequestTimeFilterPostcodeDistricts
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>RequestTimeFilterPostcodeDistricts</code>.
   * @alias module:model/RequestTimeFilterPostcodeDistricts
   * @class
   */
  var exports = function() {
    var _this = this;

  };

  /**
   * Constructs a <code>RequestTimeFilterPostcodeDistricts</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/RequestTimeFilterPostcodeDistricts} obj Optional instance to populate.
   * @return {module:model/RequestTimeFilterPostcodeDistricts} The populated <code>RequestTimeFilterPostcodeDistricts</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('departure_searches')) {
        obj['departure_searches'] = ApiClient.convertToType(data['departure_searches'], [RequestTimeFilterPostcodeDistrictsDepartureSearch]);
      }
      if (data.hasOwnProperty('arrival_searches')) {
        obj['arrival_searches'] = ApiClient.convertToType(data['arrival_searches'], [RequestTimeFilterPostcodeDistrictsArrivalSearch]);
      }
    }
    return obj;
  }

  /**
   * @member {Array.<module:model/RequestTimeFilterPostcodeDistrictsDepartureSearch>} departure_searches
   */
  exports.prototype['departure_searches'] = undefined;
  /**
   * @member {Array.<module:model/RequestTimeFilterPostcodeDistrictsArrivalSearch>} arrival_searches
   */
  exports.prototype['arrival_searches'] = undefined;



  return exports;
}));


