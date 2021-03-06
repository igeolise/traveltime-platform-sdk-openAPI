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

#include "OpenAPIResponseTimeMapWktResult.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI 
{

void OpenAPIResponseTimeMapWktResult::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	Writer->WriteIdentifierPrefix(TEXT("search_id")); WriteJsonValue(Writer, SearchId);
	Writer->WriteIdentifierPrefix(TEXT("shape")); WriteJsonValue(Writer, Shape);
	Writer->WriteIdentifierPrefix(TEXT("properties")); WriteJsonValue(Writer, Properties);
	Writer->WriteObjectEnd();
}

bool OpenAPIResponseTimeMapWktResult::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("search_id"), SearchId);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("shape"), Shape);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("properties"), Properties);

	return ParseSuccess;
}

}
