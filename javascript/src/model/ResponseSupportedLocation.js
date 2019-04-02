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
    define(['ApiClient'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseSupportedLocation = factory(root.TravelTimePlatformApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';



  /**
   * The ResponseSupportedLocation model module.
   * @module model/ResponseSupportedLocation
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseSupportedLocation</code>.
   * @alias module:model/ResponseSupportedLocation
   * @class
   * @param id {String} 
   * @param mapName {String} 
   */
  var exports = function(id, mapName) {
    var _this = this;

    _this['id'] = id;
    _this['map_name'] = mapName;
  };

  /**
   * Constructs a <code>ResponseSupportedLocation</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseSupportedLocation} obj Optional instance to populate.
   * @return {module:model/ResponseSupportedLocation} The populated <code>ResponseSupportedLocation</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('map_name')) {
        obj['map_name'] = ApiClient.convertToType(data['map_name'], 'String');
      }
    }
    return obj;
  }

  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {String} map_name
   */
  exports.prototype['map_name'] = undefined;



  return exports;
}));


