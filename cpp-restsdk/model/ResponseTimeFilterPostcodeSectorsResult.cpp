/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseTimeFilterPostcodeSectorsResult.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterPostcodeSectorsResult::ResponseTimeFilterPostcodeSectorsResult()
{
    m_Search_id = utility::conversions::to_string_t("");
    m_Search_idIsSet = false;
    m_SectorsIsSet = false;
}

ResponseTimeFilterPostcodeSectorsResult::~ResponseTimeFilterPostcodeSectorsResult()
{
}

void ResponseTimeFilterPostcodeSectorsResult::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterPostcodeSectorsResult::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Search_idIsSet)
    {
        val[utility::conversions::to_string_t("search_id")] = ModelBase::toJson(m_Search_id);
    }
    if(m_SectorsIsSet)
    {
        val[utility::conversions::to_string_t("sectors")] = ModelBase::toJson(m_Sectors);
    }

    return val;
}

bool ResponseTimeFilterPostcodeSectorsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("search_id")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_id"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_search_id;
            ok &= ModelBase::fromJson(fieldValue, refVal_search_id);
            setSearchId(refVal_search_id);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sectors")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sectors"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>> refVal_sectors;
            ok &= ModelBase::fromJson(fieldValue, refVal_sectors);
            setSectors(refVal_sectors);
        }
    }
    return ok;
}

void ResponseTimeFilterPostcodeSectorsResult::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Search_idIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("search_id"), m_Search_id));
    }
    if(m_SectorsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("sectors"), m_Sectors));
    }
}

bool ResponseTimeFilterPostcodeSectorsResult::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("search_id")))
    {
        utility::string_t refVal_search_id;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("search_id")), refVal_search_id );
        setSearchId(refVal_search_id);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("sectors")))
    {
        std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>> refVal_sectors;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("sectors")), refVal_sectors );
        setSectors(refVal_sectors);
    }
    return ok;
}

utility::string_t ResponseTimeFilterPostcodeSectorsResult::getSearchId() const
{
    return m_Search_id;
}

void ResponseTimeFilterPostcodeSectorsResult::setSearchId(const utility::string_t& value)
{
    m_Search_id = value;
    m_Search_idIsSet = true;
}

bool ResponseTimeFilterPostcodeSectorsResult::searchIdIsSet() const
{
    return m_Search_idIsSet;
}

void ResponseTimeFilterPostcodeSectorsResult::unsetSearch_id()
{
    m_Search_idIsSet = false;
}
std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>>& ResponseTimeFilterPostcodeSectorsResult::getSectors()
{
    return m_Sectors;
}

void ResponseTimeFilterPostcodeSectorsResult::setSectors(const std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>>& value)
{
    m_Sectors = value;
    m_SectorsIsSet = true;
}

bool ResponseTimeFilterPostcodeSectorsResult::sectorsIsSet() const
{
    return m_SectorsIsSet;
}

void ResponseTimeFilterPostcodeSectorsResult::unsetSectors()
{
    m_SectorsIsSet = false;
}
}
}
}
}


