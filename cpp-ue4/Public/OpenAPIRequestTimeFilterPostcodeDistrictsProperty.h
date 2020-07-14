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
 * OpenAPIRequestTimeFilterPostcodeDistrictsProperty
 *
 * 
 */
class OPENAPI_API OpenAPIRequestTimeFilterPostcodeDistrictsProperty : public Model
{
public:
    virtual ~OpenAPIRequestTimeFilterPostcodeDistrictsProperty() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class Values
	{
		TravelTimeReachable,
		TravelTimeAll,
		Coverage,
  	};

	Values Value;
};

}
