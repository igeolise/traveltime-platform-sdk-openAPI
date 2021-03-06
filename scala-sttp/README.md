# openapi-client

TravelTime API
- API version: 1.2.1

No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)


*Automatically generated by the [OpenAPI Generator](https://openapi-generator.tech)*

## Requirements

Building the API client library requires:
1. Java 1.7+
2. Maven/Gradle/SBT

## Installation

To install the API client library to your local Maven repository, simply execute:

```shell
mvn clean install
```

To deploy it to a remote Maven repository instead, configure the settings of the repository and execute:

```shell
mvn clean deploy
```

Refer to the [OSSRH Guide](http://central.sonatype.org/pages/ossrh-guide.html) for more information.

### Maven users

Add this dependency to your project's POM:

```xml
<dependency>
  <groupId>org.openapitools</groupId>
  <artifactId>openapi-client</artifactId>
  <version>1.0.0</version>
  <scope>compile</scope>
</dependency>
```

### Gradle users

Add this dependency to your project's build file:

```groovy
compile "org.openapitools:openapi-client:1.0.0"
```

### SBT users

```scala
libraryDependencies += "org.openapitools" % "openapi-client" % "1.0.0"
```

## Getting Started

## Documentation for API Endpoints

All URIs are relative to *https://api.traveltimeapp.com*

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*DefaultApi* | **geocodingReverseSearch** | **GET** /v4/geocoding/reverse | 
*DefaultApi* | **geocodingSearch** | **GET** /v4/geocoding/search | 
*DefaultApi* | **mapInfo** | **GET** /v4/map-info | 
*DefaultApi* | **routes** | **POST** /v4/routes | 
*DefaultApi* | **supportedLocations** | **POST** /v4/supported-locations | 
*DefaultApi* | **timeFilter** | **POST** /v4/time-filter | 
*DefaultApi* | **timeFilterFast** | **POST** /v4/time-filter/fast | 
*DefaultApi* | **timeFilterPostcodeDistricts** | **POST** /v4/time-filter/postcode-districts | 
*DefaultApi* | **timeFilterPostcodeSectors** | **POST** /v4/time-filter/postcode-sectors | 
*DefaultApi* | **timeFilterPostcodes** | **POST** /v4/time-filter/postcodes | 
*DefaultApi* | **timeMap** | **POST** /v4/time-map | 


## Documentation for Models

 - [Coords](Coords.md)
 - [RequestArrivalTimePeriod](RequestArrivalTimePeriod.md)
 - [RequestLocation](RequestLocation.md)
 - [RequestRangeFull](RequestRangeFull.md)
 - [RequestRangeNoMaxResults](RequestRangeNoMaxResults.md)
 - [RequestRoutes](RequestRoutes.md)
 - [RequestRoutesArrivalSearch](RequestRoutesArrivalSearch.md)
 - [RequestRoutesDepartureSearch](RequestRoutesDepartureSearch.md)
 - [RequestRoutesProperty](RequestRoutesProperty.md)
 - [RequestSupportedLocations](RequestSupportedLocations.md)
 - [RequestTimeFilter](RequestTimeFilter.md)
 - [RequestTimeFilterArrivalSearch](RequestTimeFilterArrivalSearch.md)
 - [RequestTimeFilterDepartureSearch](RequestTimeFilterDepartureSearch.md)
 - [RequestTimeFilterFast](RequestTimeFilterFast.md)
 - [RequestTimeFilterFastArrivalManyToOneSearch](RequestTimeFilterFastArrivalManyToOneSearch.md)
 - [RequestTimeFilterFastArrivalOneToManySearch](RequestTimeFilterFastArrivalOneToManySearch.md)
 - [RequestTimeFilterFastArrivalSearches](RequestTimeFilterFastArrivalSearches.md)
 - [RequestTimeFilterFastProperty](RequestTimeFilterFastProperty.md)
 - [RequestTimeFilterPostcodeDistricts](RequestTimeFilterPostcodeDistricts.md)
 - [RequestTimeFilterPostcodeDistrictsArrivalSearch](RequestTimeFilterPostcodeDistrictsArrivalSearch.md)
 - [RequestTimeFilterPostcodeDistrictsDepartureSearch](RequestTimeFilterPostcodeDistrictsDepartureSearch.md)
 - [RequestTimeFilterPostcodeDistrictsProperty](RequestTimeFilterPostcodeDistrictsProperty.md)
 - [RequestTimeFilterPostcodeSectors](RequestTimeFilterPostcodeSectors.md)
 - [RequestTimeFilterPostcodeSectorsArrivalSearch](RequestTimeFilterPostcodeSectorsArrivalSearch.md)
 - [RequestTimeFilterPostcodeSectorsDepartureSearch](RequestTimeFilterPostcodeSectorsDepartureSearch.md)
 - [RequestTimeFilterPostcodeSectorsProperty](RequestTimeFilterPostcodeSectorsProperty.md)
 - [RequestTimeFilterPostcodes](RequestTimeFilterPostcodes.md)
 - [RequestTimeFilterPostcodesArrivalSearch](RequestTimeFilterPostcodesArrivalSearch.md)
 - [RequestTimeFilterPostcodesDepartureSearch](RequestTimeFilterPostcodesDepartureSearch.md)
 - [RequestTimeFilterPostcodesProperty](RequestTimeFilterPostcodesProperty.md)
 - [RequestTimeFilterProperty](RequestTimeFilterProperty.md)
 - [RequestTimeMap](RequestTimeMap.md)
 - [RequestTimeMapArrivalSearch](RequestTimeMapArrivalSearch.md)
 - [RequestTimeMapDepartureSearch](RequestTimeMapDepartureSearch.md)
 - [RequestTimeMapProperty](RequestTimeMapProperty.md)
 - [RequestTransportation](RequestTransportation.md)
 - [RequestTransportationFast](RequestTransportationFast.md)
 - [RequestUnionOnIntersection](RequestUnionOnIntersection.md)
 - [ResponseBoundingBox](ResponseBoundingBox.md)
 - [ResponseBox](ResponseBox.md)
 - [ResponseDistanceBreakdownItem](ResponseDistanceBreakdownItem.md)
 - [ResponseError](ResponseError.md)
 - [ResponseFareTicket](ResponseFareTicket.md)
 - [ResponseFares](ResponseFares.md)
 - [ResponseFaresBreakdownItem](ResponseFaresBreakdownItem.md)
 - [ResponseFaresFast](ResponseFaresFast.md)
 - [ResponseGeocoding](ResponseGeocoding.md)
 - [ResponseGeocodingGeoJsonFeature](ResponseGeocodingGeoJsonFeature.md)
 - [ResponseGeocodingGeometry](ResponseGeocodingGeometry.md)
 - [ResponseGeocodingProperties](ResponseGeocodingProperties.md)
 - [ResponseMapInfo](ResponseMapInfo.md)
 - [ResponseMapInfoFeatures](ResponseMapInfoFeatures.md)
 - [ResponseMapInfoFeaturesPublicTransport](ResponseMapInfoFeaturesPublicTransport.md)
 - [ResponseMapInfoMap](ResponseMapInfoMap.md)
 - [ResponseRoute](ResponseRoute.md)
 - [ResponseRoutePart](ResponseRoutePart.md)
 - [ResponseRoutes](ResponseRoutes.md)
 - [ResponseRoutesLocation](ResponseRoutesLocation.md)
 - [ResponseRoutesProperties](ResponseRoutesProperties.md)
 - [ResponseRoutesResult](ResponseRoutesResult.md)
 - [ResponseShape](ResponseShape.md)
 - [ResponseSupportedLocation](ResponseSupportedLocation.md)
 - [ResponseSupportedLocations](ResponseSupportedLocations.md)
 - [ResponseTimeFilter](ResponseTimeFilter.md)
 - [ResponseTimeFilterFast](ResponseTimeFilterFast.md)
 - [ResponseTimeFilterFastLocation](ResponseTimeFilterFastLocation.md)
 - [ResponseTimeFilterFastProperties](ResponseTimeFilterFastProperties.md)
 - [ResponseTimeFilterFastResult](ResponseTimeFilterFastResult.md)
 - [ResponseTimeFilterLocation](ResponseTimeFilterLocation.md)
 - [ResponseTimeFilterPostcode](ResponseTimeFilterPostcode.md)
 - [ResponseTimeFilterPostcodeDistrict](ResponseTimeFilterPostcodeDistrict.md)
 - [ResponseTimeFilterPostcodeDistrictProperties](ResponseTimeFilterPostcodeDistrictProperties.md)
 - [ResponseTimeFilterPostcodeDistricts](ResponseTimeFilterPostcodeDistricts.md)
 - [ResponseTimeFilterPostcodeDistrictsResult](ResponseTimeFilterPostcodeDistrictsResult.md)
 - [ResponseTimeFilterPostcodeSector](ResponseTimeFilterPostcodeSector.md)
 - [ResponseTimeFilterPostcodeSectorProperties](ResponseTimeFilterPostcodeSectorProperties.md)
 - [ResponseTimeFilterPostcodeSectors](ResponseTimeFilterPostcodeSectors.md)
 - [ResponseTimeFilterPostcodeSectorsResult](ResponseTimeFilterPostcodeSectorsResult.md)
 - [ResponseTimeFilterPostcodes](ResponseTimeFilterPostcodes.md)
 - [ResponseTimeFilterPostcodesProperties](ResponseTimeFilterPostcodesProperties.md)
 - [ResponseTimeFilterPostcodesResult](ResponseTimeFilterPostcodesResult.md)
 - [ResponseTimeFilterProperties](ResponseTimeFilterProperties.md)
 - [ResponseTimeFilterResult](ResponseTimeFilterResult.md)
 - [ResponseTimeMap](ResponseTimeMap.md)
 - [ResponseTimeMapBoundingBoxes](ResponseTimeMapBoundingBoxes.md)
 - [ResponseTimeMapBoundingBoxesResult](ResponseTimeMapBoundingBoxesResult.md)
 - [ResponseTimeMapProperties](ResponseTimeMapProperties.md)
 - [ResponseTimeMapResult](ResponseTimeMapResult.md)
 - [ResponseTimeMapWkt](ResponseTimeMapWkt.md)
 - [ResponseTimeMapWktResult](ResponseTimeMapWktResult.md)
 - [ResponseTransportationMode](ResponseTransportationMode.md)
 - [ResponseTravelTimeStatistics](ResponseTravelTimeStatistics.md)


## Documentation for Authorization

Authentication schemes defined for the API:
### ApiKey

- **Type**: API key
- **API key parameter name**: X-Api-Key
- **Location**: HTTP header

### ApplicationId

- **Type**: API key
- **API key parameter name**: X-Application-Id
- **Location**: HTTP header


## Author

support@igeolise.com

