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



#include "ResponseRoutesLocation.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseRoutesLocation::ResponseRoutesLocation()
{
    m_Id = utility::conversions::to_string_t("");
    m_IdIsSet = false;
    m_PropertiesIsSet = false;
}

ResponseRoutesLocation::~ResponseRoutesLocation()
{
}

void ResponseRoutesLocation::validate()
{
    // TODO: implement validation
}

web::json::value ResponseRoutesLocation::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_IdIsSet)
    {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    }
    if(m_PropertiesIsSet)
    {
        val[utility::conversions::to_string_t("properties")] = ModelBase::toJson(m_Properties);
    }

    return val;
}

bool ResponseRoutesLocation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_id);
            setId(refVal_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("properties")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("properties"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseRoutesProperties>> refVal_properties;
            ok &= ModelBase::fromJson(fieldValue, refVal_properties);
            setProperties(refVal_properties);
        }
    }
    return ok;
}

void ResponseRoutesLocation::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_IdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    }
    if(m_PropertiesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("properties"), m_Properties));
    }
}

bool ResponseRoutesLocation::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("id")))
    {
        utility::string_t refVal_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("id")), refVal_id );
        setId(refVal_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("properties")))
    {
        std::vector<std::shared_ptr<ResponseRoutesProperties>> refVal_properties;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("properties")), refVal_properties );
        setProperties(refVal_properties);
    }
    return ok;
}

utility::string_t ResponseRoutesLocation::getId() const
{
    return m_Id;
}

void ResponseRoutesLocation::setId(const utility::string_t& value)
{
    m_Id = value;
    m_IdIsSet = true;
}

bool ResponseRoutesLocation::idIsSet() const
{
    return m_IdIsSet;
}

void ResponseRoutesLocation::unsetId()
{
    m_IdIsSet = false;
}
std::vector<std::shared_ptr<ResponseRoutesProperties>>& ResponseRoutesLocation::getProperties()
{
    return m_Properties;
}

void ResponseRoutesLocation::setProperties(const std::vector<std::shared_ptr<ResponseRoutesProperties>>& value)
{
    m_Properties = value;
    m_PropertiesIsSet = true;
}

bool ResponseRoutesLocation::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}

void ResponseRoutesLocation::unsetProperties()
{
    m_PropertiesIsSet = false;
}
}
}
}
}


