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

namespace OpenAPI 
{

/*
 * OpenAPIResponseBox
 *
 * 
 */
class OPENAPI_API OpenAPIResponseBox : public Model
{
public:
    virtual ~OpenAPIResponseBox() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	double MinLat = 0.0;
	double MaxLat = 0.0;
	double MinLng = 0.0;
	double MaxLng = 0.0;
};

}
