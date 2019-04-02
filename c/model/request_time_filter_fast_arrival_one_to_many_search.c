#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "cJSON.h"
#include "list.h"
#include "keyValuePair.h"
#include "request_time_filter_fast_arrival_one_to_many_search.h"
#include "list.h"
#include "request_arrival_time_period.h"
#include "request_time_filter_fast_property.h"
#include "request_transportation_fast.h"


request_time_filter_fast_arrival_one_to_many_search_t *request_time_filter_fast_arrival_one_to_many_search_create(
    char *id,
    char *departure_location_id,
    list_t *arrival_location_ids,
    request_transportation_fast_t *transportation,
    int travel_time,
    request_arrival_time_period_t *arrival_time_period,
    list_t *properties
    ) {
	request_time_filter_fast_arrival_one_to_many_search_t *request_time_filter_fast_arrival_one_to_many_search = malloc(sizeof(request_time_filter_fast_arrival_one_to_many_search_t));
	request_time_filter_fast_arrival_one_to_many_search->id = id;
	request_time_filter_fast_arrival_one_to_many_search->departure_location_id = departure_location_id;
	request_time_filter_fast_arrival_one_to_many_search->arrival_location_ids = arrival_location_ids;
	request_time_filter_fast_arrival_one_to_many_search->transportation = transportation;
	request_time_filter_fast_arrival_one_to_many_search->travel_time = travel_time;
	request_time_filter_fast_arrival_one_to_many_search->arrival_time_period = arrival_time_period;
	request_time_filter_fast_arrival_one_to_many_search->properties = properties;

	return request_time_filter_fast_arrival_one_to_many_search;
}


void request_time_filter_fast_arrival_one_to_many_search_free(request_time_filter_fast_arrival_one_to_many_search_t *request_time_filter_fast_arrival_one_to_many_search) {
    listEntry_t *listEntry;
    free(request_time_filter_fast_arrival_one_to_many_search->id);
    free(request_time_filter_fast_arrival_one_to_many_search->departure_location_id);
	list_ForEach(listEntry, request_time_filter_fast_arrival_one_to_many_search->arrival_location_ids) {
		free(listEntry->data);
	}
	list_free(request_time_filter_fast_arrival_one_to_many_search->arrival_location_ids);
	request_transportation_fast_free(request_time_filter_fast_arrival_one_to_many_search->transportation);
	request_arrival_time_period_free(request_time_filter_fast_arrival_one_to_many_search->arrival_time_period);
		list_ForEach(listEntry, request_time_filter_fast_arrival_one_to_many_search->properties) {
		request_time_filter_fast_property_free(listEntry->data);
	}
	list_free(request_time_filter_fast_arrival_one_to_many_search->properties);

	free(request_time_filter_fast_arrival_one_to_many_search);
}

cJSON *request_time_filter_fast_arrival_one_to_many_search_convertToJSON(request_time_filter_fast_arrival_one_to_many_search_t *request_time_filter_fast_arrival_one_to_many_search) {
	cJSON *item = cJSON_CreateObject();
	// request_time_filter_fast_arrival_one_to_many_search->id
    if(cJSON_AddStringToObject(item, "id", request_time_filter_fast_arrival_one_to_many_search->id) == NULL) {
    goto fail; //String
    }

	// request_time_filter_fast_arrival_one_to_many_search->departure_location_id
    if(cJSON_AddStringToObject(item, "departure_location_id", request_time_filter_fast_arrival_one_to_many_search->departure_location_id) == NULL) {
    goto fail; //String
    }

	// request_time_filter_fast_arrival_one_to_many_search->arrival_location_ids
	cJSON *arrival_location_ids = cJSON_AddArrayToObject(item, "arrival_location_ids");
	if(arrival_location_ids == NULL) {
		goto fail; //primitive container
	}

	listEntry_t *arrival_location_idsListEntry;
    list_ForEach(arrival_location_idsListEntry, request_time_filter_fast_arrival_one_to_many_search->arrival_location_ids) {
        if(cJSON_AddStringToObject(arrival_location_ids, "", (char*)arrival_location_idsListEntry->data) == NULL)
        {
            goto fail;
        }
    }

	// request_time_filter_fast_arrival_one_to_many_search->transportation
	cJSON *transportation = request_transportation_fast_convertToJSON(request_time_filter_fast_arrival_one_to_many_search->transportation);
	if(transportation == NULL) {
		goto fail; //nonprimitive
	}
	cJSON_AddItemToObject(item, "transportation", transportation);
	if(item->child == NULL) {
		goto fail;
	}

	// request_time_filter_fast_arrival_one_to_many_search->travel_time
    if(cJSON_AddNumberToObject(item, "travel_time", request_time_filter_fast_arrival_one_to_many_search->travel_time) == NULL) {
    goto fail; //Numeric
    }

	// request_time_filter_fast_arrival_one_to_many_search->arrival_time_period
	cJSON *arrival_time_period = request_arrival_time_period_convertToJSON(request_time_filter_fast_arrival_one_to_many_search->arrival_time_period);
	if(arrival_time_period == NULL) {
		goto fail; //nonprimitive
	}
	cJSON_AddItemToObject(item, "arrival_time_period", arrival_time_period);
	if(item->child == NULL) {
		goto fail;
	}

	// request_time_filter_fast_arrival_one_to_many_search->properties
    cJSON *properties = cJSON_AddArrayToObject(item, "properties");
	if(properties == NULL) {
		goto fail; //nonprimitive container
	}

	listEntry_t *propertiesListEntry;
	list_ForEach(propertiesListEntry, request_time_filter_fast_arrival_one_to_many_search->properties) {
		cJSON *item = request_time_filter_fast_property_convertToJSON(propertiesListEntry->data);
		if(item == NULL) {
			goto fail;
		}
		cJSON_AddItemToArray(properties, item);
	}

	return item;
fail:
	cJSON_Delete(item);
	return NULL;
}

