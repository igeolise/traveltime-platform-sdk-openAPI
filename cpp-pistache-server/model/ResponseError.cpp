/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* OpenAPI spec version: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ResponseError.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseError::ResponseError()
{
    m_Http_status = 0;
    m_Http_statusIsSet = false;
    m_Error_code = 0;
    m_Error_codeIsSet = false;
    m_Description = "";
    m_DescriptionIsSet = false;
    m_Documentation_link = "";
    m_Documentation_linkIsSet = false;
    m_Additional_infoIsSet = false;
    
}

ResponseError::~ResponseError()
{
}

void ResponseError::validate()
{
    // TODO: implement validation
}

nlohmann::json ResponseError::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    if(m_Http_statusIsSet)
    {
        val["http_status"] = m_Http_status;
    }
    if(m_Error_codeIsSet)
    {
        val["error_code"] = m_Error_code;
    }
    if(m_DescriptionIsSet)
    {
        val["description"] = ModelBase::toJson(m_Description);
    }
    if(m_Documentation_linkIsSet)
    {
        val["documentation_link"] = ModelBase::toJson(m_Documentation_link);
    }
    {
        nlohmann::json jsonObj;
        for( auto const& item : m_Additional_info )
        {     
            jsonObj[item.first] = ArrayHelper::toJson<std::string>(item.second);
              
        }
        
        if(jsonObj.size() > 0)
        {
            val["additional_info"] = jsonObj;
        } 
    }
    

    return val;
}

void ResponseError::fromJson(const nlohmann::json& val)
{
    if(val.find("http_status") != val.end())
    {
        setHttpStatus(val.at("http_status"));
    }
    if(val.find("error_code") != val.end())
    {
        setErrorCode(val.at("error_code"));
    }
    if(val.find("description") != val.end())
    {
        setDescription(val.at("description"));
    }
    if(val.find("documentation_link") != val.end())
    {
        setDocumentationLink(val.at("documentation_link"));
    }
    {
        m_Additional_info.clear();
        if(val.find("additional_info") != val.end())
        {
            if(val["additional_info"].is_object()) {  
                for( auto& item : val["additional_info"].items() )
                {    
                    std::vector<std::string> newItem = ArrayHelper::fromJson<std::string>(item.value());
                    m_Additional_info.insert(m_Additional_info.end(), std::pair< std::string, std::vector<std::string> >(item.key(), newItem));
                } 
            }
        }
    }
    
}


int32_t ResponseError::getHttpStatus() const
{
    return m_Http_status;
}
void ResponseError::setHttpStatus(int32_t const value)
{
    m_Http_status = value;
    m_Http_statusIsSet = true;
}
bool ResponseError::httpStatusIsSet() const
{
    return m_Http_statusIsSet;
}
void ResponseError::unsetHttp_status()
{
    m_Http_statusIsSet = false;
}
int32_t ResponseError::getErrorCode() const
{
    return m_Error_code;
}
void ResponseError::setErrorCode(int32_t const value)
{
    m_Error_code = value;
    m_Error_codeIsSet = true;
}
bool ResponseError::errorCodeIsSet() const
{
    return m_Error_codeIsSet;
}
void ResponseError::unsetError_code()
{
    m_Error_codeIsSet = false;
}
std::string ResponseError::getDescription() const
{
    return m_Description;
}
void ResponseError::setDescription(std::string const& value)
{
    m_Description = value;
    m_DescriptionIsSet = true;
}
bool ResponseError::descriptionIsSet() const
{
    return m_DescriptionIsSet;
}
void ResponseError::unsetDescription()
{
    m_DescriptionIsSet = false;
}
std::string ResponseError::getDocumentationLink() const
{
    return m_Documentation_link;
}
void ResponseError::setDocumentationLink(std::string const& value)
{
    m_Documentation_link = value;
    m_Documentation_linkIsSet = true;
}
bool ResponseError::documentationLinkIsSet() const
{
    return m_Documentation_linkIsSet;
}
void ResponseError::unsetDocumentation_link()
{
    m_Documentation_linkIsSet = false;
}
std::map<std::string, std::vector<std::string>>& ResponseError::getAdditionalInfo()
{
    return m_Additional_info;
}
bool ResponseError::additionalInfoIsSet() const
{
    return m_Additional_infoIsSet;
}
void ResponseError::unsetAdditional_info()
{
    m_Additional_infoIsSet = false;
}

}
}
}
}

