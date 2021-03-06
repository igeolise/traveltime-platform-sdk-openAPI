# Go API client for openapi

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)

## Overview
This API client was generated by the [OpenAPI Generator](https://openapi-generator.tech) project.  By using the [OpenAPI-spec](https://www.openapis.org/) from a remote server, you can easily generate an API client.

- API version: 1.2.1
- Package version: 1.0.0
- Build package: org.openapitools.codegen.languages.GoClientExperimentalCodegen

## Installation

Install the following dependencies:

```shell
go get github.com/stretchr/testify/assert
go get golang.org/x/oauth2
go get golang.org/x/net/context
```

Put the package under your project folder and add the following in import:

```golang
import sw "./openapi"
```

## Configuration of Server URL

Default configuration comes with `Servers` field that contains server objects as defined in the OpenAPI specification.

### Select Server Configuration

For using other server than the one defined on index 0 set context value `sw.ContextServerIndex` of type `int`.

```golang
ctx := context.WithValue(context.Background(), sw.ContextServerIndex, 1)
```

### Templated Server URL

Templated server URL is formatted using default variables from configuration or from context value `sw.ContextServerVariables` of type `map[string]string`.

```golang
ctx := context.WithValue(context.Background(), sw.ContextServerVariables, map[string]string{
	"basePath": "v2",
})
```

Note, enum values are always validated and all unused variables are silently ignored.

### URLs Configuration per Operation

Each operation can use different server URL defined using `OperationServers` map in the `Configuration`.
An operation is uniquely identifield by `"{classname}Service.{nickname}"` string.
Similar rules for overriding default operation server index and variables applies by using `sw.ContextOperationServerIndices` and `sw.ContextOperationServerVariables` context maps.

```
ctx := context.WithValue(context.Background(), sw.ContextOperationServerIndices, map[string]int{
	"{classname}Service.{nickname}": 2,
})
ctx = context.WithValue(context.Background(), sw.ContextOperationServerVariables, map[string]map[string]string{
	"{classname}Service.{nickname}": {
		"port": "8443",
	},
})
```

## Documentation for API Endpoints

All URIs are relative to *https://api.traveltimeapp.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DefaultApi* | [**GeocodingReverseSearch**](docs/DefaultApi.md#geocodingreversesearch) | **Get** /v4/geocoding/reverse | 
*DefaultApi* | [**GeocodingSearch**](docs/DefaultApi.md#geocodingsearch) | **Get** /v4/geocoding/search | 
*DefaultApi* | [**MapInfo**](docs/DefaultApi.md#mapinfo) | **Get** /v4/map-info | 
*DefaultApi* | [**Routes**](docs/DefaultApi.md#routes) | **Post** /v4/routes | 
*DefaultApi* | [**SupportedLocations**](docs/DefaultApi.md#supportedlocations) | **Post** /v4/supported-locations | 
*DefaultApi* | [**TimeFilter**](docs/DefaultApi.md#timefilter) | **Post** /v4/time-filter | 
*DefaultApi* | [**TimeFilterFast**](docs/DefaultApi.md#timefilterfast) | **Post** /v4/time-filter/fast | 
*DefaultApi* | [**TimeFilterPostcodeDistricts**](docs/DefaultApi.md#timefilterpostcodedistricts) | **Post** /v4/time-filter/postcode-districts | 
*DefaultApi* | [**TimeFilterPostcodeSectors**](docs/DefaultApi.md#timefilterpostcodesectors) | **Post** /v4/time-filter/postcode-sectors | 
*DefaultApi* | [**TimeFilterPostcodes**](docs/DefaultApi.md#timefilterpostcodes) | **Post** /v4/time-filter/postcodes | 
*DefaultApi* | [**TimeMap**](docs/DefaultApi.md#timemap) | **Post** /v4/time-map | 


## Documentation For Models

 - [Coords](docs/Coords.md)
 - [RequestArrivalTimePeriod](docs/RequestArrivalTimePeriod.md)
 - [RequestLocation](docs/RequestLocation.md)
 - [RequestRangeFull](docs/RequestRangeFull.md)
 - [RequestRangeNoMaxResults](docs/RequestRangeNoMaxResults.md)
 - [RequestRoutes](docs/RequestRoutes.md)
 - [RequestRoutesArrivalSearch](docs/RequestRoutesArrivalSearch.md)
 - [RequestRoutesDepartureSearch](docs/RequestRoutesDepartureSearch.md)
 - [RequestRoutesProperty](docs/RequestRoutesProperty.md)
 - [RequestSupportedLocations](docs/RequestSupportedLocations.md)
 - [RequestTimeFilter](docs/RequestTimeFilter.md)
 - [RequestTimeFilterArrivalSearch](docs/RequestTimeFilterArrivalSearch.md)
 - [RequestTimeFilterDepartureSearch](docs/RequestTimeFilterDepartureSearch.md)
 - [RequestTimeFilterFast](docs/RequestTimeFilterFast.md)
 - [RequestTimeFilterFastArrivalManyToOneSearch](docs/RequestTimeFilterFastArrivalManyToOneSearch.md)
 - [RequestTimeFilterFastArrivalOneToManySearch](docs/RequestTimeFilterFastArrivalOneToManySearch.md)
 - [RequestTimeFilterFastArrivalSearches](docs/RequestTimeFilterFastArrivalSearches.md)
 - [RequestTimeFilterFastProperty](docs/RequestTimeFilterFastProperty.md)
 - [RequestTimeFilterPostcodeDistricts](docs/RequestTimeFilterPostcodeDistricts.md)
 - [RequestTimeFilterPostcodeDistrictsArrivalSearch](docs/RequestTimeFilterPostcodeDistrictsArrivalSearch.md)
 - [RequestTimeFilterPostcodeDistrictsDepartureSearch](docs/RequestTimeFilterPostcodeDistrictsDepartureSearch.md)
 - [RequestTimeFilterPostcodeDistrictsProperty](docs/RequestTimeFilterPostcodeDistrictsProperty.md)
 - [RequestTimeFilterPostcodeSectors](docs/RequestTimeFilterPostcodeSectors.md)
 - [RequestTimeFilterPostcodeSectorsArrivalSearch](docs/RequestTimeFilterPostcodeSectorsArrivalSearch.md)
 - [RequestTimeFilterPostcodeSectorsDepartureSearch](docs/RequestTimeFilterPostcodeSectorsDepartureSearch.md)
 - [RequestTimeFilterPostcodeSectorsProperty](docs/RequestTimeFilterPostcodeSectorsProperty.md)
 - [RequestTimeFilterPostcodes](docs/RequestTimeFilterPostcodes.md)
 - [RequestTimeFilterPostcodesArrivalSearch](docs/RequestTimeFilterPostcodesArrivalSearch.md)
 - [RequestTimeFilterPostcodesDepartureSearch](docs/RequestTimeFilterPostcodesDepartureSearch.md)
 - [RequestTimeFilterPostcodesProperty](docs/RequestTimeFilterPostcodesProperty.md)
 - [RequestTimeFilterProperty](docs/RequestTimeFilterProperty.md)
 - [RequestTimeMap](docs/RequestTimeMap.md)
 - [RequestTimeMapArrivalSearch](docs/RequestTimeMapArrivalSearch.md)
 - [RequestTimeMapDepartureSearch](docs/RequestTimeMapDepartureSearch.md)
 - [RequestTimeMapProperty](docs/RequestTimeMapProperty.md)
 - [RequestTransportation](docs/RequestTransportation.md)
 - [RequestTransportationFast](docs/RequestTransportationFast.md)
 - [RequestUnionOnIntersection](docs/RequestUnionOnIntersection.md)
 - [ResponseBoundingBox](docs/ResponseBoundingBox.md)
 - [ResponseBox](docs/ResponseBox.md)
 - [ResponseDistanceBreakdownItem](docs/ResponseDistanceBreakdownItem.md)
 - [ResponseError](docs/ResponseError.md)
 - [ResponseFareTicket](docs/ResponseFareTicket.md)
 - [ResponseFares](docs/ResponseFares.md)
 - [ResponseFaresBreakdownItem](docs/ResponseFaresBreakdownItem.md)
 - [ResponseFaresFast](docs/ResponseFaresFast.md)
 - [ResponseGeocoding](docs/ResponseGeocoding.md)
 - [ResponseGeocodingGeoJsonFeature](docs/ResponseGeocodingGeoJsonFeature.md)
 - [ResponseGeocodingGeometry](docs/ResponseGeocodingGeometry.md)
 - [ResponseGeocodingProperties](docs/ResponseGeocodingProperties.md)
 - [ResponseMapInfo](docs/ResponseMapInfo.md)
 - [ResponseMapInfoFeatures](docs/ResponseMapInfoFeatures.md)
 - [ResponseMapInfoFeaturesPublicTransport](docs/ResponseMapInfoFeaturesPublicTransport.md)
 - [ResponseMapInfoMap](docs/ResponseMapInfoMap.md)
 - [ResponseRoute](docs/ResponseRoute.md)
 - [ResponseRoutePart](docs/ResponseRoutePart.md)
 - [ResponseRoutes](docs/ResponseRoutes.md)
 - [ResponseRoutesLocation](docs/ResponseRoutesLocation.md)
 - [ResponseRoutesProperties](docs/ResponseRoutesProperties.md)
 - [ResponseRoutesResult](docs/ResponseRoutesResult.md)
 - [ResponseShape](docs/ResponseShape.md)
 - [ResponseSupportedLocation](docs/ResponseSupportedLocation.md)
 - [ResponseSupportedLocations](docs/ResponseSupportedLocations.md)
 - [ResponseTimeFilter](docs/ResponseTimeFilter.md)
 - [ResponseTimeFilterFast](docs/ResponseTimeFilterFast.md)
 - [ResponseTimeFilterFastLocation](docs/ResponseTimeFilterFastLocation.md)
 - [ResponseTimeFilterFastProperties](docs/ResponseTimeFilterFastProperties.md)
 - [ResponseTimeFilterFastResult](docs/ResponseTimeFilterFastResult.md)
 - [ResponseTimeFilterLocation](docs/ResponseTimeFilterLocation.md)
 - [ResponseTimeFilterPostcode](docs/ResponseTimeFilterPostcode.md)
 - [ResponseTimeFilterPostcodeDistrict](docs/ResponseTimeFilterPostcodeDistrict.md)
 - [ResponseTimeFilterPostcodeDistrictProperties](docs/ResponseTimeFilterPostcodeDistrictProperties.md)
 - [ResponseTimeFilterPostcodeDistricts](docs/ResponseTimeFilterPostcodeDistricts.md)
 - [ResponseTimeFilterPostcodeDistrictsResult](docs/ResponseTimeFilterPostcodeDistrictsResult.md)
 - [ResponseTimeFilterPostcodeSector](docs/ResponseTimeFilterPostcodeSector.md)
 - [ResponseTimeFilterPostcodeSectorProperties](docs/ResponseTimeFilterPostcodeSectorProperties.md)
 - [ResponseTimeFilterPostcodeSectors](docs/ResponseTimeFilterPostcodeSectors.md)
 - [ResponseTimeFilterPostcodeSectorsResult](docs/ResponseTimeFilterPostcodeSectorsResult.md)
 - [ResponseTimeFilterPostcodes](docs/ResponseTimeFilterPostcodes.md)
 - [ResponseTimeFilterPostcodesProperties](docs/ResponseTimeFilterPostcodesProperties.md)
 - [ResponseTimeFilterPostcodesResult](docs/ResponseTimeFilterPostcodesResult.md)
 - [ResponseTimeFilterProperties](docs/ResponseTimeFilterProperties.md)
 - [ResponseTimeFilterResult](docs/ResponseTimeFilterResult.md)
 - [ResponseTimeMap](docs/ResponseTimeMap.md)
 - [ResponseTimeMapBoundingBoxes](docs/ResponseTimeMapBoundingBoxes.md)
 - [ResponseTimeMapBoundingBoxesResult](docs/ResponseTimeMapBoundingBoxesResult.md)
 - [ResponseTimeMapProperties](docs/ResponseTimeMapProperties.md)
 - [ResponseTimeMapResult](docs/ResponseTimeMapResult.md)
 - [ResponseTimeMapWkt](docs/ResponseTimeMapWkt.md)
 - [ResponseTimeMapWktResult](docs/ResponseTimeMapWktResult.md)
 - [ResponseTransportationMode](docs/ResponseTransportationMode.md)
 - [ResponseTravelTimeStatistics](docs/ResponseTravelTimeStatistics.md)


## Documentation For Authorization



### ApiKey

- **Type**: API key
- **API key parameter name**: X-Api-Key
- **Location**: HTTP header

Note, each API key must be added to a map of `map[string]APIKey` where the key is: X-Api-Key and passed in as the auth context for each request.


### ApplicationId

- **Type**: API key
- **API key parameter name**: X-Application-Id
- **Location**: HTTP header

Note, each API key must be added to a map of `map[string]APIKey` where the key is: X-Application-Id and passed in as the auth context for each request.


## Documentation for Utility Methods

Due to the fact that model structure members are all pointers, this package contains
a number of utility functions to easily obtain pointers to values of basic types.
Each of these functions takes a value of the given basic type and returns a pointer to it:

* `PtrBool`
* `PtrInt`
* `PtrInt32`
* `PtrInt64`
* `PtrFloat`
* `PtrFloat32`
* `PtrFloat64`
* `PtrString`
* `PtrTime`

## Author

support@igeolise.com

