#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* OpenAPI spec version: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIRequestTimeFilterPostcodeSectorsArrivalSearch.h"
#import "OAIRequestTimeFilterPostcodeSectorsDepartureSearch.h"
@protocol OAIRequestTimeFilterPostcodeSectorsArrivalSearch;
@class OAIRequestTimeFilterPostcodeSectorsArrivalSearch;
@protocol OAIRequestTimeFilterPostcodeSectorsDepartureSearch;
@class OAIRequestTimeFilterPostcodeSectorsDepartureSearch;



@protocol OAIRequestTimeFilterPostcodeSectors
@end

@interface OAIRequestTimeFilterPostcodeSectors : OAIObject


@property(nonatomic) NSArray<OAIRequestTimeFilterPostcodeSectorsDepartureSearch>* departureSearches;

@property(nonatomic) NSArray<OAIRequestTimeFilterPostcodeSectorsArrivalSearch>* arrivalSearches;

@end
