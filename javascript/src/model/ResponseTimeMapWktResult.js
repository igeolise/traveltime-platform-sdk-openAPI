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
    define(['ApiClient', 'model/ResponseTimeMapProperties'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./ResponseTimeMapProperties'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseTimeMapWktResult = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.ResponseTimeMapProperties);
  }
}(this, function(ApiClient, ResponseTimeMapProperties) {
  'use strict';



  /**
   * The ResponseTimeMapWktResult model module.
   * @module model/ResponseTimeMapWktResult
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseTimeMapWktResult</code>.
   * @alias module:model/ResponseTimeMapWktResult
   * @class
   * @param searchId {String} 
   * @param shape {String} 
   * @param properties {module:model/ResponseTimeMapProperties} 
   */
  var exports = function(searchId, shape, properties) {
    var _this = this;

    _this['search_id'] = searchId;
    _this['shape'] = shape;
    _this['properties'] = properties;
  };

  /**
   * Constructs a <code>ResponseTimeMapWktResult</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseTimeMapWktResult} obj Optional instance to populate.
   * @return {module:model/ResponseTimeMapWktResult} The populated <code>ResponseTimeMapWktResult</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('search_id')) {
        obj['search_id'] = ApiClient.convertToType(data['search_id'], 'String');
      }
      if (data.hasOwnProperty('shape')) {
        obj['shape'] = ApiClient.convertToType(data['shape'], 'String');
      }
      if (data.hasOwnProperty('properties')) {
        obj['properties'] = ResponseTimeMapProperties.constructFromObject(data['properties']);
      }
    }
    return obj;
  }

  /**
   * @member {String} search_id
   */
  exports.prototype['search_id'] = undefined;
  /**
   * @member {String} shape
   */
  exports.prototype['shape'] = undefined;
  /**
   * @member {module:model/ResponseTimeMapProperties} properties
   */
  exports.prototype['properties'] = undefined;



  return exports;
}));


