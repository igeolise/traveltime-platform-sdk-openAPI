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

#include "OpenAPIRequestTransportation.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI 
{

inline FString ToString(const OpenAPIRequestTransportation::TypeEnum& Value)
{
	switch (Value)
	{
	case OpenAPIRequestTransportation::TypeEnum::Cycling:
		return TEXT("cycling");
	case OpenAPIRequestTransportation::TypeEnum::Driving:
		return TEXT("driving");
	case OpenAPIRequestTransportation::TypeEnum::Drivingtrain:
		return TEXT("driving+train");
	case OpenAPIRequestTransportation::TypeEnum::PublicTransport:
		return TEXT("public_transport");
	case OpenAPIRequestTransportation::TypeEnum::Walking:
		return TEXT("walking");
	case OpenAPIRequestTransportation::TypeEnum::Coach:
		return TEXT("coach");
	case OpenAPIRequestTransportation::TypeEnum::Bus:
		return TEXT("bus");
	case OpenAPIRequestTransportation::TypeEnum::Train:
		return TEXT("train");
	case OpenAPIRequestTransportation::TypeEnum::Ferry:
		return TEXT("ferry");
	case OpenAPIRequestTransportation::TypeEnum::Drivingferry:
		return TEXT("driving+ferry");
	case OpenAPIRequestTransportation::TypeEnum::Cyclingferry:
		return TEXT("cycling+ferry");
	}

	UE_LOG(LogOpenAPI, Error, TEXT("Invalid OpenAPIRequestTransportation::TypeEnum Value (%d)"), (int)Value);	
	return TEXT("");
}

inline FStringFormatArg ToStringFormatArg(const OpenAPIRequestTransportation::TypeEnum& Value)
{
	return FStringFormatArg(ToString(Value));
}

inline void WriteJsonValue(JsonWriter& Writer, const OpenAPIRequestTransportation::TypeEnum& Value)
{
	WriteJsonValue(Writer, ToString(Value));
}

inline bool TryGetJsonValue(const TSharedPtr<FJsonValue>& JsonValue, OpenAPIRequestTransportation::TypeEnum& Value)
{
	FString TmpValue;
	if (JsonValue->TryGetString(TmpValue))
	{
		static TMap<FString, OpenAPIRequestTransportation::TypeEnum> StringToEnum = { 
			{ TEXT("cycling"), OpenAPIRequestTransportation::TypeEnum::Cycling },
			{ TEXT("driving"), OpenAPIRequestTransportation::TypeEnum::Driving },
			{ TEXT("driving+train"), OpenAPIRequestTransportation::TypeEnum::Drivingtrain },
			{ TEXT("public_transport"), OpenAPIRequestTransportation::TypeEnum::PublicTransport },
			{ TEXT("walking"), OpenAPIRequestTransportation::TypeEnum::Walking },
			{ TEXT("coach"), OpenAPIRequestTransportation::TypeEnum::Coach },
			{ TEXT("bus"), OpenAPIRequestTransportation::TypeEnum::Bus },
			{ TEXT("train"), OpenAPIRequestTransportation::TypeEnum::Train },
			{ TEXT("ferry"), OpenAPIRequestTransportation::TypeEnum::Ferry },
			{ TEXT("driving+ferry"), OpenAPIRequestTransportation::TypeEnum::Drivingferry },
			{ TEXT("cycling+ferry"), OpenAPIRequestTransportation::TypeEnum::Cyclingferry }, };

		const auto Found = StringToEnum.Find(TmpValue);
		if(Found)
		{
			Value = *Found;
			return true;
		}
	}
	return false;
}

void OpenAPIRequestTransportation::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("type")); WriteJsonValue(Writer, Type);
	if (PtChangeDelay.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("pt_change_delay")); WriteJsonValue(Writer, PtChangeDelay.GetValue());	
	}
	if (WalkingTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("walking_time")); WriteJsonValue(Writer, WalkingTime.GetValue());	
	}
	if (DrivingTimeToStation.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("driving_time_to_station")); WriteJsonValue(Writer, DrivingTimeToStation.GetValue());	
	}
	if (ParkingTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("parking_time")); WriteJsonValue(Writer, ParkingTime.GetValue());	
	}
	if (BoardingTime.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("boarding_time")); WriteJsonValue(Writer, BoardingTime.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRequestTransportation::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("type"), Type);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("pt_change_delay"), PtChangeDelay);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("walking_time"), WalkingTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("driving_time_to_station"), DrivingTimeToStation);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("parking_time"), ParkingTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("boarding_time"), BoardingTime);

	return ParseSuccess;
}

}
