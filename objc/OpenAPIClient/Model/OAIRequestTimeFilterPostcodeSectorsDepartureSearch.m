#import "OAIRequestTimeFilterPostcodeSectorsDepartureSearch.h"

@implementation OAIRequestTimeFilterPostcodeSectorsDepartureSearch

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"_id": @"id", @"transportation": @"transportation", @"travelTime": @"travel_time", @"departureTime": @"departure_time", @"reachablePostcodesThreshold": @"reachable_postcodes_threshold", @"properties": @"properties", @"range": @"range" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"range"];
  return [optionalProperties containsObject:propertyName];
}

@end
