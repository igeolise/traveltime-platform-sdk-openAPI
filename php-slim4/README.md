# php-base - PHP Slim 4 Server library for TravelTime API

* [OpenAPI Generator](https://openapi-generator.tech)
* [Slim 4 Documentation](https://www.slimframework.com/docs/v4/)

This server has been generated with [Slim PSR-7](https://github.com/slimphp/Slim-Psr7) implementation.

## Requirements

* Web server with URL rewriting
* PHP 7.2 or newer

This package contains `.htaccess` for Apache configuration.
If you use another server(Nginx, HHVM, IIS, lighttpd) check out [Web Servers](https://www.slimframework.com/docs/v3/start/web-servers.html) doc.

## Installation via [Composer](https://getcomposer.org/)

Navigate into your project's root directory and execute the bash command shown below.
This command downloads the Slim Framework and its third-party dependencies into your project's `vendor/` directory.
```bash
$ composer install
```

## Start devserver

Run the following command in terminal to start localhost web server, assuming `./php-slim-server/` is public-accessible directory with `index.php` file:
```bash
$ php -S localhost:8888 -t php-slim-server
```
> **Warning** This web server was designed to aid application development.
> It may also be useful for testing purposes or for application demonstrations that are run in controlled environments.
> It is not intended to be a full-featured web server. It should not be used on a public network.

## Tests

### PHPUnit

This package uses PHPUnit 8 or 9(depends from your PHP version) for unit testing.
[Test folder](test) contains templates which you can fill with real test assertions.
How to write tests read at [2. Writing Tests for PHPUnit - PHPUnit 8.5 Manual](https://phpunit.readthedocs.io/en/8.5/writing-tests-for-phpunit.html).

#### Run

Command | Target
---- | ----
`$ composer test` | All tests
`$ composer test-apis` | Apis tests
`$ composer test-models` | Models tests

#### Config

Package contains fully functional config `./phpunit.xml.dist` file. Create `./phpunit.xml` in root folder to override it.

Quote from [3. The Command-Line Test Runner — PHPUnit 8.5 Manual](https://phpunit.readthedocs.io/en/8.5/textui.html#command-line-options):

> If phpunit.xml or phpunit.xml.dist (in that order) exist in the current working directory and --configuration is not used, the configuration will be automatically read from that file.

### PHP CodeSniffer

[PHP CodeSniffer Documentation](https://github.com/squizlabs/PHP_CodeSniffer/wiki). This tool helps to follow coding style and avoid common PHP coding mistakes.

#### Run

```bash
$ composer phpcs
```

#### Config

Package contains fully functional config `./phpcs.xml.dist` file. It checks source code against PSR-1 and PSR-2 coding standards.
Create `./phpcs.xml` in root folder to override it. More info at [Using a Default Configuration File](https://github.com/squizlabs/PHP_CodeSniffer/wiki/Advanced-Usage#using-a-default-configuration-file)

### PHPLint

[PHPLint Documentation](https://github.com/overtrue/phplint). Checks PHP syntax only.

#### Run

```bash
$ composer phplint
```

## Show errors

Switch on option in `./index.php`:
```diff
/**
 * Add Error Handling Middleware
 *
 * @param bool $displayErrorDetails -> Should be set to false in production
 * @param bool $logErrors -> Parameter is passed to the default ErrorHandler
 * @param bool $logErrorDetails -> Display error details in error log
 * which can be replaced by a callable of your choice.

 * Note: This middleware should be added last. It will not handle any exceptions/errors
 * for middleware added after it.
 */
--- $app->addErrorMiddleware(false, true, true);
+++ $app->addErrorMiddleware(true, true, true);
```

## Mock Server
For a quick start uncomment [mocker middleware config](index.php#L62-L89).

Used packages:
* [Openapi Data Mocker](https://github.com/ybelenko/openapi-data-mocker) - first implementation of OAS3 fake data generator.
* [Openapi Data Mocker Server Middleware](https://github.com/ybelenko/openapi-data-mocker-server-middleware) - PSR-15 HTTP server middleware.
* [Openapi Data Mocker Interfaces](https://github.com/ybelenko/openapi-data-mocker-interfaces) - package with mocking interfaces.

## API Endpoints

All URIs are relative to *https://api.traveltimeapp.com*

> Important! Do not modify abstract API controllers directly! Instead extend them by implementation classes like:

```php
// src/Api/PetApi.php

namespace OpenAPIServer\Api;

use OpenAPIServer\Api\AbstractPetApi;

class PetApi extends AbstractPetApi
{

    public function addPet($request, $response, $args)
    {
        // your implementation of addPet method here
    }
}
```

Place all your implementation classes in `./src` folder accordingly.
For instance, when abstract class located at `./lib/Api/AbstractPetApi.php` you need to create implementation class at `./src/Api/PetApi.php`.

Class | Method | HTTP request | Description
------------ | ------------- | ------------- | -------------
*AbstractDefaultApi* | **geocodingReverseSearch** | **GET** /v4/geocoding/reverse | 
*AbstractDefaultApi* | **geocodingSearch** | **GET** /v4/geocoding/search | 
*AbstractDefaultApi* | **mapInfo** | **GET** /v4/map-info | 
*AbstractDefaultApi* | **routes** | **POST** /v4/routes | 
*AbstractDefaultApi* | **supportedLocations** | **POST** /v4/supported-locations | 
*AbstractDefaultApi* | **timeFilter** | **POST** /v4/time-filter | 
*AbstractDefaultApi* | **timeFilterFast** | **POST** /v4/time-filter/fast | 
*AbstractDefaultApi* | **timeFilterPostcodeDistricts** | **POST** /v4/time-filter/postcode-districts | 
*AbstractDefaultApi* | **timeFilterPostcodeSectors** | **POST** /v4/time-filter/postcode-sectors | 
*AbstractDefaultApi* | **timeFilterPostcodes** | **POST** /v4/time-filter/postcodes | 
*AbstractDefaultApi* | **timeMap** | **POST** /v4/time-map | 


## Models

* OpenAPIServer\Model\Coords
* OpenAPIServer\Model\RequestArrivalTimePeriod
* OpenAPIServer\Model\RequestLocation
* OpenAPIServer\Model\RequestRangeFull
* OpenAPIServer\Model\RequestRangeNoMaxResults
* OpenAPIServer\Model\RequestRoutes
* OpenAPIServer\Model\RequestRoutesArrivalSearch
* OpenAPIServer\Model\RequestRoutesDepartureSearch
* OpenAPIServer\Model\RequestRoutesProperty
* OpenAPIServer\Model\RequestSupportedLocations
* OpenAPIServer\Model\RequestTimeFilter
* OpenAPIServer\Model\RequestTimeFilterArrivalSearch
* OpenAPIServer\Model\RequestTimeFilterDepartureSearch
* OpenAPIServer\Model\RequestTimeFilterFast
* OpenAPIServer\Model\RequestTimeFilterFastArrivalManyToOneSearch
* OpenAPIServer\Model\RequestTimeFilterFastArrivalOneToManySearch
* OpenAPIServer\Model\RequestTimeFilterFastArrivalSearches
* OpenAPIServer\Model\RequestTimeFilterFastProperty
* OpenAPIServer\Model\RequestTimeFilterPostcodeDistricts
* OpenAPIServer\Model\RequestTimeFilterPostcodeDistrictsArrivalSearch
* OpenAPIServer\Model\RequestTimeFilterPostcodeDistrictsDepartureSearch
* OpenAPIServer\Model\RequestTimeFilterPostcodeDistrictsProperty
* OpenAPIServer\Model\RequestTimeFilterPostcodeSectors
* OpenAPIServer\Model\RequestTimeFilterPostcodeSectorsArrivalSearch
* OpenAPIServer\Model\RequestTimeFilterPostcodeSectorsDepartureSearch
* OpenAPIServer\Model\RequestTimeFilterPostcodeSectorsProperty
* OpenAPIServer\Model\RequestTimeFilterPostcodes
* OpenAPIServer\Model\RequestTimeFilterPostcodesArrivalSearch
* OpenAPIServer\Model\RequestTimeFilterPostcodesDepartureSearch
* OpenAPIServer\Model\RequestTimeFilterPostcodesProperty
* OpenAPIServer\Model\RequestTimeFilterProperty
* OpenAPIServer\Model\RequestTimeMap
* OpenAPIServer\Model\RequestTimeMapArrivalSearch
* OpenAPIServer\Model\RequestTimeMapDepartureSearch
* OpenAPIServer\Model\RequestTimeMapProperty
* OpenAPIServer\Model\RequestTransportation
* OpenAPIServer\Model\RequestTransportationFast
* OpenAPIServer\Model\RequestUnionOnIntersection
* OpenAPIServer\Model\ResponseBoundingBox
* OpenAPIServer\Model\ResponseBox
* OpenAPIServer\Model\ResponseDistanceBreakdownItem
* OpenAPIServer\Model\ResponseError
* OpenAPIServer\Model\ResponseFareTicket
* OpenAPIServer\Model\ResponseFares
* OpenAPIServer\Model\ResponseFaresBreakdownItem
* OpenAPIServer\Model\ResponseFaresFast
* OpenAPIServer\Model\ResponseGeocoding
* OpenAPIServer\Model\ResponseGeocodingGeoJsonFeature
* OpenAPIServer\Model\ResponseGeocodingGeometry
* OpenAPIServer\Model\ResponseGeocodingProperties
* OpenAPIServer\Model\ResponseMapInfo
* OpenAPIServer\Model\ResponseMapInfoFeatures
* OpenAPIServer\Model\ResponseMapInfoFeaturesPublicTransport
* OpenAPIServer\Model\ResponseMapInfoMap
* OpenAPIServer\Model\ResponseRoute
* OpenAPIServer\Model\ResponseRoutePart
* OpenAPIServer\Model\ResponseRoutes
* OpenAPIServer\Model\ResponseRoutesLocation
* OpenAPIServer\Model\ResponseRoutesProperties
* OpenAPIServer\Model\ResponseRoutesResult
* OpenAPIServer\Model\ResponseShape
* OpenAPIServer\Model\ResponseSupportedLocation
* OpenAPIServer\Model\ResponseSupportedLocations
* OpenAPIServer\Model\ResponseTimeFilter
* OpenAPIServer\Model\ResponseTimeFilterFast
* OpenAPIServer\Model\ResponseTimeFilterFastLocation
* OpenAPIServer\Model\ResponseTimeFilterFastProperties
* OpenAPIServer\Model\ResponseTimeFilterFastResult
* OpenAPIServer\Model\ResponseTimeFilterLocation
* OpenAPIServer\Model\ResponseTimeFilterPostcode
* OpenAPIServer\Model\ResponseTimeFilterPostcodeDistrict
* OpenAPIServer\Model\ResponseTimeFilterPostcodeDistrictProperties
* OpenAPIServer\Model\ResponseTimeFilterPostcodeDistricts
* OpenAPIServer\Model\ResponseTimeFilterPostcodeDistrictsResult
* OpenAPIServer\Model\ResponseTimeFilterPostcodeSector
* OpenAPIServer\Model\ResponseTimeFilterPostcodeSectorProperties
* OpenAPIServer\Model\ResponseTimeFilterPostcodeSectors
* OpenAPIServer\Model\ResponseTimeFilterPostcodeSectorsResult
* OpenAPIServer\Model\ResponseTimeFilterPostcodes
* OpenAPIServer\Model\ResponseTimeFilterPostcodesProperties
* OpenAPIServer\Model\ResponseTimeFilterPostcodesResult
* OpenAPIServer\Model\ResponseTimeFilterProperties
* OpenAPIServer\Model\ResponseTimeFilterResult
* OpenAPIServer\Model\ResponseTimeMap
* OpenAPIServer\Model\ResponseTimeMapBoundingBoxes
* OpenAPIServer\Model\ResponseTimeMapBoundingBoxesResult
* OpenAPIServer\Model\ResponseTimeMapProperties
* OpenAPIServer\Model\ResponseTimeMapResult
* OpenAPIServer\Model\ResponseTimeMapWkt
* OpenAPIServer\Model\ResponseTimeMapWktResult
* OpenAPIServer\Model\ResponseTransportationMode
* OpenAPIServer\Model\ResponseTravelTimeStatistics


## Authentication

### Security schema `ApiKey`
> Important! To make ApiKey authentication work you need to extend [\OpenAPIServer\Auth\AbstractAuthenticator](./lib/Auth/AbstractAuthenticator.php) class by [\OpenAPIServer\Auth\ApiKeyAuthenticator](./src/Auth/ApiKeyAuthenticator.php) class.

### Security schema `ApplicationId`
> Important! To make ApiKey authentication work you need to extend [\OpenAPIServer\Auth\AbstractAuthenticator](./lib/Auth/AbstractAuthenticator.php) class by [\OpenAPIServer\Auth\ApiKeyAuthenticator](./src/Auth/ApiKeyAuthenticator.php) class.

### Advanced middleware configuration
Ref to used Slim Token Middleware [dyorg/slim-token-authentication](https://github.com/dyorg/slim-token-authentication/tree/1.x#readme)
