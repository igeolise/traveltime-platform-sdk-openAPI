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
    define(['ApiClient', 'model/Coords', 'model/ResponseTransportationMode'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('../ApiClient'), require('./Coords'), require('./ResponseTransportationMode'));
  } else {
    // Browser globals (root is window)
    if (!root.TravelTimePlatformApi) {
      root.TravelTimePlatformApi = {};
    }
    root.TravelTimePlatformApi.ResponseRoutePart = factory(root.TravelTimePlatformApi.ApiClient, root.TravelTimePlatformApi.Coords, root.TravelTimePlatformApi.ResponseTransportationMode);
  }
}(this, function(ApiClient, Coords, ResponseTransportationMode) {
  'use strict';



  /**
   * The ResponseRoutePart model module.
   * @module model/ResponseRoutePart
   * @version 1.0.0
   */

  /**
   * Constructs a new <code>ResponseRoutePart</code>.
   * @alias module:model/ResponseRoutePart
   * @class
   * @param id {String} 
   * @param type {module:model/ResponseRoutePart.TypeEnum} 
   * @param mode {module:model/ResponseTransportationMode} 
   * @param directions {String} 
   * @param distance {Number} 
   * @param travelTime {Number} 
   * @param coords {Array.<module:model/Coords>} 
   */
  var exports = function(id, type, mode, directions, distance, travelTime, coords) {
    var _this = this;

    _this['id'] = id;
    _this['type'] = type;
    _this['mode'] = mode;
    _this['directions'] = directions;
    _this['distance'] = distance;
    _this['travel_time'] = travelTime;
    _this['coords'] = coords;
  };

  /**
   * Constructs a <code>ResponseRoutePart</code> from a plain JavaScript object, optionally creating a new instance.
   * Copies all relevant properties from <code>data</code> to <code>obj</code> if supplied or a new instance if not.
   * @param {Object} data The plain JavaScript object bearing properties of interest.
   * @param {module:model/ResponseRoutePart} obj Optional instance to populate.
   * @return {module:model/ResponseRoutePart} The populated <code>ResponseRoutePart</code> instance.
   */
  exports.constructFromObject = function(data, obj) {
    if (data) {
      obj = obj || new exports();
      if (data.hasOwnProperty('id')) {
        obj['id'] = ApiClient.convertToType(data['id'], 'String');
      }
      if (data.hasOwnProperty('type')) {
        obj['type'] = ApiClient.convertToType(data['type'], 'String');
      }
      if (data.hasOwnProperty('mode')) {
        obj['mode'] = ResponseTransportationMode.constructFromObject(data['mode']);
      }
      if (data.hasOwnProperty('directions')) {
        obj['directions'] = ApiClient.convertToType(data['directions'], 'String');
      }
      if (data.hasOwnProperty('distance')) {
        obj['distance'] = ApiClient.convertToType(data['distance'], 'Number');
      }
      if (data.hasOwnProperty('travel_time')) {
        obj['travel_time'] = ApiClient.convertToType(data['travel_time'], 'Number');
      }
      if (data.hasOwnProperty('coords')) {
        obj['coords'] = ApiClient.convertToType(data['coords'], [Coords]);
      }
      if (data.hasOwnProperty('direction')) {
        obj['direction'] = ApiClient.convertToType(data['direction'], 'String');
      }
      if (data.hasOwnProperty('road')) {
        obj['road'] = ApiClient.convertToType(data['road'], 'String');
      }
      if (data.hasOwnProperty('turn')) {
        obj['turn'] = ApiClient.convertToType(data['turn'], 'String');
      }
      if (data.hasOwnProperty('line')) {
        obj['line'] = ApiClient.convertToType(data['line'], 'String');
      }
      if (data.hasOwnProperty('departure_station')) {
        obj['departure_station'] = ApiClient.convertToType(data['departure_station'], 'String');
      }
      if (data.hasOwnProperty('arrival_station')) {
        obj['arrival_station'] = ApiClient.convertToType(data['arrival_station'], 'String');
      }
      if (data.hasOwnProperty('departs_at')) {
        obj['departs_at'] = ApiClient.convertToType(data['departs_at'], 'String');
      }
      if (data.hasOwnProperty('arrives_at')) {
        obj['arrives_at'] = ApiClient.convertToType(data['arrives_at'], 'String');
      }
      if (data.hasOwnProperty('num_stops')) {
        obj['num_stops'] = ApiClient.convertToType(data['num_stops'], 'Number');
      }
    }
    return obj;
  }

  /**
   * @member {String} id
   */
  exports.prototype['id'] = undefined;
  /**
   * @member {module:model/ResponseRoutePart.TypeEnum} type
   */
  exports.prototype['type'] = undefined;
  /**
   * @member {module:model/ResponseTransportationMode} mode
   */
  exports.prototype['mode'] = undefined;
  /**
   * @member {String} directions
   */
  exports.prototype['directions'] = undefined;
  /**
   * @member {Number} distance
   */
  exports.prototype['distance'] = undefined;
  /**
   * @member {Number} travel_time
   */
  exports.prototype['travel_time'] = undefined;
  /**
   * @member {Array.<module:model/Coords>} coords
   */
  exports.prototype['coords'] = undefined;
  /**
   * @member {String} direction
   */
  exports.prototype['direction'] = undefined;
  /**
   * @member {String} road
   */
  exports.prototype['road'] = undefined;
  /**
   * @member {String} turn
   */
  exports.prototype['turn'] = undefined;
  /**
   * @member {String} line
   */
  exports.prototype['line'] = undefined;
  /**
   * @member {String} departure_station
   */
  exports.prototype['departure_station'] = undefined;
  /**
   * @member {String} arrival_station
   */
  exports.prototype['arrival_station'] = undefined;
  /**
   * @member {String} departs_at
   */
  exports.prototype['departs_at'] = undefined;
  /**
   * @member {String} arrives_at
   */
  exports.prototype['arrives_at'] = undefined;
  /**
   * @member {Number} num_stops
   */
  exports.prototype['num_stops'] = undefined;


  /**
   * Allowed values for the <code>type</code> property.
   * @enum {String}
   * @readonly
   */
  exports.TypeEnum = {
    /**
     * value: "basic"
     * @const
     */
    "basic": "basic",
    /**
     * value: "start_end"
     * @const
     */
    "start_end": "start_end",
    /**
     * value: "road"
     * @const
     */
    "road": "road",
    /**
     * value: "public_transport"
     * @const
     */
    "public_transport": "public_transport"  };


  return exports;
}));


