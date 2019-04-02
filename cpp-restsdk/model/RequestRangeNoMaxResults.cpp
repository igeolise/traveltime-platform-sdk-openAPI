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



#include "RequestRangeNoMaxResults.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

RequestRangeNoMaxResults::RequestRangeNoMaxResults()
{
    m_Enabled = false;
    m_Width = 0;
}

RequestRangeNoMaxResults::~RequestRangeNoMaxResults()
{
}

void RequestRangeNoMaxResults::validate()
{
    // TODO: implement validation
}

web::json::value RequestRangeNoMaxResults::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(m_Enabled);
    val[utility::conversions::to_string_t("width")] = ModelBase::toJson(m_Width);

    return val;
}

void RequestRangeNoMaxResults::fromJson(const web::json::value& val)
{
    setEnabled(ModelBase::boolFromJson(val.at(utility::conversions::to_string_t("enabled"))));
    setWidth(ModelBase::int32_tFromJson(val.at(utility::conversions::to_string_t("width"))));
}

void RequestRangeNoMaxResults::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("enabled"), m_Enabled));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("width"), m_Width));
}

void RequestRangeNoMaxResults::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setEnabled(ModelBase::boolFromHttpContent(multipart->getContent(utility::conversions::to_string_t("enabled"))));
    setWidth(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("width"))));
}

bool RequestRangeNoMaxResults::isEnabled() const
{
    return m_Enabled;
}

void RequestRangeNoMaxResults::setEnabled(bool value)
{
    m_Enabled = value;
    
}

int32_t RequestRangeNoMaxResults::getWidth() const
{
    return m_Width;
}

void RequestRangeNoMaxResults::setWidth(int32_t value)
{
    m_Width = value;
    
}

}
}
}
}

