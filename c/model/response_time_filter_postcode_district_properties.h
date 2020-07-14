/*
 * response_time_filter_postcode_district_properties.h
 *
 * 
 */

#ifndef _response_time_filter_postcode_district_properties_H_
#define _response_time_filter_postcode_district_properties_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_time_filter_postcode_district_properties_t response_time_filter_postcode_district_properties_t;

#include "response_travel_time_statistics.h"



typedef struct response_time_filter_postcode_district_properties_t {
    struct response_travel_time_statistics_t *travel_time_reachable; //model
    struct response_travel_time_statistics_t *travel_time_all; //model
    double coverage; //numeric

} response_time_filter_postcode_district_properties_t;

response_time_filter_postcode_district_properties_t *response_time_filter_postcode_district_properties_create(
    response_travel_time_statistics_t *travel_time_reachable,
    response_travel_time_statistics_t *travel_time_all,
    double coverage
);

void response_time_filter_postcode_district_properties_free(response_time_filter_postcode_district_properties_t *response_time_filter_postcode_district_properties);

response_time_filter_postcode_district_properties_t *response_time_filter_postcode_district_properties_parseFromJSON(cJSON *response_time_filter_postcode_district_propertiesJSON);

cJSON *response_time_filter_postcode_district_properties_convertToJSON(response_time_filter_postcode_district_properties_t *response_time_filter_postcode_district_properties);

#endif /* _response_time_filter_postcode_district_properties_H_ */

