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


#import "OAIRequestArrivalTimePeriod.h"
#import "OAIRequestTimeFilterFastProperty.h"
#import "OAIRequestTransportationFast.h"
@protocol OAIRequestArrivalTimePeriod;
@class OAIRequestArrivalTimePeriod;
@protocol OAIRequestTimeFilterFastProperty;
@class OAIRequestTimeFilterFastProperty;
@protocol OAIRequestTransportationFast;
@class OAIRequestTransportationFast;



@protocol OAIRequestTimeFilterFastArrivalManyToOneSearch
@end

@interface OAIRequestTimeFilterFastArrivalManyToOneSearch : OAIObject


@property(nonatomic) NSString* _id;

@property(nonatomic) NSString* arrivalLocationId;

@property(nonatomic) NSArray<NSString*>* departureLocationIds;

@property(nonatomic) OAIRequestTransportationFast* transportation;

@property(nonatomic) NSNumber* travelTime;

@property(nonatomic) OAIRequestArrivalTimePeriod* arrivalTimePeriod;

@property(nonatomic) NSArray<OAIRequestTimeFilterFastProperty>* properties;

@end
