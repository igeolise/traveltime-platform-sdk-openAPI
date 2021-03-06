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

#include "OpenAPIResponseTimeMapProperties.h"

#include "OpenAPIModule.h"
#include "OpenAPIHelpers.h"

#include "Templates/SharedPointer.h"

namespace OpenAPI 
{

void OpenAPIResponseTimeMapProperties::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (IsOnlyWalking.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("is_only_walking")); WriteJsonValue(Writer, IsOnlyWalking.GetValue());	
	}
	Writer->WriteObjectEnd();
}

bool OpenAPIResponseTimeMapProperties::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("is_only_walking"), IsOnlyWalking);

	return ParseSuccess;
}

}
