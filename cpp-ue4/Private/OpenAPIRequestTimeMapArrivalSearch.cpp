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

#include "OpenAPIRequestTimeMapArrivalSearch.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI 
{

void OpenAPIRequestTimeMapArrivalSearch::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("id")); WriteJsonValue(Writer, Id);
	Writer->WriteIdentifierPrefix(TEXT("coords")); WriteJsonValue(Writer, Coords);
	Writer->WriteIdentifierPrefix(TEXT("transportation")); WriteJsonValue(Writer, Transportation);
	Writer->WriteIdentifierPrefix(TEXT("travel_time")); WriteJsonValue(Writer, TravelTime);
	Writer->WriteIdentifierPrefix(TEXT("arrival_time")); WriteJsonValue(Writer, ArrivalTime);
	if (Properties.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("properties")); WriteJsonValue(Writer, Properties.GetValue());	
	}
	if (Range.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("range")); WriteJsonValue(Writer, Range.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIRequestTimeMapArrivalSearch::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("id"), Id);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("coords"), Coords);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("transportation"), Transportation);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("travel_time"), TravelTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("arrival_time"), ArrivalTime);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("properties"), Properties);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("range"), Range);

	return ParseSuccess;
}

}
