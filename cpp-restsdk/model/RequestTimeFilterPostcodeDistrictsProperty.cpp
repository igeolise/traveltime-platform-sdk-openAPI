/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeFilterPostcodeDistrictsProperty.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty()
{
}

RequestTimeFilterPostcodeDistrictsProperty::~RequestTimeFilterPostcodeDistrictsProperty()
{
}

void RequestTimeFilterPostcodeDistrictsProperty::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterPostcodeDistrictsProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_REACHABLE) val = web::json::value::string(U("travel_time_reachable"));
    if (m_value == eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_ALL) val = web::json::value::string(U("travel_time_all"));
    if (m_value == eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_COVERAGE) val = web::json::value::string(U("coverage"));

    return val;
}

bool RequestTimeFilterPostcodeDistrictsProperty::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("travel_time_reachable")) m_value = eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_REACHABLE;
    if (s == utility::conversions::to_string_t("travel_time_all")) m_value = eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_ALL;
    if (s == utility::conversions::to_string_t("coverage")) m_value = eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_COVERAGE;
    return true;
}

void RequestTimeFilterPostcodeDistrictsProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_REACHABLE) s = utility::conversions::to_string_t("travel_time_reachable");
    if (m_value == eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_ALL) s = utility::conversions::to_string_t("travel_time_all");
    if (m_value == eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_COVERAGE) s = utility::conversions::to_string_t("coverage");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool RequestTimeFilterPostcodeDistrictsProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    {
        utility::string_t s;
        ok = ModelBase::fromHttpContent(multipart->getContent(namePrefix), s);
        eRequestTimeFilterPostcodeDistrictsProperty v;

        
        if (s == utility::conversions::to_string_t("travel_time_reachable")) v = eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_REACHABLE;
        if (s == utility::conversions::to_string_t("travel_time_all")) v = eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_TRAVEL_TIME_ALL;
        if (s == utility::conversions::to_string_t("coverage")) v = eRequestTimeFilterPostcodeDistrictsProperty::RequestTimeFilterPostcodeDistrictsProperty_COVERAGE;

        setValue(v);
    }
    return ok;
}

RequestTimeFilterPostcodeDistrictsProperty::eRequestTimeFilterPostcodeDistrictsProperty RequestTimeFilterPostcodeDistrictsProperty::getValue() const
{
   return m_value;
}

void RequestTimeFilterPostcodeDistrictsProperty::setValue(RequestTimeFilterPostcodeDistrictsProperty::eRequestTimeFilterPostcodeDistrictsProperty const value)
{
   m_value = value;
}


}
}
}
}


