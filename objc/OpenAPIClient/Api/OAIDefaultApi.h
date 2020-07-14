#import <Foundation/Foundation.h>
#import "OAIRequestRoutes.h"
#import "OAIRequestSupportedLocations.h"
#import "OAIRequestTimeFilter.h"
#import "OAIRequestTimeFilterFast.h"
#import "OAIRequestTimeFilterPostcodeDistricts.h"
#import "OAIRequestTimeFilterPostcodeSectors.h"
#import "OAIRequestTimeFilterPostcodes.h"
#import "OAIRequestTimeMap.h"
#import "OAIResponseError.h"
#import "OAIResponseGeocoding.h"
#import "OAIResponseMapInfo.h"
#import "OAIResponseRoutes.h"
#import "OAIResponseSupportedLocations.h"
#import "OAIResponseTimeFilter.h"
#import "OAIResponseTimeFilterFast.h"
#import "OAIResponseTimeFilterPostcodeDistricts.h"
#import "OAIResponseTimeFilterPostcodeSectors.h"
#import "OAIResponseTimeFilterPostcodes.h"
#import "OAIResponseTimeMap.h"
#import "OAIApi.h"

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
*/



@interface OAIDefaultApi: NSObject <OAIApi>

extern NSString* kOAIDefaultApiErrorDomain;
extern NSInteger kOAIDefaultApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(OAIApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 
/// 
///
/// @param lat 
/// @param lng 
/// @param withinCountry  (optional)
/// 
///  code:200 message:"Match a query string to geographic coordinates. [Docs link](http://docs.traveltime.com/reference/geocoding-search/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseGeocoding*
-(NSURLSessionTask*) geocodingReverseSearchWithLat: (NSNumber*) lat
    lng: (NSNumber*) lng
    withinCountry: (NSString*) withinCountry
    completionHandler: (void (^)(OAIResponseGeocoding* output, NSError* error)) handler;


/// 
/// 
///
/// @param query 
/// @param focusLat  (optional)
/// @param focusLng  (optional)
/// @param withinCountry  (optional)
/// 
///  code:200 message:"Match a query string to geographic coordinates. [Docs link](http://docs.traveltime.com/reference/geocoding-search/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseGeocoding*
-(NSURLSessionTask*) geocodingSearchWithQuery: (NSString*) query
    focusLat: (NSNumber*) focusLat
    focusLng: (NSNumber*) focusLng
    withinCountry: (NSString*) withinCountry
    completionHandler: (void (^)(OAIResponseGeocoding* output, NSError* error)) handler;


/// 
/// 
///
/// 
///  code:200 message:"Returns information about currently supported countries. [Docs link](http://docs.traveltime.com/reference/map-info/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseMapInfo*
-(NSURLSessionTask*) mapInfoWithCompletionHandler: 
    (void (^)(OAIResponseMapInfo* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestRoutes 
/// 
///  code:200 message:"Returns routing information between source and destinations. [Docs link](http://docs.traveltime.com/reference/routes/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseRoutes*
-(NSURLSessionTask*) routesWithRequestRoutes: (OAIRequestRoutes*) requestRoutes
    completionHandler: (void (^)(OAIResponseRoutes* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestSupportedLocations 
/// 
///  code:200 message:"Find out what points are supported by our api. [Docs link](http://docs.traveltime.com/reference/supported-locations/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseSupportedLocations*
-(NSURLSessionTask*) supportedLocationsWithRequestSupportedLocations: (OAIRequestSupportedLocations*) requestSupportedLocations
    completionHandler: (void (^)(OAIResponseSupportedLocations* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestTimeFilter 
/// 
///  code:200 message:"Given origin and destination points filter out points that cannot be reached within specified time limit. [Docs link](http://docs.traveltime.com/reference/time-filter)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseTimeFilter*
-(NSURLSessionTask*) timeFilterWithRequestTimeFilter: (OAIRequestTimeFilter*) requestTimeFilter
    completionHandler: (void (^)(OAIResponseTimeFilter* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestTimeFilterFast 
/// 
///  code:200 message:"A very fast version of Time Filter. [Docs link](http://docs.traveltime.com/reference/time-filter-fast/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseTimeFilterFast*
-(NSURLSessionTask*) timeFilterFastWithRequestTimeFilterFast: (OAIRequestTimeFilterFast*) requestTimeFilterFast
    completionHandler: (void (^)(OAIResponseTimeFilterFast* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestTimeFilterPostcodeDistricts 
/// 
///  code:200 message:"Find districts that have a certain coverage from origin and get statistics about postcodes within such districts. [Docs link](http://docs.traveltime.com/reference/postcode-district-filter/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseTimeFilterPostcodeDistricts*
-(NSURLSessionTask*) timeFilterPostcodeDistrictsWithRequestTimeFilterPostcodeDistricts: (OAIRequestTimeFilterPostcodeDistricts*) requestTimeFilterPostcodeDistricts
    completionHandler: (void (^)(OAIResponseTimeFilterPostcodeDistricts* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestTimeFilterPostcodeSectors 
/// 
///  code:200 message:"Find sectors that have a certain coverage from origin and get statistics about postcodes within such sectors. [Docs link](http://docs.traveltime.com/reference/postcode-sector-filter/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseTimeFilterPostcodeSectors*
-(NSURLSessionTask*) timeFilterPostcodeSectorsWithRequestTimeFilterPostcodeSectors: (OAIRequestTimeFilterPostcodeSectors*) requestTimeFilterPostcodeSectors
    completionHandler: (void (^)(OAIResponseTimeFilterPostcodeSectors* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestTimeFilterPostcodes 
/// 
///  code:200 message:"Find reachable postcodes from origin and get statistics about such postcodes. [Docs link](http://docs.traveltime.com/reference/postcode-search/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseTimeFilterPostcodes*
-(NSURLSessionTask*) timeFilterPostcodesWithRequestTimeFilterPostcodes: (OAIRequestTimeFilterPostcodes*) requestTimeFilterPostcodes
    completionHandler: (void (^)(OAIResponseTimeFilterPostcodes* output, NSError* error)) handler;


/// 
/// 
///
/// @param requestTimeMap 
/// 
///  code:200 message:"Given origin coordinates, find shapes of zones reachable within corresponding travel time. [Docs link](http://docs.traveltime.com/reference/time-map/)",
///  code:0 message:"The json body returned upon error. [Docs link](http://docs.traveltime.com/reference/error-response)"
///
/// @return OAIResponseTimeMap*
-(NSURLSessionTask*) timeMapWithRequestTimeMap: (OAIRequestTimeMap*) requestTimeMap
    completionHandler: (void (^)(OAIResponseTimeMap* output, NSError* error)) handler;



@end
