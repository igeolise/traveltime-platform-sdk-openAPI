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
    define(['ApiClient', 'model/RequestTimeFilterFastArrivalManyToOneSearch', 'model/RequestTimeFilterFastArrivalOneToManySearch'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./RequestTimeFilterFastArrivalManyToOneSearch'), require('./RequestTimeFilterFastArrivalOneToManySearch'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.RequestTimeFilterFastArrivalSearches = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.RequestTimeFilterFastArrivalManyToOneSearch, root.TravelTimePlatformApi.RequestTimeFilterFastArrivalOneToManySearch);
  }
}(this, function(ApiClient, RequestTimeFilterFastArrivalManyToOneSearch, RequestTimeFilterFastArrivalOneToManySearch) {
  'use strict';



  /**
   * The RequestTimeFilterFastArrivalSearches model module.
   * @module model/RequestTimeFilterFastArrivalSearches
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>RequestTimeFilterFastArrivalSearches</code>.
   * @alias module:model/RequestTimeFilterFastArrivalSearches
   * @class
   */
  var exports = function() {
    var _this = this;

  };

  /**
   * Constructs a <code>RequestTimeFilterFastArrivalSearches</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/RequestTimeFilterFastArrivalSearches} obj Optional instance to populate.
   * @return {module:model/RequestTimeFilterFastArrivalSearches} The populated <code>RequestTimeFilterFastArrivalSearches</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('many_to_one')) {
        obj['many_to_one'] = ApiClient.convertToType(data['many_to_one'], [RequestTimeFilterFastArrivalManyToOneSearch]);
      }
      if (data.hasOwnProperty('one_to_many')) {
        obj['one_to_many'] = ApiClient.convertToType(data['one_to_many'], [RequestTimeFilterFastArrivalOneToManySearch]);
      }
    }
    return obj;
  }

  /**
   * @member {Array.<module:model/RequestTimeFilterFastArrivalManyToOneSearch>} many_to_one
   */
  exports.prototype['many_to_one'] = undefined;
  /**
   * @member {Array.<module:model/RequestTimeFilterFastArrivalOneToManySearch>} one_to_many
   */
  exports.prototype['one_to_many'] = undefined;



  return exports;
}));


