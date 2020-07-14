#import <Foundation/Foundation.h>
#import "OAIObject.h"

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


#import "OAIRequestRangeFull.h"
#import "OAIRequestRoutesProperty.h"
#import "OAIRequestTransportation.h"
@protocol OAIRequestRangeFull;
@class OAIRequestRangeFull;
@protocol OAIRequestRoutesProperty;
@class OAIRequestRoutesProperty;
@protocol OAIRequestTransportation;
@class OAIRequestTransportation;



@protocol OAIRequestRoutesDepartureSearch
@end

@interface OAIRequestRoutesDepartureSearch : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* departureLocationId;

@property(nonatomic) NSArray<NSString*>* arrivalLocationIds;

@property(nonatomic) OAIRequestTransportation* transportation;

@property(nonatomic) NSDate* departureTime;

@property(nonatomic) NSArray<OAIRequestRoutesProperty>* properties;

@property(nonatomic) OAIRequestRangeFull* range;

@end
