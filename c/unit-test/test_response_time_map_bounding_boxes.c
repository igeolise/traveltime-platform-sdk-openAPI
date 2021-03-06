#ifndef response_time_map_bounding_boxes_TEST
#define response_time_map_bounding_boxes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define response_time_map_bounding_boxes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/response_time_map_bounding_boxes.h"
response_time_map_bounding_boxes_t* instantiate_response_time_map_bounding_boxes(int include_optional);



response_time_map_bounding_boxes_t* instantiate_response_time_map_bounding_boxes(int include_optional) {
  response_time_map_bounding_boxes_t* response_time_map_bounding_boxes = NULL;
  if (include_optional) {
    response_time_map_bounding_boxes = response_time_map_bounding_boxes_create(
      list_create()
    );
  } else {
    response_time_map_bounding_boxes = response_time_map_bounding_boxes_create(
      list_create()
    );
  }

  return response_time_map_bounding_boxes;
}


#ifdef response_time_map_bounding_boxes_MAIN

void test_response_time_map_bounding_boxes(int include_optional) {
    response_time_map_bounding_boxes_t* response_time_map_bounding_boxes_1 = instantiate_response_time_map_bounding_boxes(include_optional);

	cJSON* jsonresponse_time_map_bounding_boxes_1 = response_time_map_bounding_boxes_convertToJSON(response_time_map_bounding_boxes_1);
	printf("response_time_map_bounding_boxes :\n%s\n", cJSON_Print(jsonresponse_time_map_bounding_boxes_1));
	response_time_map_bounding_boxes_t* response_time_map_bounding_boxes_2 = response_time_map_bounding_boxes_parseFromJSON(jsonresponse_time_map_bounding_boxes_1);
	cJSON* jsonresponse_time_map_bounding_boxes_2 = response_time_map_bounding_boxes_convertToJSON(response_time_map_bounding_boxes_2);
	printf("repeating response_time_map_bounding_boxes:\n%s\n", cJSON_Print(jsonresponse_time_map_bounding_boxes_2));
}

int main() {
  test_response_time_map_bounding_boxes(1);
  test_response_time_map_bounding_boxes(0);

  printf("Hello world \n");
  return 0;
}

#endif // response_time_map_bounding_boxes_MAIN
#endif // response_time_map_bounding_boxes_TEST
