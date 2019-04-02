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
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.TravelTimePlatformApi);
  }
}(this, function(expect, TravelTimePlatformApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new TravelTimePlatformApi.RequestUnionOnIntersection();
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

  describe('RequestUnionOnIntersection', function() {
    it('should create an instance of RequestUnionOnIntersection', function() {
      // uncomment below and update the code to test RequestUnionOnIntersection
      //var instance = new TravelTimePlatformApi.RequestUnionOnIntersection();
      //expect(instance).to.be.a(TravelTimePlatformApi.RequestUnionOnIntersection);
    });

    it('should have the property id (base name: "id")', function() {
      // uncomment below and update the code to test the property id
      //var instance = new TravelTimePlatformApi.RequestUnionOnIntersection();
      //expect(instance).to.be();
    });

    it('should have the property searchIds (base name: "search_ids")', function() {
      // uncomment below and update the code to test the property searchIds
      //var instance = new TravelTimePlatformApi.RequestUnionOnIntersection();
      //expect(instance).to.be();
    });

  });

}));
