#import <Foundation/Foundation.h>
#import "OAIObject.h"

/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#import "OAIResponseBoundingBox.h"
#import "OAIResponseTimeMapProperties.h"
@protocol OAIResponseBoundingBox;
@class OAIResponseBoundingBox;
@protocol OAIResponseTimeMapProperties;
@class OAIResponseTimeMapProperties;



@protocol OAIResponseTimeMapBoundingBoxesResult
@end

@interface OAIResponseTimeMapBoundingBoxesResult : OAIObject


@property(nonatomic) NSString* searchId;

@property(nonatomic) NSArray<OAIResponseBoundingBox>* boundingBoxes;

@property(nonatomic) OAIResponseTimeMapProperties* properties;

@end