request_time_filter_fast_arrival_one_to_many_search_t *request_time_filter_fast_arrival_one_to_many_search_parseFromJSON(char *jsonString){

    request_time_filter_fast_arrival_one_to_many_search_t *request_time_filter_fast_arrival_one_to_many_search = NULL;
    cJSON *request_time_filter_fast_arrival_one_to_many_searchJSON = cJSON_Parse(jsonString);
    if(request_time_filter_fast_arrival_one_to_many_searchJSON == NULL){
        const char *error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL) {
            fprintf(stderr, "Error Before: %s\n", error_ptr);
            goto end;
        }
    }

    // request_time_filter_fast_arrival_one_to_many_search->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON, "id");
    if(!cJSON_IsString(id) || (id->valuestring == NULL)){
    goto end; //String
    }

    // request_time_filter_fast_arrival_one_to_many_search->departure_location_id
    cJSON *departure_location_id = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON, "departure_location_id");
    if(!cJSON_IsString(departure_location_id) || (departure_location_id->valuestring == NULL)){
    goto end; //String
    }

    // request_time_filter_fast_arrival_one_to_many_search->arrival_location_ids
    cJSON *arrival_location_ids;
    cJSON *arrival_location_idsJSON = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON, "arrival_location_ids");
    if(!cJSON_IsArray(arrival_location_idsJSON)) {
        goto end;//primitive container
    }
    list_t *arrival_location_idsList = list_create();

    cJSON_ArrayForEach(arrival_location_ids, arrival_location_idsJSON)
    {
        if(!cJSON_IsString(arrival_location_ids))
        {
            goto end;
        }
        list_addElement(arrival_location_idsList , strdup(arrival_location_ids->valuestring));

    }

    // request_time_filter_fast_arrival_one_to_many_search->transportation
    request_transportation_fast_t *transportation;
    cJSON *transportationJSON = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON, "transportation");
    if(request_time_filter_fast_arrival_one_to_many_searchJSON == NULL){
        const char *error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL)
            fprintf(stderr, "Error Before: %s\n", error_ptr);
        goto end; //nonprimitive
    }
    char *transportationJSONData = cJSON_Print(transportationJSON);
    transportation = request_transportation_fast_parseFromJSON(transportationJSONData);

    // request_time_filter_fast_arrival_one_to_many_search->travel_time
    cJSON *travel_time = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON, "travel_time");
    if(!cJSON_IsNumber(travel_time))
    {
    goto end; //Numeric
    }

    // request_time_filter_fast_arrival_one_to_many_search->arrival_time_period
    request_arrival_time_period_t *arrival_time_period;
    cJSON *arrival_time_periodJSON = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON, "arrival_time_period");
    if(request_time_filter_fast_arrival_one_to_many_searchJSON == NULL){
        const char *error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL)
            fprintf(stderr, "Error Before: %s\n", error_ptr);
        goto end; //nonprimitive
    }
    char *arrival_time_periodJSONData = cJSON_Print(arrival_time_periodJSON);
    arrival_time_period = request_arrival_time_period_parseFromJSON(arrival_time_periodJSONData);

    // request_time_filter_fast_arrival_one_to_many_search->properties
    cJSON *properties;
    cJSON *propertiesJSON = cJSON_GetObjectItemCaseSensitive(request_time_filter_fast_arrival_one_to_many_searchJSON,"properties");
    if(!cJSON_IsArray(propertiesJSON)){
        goto end; //nonprimitive container
    }

    list_t *propertiesList = list_create();

    cJSON_ArrayForEach(properties,propertiesJSON )
    {
        if(!cJSON_IsObject(properties)){
            goto end;
        }
		char *JSONData = cJSON_Print(properties);
        request_time_filter_fast_property_t *propertiesItem = request_time_filter_fast_property_parseFromJSON(JSONData);

        list_addElement(propertiesList, propertiesItem);
        free(JSONData);
    }


    request_time_filter_fast_arrival_one_to_many_search = request_time_filter_fast_arrival_one_to_many_search_create (
        strdup(id->valuestring),
        strdup(departure_location_id->valuestring),
        arrival_location_idsList,
        transportation,
        travel_time->valuedouble,
        arrival_time_period,
        propertiesList
        );
        free(transportationJSONData);
        free(arrival_time_periodJSONData);
 cJSON_Delete(request_time_filter_fast_arrival_one_to_many_searchJSON);
    return request_time_filter_fast_arrival_one_to_many_search;
end:
    cJSON_Delete(request_time_filter_fast_arrival_one_to_many_searchJSON);
    return NULL;

}

