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

#include "OpenAPIRequestTimeFilterPostcodeSectorsProperty.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI 
{

inline FString ToString(const OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values& Value)
{
	switch (Value)
	{
	case OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values::TravelTimeReachable:
		return TEXT("travel_time_reachable");
	case OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values::TravelTimeAll:
		return TEXT("travel_time_all");
	case OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values::Coverage:
		return TEXT("coverage");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values Value (%d)"), (int)Value);	
	return TEXT("");
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		static TMap<FString, OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values> StringToEnum = { 
			{ TEXT("travel_time_reachable"), OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values::TravelTimeReachable },
			{ TEXT("travel_time_all"), OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values::TravelTimeAll },
			{ TEXT("coverage"), OpenAPIRequestTimeFilterPostcodeSectorsProperty::Values::Coverage }, };

		const auto Found = StringToEnum.Find(TmpValue);
		if(Found)
		{
			Value = *Found;
			return true;
		}
	}
	return false;
}

void OpenAPIRequestTimeFilterPostcodeSectorsProperty::WriteJson(JsonWriter& Writer) const
{
	WriteJsonValue(Writer, Value);
}

bool OpenAPIRequestTimeFilterPostcodeSectorsProperty::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	return TryGetJsonValue(JsonValue, Value);
}

}
