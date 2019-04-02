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



#include "ResponseError.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ResponseError::ResponseError()
{
    m_Http_status = 0;
    m_Http_statusIsSet = false;
    m_Error_code = 0;
    m_Error_codeIsSet = false;
    m_Description = utility::conversions::to_string_t("");
    m_DescriptionIsSet = false;
    m_Documentation_link = utility::conversions::to_string_t("");
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

web::json::value ResponseError::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Http_statusIsSet)
    {
        val[utility::conversions::to_string_t("http_status")] = ModelBase::toJson(m_Http_status);
    }
    if(m_Error_codeIsSet)
    {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(m_Error_code);
    }
    if(m_DescriptionIsSet)
    {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(m_Description);
    }
    if(m_Documentation_linkIsSet)
    {
        val[utility::conversions::to_string_t("documentation_link")] = ModelBase::toJson(m_Documentation_link);
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_info )
        {
            web::json::value tmp = web::json::value::object();
            tmp[utility::conversions::to_string_t("key")] = ModelBase::toJson(item.first);
            tmp[utility::conversions::to_string_t("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("additional_info")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void ResponseError::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("http_status")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_status"));
        if(!fieldValue.is_null())
        {
            setHttpStatus(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_code")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            setErrorCode(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            setDescription(ModelBase::stringFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("documentation_link")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("documentation_link"));
        if(!fieldValue.is_null())
        {
            setDocumentationLink(ModelBase::stringFromJson(fieldValue));
        }
    }
    {
        m_Additional_info.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("additional_info")))
        {
        for( const auto& item : val.at(utility::conversions::to_string_t("additional_info")).as_array() )
        {  
            if(item.has_field(utility::conversions::to_string_t("key")))
            {
                utility::string_t key = ModelBase::stringFromJson(item.at(utility::conversions::to_string_t("key")));
                if(item.is_null())
                {
                    m_Additional_info.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, std::vector<utility::string_t>(nullptr) ));
                }
                else
                {
                    std::vector<utility::string_t> newItem(std::vector<std::shared_ptr<utility::string_t>>());
                    newItem->fromJson(item.at(utility::conversions::to_string_t("value")));
                    m_Additional_info.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, newItem ));
                }
            }
        }
        }
    }
}

void ResponseError::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Http_statusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("http_status"), m_Http_status));
    }
    if(m_Error_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("error_code"), m_Error_code));
    }
    if(m_DescriptionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("description"), m_Description));
    }
    if(m_Documentation_linkIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("documentation_link"), m_Documentation_link));
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Additional_info )
        {
            web::json::value tmp = web::json::value::object();
            tmp[utility::conversions::to_string_t("key")] = ModelBase::toJson(item.first);
            tmp[utility::conversions::to_string_t("value")] = ModelBase::toJson(item.second);
            jsonArray.push_back(tmp);
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("additional_info"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void ResponseError::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("http_status")))
    {
        setHttpStatus(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("http_status"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("error_code")))
    {
        setErrorCode(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("error_code"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("description")))
    {
        setDescription(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("description"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("documentation_link")))
    {
        setDocumentationLink(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("documentation_link"))));
    }
    {
        m_Additional_info.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("additional_info")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("additional_info"))));
        for( auto& item : jsonArray.as_array() )
        {
            utility::string_t key;
            if(item.has_field(utility::conversions::to_string_t("key")))
            {
                key = ModelBase::stringFromJson(item[utility::conversions::to_string_t("key")]);
            }
            if(item.is_null())
            {
                m_Additional_info.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, std::vector<utility::string_t>(nullptr) ));
            }
            else
            {
                std::vector<utility::string_t> newItem(std::vector<std::shared_ptr<utility::string_t>>());
                newItem->fromJson(item[utility::conversions::to_string_t("value")]);
                m_Additional_info.insert(std::pair<utility::string_t,std::vector<utility::string_t>>( key, newItem ));
            }
        }
        }
    }
}

int32_t ResponseError::getHttpStatus() const
{
    return m_Http_status;
}

void ResponseError::setHttpStatus(int32_t value)
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

void ResponseError::setErrorCode(int32_t value)
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

utility::string_t ResponseError::getDescription() const
{
    return m_Description;
}

void ResponseError::setDescription(const utility::string_t& value)
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

utility::string_t ResponseError::getDocumentationLink() const
{
    return m_Documentation_link;
}

void ResponseError::setDocumentationLink(const utility::string_t& value)
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

std::map<utility::string_t, std::vector<utility::string_t>>& ResponseError::getAdditionalInfo()
{
    return m_Additional_info;
}

void ResponseError::setAdditionalInfo(const std::map<utility::string_t, std::vector<utility::string_t>>& value)
{
    m_Additional_info = value;
    m_Additional_infoIsSet = true;
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

