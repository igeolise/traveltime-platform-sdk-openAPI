/*
 * request_time_map_property.h
 *
 * 
 */

#ifndef _request_time_map_property_H_
#define _request_time_map_property_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct request_time_map_property_t request_time_map_property_t;


// Enum  for request_time_map_property

typedef enum { traveltime_api_request_time_map_property__NULL = 0, traveltime_api_request_time_map_property__is_only_walking } traveltime_api_request_time_map_property__e;

char* request_time_map_property_request_time_map_property_ToString(traveltime_api_request_time_map_property__e request_time_map_property);

traveltime_api_request_time_map_property__e request_time_map_property_request_time_map_property_FromString(char* request_time_map_property);

//cJSON *request_time_map_property_request_time_map_property_convertToJSON(traveltime_api_request_time_map_property__e request_time_map_property);

//traveltime_api_request_time_map_property__e request_time_map_property_request_time_map_property_parseFromJSON(cJSON *request_time_map_propertyJSON);

#endif /* _request_time_map_property_H_ */

