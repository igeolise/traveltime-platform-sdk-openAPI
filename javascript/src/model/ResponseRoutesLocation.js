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
    define(['ApiClient', 'model/ResponseRoutesProperties'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ResponseRoutesProperties'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseRoutesLocation = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.ResponseRoutesProperties);
  }
}(this, function(ApiClient, ResponseRoutesProperties) {
  'use strict';



  /**
   * The ResponseRoutesLocation model module.
   * @module model/ResponseRoutesLocation
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseRoutesLocation</code>.
   * @alias module:model/ResponseRoutesLocation
   * @class
   * @param id {String} 
   * @param properties {Array.<module:model/ResponseRoutesProperties>} 
   */
  var exports = function(id, properties) {
    var _this = this;

    _this['id'] = id;
    _this['properties'] = properties;
  };

  /**
   * Constructs a <code>ResponseRoutesLocation</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseRoutesLocation} obj Optional instance to populate.
   * @return {module:model/ResponseRoutesLocation} The populated <code>ResponseRoutesLocation</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('properties')) {
        obj['properties'] = ApiClient.convertToType(data['properties'], [ResponseRoutesProperties]);
      }
    }
    return obj;
  }

  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {Array.<module:model/ResponseRoutesProperties>} properties
   */
  exports.prototype['properties'] = undefined;



  return exports;
}));


