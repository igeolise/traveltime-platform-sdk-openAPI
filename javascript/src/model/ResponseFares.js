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
    define(['ApiClient', 'model/ResponseFareTicket', 'model/ResponseFaresBreakdownItem'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ResponseFareTicket'), require('./ResponseFaresBreakdownItem'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseFares = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.ResponseFareTicket, root.TravelTimePlatformApi.ResponseFaresBreakdownItem);
  }
}(this, function(ApiClient, ResponseFareTicket, ResponseFaresBreakdownItem) {
  'use strict';



  /**
   * The ResponseFares model module.
   * @module model/ResponseFares
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseFares</code>.
   * @alias module:model/ResponseFares
   * @class
   * @param breakdown {Array.<module:model/ResponseFaresBreakdownItem>} 
   * @param ticketsTotal {Array.<module:model/ResponseFareTicket>} 
   */
  var exports = function(breakdown, ticketsTotal) {
    var _this = this;

    _this['breakdown'] = breakdown;
    _this['tickets_total'] = ticketsTotal;
  };

  /**
   * Constructs a <code>ResponseFares</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseFares} obj Optional instance to populate.
   * @return {module:model/ResponseFares} The populated <code>ResponseFares</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('breakdown')) {
        obj['breakdown'] = ApiClient.convertToType(data['breakdown'], [ResponseFaresBreakdownItem]);
      }
      if (data.hasOwnProperty('tickets_total')) {
        obj['tickets_total'] = ApiClient.convertToType(data['tickets_total'], [ResponseFareTicket]);
      }
    }
    return obj;
  }

  /**
   * @member {Array.<module:model/ResponseFaresBreakdownItem>} breakdown
   */
  exports.prototype['breakdown'] = undefined;
  /**
   * @member {Array.<module:model/ResponseFareTicket>} tickets_total
   */
  exports.prototype['tickets_total'] = undefined;



  return exports;
}));


