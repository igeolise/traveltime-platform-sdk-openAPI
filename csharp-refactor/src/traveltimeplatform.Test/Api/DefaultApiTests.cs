/* 
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using traveltimeplatform.Client;
using traveltimeplatform.Api;
using traveltimeplatform.Model;

namespace traveltimeplatform.Test
{
    /// <summary>
    ///  Class for testing DefaultApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by OpenAPI Generator (https://openapi-generator.tech).
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class DefaultApiTests
    {
        private DefaultApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new DefaultApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of DefaultApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' DefaultApi
            //Assert.IsInstanceOfType(typeof(DefaultApi), instance, "instance is a DefaultApi");
        }

        
        /// <summary>
        /// Test GeocodingReverseSearch
        /// </summary>
        [Test]
        public void GeocodingReverseSearchTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //double? focusLat = null;
            //double? focusLng = null;
            //string withinCountry = null;
            //var response = instance.GeocodingReverseSearch(focusLat, focusLng, withinCountry);
            //Assert.IsInstanceOf<ResponseGeocoding> (response, "response is ResponseGeocoding");
        }
        
        /// <summary>
        /// Test GeocodingSearch
        /// </summary>
        [Test]
        public void GeocodingSearchTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string query = null;
            //string withinCountry = null;
            //double? focusLat = null;
            //double? focusLng = null;
            //var response = instance.GeocodingSearch(query, withinCountry, focusLat, focusLng);
            //Assert.IsInstanceOf<ResponseGeocoding> (response, "response is ResponseGeocoding");
        }
        
        /// <summary>
        /// Test MapInfo
        /// </summary>
        [Test]
        public void MapInfoTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //var response = instance.MapInfo();
            //Assert.IsInstanceOf<ResponseMapInfo> (response, "response is ResponseMapInfo");
        }
        
        /// <summary>
        /// Test Routes
        /// </summary>
        [Test]
        public void RoutesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestRoutes requestRoutes = null;
            //var response = instance.Routes(requestRoutes);
            //Assert.IsInstanceOf<ResponseRoutes> (response, "response is ResponseRoutes");
        }
        
        /// <summary>
        /// Test SupportedLocations
        /// </summary>
        [Test]
        public void SupportedLocationsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestSupportedLocations requestSupportedLocations = null;
            //var response = instance.SupportedLocations(requestSupportedLocations);
            //Assert.IsInstanceOf<ResponseSupportedLocations> (response, "response is ResponseSupportedLocations");
        }
        
        /// <summary>
        /// Test TimeFilter
        /// </summary>
        [Test]
        public void TimeFilterTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestTimeFilter requestTimeFilter = null;
            //var response = instance.TimeFilter(requestTimeFilter);
            //Assert.IsInstanceOf<ResponseTimeFilter> (response, "response is ResponseTimeFilter");
        }
        
        /// <summary>
        /// Test TimeFilterFast
        /// </summary>
        [Test]
        public void TimeFilterFastTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestTimeFilterFast requestTimeFilterFast = null;
            //var response = instance.TimeFilterFast(requestTimeFilterFast);
            //Assert.IsInstanceOf<ResponseTimeFilterFast> (response, "response is ResponseTimeFilterFast");
        }
        
        /// <summary>
        /// Test TimeFilterPostcodeDistricts
        /// </summary>
        [Test]
        public void TimeFilterPostcodeDistrictsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestTimeFilterPostcodeDistricts requestTimeFilterPostcodeDistricts = null;
            //var response = instance.TimeFilterPostcodeDistricts(requestTimeFilterPostcodeDistricts);
            //Assert.IsInstanceOf<ResponseTimeFilterPostcodeDistricts> (response, "response is ResponseTimeFilterPostcodeDistricts");
        }
        
        /// <summary>
        /// Test TimeFilterPostcodeSectors
        /// </summary>
        [Test]
        public void TimeFilterPostcodeSectorsTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestTimeFilterPostcodeSectors requestTimeFilterPostcodeSectors = null;
            //var response = instance.TimeFilterPostcodeSectors(requestTimeFilterPostcodeSectors);
            //Assert.IsInstanceOf<ResponseTimeFilterPostcodeSectors> (response, "response is ResponseTimeFilterPostcodeSectors");
        }
        
        /// <summary>
        /// Test TimeFilterPostcodes
        /// </summary>
        [Test]
        public void TimeFilterPostcodesTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestTimeFilterPostcodes requestTimeFilterPostcodes = null;
            //var response = instance.TimeFilterPostcodes(requestTimeFilterPostcodes);
            //Assert.IsInstanceOf<ResponseTimeFilterPostcodes> (response, "response is ResponseTimeFilterPostcodes");
        }
        
        /// <summary>
        /// Test TimeMap
        /// </summary>
        [Test]
        public void TimeMapTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //RequestTimeMap requestTimeMap = null;
            //var response = instance.TimeMap(requestTimeMap);
            //Assert.IsInstanceOf<ResponseTimeMap> (response, "response is ResponseTimeMap");
        }
        
    }

}
