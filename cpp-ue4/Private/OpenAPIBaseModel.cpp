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

#include "OpenAPIBaseModel.h"

namespace OpenAPI 
{

void Response::SetHttpResponseCode(EHttpResponseCodes::Type InHttpResponseCode)
{
    ResponseCode = InHttpResponseCode;
    SetSuccessful(EHttpResponseCodes::IsOk(InHttpResponseCode));
    if(InHttpResponseCode == EHttpResponseCodes::RequestTimeout)
    {
        SetResponseString(TEXT("Request Timeout"));
    }
}

}
