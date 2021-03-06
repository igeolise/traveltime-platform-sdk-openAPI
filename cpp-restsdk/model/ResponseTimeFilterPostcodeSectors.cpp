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



#include "ResponseTimeFilterPostcodeSectors.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseTimeFilterPostcodeSectors::ResponseTimeFilterPostcodeSectors()
{
    m_ResultsIsSet = false;
}

ResponseTimeFilterPostcodeSectors::~ResponseTimeFilterPostcodeSectors()
{
}

void ResponseTimeFilterPostcodeSectors::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterPostcodeSectors::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ResultsIsSet)
    {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(m_Results);
    }

    return val;
}

bool ResponseTimeFilterPostcodeSectors::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>> refVal_results;
            ok &= ModelBase::fromJson(fieldValue, refVal_results);
            setResults(refVal_results);
        }
    }
    return ok;
}

void ResponseTimeFilterPostcodeSectors::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ResultsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("results"), m_Results));
    }
}

bool ResponseTimeFilterPostcodeSectors::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("results")))
    {
        std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>> refVal_results;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("results")), refVal_results );
        setResults(refVal_results);
    }
    return ok;
}

std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>>& ResponseTimeFilterPostcodeSectors::getResults()
{
    return m_Results;
}

void ResponseTimeFilterPostcodeSectors::setResults(const std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>>& value)
{
    m_Results = value;
    m_ResultsIsSet = true;
}

bool ResponseTimeFilterPostcodeSectors::resultsIsSet() const
{
    return m_ResultsIsSet;
}

void ResponseTimeFilterPostcodeSectors::unsetResults()
{
    m_ResultsIsSet = false;
}
}
}
}
}


