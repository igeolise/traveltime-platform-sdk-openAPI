#ifndef request_time_filter_postcodes_arrival_search_TEST
#define request_time_filter_postcodes_arrival_search_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define request_time_filter_postcodes_arrival_search_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/request_time_filter_postcodes_arrival_search.h"
request_time_filter_postcodes_arrival_search_t* instantiate_request_time_filter_postcodes_arrival_search(int include_optional);

#include "test_request_transportation.c"
#include "test_request_range_full.c"


request_time_filter_postcodes_arrival_search_t* instantiate_request_time_filter_postcodes_arrival_search(int include_optional) {
  request_time_filter_postcodes_arrival_search_t* request_time_filter_postcodes_arrival_search = NULL;
  if (include_optional) {
    request_time_filter_postcodes_arrival_search = request_time_filter_postcodes_arrival_search_create(
      "0",
       // false, not to have infinite recursion
      instantiate_request_transportation(0),
      60,
      "2013-10-20T19:20:30+01:00",
      list_create(),
       // false, not to have infinite recursion
      instantiate_request_range_full(0)
    );
  } else {
    request_time_filter_postcodes_arrival_search = request_time_filter_postcodes_arrival_search_create(
      "0",
      NULL,
      60,
      "2013-10-20T19:20:30+01:00",
      list_create(),
      NULL
    );
  }

  return request_time_filter_postcodes_arrival_search;
}


#ifdef request_time_filter_postcodes_arrival_search_MAIN

void test_request_time_filter_postcodes_arrival_search(int include_optional) {
    request_time_filter_postcodes_arrival_search_t* request_time_filter_postcodes_arrival_search_1 = instantiate_request_time_filter_postcodes_arrival_search(include_optional);

	cJSON* jsonrequest_time_filter_postcodes_arrival_search_1 = request_time_filter_postcodes_arrival_search_convertToJSON(request_time_filter_postcodes_arrival_search_1);
	printf("request_time_filter_postcodes_arrival_search :\n%s\n", cJSON_Print(jsonrequest_time_filter_postcodes_arrival_search_1));
	request_time_filter_postcodes_arrival_search_t* request_time_filter_postcodes_arrival_search_2 = request_time_filter_postcodes_arrival_search_parseFromJSON(jsonrequest_time_filter_postcodes_arrival_search_1);
	cJSON* jsonrequest_time_filter_postcodes_arrival_search_2 = request_time_filter_postcodes_arrival_search_convertToJSON(request_time_filter_postcodes_arrival_search_2);
	printf("repeating request_time_filter_postcodes_arrival_search:\n%s\n", cJSON_Print(jsonrequest_time_filter_postcodes_arrival_search_2));
}

int main() {
  test_request_time_filter_postcodes_arrival_search(1);
  test_request_time_filter_postcodes_arrival_search(0);

  printf("Hello world \n");
  return 0;
}

#endif // request_time_filter_postcodes_arrival_search_MAIN
#endif // request_time_filter_postcodes_arrival_search_TEST
