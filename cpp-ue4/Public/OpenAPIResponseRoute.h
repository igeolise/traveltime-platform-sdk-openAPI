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
#include "OpenAPIResponseRoutePart.h"

namespace OpenAPI 
{

/*
 * OpenAPIResponseRoute
 *
 * 
 */
class OPENAPI_API OpenAPIResponseRoute : public Model
{
public:
    virtual ~OpenAPIResponseRoute() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FDateTime DepartureTime;
	FDateTime ArrivalTime;
	TArray<OpenAPIResponseRoutePart> Parts;
};

}