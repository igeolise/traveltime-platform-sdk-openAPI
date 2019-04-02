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



#include "ResponseTimeFilterFastProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

ResponseTimeFilterFastProperties::ResponseTimeFilterFastProperties()
{
    m_Travel_time = 0;
    m_Travel_timeIsSet = false;
    m_FaresIsSet = false;
}

ResponseTimeFilterFastProperties::~ResponseTimeFilterFastProperties()
{
}

void ResponseTimeFilterFastProperties::validate()
{
    // TODO: implement validation
}

web::json::value ResponseTimeFilterFastProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Travel_timeIsSet)
    {
        val[utility::conversions::to_string_t("travel_time")] = ModelBase::toJson(m_Travel_time);
    }
    if(m_FaresIsSet)
    {
        val[utility::conversions::to_string_t("fares")] = ModelBase::toJson(m_Fares);
    }

    return val;
}

void ResponseTimeFilterFastProperties::fromJson(const web::json::value& val)
{
    if(val.has_field(utility::conversions::to_string_t("travel_time")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("travel_time"));
        if(!fieldValue.is_null())
        {
            setTravelTime(ModelBase::int32_tFromJson(fieldValue));
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fares")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fares"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ResponseFaresFast> newItem(new ResponseFaresFast());
            newItem->fromJson(fieldValue);
            setFares( newItem );
        }
    }
}

void ResponseTimeFilterFastProperties::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(m_Travel_timeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("travel_time"), m_Travel_time));
    }
    if(m_FaresIsSet)
    {
        if (m_Fares.get())
        {
            m_Fares->toMultipart(multipart, utility::conversions::to_string_t("fares."));
        }
    }
}

void ResponseTimeFilterFastProperties::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("travel_time")))
    {
        setTravelTime(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("travel_time"))));
    }
    if(multipart->hasContent(utility::conversions::to_string_t("fares")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("fares")))
        {
            std::shared_ptr<ResponseFaresFast> newItem(new ResponseFaresFast());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("fares."));
            setFares( newItem );
        }
    }
}

int32_t ResponseTimeFilterFastProperties::getTravelTime() const
{
    return m_Travel_time;
}

void ResponseTimeFilterFastProperties::setTravelTime(int32_t value)
{
    m_Travel_time = value;
    m_Travel_timeIsSet = true;
}

bool ResponseTimeFilterFastProperties::travelTimeIsSet() const
{
    return m_Travel_timeIsSet;
}

void ResponseTimeFilterFastProperties::unsetTravel_time()
{
    m_Travel_timeIsSet = false;
}

std::shared_ptr<ResponseFaresFast> ResponseTimeFilterFastProperties::getFares() const
{
    return m_Fares;
}

void ResponseTimeFilterFastProperties::setFares(const std::shared_ptr<ResponseFaresFast>& value)
{
    m_Fares = value;
    m_FaresIsSet = true;
}

bool ResponseTimeFilterFastProperties::faresIsSet() const
{
    return m_FaresIsSet;
}

void ResponseTimeFilterFastProperties::unsetFares()
{
    m_FaresIsSet = false;
}

}
}
}
}

