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



#include "RequestRoutesProperty.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {



RequestRoutesProperty::RequestRoutesProperty()
{
}

RequestRoutesProperty::~RequestRoutesProperty()
{
}

void RequestRoutesProperty::validate()
{
    // TODO: implement validation
}

web::json::value RequestRoutesProperty::toJson() const
{
    web::json::value val = web::json::value::object();

    
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_TRAVEL_TIME) val = web::json::value::string(U("travel_time"));
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_DISTANCE) val = web::json::value::string(U("distance"));
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_FARES) val = web::json::value::string(U("fares"));
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_ROUTE) val = web::json::value::string(U("route"));

    return val;
}

bool RequestRoutesProperty::fromJson(const web::json::value& val)
{
    auto s = val.as_string();

    
    if (s == utility::conversions::to_string_t("travel_time")) m_value = eRequestRoutesProperty::RequestRoutesProperty_TRAVEL_TIME;
    if (s == utility::conversions::to_string_t("distance")) m_value = eRequestRoutesProperty::RequestRoutesProperty_DISTANCE;
    if (s == utility::conversions::to_string_t("fares")) m_value = eRequestRoutesProperty::RequestRoutesProperty_FARES;
    if (s == utility::conversions::to_string_t("route")) m_value = eRequestRoutesProperty::RequestRoutesProperty_ROUTE;
    return true;
}

void RequestRoutesProperty::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    utility::string_t s;

    
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_TRAVEL_TIME) s = utility::conversions::to_string_t("travel_time");
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_DISTANCE) s = utility::conversions::to_string_t("distance");
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_FARES) s = utility::conversions::to_string_t("fares");
    if (m_value == eRequestRoutesProperty::RequestRoutesProperty_ROUTE) s = utility::conversions::to_string_t("route");

    multipart->add(ModelBase::toHttpContent(namePrefix, s));
}

bool RequestRoutesProperty::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
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
        eRequestRoutesProperty v;

        
        if (s == utility::conversions::to_string_t("travel_time")) v = eRequestRoutesProperty::RequestRoutesProperty_TRAVEL_TIME;
        if (s == utility::conversions::to_string_t("distance")) v = eRequestRoutesProperty::RequestRoutesProperty_DISTANCE;
        if (s == utility::conversions::to_string_t("fares")) v = eRequestRoutesProperty::RequestRoutesProperty_FARES;
        if (s == utility::conversions::to_string_t("route")) v = eRequestRoutesProperty::RequestRoutesProperty_ROUTE;

        setValue(v);
    }
    return ok;
}

RequestRoutesProperty::eRequestRoutesProperty RequestRoutesProperty::getValue() const
{
   return m_value;
}

void RequestRoutesProperty::setValue(RequestRoutesProperty::eRequestRoutesProperty const value)
{
   m_value = value;
}


}
}
}
}


