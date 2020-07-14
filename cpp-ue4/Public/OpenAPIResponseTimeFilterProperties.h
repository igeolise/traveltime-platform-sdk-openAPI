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
#include "OpenAPIResponseDistanceBreakdownItem.h"
#include "OpenAPIResponseFares.h"
#include "OpenAPIResponseRoute.h"

namespace OpenAPI 
{

/*
 * OpenAPIResponseTimeFilterProperties
 *
 * 
 */
class OPENAPI_API OpenAPIResponseTimeFilterProperties : public Model
{
public:
    virtual ~OpenAPIResponseTimeFilterProperties() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TOptional<int32> TravelTime;
	TOptional<int32> Distance;
	TOptional<TArray<OpenAPIResponseDistanceBreakdownItem>> DistanceBreakdown;
	TOptional<OpenAPIResponseFares> Fares;
	TOptional<OpenAPIResponseRoute> Route;
};

}
