/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "OpenAPIBaseModel.h"
#include "OpenAPIRequestRangeFull.h"
#include "OpenAPIRequestRoutesProperty.h"
#include "OpenAPIRequestTransportation.h"

namespace OpenAPI 
{

/*
 * OpenAPIRequestRoutesArrivalSearch
 *
 * 
 */
class OPENAPI_API OpenAPIRequestRoutesArrivalSearch : public Model
{
public:
    virtual ~OpenAPIRequestRoutesArrivalSearch() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString Id;
	TArray<FString> DepartureLocationIds;
	FString ArrivalLocationId;
	OpenAPIRequestTransportation Transportation;
	FDateTime ArrivalTime;
	TArray<OpenAPIRequestRoutesProperty> Properties;
	TOptional<OpenAPIRequestRangeFull> Range;
};

}
