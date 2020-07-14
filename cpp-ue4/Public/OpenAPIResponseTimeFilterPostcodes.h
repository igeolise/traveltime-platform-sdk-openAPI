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
#include "OpenAPIResponseTimeFilterPostcodesResult.h"

namespace OpenAPI 
{

/*
 * OpenAPIResponseTimeFilterPostcodes
 *
 * 
 */
class OPENAPI_API OpenAPIResponseTimeFilterPostcodes : public Model
{
public:
    virtual ~OpenAPIResponseTimeFilterPostcodes() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	TArray<OpenAPIResponseTimeFilterPostcodesResult> Results;
};

}
