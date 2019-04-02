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
    root.TravelTimePlatformApi.RequestTimeFilterPostcodesProperty = factory(root.TravelTimePlatformApi.ApiClient);
  }
}(this, function(ApiClient) {
  'use strict';


  /**
   * Enum class RequestTimeFilterPostcodesProperty.
   * @enum {}
   * @readonly
   */
  var exports = {
    /**
     * value: "travel_time"
     * @const
     */
    "travel_time": "travel_time",
    /**
     * value: "distance"
     * @const
     */
    "distance": "distance"  };

  /**
   * Returns a <code>RequestTimeFilterPostcodesProperty</code> enum value from a Javascript object name.
   * @param {Object} data The plain JavaScript object containing the name of the enum value.
   * @return {module:model/RequestTimeFilterPostcodesProperty} The enum <code>RequestTimeFilterPostcodesProperty</code> value.
   */
  exports.constructFromObject = function(object) {
    return object;
  }

  return exports;
}));


