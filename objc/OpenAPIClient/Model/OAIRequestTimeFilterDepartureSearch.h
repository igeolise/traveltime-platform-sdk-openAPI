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


#import "OAIRequestRangeFull.h"
#import "OAIRequestTimeFilterProperty.h"
#import "OAIRequestTransportation.h"
@protocol OAIRequestRangeFull;
@class OAIRequestRangeFull;
@protocol OAIRequestTimeFilterProperty;
@class OAIRequestTimeFilterProperty;
@protocol OAIRequestTransportation;
@class OAIRequestTransportation;



@protocol OAIRequestTimeFilterDepartureSearch
@end

@interface OAIRequestTimeFilterDepartureSearch : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* departureLocationId;

@property(nonatomic) NSArray<NSString*>* arrivalLocationIds;

@property(nonatomic) OAIRequestTransportation* transportation;

@property(nonatomic) NSNumber* travelTime;

@property(nonatomic) NSDate* departureTime;

@property(nonatomic) NSArray<OAIRequestTimeFilterProperty>* properties;

@property(nonatomic) OAIRequestRangeFull* range;

@end
