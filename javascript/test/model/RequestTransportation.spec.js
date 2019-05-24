/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', process.cwd()+'/src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require(process.cwd()+'/src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.TravelTimePlatformApi);
  }
}(this, function(expect, TravelTimePlatformApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new TravelTimePlatformApi.RequestTransportation();
  });

  var getProperty = function(object, getter, property) {
    // Use getter method if present; otherwise, get the property directly.
    if (typeof object[getter] === 'function')
      return object[getter]();
    else
      return object[property];
  }

  var setProperty = function(object, setter, property, value) {
    // Use setter method if present; otherwise, set the property directly.
    if (typeof object[setter] === 'function')
      object[setter](value);
    else
      object[property] = value;
  }

  describe('RequestTransportation', function() {
    it('should create an instance of RequestTransportation', function() {
      // uncomment below and update the code to test RequestTransportation
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be.a(TravelTimePlatformApi.RequestTransportation);
    });

    it('should have the property type (base name: "type")', function() {
      // uncomment below and update the code to test the property type
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be();
    });

    it('should have the property ptChangeDelay (base name: "pt_change_delay")', function() {
      // uncomment below and update the code to test the property ptChangeDelay
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be();
    });

    it('should have the property walkingTime (base name: "walking_time")', function() {
      // uncomment below and update the code to test the property walkingTime
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be();
    });

    it('should have the property drivingTimeToStation (base name: "driving_time_to_station")', function() {
      // uncomment below and update the code to test the property drivingTimeToStation
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be();
    });

    it('should have the property parkingTime (base name: "parking_time")', function() {
      // uncomment below and update the code to test the property parkingTime
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be();
    });

    it('should have the property boardingTime (base name: "boarding_time")', function() {
      // uncomment below and update the code to test the property boardingTime
      //var instane = new TravelTimePlatformApi.RequestTransportation();
      //expect(instance).to.be();
    });

  });

}));
