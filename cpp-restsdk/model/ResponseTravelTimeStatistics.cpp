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



#include "ResponseTravelTimeStatistics.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ResponseTravelTimeStatistics::ResponseTravelTimeStatistics()
{
    m_Min = 0;
    m_Max = 0;
    m_Mean = 0;
    m_Median = 0;
}

ResponseTravelTimeStatistics::~ResponseTravelTimeStatistics()
{
}

void ResponseTravelTimeStatistics::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTravelTimeStatistics::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("min")] = ModelBase::toJson(m_Min);
    val[utility::conversions::to_string_t("max")] = ModelBase::toJson(m_Max);
    val[utility::conversions::to_string_t("mean")] = ModelBase::toJson(m_Mean);
    val[utility::conversions::to_string_t("median")] = ModelBase::toJson(m_Median);

    return val;
}

void ResponseTravelTimeStatistics::fromJson(const web::json::value& val)
{
    setMin(ModelBase::int32_tFromJson(val.at(utility::conversions::to_string_t("min"))));
    setMax(ModelBase::int32_tFromJson(val.at(utility::conversions::to_string_t("max"))));
    setMean(ModelBase::int32_tFromJson(val.at(utility::conversions::to_string_t("mean"))));
    setMedian(ModelBase::int32_tFromJson(val.at(utility::conversions::to_string_t("median"))));
}

void ResponseTravelTimeStatistics::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("min"), m_Min));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("max"), m_Max));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mean"), m_Mean));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("median"), m_Median));
}

void ResponseTravelTimeStatistics::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setMin(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("min"))));
    setMax(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("max"))));
    setMean(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("mean"))));
    setMedian(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("median"))));
}

int32_t ResponseTravelTimeStatistics::getMin() const
{
    return m_Min;
}

void ResponseTravelTimeStatistics::setMin(int32_t value)
{
    m_Min = value;
    
}

int32_t ResponseTravelTimeStatistics::getMax() const
{
    return m_Max;
}

void ResponseTravelTimeStatistics::setMax(int32_t value)
{
    m_Max = value;
    
}

int32_t ResponseTravelTimeStatistics::getMean() const
{
    return m_Mean;
}

void ResponseTravelTimeStatistics::setMean(int32_t value)
{
    m_Mean = value;
    
}

int32_t ResponseTravelTimeStatistics::getMedian() const
{
    return m_Median;
}

void ResponseTravelTimeStatistics::setMedian(int32_t value)
{
    m_Median = value;
    
}

}
}
}
}

