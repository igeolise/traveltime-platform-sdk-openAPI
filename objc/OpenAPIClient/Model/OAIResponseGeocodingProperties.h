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


#import "OAIResponseMapInfoFeatures.h"
@protocol OAIResponseMapInfoFeatures;
@class OAIResponseMapInfoFeatures;



@protocol OAIResponseGeocodingProperties
@end

@interface OAIResponseGeocodingProperties : OAIObject


@property(nonatomic) NSString* name;

@property(nonatomic) NSString* label;

@property(nonatomic) NSNumber* score;

@property(nonatomic) NSString* houseNumber;

@property(nonatomic) NSString* street;

@property(nonatomic) NSString* region;

@property(nonatomic) NSString* regionCode;

@property(nonatomic) NSString* neighbourhood;

@property(nonatomic) NSString* county;

@property(nonatomic) NSString* macroregion;

@property(nonatomic) NSString* city;

@property(nonatomic) NSString* country;

@property(nonatomic) NSString* countryCode;

@property(nonatomic) NSString* continent;

@property(nonatomic) NSString* postcode;

@property(nonatomic) OAIResponseMapInfoFeatures* features;

@end
