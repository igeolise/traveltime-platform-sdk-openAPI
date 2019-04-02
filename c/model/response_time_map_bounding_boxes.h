/*
 * response_time_map_bounding_boxes.h
 *
 * 
 */

#ifndef _response_time_map_bounding_boxes_H_
#define _response_time_map_bounding_boxes_H_

#include <string.h>
#include "cJSON.h"
#include "list.h"
#include "response_time_map_bounding_boxes_result.h"




typedef struct response_time_map_bounding_boxes_t {
        list_t *results; //nonprimitive container

} response_time_map_bounding_boxes_t;

response_time_map_bounding_boxes_t *response_time_map_bounding_boxes_create(
        list_t *results
);

void response_time_map_bounding_boxes_free(response_time_map_bounding_boxes_t *response_time_map_bounding_boxes);

response_time_map_bounding_boxes_t *response_time_map_bounding_boxes_parseFromJSON(char *jsonString);

cJSON *response_time_map_bounding_boxes_convertToJSON(response_time_map_bounding_boxes_t *response_time_map_bounding_boxes);

#endif /* _response_time_map_bounding_boxes_H_ */

