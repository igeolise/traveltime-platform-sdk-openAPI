/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
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
    factory(root.expect, root.TravelTimeApi);
  }
}(this, function(expect, TravelTimeApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new TravelTimeApi.ResponseShape();
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

  describe('ResponseShape', function() {
    it('should create an instance of ResponseShape', function() {
      // uncomment below and update the code to test ResponseShape
      //var instane = new TravelTimeApi.ResponseShape();
      //expect(instance).to.be.a(TravelTimeApi.ResponseShape);
    });

    it('should have the property shell (base name: "shell")', function() {
      // uncomment below and update the code to test the property shell
      //var instane = new TravelTimeApi.ResponseShape();
      //expect(instance).to.be();
    });

    it('should have the property holes (base name: "holes")', function() {
      // uncomment below and update the code to test the property holes
      //var instane = new TravelTimeApi.ResponseShape();
      //expect(instance).to.be();
    });

  });

}));