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

(function(factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD. Register as an anonymous module.
    define(['ApiClient', 'model/Coords', 'model/RequestArrivalTimePeriod', 'model/RequestLocation', 'model/RequestRangeFull', 'model/RequestRangeNoMaxResults', 'model/RequestRoutes', 'model/RequestRoutesArrivalSearch', 'model/RequestRoutesDepartureSearch', 'model/RequestRoutesProperty', 'model/RequestSupportedLocations', 'model/RequestTimeFilter', 'model/RequestTimeFilterArrivalSearch', 'model/RequestTimeFilterDepartureSearch', 'model/RequestTimeFilterFast', 'model/RequestTimeFilterFastArrivalManyToOneSearch', 'model/RequestTimeFilterFastArrivalOneToManySearch', 'model/RequestTimeFilterFastArrivalSearches', 'model/RequestTimeFilterFastProperty', 'model/RequestTimeFilterPostcodeDistricts', 'model/RequestTimeFilterPostcodeDistrictsArrivalSearch', 'model/RequestTimeFilterPostcodeDistrictsDepartureSearch', 'model/RequestTimeFilterPostcodeDistrictsProperty', 'model/RequestTimeFilterPostcodeSectors', 'model/RequestTimeFilterPostcodeSectorsArrivalSearch', 'model/RequestTimeFilterPostcodeSectorsDepartureSearch', 'model/RequestTimeFilterPostcodeSectorsProperty', 'model/RequestTimeFilterPostcodes', 'model/RequestTimeFilterPostcodesArrivalSearch', 'model/RequestTimeFilterPostcodesDepartureSearch', 'model/RequestTimeFilterPostcodesProperty', 'model/RequestTimeFilterProperty', 'model/RequestTimeMap', 'model/RequestTimeMapArrivalSearch', 'model/RequestTimeMapDepartureSearch', 'model/RequestTimeMapProperty', 'model/RequestTransportation', 'model/RequestTransportationFast', 'model/RequestUnionOnIntersection', 'model/ResponseBoundingBox', 'model/ResponseBox', 'model/ResponseDistanceBreakdownItem', 'model/ResponseError', 'model/ResponseFareTicket', 'model/ResponseFares', 'model/ResponseFaresBreakdownItem', 'model/ResponseFaresFast', 'model/ResponseGeocoding', 'model/ResponseGeocodingGeoJsonFeature', 'model/ResponseGeocodingGeometry', 'model/ResponseGeocodingProperties', 'model/ResponseMapInfo', 'model/ResponseMapInfoFeatures', 'model/ResponseMapInfoFeaturesPublicTransport', 'model/ResponseMapInfoMap', 'model/ResponseRoute', 'model/ResponseRoutePart', 'model/ResponseRoutes', 'model/ResponseRoutesLocation', 'model/ResponseRoutesProperties', 'model/ResponseRoutesResult', 'model/ResponseShape', 'model/ResponseSupportedLocation', 'model/ResponseSupportedLocations', 'model/ResponseTimeFilter', 'model/ResponseTimeFilterFast', 'model/ResponseTimeFilterFastLocation', 'model/ResponseTimeFilterFastProperties', 'model/ResponseTimeFilterFastResult', 'model/ResponseTimeFilterLocation', 'model/ResponseTimeFilterPostcode', 'model/ResponseTimeFilterPostcodeDistrict', 'model/ResponseTimeFilterPostcodeDistrictProperties', 'model/ResponseTimeFilterPostcodeDistricts', 'model/ResponseTimeFilterPostcodeDistrictsResult', 'model/ResponseTimeFilterPostcodeSector', 'model/ResponseTimeFilterPostcodeSectorProperties', 'model/ResponseTimeFilterPostcodeSectors', 'model/ResponseTimeFilterPostcodeSectorsResult', 'model/ResponseTimeFilterPostcodes', 'model/ResponseTimeFilterPostcodesProperties', 'model/ResponseTimeFilterPostcodesResult', 'model/ResponseTimeFilterProperties', 'model/ResponseTimeFilterResult', 'model/ResponseTimeMap', 'model/ResponseTimeMapBoundingBoxes', 'model/ResponseTimeMapBoundingBoxesResult', 'model/ResponseTimeMapProperties', 'model/ResponseTimeMapResult', 'model/ResponseTimeMapWkt', 'model/ResponseTimeMapWktResult', 'model/ResponseTransportationMode', 'model/ResponseTravelTimeStatistics', 'api/DefaultApi'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    module.exports = factory(require('./ApiClient'), require('./model/Coords'), require('./model/RequestArrivalTimePeriod'), require('./model/RequestLocation'), require('./model/RequestRangeFull'), require('./model/RequestRangeNoMaxResults'), require('./model/RequestRoutes'), require('./model/RequestRoutesArrivalSearch'), require('./model/RequestRoutesDepartureSearch'), require('./model/RequestRoutesProperty'), require('./model/RequestSupportedLocations'), require('./model/RequestTimeFilter'), require('./model/RequestTimeFilterArrivalSearch'), require('./model/RequestTimeFilterDepartureSearch'), require('./model/RequestTimeFilterFast'), require('./model/RequestTimeFilterFastArrivalManyToOneSearch'), require('./model/RequestTimeFilterFastArrivalOneToManySearch'), require('./model/RequestTimeFilterFastArrivalSearches'), require('./model/RequestTimeFilterFastProperty'), require('./model/RequestTimeFilterPostcodeDistricts'), require('./model/RequestTimeFilterPostcodeDistrictsArrivalSearch'), require('./model/RequestTimeFilterPostcodeDistrictsDepartureSearch'), require('./model/RequestTimeFilterPostcodeDistrictsProperty'), require('./model/RequestTimeFilterPostcodeSectors'), require('./model/RequestTimeFilterPostcodeSectorsArrivalSearch'), require('./model/RequestTimeFilterPostcodeSectorsDepartureSearch'), require('./model/RequestTimeFilterPostcodeSectorsProperty'), require('./model/RequestTimeFilterPostcodes'), require('./model/RequestTimeFilterPostcodesArrivalSearch'), require('./model/RequestTimeFilterPostcodesDepartureSearch'), require('./model/RequestTimeFilterPostcodesProperty'), require('./model/RequestTimeFilterProperty'), require('./model/RequestTimeMap'), require('./model/RequestTimeMapArrivalSearch'), require('./model/RequestTimeMapDepartureSearch'), require('./model/RequestTimeMapProperty'), require('./model/RequestTransportation'), require('./model/RequestTransportationFast'), require('./model/RequestUnionOnIntersection'), require('./model/ResponseBoundingBox'), require('./model/ResponseBox'), require('./model/ResponseDistanceBreakdownItem'), require('./model/ResponseError'), require('./model/ResponseFareTicket'), require('./model/ResponseFares'), require('./model/ResponseFaresBreakdownItem'), require('./model/ResponseFaresFast'), require('./model/ResponseGeocoding'), require('./model/ResponseGeocodingGeoJsonFeature'), require('./model/ResponseGeocodingGeometry'), require('./model/ResponseGeocodingProperties'), require('./model/ResponseMapInfo'), require('./model/ResponseMapInfoFeatures'), require('./model/ResponseMapInfoFeaturesPublicTransport'), require('./model/ResponseMapInfoMap'), require('./model/ResponseRoute'), require('./model/ResponseRoutePart'), require('./model/ResponseRoutes'), require('./model/ResponseRoutesLocation'), require('./model/ResponseRoutesProperties'), require('./model/ResponseRoutesResult'), require('./model/ResponseShape'), require('./model/ResponseSupportedLocation'), require('./model/ResponseSupportedLocations'), require('./model/ResponseTimeFilter'), require('./model/ResponseTimeFilterFast'), require('./model/ResponseTimeFilterFastLocation'), require('./model/ResponseTimeFilterFastProperties'), require('./model/ResponseTimeFilterFastResult'), require('./model/ResponseTimeFilterLocation'), require('./model/ResponseTimeFilterPostcode'), require('./model/ResponseTimeFilterPostcodeDistrict'), require('./model/ResponseTimeFilterPostcodeDistrictProperties'), require('./model/ResponseTimeFilterPostcodeDistricts'), require('./model/ResponseTimeFilterPostcodeDistrictsResult'), require('./model/ResponseTimeFilterPostcodeSector'), require('./model/ResponseTimeFilterPostcodeSectorProperties'), require('./model/ResponseTimeFilterPostcodeSectors'), require('./model/ResponseTimeFilterPostcodeSectorsResult'), require('./model/ResponseTimeFilterPostcodes'), require('./model/ResponseTimeFilterPostcodesProperties'), require('./model/ResponseTimeFilterPostcodesResult'), require('./model/ResponseTimeFilterProperties'), require('./model/ResponseTimeFilterResult'), require('./model/ResponseTimeMap'), require('./model/ResponseTimeMapBoundingBoxes'), require('./model/ResponseTimeMapBoundingBoxesResult'), require('./model/ResponseTimeMapProperties'), require('./model/ResponseTimeMapResult'), require('./model/ResponseTimeMapWkt'), require('./model/ResponseTimeMapWktResult'), require('./model/ResponseTransportationMode'), require('./model/ResponseTravelTimeStatistics'), require('./api/DefaultApi'));
  }
}(function(ApiClient, Coords, RequestArrivalTimePeriod, RequestLocation, RequestRangeFull, RequestRangeNoMaxResults, RequestRoutes, RequestRoutesArrivalSearch, RequestRoutesDepartureSearch, RequestRoutesProperty, RequestSupportedLocations, RequestTimeFilter, RequestTimeFilterArrivalSearch, RequestTimeFilterDepartureSearch, RequestTimeFilterFast, RequestTimeFilterFastArrivalManyToOneSearch, RequestTimeFilterFastArrivalOneToManySearch, RequestTimeFilterFastArrivalSearches, RequestTimeFilterFastProperty, RequestTimeFilterPostcodeDistricts, RequestTimeFilterPostcodeDistrictsArrivalSearch, RequestTimeFilterPostcodeDistrictsDepartureSearch, RequestTimeFilterPostcodeDistrictsProperty, RequestTimeFilterPostcodeSectors, RequestTimeFilterPostcodeSectorsArrivalSearch, RequestTimeFilterPostcodeSectorsDepartureSearch, RequestTimeFilterPostcodeSectorsProperty, RequestTimeFilterPostcodes, RequestTimeFilterPostcodesArrivalSearch, RequestTimeFilterPostcodesDepartureSearch, RequestTimeFilterPostcodesProperty, RequestTimeFilterProperty, RequestTimeMap, RequestTimeMapArrivalSearch, RequestTimeMapDepartureSearch, RequestTimeMapProperty, RequestTransportation, RequestTransportationFast, RequestUnionOnIntersection, ResponseBoundingBox, ResponseBox, ResponseDistanceBreakdownItem, ResponseError, ResponseFareTicket, ResponseFares, ResponseFaresBreakdownItem, ResponseFaresFast, ResponseGeocoding, ResponseGeocodingGeoJsonFeature, ResponseGeocodingGeometry, ResponseGeocodingProperties, ResponseMapInfo, ResponseMapInfoFeatures, ResponseMapInfoFeaturesPublicTransport, ResponseMapInfoMap, ResponseRoute, ResponseRoutePart, ResponseRoutes, ResponseRoutesLocation, ResponseRoutesProperties, ResponseRoutesResult, ResponseShape, ResponseSupportedLocation, ResponseSupportedLocations, ResponseTimeFilter, ResponseTimeFilterFast, ResponseTimeFilterFastLocation, ResponseTimeFilterFastProperties, ResponseTimeFilterFastResult, ResponseTimeFilterLocation, ResponseTimeFilterPostcode, ResponseTimeFilterPostcodeDistrict, ResponseTimeFilterPostcodeDistrictProperties, ResponseTimeFilterPostcodeDistricts, ResponseTimeFilterPostcodeDistrictsResult, ResponseTimeFilterPostcodeSector, ResponseTimeFilterPostcodeSectorProperties, ResponseTimeFilterPostcodeSectors, ResponseTimeFilterPostcodeSectorsResult, ResponseTimeFilterPostcodes, ResponseTimeFilterPostcodesProperties, ResponseTimeFilterPostcodesResult, ResponseTimeFilterProperties, ResponseTimeFilterResult, ResponseTimeMap, ResponseTimeMapBoundingBoxes, ResponseTimeMapBoundingBoxesResult, ResponseTimeMapProperties, ResponseTimeMapResult, ResponseTimeMapWkt, ResponseTimeMapWktResult, ResponseTransportationMode, ResponseTravelTimeStatistics, DefaultApi) {
  'use strict';

  /**
   * JS API client generated by OpenAPI Generator.<br>
   * The <code>index</code> module provides access to constructors for all the classes which comprise the public API.
   * <p>
   * An AMD (recommended!) or CommonJS application will generally do something equivalent to the following:
   * <pre>
   * var TravelTimePlatformApi = require('index'); // See note below*.
   * var xxxSvc = new TravelTimePlatformApi.XxxApi(); // Allocate the API class we're going to use.
   * var yyyModel = new TravelTimePlatformApi.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * <em>*NOTE: For a top-level AMD script, use require(['index'], function(){...})
   * and put the application logic within the callback function.</em>
   * </p>
   * <p>
   * A non-AMD browser application (discouraged) might do something like this:
   * <pre>
   * var xxxSvc = new TravelTimePlatformApi.XxxApi(); // Allocate the API class we're going to use.
   * var yyy = new TravelTimePlatformApi.Yyy(); // Construct a model instance.
   * yyyModel.someProperty = 'someValue';
   * ...
   * var zzz = xxxSvc.doSomething(yyyModel); // Invoke the service.
   * ...
   * </pre>
   * </p>
   * @module index
   * @version 1.0.0
   */
  var exports = {
    /**
     * The ApiClient constructor.
     * @property {module:ApiClient}
     */
    ApiClient: ApiClient,
    /**
     * The Coords model constructor.
     * @property {module:model/Coords}
     */
    Coords: Coords,
    /**
     * The RequestArrivalTimePeriod model constructor.
     * @property {module:model/RequestArrivalTimePeriod}
     */
    RequestArrivalTimePeriod: RequestArrivalTimePeriod,
    /**
     * The RequestLocation model constructor.
     * @property {module:model/RequestLocation}
     */
    RequestLocation: RequestLocation,
    /**
     * The RequestRangeFull model constructor.
     * @property {module:model/RequestRangeFull}
     */
    RequestRangeFull: RequestRangeFull,
    /**
     * The RequestRangeNoMaxResults model constructor.
     * @property {module:model/RequestRangeNoMaxResults}
     */
    RequestRangeNoMaxResults: RequestRangeNoMaxResults,
    /**
     * The RequestRoutes model constructor.
     * @property {module:model/RequestRoutes}
     */
    RequestRoutes: RequestRoutes,
    /**
     * The RequestRoutesArrivalSearch model constructor.
     * @property {module:model/RequestRoutesArrivalSearch}
     */
    RequestRoutesArrivalSearch: RequestRoutesArrivalSearch,
    /**
     * The RequestRoutesDepartureSearch model constructor.
     * @property {module:model/RequestRoutesDepartureSearch}
     */
    RequestRoutesDepartureSearch: RequestRoutesDepartureSearch,
    /**
     * The RequestRoutesProperty model constructor.
     * @property {module:model/RequestRoutesProperty}
     */
    RequestRoutesProperty: RequestRoutesProperty,
    /**
     * The RequestSupportedLocations model constructor.
     * @property {module:model/RequestSupportedLocations}
     */
    RequestSupportedLocations: RequestSupportedLocations,
    /**
     * The RequestTimeFilter model constructor.
     * @property {module:model/RequestTimeFilter}
     */
    RequestTimeFilter: RequestTimeFilter,
    /**
     * The RequestTimeFilterArrivalSearch model constructor.
     * @property {module:model/RequestTimeFilterArrivalSearch}
     */
    RequestTimeFilterArrivalSearch: RequestTimeFilterArrivalSearch,
    /**
     * The RequestTimeFilterDepartureSearch model constructor.
     * @property {module:model/RequestTimeFilterDepartureSearch}
     */
    RequestTimeFilterDepartureSearch: RequestTimeFilterDepartureSearch,
    /**
     * The RequestTimeFilterFast model constructor.
     * @property {module:model/RequestTimeFilterFast}
     */
    RequestTimeFilterFast: RequestTimeFilterFast,
    /**
     * The RequestTimeFilterFastArrivalManyToOneSearch model constructor.
     * @property {module:model/RequestTimeFilterFastArrivalManyToOneSearch}
     */
    RequestTimeFilterFastArrivalManyToOneSearch: RequestTimeFilterFastArrivalManyToOneSearch,
    /**
     * The RequestTimeFilterFastArrivalOneToManySearch model constructor.
     * @property {module:model/RequestTimeFilterFastArrivalOneToManySearch}
     */
    RequestTimeFilterFastArrivalOneToManySearch: RequestTimeFilterFastArrivalOneToManySearch,
    /**
     * The RequestTimeFilterFastArrivalSearches model constructor.
     * @property {module:model/RequestTimeFilterFastArrivalSearches}
     */
    RequestTimeFilterFastArrivalSearches: RequestTimeFilterFastArrivalSearches,
    /**
     * The RequestTimeFilterFastProperty model constructor.
     * @property {module:model/RequestTimeFilterFastProperty}
     */
    RequestTimeFilterFastProperty: RequestTimeFilterFastProperty,
    /**
     * The RequestTimeFilterPostcodeDistricts model constructor.
     * @property {module:model/RequestTimeFilterPostcodeDistricts}
     */
    RequestTimeFilterPostcodeDistricts: RequestTimeFilterPostcodeDistricts,
    /**
     * The RequestTimeFilterPostcodeDistrictsArrivalSearch model constructor.
     * @property {module:model/RequestTimeFilterPostcodeDistrictsArrivalSearch}
     */
    RequestTimeFilterPostcodeDistrictsArrivalSearch: RequestTimeFilterPostcodeDistrictsArrivalSearch,
    /**
     * The RequestTimeFilterPostcodeDistrictsDepartureSearch model constructor.
     * @property {module:model/RequestTimeFilterPostcodeDistrictsDepartureSearch}
     */
    RequestTimeFilterPostcodeDistrictsDepartureSearch: RequestTimeFilterPostcodeDistrictsDepartureSearch,
    /**
     * The RequestTimeFilterPostcodeDistrictsProperty model constructor.
     * @property {module:model/RequestTimeFilterPostcodeDistrictsProperty}
     */
    RequestTimeFilterPostcodeDistrictsProperty: RequestTimeFilterPostcodeDistrictsProperty,
    /**
     * The RequestTimeFilterPostcodeSectors model constructor.
     * @property {module:model/RequestTimeFilterPostcodeSectors}
     */
    RequestTimeFilterPostcodeSectors: RequestTimeFilterPostcodeSectors,
    /**
     * The RequestTimeFilterPostcodeSectorsArrivalSearch model constructor.
     * @property {module:model/RequestTimeFilterPostcodeSectorsArrivalSearch}
     */
    RequestTimeFilterPostcodeSectorsArrivalSearch: RequestTimeFilterPostcodeSectorsArrivalSearch,
    /**
     * The RequestTimeFilterPostcodeSectorsDepartureSearch model constructor.
     * @property {module:model/RequestTimeFilterPostcodeSectorsDepartureSearch}
     */
    RequestTimeFilterPostcodeSectorsDepartureSearch: RequestTimeFilterPostcodeSectorsDepartureSearch,
    /**
     * The RequestTimeFilterPostcodeSectorsProperty model constructor.
     * @property {module:model/RequestTimeFilterPostcodeSectorsProperty}
     */
    RequestTimeFilterPostcodeSectorsProperty: RequestTimeFilterPostcodeSectorsProperty,
    /**
     * The RequestTimeFilterPostcodes model constructor.
     * @property {module:model/RequestTimeFilterPostcodes}
     */
    RequestTimeFilterPostcodes: RequestTimeFilterPostcodes,
    /**
     * The RequestTimeFilterPostcodesArrivalSearch model constructor.
     * @property {module:model/RequestTimeFilterPostcodesArrivalSearch}
     */
    RequestTimeFilterPostcodesArrivalSearch: RequestTimeFilterPostcodesArrivalSearch,
    /**
     * The RequestTimeFilterPostcodesDepartureSearch model constructor.
     * @property {module:model/RequestTimeFilterPostcodesDepartureSearch}
     */
    RequestTimeFilterPostcodesDepartureSearch: RequestTimeFilterPostcodesDepartureSearch,
    /**
     * The RequestTimeFilterPostcodesProperty model constructor.
     * @property {module:model/RequestTimeFilterPostcodesProperty}
     */
    RequestTimeFilterPostcodesProperty: RequestTimeFilterPostcodesProperty,
    /**
     * The RequestTimeFilterProperty model constructor.
     * @property {module:model/RequestTimeFilterProperty}
     */
    RequestTimeFilterProperty: RequestTimeFilterProperty,
    /**
     * The RequestTimeMap model constructor.
     * @property {module:model/RequestTimeMap}
     */
    RequestTimeMap: RequestTimeMap,
    /**
     * The RequestTimeMapArrivalSearch model constructor.
     * @property {module:model/RequestTimeMapArrivalSearch}
     */
    RequestTimeMapArrivalSearch: RequestTimeMapArrivalSearch,
    /**
     * The RequestTimeMapDepartureSearch model constructor.
     * @property {module:model/RequestTimeMapDepartureSearch}
     */
    RequestTimeMapDepartureSearch: RequestTimeMapDepartureSearch,
    /**
     * The RequestTimeMapProperty model constructor.
     * @property {module:model/RequestTimeMapProperty}
     */
    RequestTimeMapProperty: RequestTimeMapProperty,
    /**
     * The RequestTransportation model constructor.
     * @property {module:model/RequestTransportation}
     */
    RequestTransportation: RequestTransportation,
    /**
     * The RequestTransportationFast model constructor.
     * @property {module:model/RequestTransportationFast}
     */
    RequestTransportationFast: RequestTransportationFast,
    /**
     * The RequestUnionOnIntersection model constructor.
     * @property {module:model/RequestUnionOnIntersection}
     */
    RequestUnionOnIntersection: RequestUnionOnIntersection,
    /**
     * The ResponseBoundingBox model constructor.
     * @property {module:model/ResponseBoundingBox}
     */
    ResponseBoundingBox: ResponseBoundingBox,
    /**
     * The ResponseBox model constructor.
     * @property {module:model/ResponseBox}
     */
    ResponseBox: ResponseBox,
    /**
     * The ResponseDistanceBreakdownItem model constructor.
     * @property {module:model/ResponseDistanceBreakdownItem}
     */
    ResponseDistanceBreakdownItem: ResponseDistanceBreakdownItem,
    /**
     * The ResponseError model constructor.
     * @property {module:model/ResponseError}
     */
    ResponseError: ResponseError,
    /**
     * The ResponseFareTicket model constructor.
     * @property {module:model/ResponseFareTicket}
     */
    ResponseFareTicket: ResponseFareTicket,
    /**
     * The ResponseFares model constructor.
     * @property {module:model/ResponseFares}
     */
    ResponseFares: ResponseFares,
    /**
     * The ResponseFaresBreakdownItem model constructor.
     * @property {module:model/ResponseFaresBreakdownItem}
     */
    ResponseFaresBreakdownItem: ResponseFaresBreakdownItem,
    /**
     * The ResponseFaresFast model constructor.
     * @property {module:model/ResponseFaresFast}
     */
    ResponseFaresFast: ResponseFaresFast,
    /**
     * The ResponseGeocoding model constructor.
     * @property {module:model/ResponseGeocoding}
     */
    ResponseGeocoding: ResponseGeocoding,
    /**
     * The ResponseGeocodingGeoJsonFeature model constructor.
     * @property {module:model/ResponseGeocodingGeoJsonFeature}
     */
    ResponseGeocodingGeoJsonFeature: ResponseGeocodingGeoJsonFeature,
    /**
     * The ResponseGeocodingGeometry model constructor.
     * @property {module:model/ResponseGeocodingGeometry}
     */
    ResponseGeocodingGeometry: ResponseGeocodingGeometry,
    /**
     * The ResponseGeocodingProperties model constructor.
     * @property {module:model/ResponseGeocodingProperties}
     */
    ResponseGeocodingProperties: ResponseGeocodingProperties,
    /**
     * The ResponseMapInfo model constructor.
     * @property {module:model/ResponseMapInfo}
     */
    ResponseMapInfo: ResponseMapInfo,
    /**
     * The ResponseMapInfoFeatures model constructor.
     * @property {module:model/ResponseMapInfoFeatures}
     */
    ResponseMapInfoFeatures: ResponseMapInfoFeatures,
    /**
     * The ResponseMapInfoFeaturesPublicTransport model constructor.
     * @property {module:model/ResponseMapInfoFeaturesPublicTransport}
     */
    ResponseMapInfoFeaturesPublicTransport: ResponseMapInfoFeaturesPublicTransport,
    /**
     * The ResponseMapInfoMap model constructor.
     * @property {module:model/ResponseMapInfoMap}
     */
    ResponseMapInfoMap: ResponseMapInfoMap,
    /**
     * The ResponseRoute model constructor.
     * @property {module:model/ResponseRoute}
     */
    ResponseRoute: ResponseRoute,
    /**
     * The ResponseRoutePart model constructor.
     * @property {module:model/ResponseRoutePart}
     */
    ResponseRoutePart: ResponseRoutePart,
    /**
     * The ResponseRoutes model constructor.
     * @property {module:model/ResponseRoutes}
     */
    ResponseRoutes: ResponseRoutes,
    /**
     * The ResponseRoutesLocation model constructor.
     * @property {module:model/ResponseRoutesLocation}
     */
    ResponseRoutesLocation: ResponseRoutesLocation,
    /**
     * The ResponseRoutesProperties model constructor.
     * @property {module:model/ResponseRoutesProperties}
     */
    ResponseRoutesProperties: ResponseRoutesProperties,
    /**
     * The ResponseRoutesResult model constructor.
     * @property {module:model/ResponseRoutesResult}
     */
    ResponseRoutesResult: ResponseRoutesResult,
    /**
     * The ResponseShape model constructor.
     * @property {module:model/ResponseShape}
     */
    ResponseShape: ResponseShape,
    /**
     * The ResponseSupportedLocation model constructor.
     * @property {module:model/ResponseSupportedLocation}
     */
    ResponseSupportedLocation: ResponseSupportedLocation,
    /**
     * The ResponseSupportedLocations model constructor.
     * @property {module:model/ResponseSupportedLocations}
     */
    ResponseSupportedLocations: ResponseSupportedLocations,
    /**
     * The ResponseTimeFilter model constructor.
     * @property {module:model/ResponseTimeFilter}
     */
    ResponseTimeFilter: ResponseTimeFilter,
    /**
     * The ResponseTimeFilterFast model constructor.
     * @property {module:model/ResponseTimeFilterFast}
     */
    ResponseTimeFilterFast: ResponseTimeFilterFast,
    /**
     * The ResponseTimeFilterFastLocation model constructor.
     * @property {module:model/ResponseTimeFilterFastLocation}
     */
    ResponseTimeFilterFastLocation: ResponseTimeFilterFastLocation,
    /**
     * The ResponseTimeFilterFastProperties model constructor.
     * @property {module:model/ResponseTimeFilterFastProperties}
     */
    ResponseTimeFilterFastProperties: ResponseTimeFilterFastProperties,
    /**
     * The ResponseTimeFilterFastResult model constructor.
     * @property {module:model/ResponseTimeFilterFastResult}
     */
    ResponseTimeFilterFastResult: ResponseTimeFilterFastResult,
    /**
     * The ResponseTimeFilterLocation model constructor.
     * @property {module:model/ResponseTimeFilterLocation}
     */
    ResponseTimeFilterLocation: ResponseTimeFilterLocation,
    /**
     * The ResponseTimeFilterPostcode model constructor.
     * @property {module:model/ResponseTimeFilterPostcode}
     */
    ResponseTimeFilterPostcode: ResponseTimeFilterPostcode,
    /**
     * The ResponseTimeFilterPostcodeDistrict model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeDistrict}
     */
    ResponseTimeFilterPostcodeDistrict: ResponseTimeFilterPostcodeDistrict,
    /**
     * The ResponseTimeFilterPostcodeDistrictProperties model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeDistrictProperties}
     */
    ResponseTimeFilterPostcodeDistrictProperties: ResponseTimeFilterPostcodeDistrictProperties,
    /**
     * The ResponseTimeFilterPostcodeDistricts model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeDistricts}
     */
    ResponseTimeFilterPostcodeDistricts: ResponseTimeFilterPostcodeDistricts,
    /**
     * The ResponseTimeFilterPostcodeDistrictsResult model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeDistrictsResult}
     */
    ResponseTimeFilterPostcodeDistrictsResult: ResponseTimeFilterPostcodeDistrictsResult,
    /**
     * The ResponseTimeFilterPostcodeSector model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeSector}
     */
    ResponseTimeFilterPostcodeSector: ResponseTimeFilterPostcodeSector,
    /**
     * The ResponseTimeFilterPostcodeSectorProperties model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeSectorProperties}
     */
    ResponseTimeFilterPostcodeSectorProperties: ResponseTimeFilterPostcodeSectorProperties,
    /**
     * The ResponseTimeFilterPostcodeSectors model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeSectors}
     */
    ResponseTimeFilterPostcodeSectors: ResponseTimeFilterPostcodeSectors,
    /**
     * The ResponseTimeFilterPostcodeSectorsResult model constructor.
     * @property {module:model/ResponseTimeFilterPostcodeSectorsResult}
     */
    ResponseTimeFilterPostcodeSectorsResult: ResponseTimeFilterPostcodeSectorsResult,
    /**
     * The ResponseTimeFilterPostcodes model constructor.
     * @property {module:model/ResponseTimeFilterPostcodes}
     */
    ResponseTimeFilterPostcodes: ResponseTimeFilterPostcodes,
    /**
     * The ResponseTimeFilterPostcodesProperties model constructor.
     * @property {module:model/ResponseTimeFilterPostcodesProperties}
     */
    ResponseTimeFilterPostcodesProperties: ResponseTimeFilterPostcodesProperties,
    /**
     * The ResponseTimeFilterPostcodesResult model constructor.
     * @property {module:model/ResponseTimeFilterPostcodesResult}
     */
    ResponseTimeFilterPostcodesResult: ResponseTimeFilterPostcodesResult,
    /**
     * The ResponseTimeFilterProperties model constructor.
     * @property {module:model/ResponseTimeFilterProperties}
     */
    ResponseTimeFilterProperties: ResponseTimeFilterProperties,
    /**
     * The ResponseTimeFilterResult model constructor.
     * @property {module:model/ResponseTimeFilterResult}
     */
    ResponseTimeFilterResult: ResponseTimeFilterResult,
    /**
     * The ResponseTimeMap model constructor.
     * @property {module:model/ResponseTimeMap}
     */
    ResponseTimeMap: ResponseTimeMap,
    /**
     * The ResponseTimeMapBoundingBoxes model constructor.
     * @property {module:model/ResponseTimeMapBoundingBoxes}
     */
    ResponseTimeMapBoundingBoxes: ResponseTimeMapBoundingBoxes,
    /**
     * The ResponseTimeMapBoundingBoxesResult model constructor.
     * @property {module:model/ResponseTimeMapBoundingBoxesResult}
     */
    ResponseTimeMapBoundingBoxesResult: ResponseTimeMapBoundingBoxesResult,
    /**
     * The ResponseTimeMapProperties model constructor.
     * @property {module:model/ResponseTimeMapProperties}
     */
    ResponseTimeMapProperties: ResponseTimeMapProperties,
    /**
     * The ResponseTimeMapResult model constructor.
     * @property {module:model/ResponseTimeMapResult}
     */
    ResponseTimeMapResult: ResponseTimeMapResult,
    /**
     * The ResponseTimeMapWkt model constructor.
     * @property {module:model/ResponseTimeMapWkt}
     */
    ResponseTimeMapWkt: ResponseTimeMapWkt,
    /**
     * The ResponseTimeMapWktResult model constructor.
     * @property {module:model/ResponseTimeMapWktResult}
     */
    ResponseTimeMapWktResult: ResponseTimeMapWktResult,
    /**
     * The ResponseTransportationMode model constructor.
     * @property {module:model/ResponseTransportationMode}
     */
    ResponseTransportationMode: ResponseTransportationMode,
    /**
     * The ResponseTravelTimeStatistics model constructor.
     * @property {module:model/ResponseTravelTimeStatistics}
     */
    ResponseTravelTimeStatistics: ResponseTravelTimeStatistics,
    /**
     * The DefaultApi service constructor.
     * @property {module:api/DefaultApi}
     */
    DefaultApi: DefaultApi
  };

  return exports;
}));
