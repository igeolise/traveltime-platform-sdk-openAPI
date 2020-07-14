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

#include "OpenAPIResponseRoutePart.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI 
{

inline FString ToString(const OpenAPIResponseRoutePart::TypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIResponseRoutePart::TypeEnum::Basic:
		return TEXT("basic");
	case OpenAPIResponseRoutePart::TypeEnum::StartEnd:
		return TEXT("start_end");
	case OpenAPIResponseRoutePart::TypeEnum::Road:
		return TEXT("road");
	case OpenAPIResponseRoutePart::TypeEnum::PublicTransport:
		return TEXT("public_transport");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIResponseRoutePart::TypeEnum Value (%d)"), (int)Value);	
	return TEXT("");
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIResponseRoutePart::TypeEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIResponseRoutePart::TypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIResponseRoutePart::TypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		static TMap<FString, OpenAPIResponseRoutePart::TypeEnum> StringToEnum = { 
			{ TEXT("basic"), OpenAPIResponseRoutePart::TypeEnum::Basic },
			{ TEXT("start_end"), OpenAPIResponseRoutePart::TypeEnum::StartEnd },
			{ TEXT("road"), OpenAPIResponseRoutePart::TypeEnum::Road },
			{ TEXT("public_transport"), OpenAPIResponseRoutePart::TypeEnum::PublicTransport }, };

		const auto Found = StringToEnum.Find(TmpValue);
		if(Found)
		{
			Value = *Found;
			return true;
		}
	}
	return false;
}

void OpenAPIResponseRoutePart::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id);
	Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type);
	Writer->WriteIdentifierPrefix(TEXT("mode")); WriteJsonValue(Writer, Mode);
	Writer->WriteIdentifierPrefix(TEXT("directions")); WriteJsonValue(Writer, Directions);
	Writer->WriteIdentifierPrefix(TEXT("distance")); WriteJsonValue(Writer, Distance);
	Writer->WriteIdentifierPrefix(TEXT("travel_time")); WriteJsonValue(Writer, TravelTime);
	Writer->WriteIdentifierPrefix(TEXT("coords")); WriteJsonValue(Writer, Coords);
	if (Direction.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("direction")); WriteJsonValue(Writer, Direction.GetValue());	
	}
	if (Road.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("road")); WriteJsonValue(Writer, Road.GetValue());	
	}
	if (Turn.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("turn")); WriteJsonValue(Writer, Turn.GetValue());	
	}
	if (Line.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("line")); WriteJsonValue(Writer, Line.GetValue());	
	}
	if (DepartureStation.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("departure_station")); WriteJsonValue(Writer, DepartureStation.GetValue());	
	}
	if (ArrivalStation.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("arrival_station")); WriteJsonValue(Writer, ArrivalStation.GetValue());	
	}
	if (DepartsAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("departs_at")); WriteJsonValue(Writer, DepartsAt.GetValue());	
	}
	if (ArrivesAt.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("arrives_at")); WriteJsonValue(Writer, ArrivesAt.GetValue());	
	}
	if (NumStops.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("num_stops")); WriteJsonValue(Writer, NumStops.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIResponseRoutePart::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("mode"), Mode);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("directions"), Directions);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("distance"), Distance);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("travel_time"), TravelTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("coords"), Coords);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("direction"), Direction);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("road"), Road);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("turn"), Turn);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("line"), Line);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("departure_station"), DepartureStation);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("arrival_station"), ArrivalStation);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("departs_at"), DepartsAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("arrives_at"), ArrivesAt);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("num_stops"), NumStops);

	return ParseSuccess;
}

}
