/*
 * response_time_filter_postcode_sectors.h
 *
 * 
 */

#ifndef _response_time_filter_postcode_sectors_H_
#define _response_time_filter_postcode_sectors_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct response_time_filter_postcode_sectors_t response_time_filter_postcode_sectors_t;

#include "response_time_filter_postcode_sectors_result.h"



typedef struct response_time_filter_postcode_sectors_t {
    list_t *results; //nonprimitive container

} response_time_filter_postcode_sectors_t;

response_time_filter_postcode_sectors_t *response_time_filter_postcode_sectors_create(
    list_t *results
);

void response_time_filter_postcode_sectors_free(response_time_filter_postcode_sectors_t *response_time_filter_postcode_sectors);

response_time_filter_postcode_sectors_t *response_time_filter_postcode_sectors_parseFromJSON(cJSON *response_time_filter_postcode_sectorsJSON);

cJSON *response_time_filter_postcode_sectors_convertToJSON(response_time_filter_postcode_sectors_t *response_time_filter_postcode_sectors);

#endif /* _response_time_filter_postcode_sectors_H_ */

