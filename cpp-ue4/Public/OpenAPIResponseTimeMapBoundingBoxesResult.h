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
#include "OpenAPIResponseBoundingBox.h"
#include "OpenAPIResponseTimeMapProperties.h"

namespace OpenAPI 
{

/*
 * OpenAPIResponseTimeMapBoundingBoxesResult
 *
 * 
 */
class OPENAPI_API OpenAPIResponseTimeMapBoundingBoxesResult : public Model
{
public:
    virtual ~OpenAPIResponseTimeMapBoundingBoxesResult() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	FString SearchId;
	TArray<OpenAPIResponseBoundingBox> BoundingBoxes;
	OpenAPIResponseTimeMapProperties Properties;
};

}
