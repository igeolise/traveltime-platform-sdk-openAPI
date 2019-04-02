#import "OAIRequestTimeFilterPostcodeDistricts.h"

@implementation OAIRequestTimeFilterPostcodeDistricts

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
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"departureSearches": @"departure_searches", @"arrivalSearches": @"arrival_searches" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"departureSearches", @"arrivalSearches"];
  return [optionalProperties containsObject:propertyName];
}

@end
