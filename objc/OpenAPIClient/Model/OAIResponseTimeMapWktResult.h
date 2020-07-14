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


#import "OAIResponseTimeMapProperties.h"
@protocol OAIResponseTimeMapProperties;
@class OAIResponseTimeMapProperties;



@protocol OAIResponseTimeMapWktResult
@end

@interface OAIResponseTimeMapWktResult : OAIObject


@property(nonatomic) NSString* searchId;

@property(nonatomic) NSString* shape;

@property(nonatomic) OAIResponseTimeMapProperties* properties;

@end
