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


#import "OAIResponseRoutePart.h"
@protocol OAIResponseRoutePart;
@class OAIResponseRoutePart;



@protocol OAIResponseRoute
@end

@interface OAIResponseRoute : OAIObject


@property(nonatomic) NSDate* departureTime;

@property(nonatomic) NSDate* arrivalTime;

@property(nonatomic) NSArray<OAIResponseRoutePart>* parts;

@end
