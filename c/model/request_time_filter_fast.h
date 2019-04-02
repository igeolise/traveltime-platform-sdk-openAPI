/*
 * request_time_filter_fast.h
 *
 * 
 */

#ifndef _request_time_filter_fast_H_
#define _request_time_filter_fast_H_

#include <string.h>
#include "cJSON.h"
#include "list.h"
#include "request_location.h"
#include "request_time_filter_fast_arrival_searches.h"




typedef struct request_time_filter_fast_t {
        list_t *locations; //nonprimitive container
        request_time_filter_fast_arrival_searches_t *arrival_searches; //nonprimitive

} request_time_filter_fast_t;

request_time_filter_fast_t *request_time_filter_fast_create(
        list_t *locations,
        request_time_filter_fast_arrival_searches_t *arrival_searches
);

void request_time_filter_fast_free(request_time_filter_fast_t *request_time_filter_fast);

request_time_filter_fast_t *request_time_filter_fast_parseFromJSON(char *jsonString);

cJSON *request_time_filter_fast_convertToJSON(request_time_filter_fast_t *request_time_filter_fast);

#endif /* _request_time_filter_fast_H_ */

