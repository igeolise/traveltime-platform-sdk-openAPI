/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestArrivalTimePeriod.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

RequestArrivalTimePeriod::RequestArrivalTimePeriod()
{
}

RequestArrivalTimePeriod::~RequestArrivalTimePeriod()
{
}

void RequestArrivalTimePeriod::validate()
{
    // TODO: implement validation
}

web::json::value RequestArrivalTimePeriod::toJson() const
{
    web::json::value val = web::json::value::object();


    return val;
}

void RequestArrivalTimePeriod::fromJson(const web::json::value& val)
{
}

void RequestArrivalTimePeriod::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

void RequestArrivalTimePeriod::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

}

}
}
}
}

