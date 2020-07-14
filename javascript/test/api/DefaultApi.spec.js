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
    instance = new TravelTimeApi.DefaultApi();
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

  describe('DefaultApi', function() {
    describe('geocodingReverseSearch', function() {
      it('should call geocodingReverseSearch successfully', function(done) {
        //uncomment below and update the code to test geocodingReverseSearch
        //instance.geocodingReverseSearch(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('geocodingSearch', function() {
      it('should call geocodingSearch successfully', function(done) {
        //uncomment below and update the code to test geocodingSearch
        //instance.geocodingSearch(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('mapInfo', function() {
      it('should call mapInfo successfully', function(done) {
        //uncomment below and update the code to test mapInfo
        //instance.mapInfo(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('routes', function() {
      it('should call routes successfully', function(done) {
        //uncomment below and update the code to test routes
        //instance.routes(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('supportedLocations', function() {
      it('should call supportedLocations successfully', function(done) {
        //uncomment below and update the code to test supportedLocations
        //instance.supportedLocations(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('timeFilter', function() {
      it('should call timeFilter successfully', function(done) {
        //uncomment below and update the code to test timeFilter
        //instance.timeFilter(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('timeFilterFast', function() {
      it('should call timeFilterFast successfully', function(done) {
        //uncomment below and update the code to test timeFilterFast
        //instance.timeFilterFast(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('timeFilterPostcodeDistricts', function() {
      it('should call timeFilterPostcodeDistricts successfully', function(done) {
        //uncomment below and update the code to test timeFilterPostcodeDistricts
        //instance.timeFilterPostcodeDistricts(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('timeFilterPostcodeSectors', function() {
      it('should call timeFilterPostcodeSectors successfully', function(done) {
        //uncomment below and update the code to test timeFilterPostcodeSectors
        //instance.timeFilterPostcodeSectors(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('timeFilterPostcodes', function() {
      it('should call timeFilterPostcodes successfully', function(done) {
        //uncomment below and update the code to test timeFilterPostcodes
        //instance.timeFilterPostcodes(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
    describe('timeMap', function() {
      it('should call timeMap successfully', function(done) {
        //uncomment below and update the code to test timeMap
        //instance.timeMap(function(error) {
        //  if (error) throw error;
        //expect().to.be();
        //});
        done();
      });
    });
  });

}));
