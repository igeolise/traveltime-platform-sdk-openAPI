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



#include "ResponseShape.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseShape::ResponseShape()
{
    m_ShellIsSet = false;
    m_HolesIsSet = false;
}

ResponseShape::~ResponseShape()
{
}

void ResponseShape::validate()
{
    // TODO: implement validation
}

web::json::value ResponseShape::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ShellIsSet)
    {
        val[utility::conversions::to_string_t("shell")] = ModelBase::toJson(m_Shell);
    }
    if(m_HolesIsSet)
    {
        val[utility::conversions::to_string_t("holes")] = ModelBase::toJson(m_Holes);
    }

    return val;
}

bool ResponseShape::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shell")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shell"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<Coords>> refVal_shell;
            ok &= ModelBase::fromJson(fieldValue, refVal_shell);
            setShell(refVal_shell);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("holes")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("holes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<std::shared_ptr<Coords>>> refVal_holes;
            ok &= ModelBase::fromJson(fieldValue, refVal_holes);
            setHoles(refVal_holes);
        }
    }
    return ok;
}

void ResponseShape::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ShellIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("shell"), m_Shell));
    }
    if(m_HolesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("holes"), m_Holes));
    }
}

bool ResponseShape::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("shell")))
    {
        std::vector<std::shared_ptr<Coords>> refVal_shell;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("shell")), refVal_shell );
        setShell(refVal_shell);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("holes")))
    {
        std::vector<std::vector<std::shared_ptr<Coords>>> refVal_holes;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("holes")), refVal_holes );
        setHoles(refVal_holes);
    }
    return ok;
}

std::vector<std::shared_ptr<Coords>>& ResponseShape::getShell()
{
    return m_Shell;
}

void ResponseShape::setShell(const std::vector<std::shared_ptr<Coords>>& value)
{
    m_Shell = value;
    m_ShellIsSet = true;
}

bool ResponseShape::shellIsSet() const
{
    return m_ShellIsSet;
}

void ResponseShape::unsetShell()
{
    m_ShellIsSet = false;
}
std::vector<std::vector<std::shared_ptr<Coords>>>& ResponseShape::getHoles()
{
    return m_Holes;
}

void ResponseShape::setHoles(const std::vector<std::vector<std::shared_ptr<Coords>>>& value)
{
    m_Holes = value;
    m_HolesIsSet = true;
}

bool ResponseShape::holesIsSet() const
{
    return m_HolesIsSet;
}

void ResponseShape::unsetHoles()
{
    m_HolesIsSet = false;
}
}
}
}
}


