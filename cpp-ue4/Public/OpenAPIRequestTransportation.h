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
 * OpenAPIRequestTransportation
 *
 * 
 */
class OPENAPI_API OpenAPIRequestTransportation : public Model
{
public:
    virtual ~OpenAPIRequestTransportation() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	enum class TypeEnum
	{
		Cycling,
		Driving,
		Drivingtrain,
		PublicTransport,
		Walking,
		Coach,
		Bus,
		Train,
		Ferry,
		Drivingferry,
		Cyclingferry,
  	};
	TypeEnum Type;
	TOptional<int32> PtChangeDelay;
	TOptional<int32> WalkingTime;
	TOptional<int32> DrivingTimeToStation;
	TOptional<int32> ParkingTime;
	TOptional<int32> BoardingTime;
};

}
