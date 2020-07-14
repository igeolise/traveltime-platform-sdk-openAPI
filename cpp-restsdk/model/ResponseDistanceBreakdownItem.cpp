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



#include "ResponseDistanceBreakdownItem.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




ResponseDistanceBreakdownItem::ResponseDistanceBreakdownItem()
{
    m_ModeIsSet = false;
    m_Distance = 0;
    m_DistanceIsSet = false;
}

ResponseDistanceBreakdownItem::~ResponseDistanceBreakdownItem()
{
}

void ResponseDistanceBreakdownItem::validate()
{
    // TODO: implement validation
}

web::json::value ResponseDistanceBreakdownItem::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_ModeIsSet)
    {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(m_Mode);
    }
    if(m_DistanceIsSet)
    {
        val[utility::conversions::to_string_t("distance")] = ModelBase::toJson(m_Distance);
    }

    return val;
}

bool ResponseDistanceBreakdownItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<ResponseTransportationMode> refVal_mode;
            ok &= ModelBase::fromJson(fieldValue, refVal_mode);
            setMode(refVal_mode);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distance")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distance"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_distance;
            ok &= ModelBase::fromJson(fieldValue, refVal_distance);
            setDistance(refVal_distance);
        }
    }
    return ok;
}

void ResponseDistanceBreakdownItem::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_ModeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("mode"), m_Mode));
    }
    if(m_DistanceIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("distance"), m_Distance));
    }
}

bool ResponseDistanceBreakdownItem::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("mode")))
    {
        std::shared_ptr<ResponseTransportationMode> refVal_mode;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("mode")), refVal_mode );
        setMode(refVal_mode);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("distance")))
    {
        int32_t refVal_distance;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("distance")), refVal_distance );
        setDistance(refVal_distance);
    }
    return ok;
}

std::shared_ptr<ResponseTransportationMode> ResponseDistanceBreakdownItem::getMode() const
{
    return m_Mode;
}

void ResponseDistanceBreakdownItem::setMode(const std::shared_ptr<ResponseTransportationMode>& value)
{
    m_Mode = value;
    m_ModeIsSet = true;
}

bool ResponseDistanceBreakdownItem::modeIsSet() const
{
    return m_ModeIsSet;
}

void ResponseDistanceBreakdownItem::unsetMode()
{
    m_ModeIsSet = false;
}
int32_t ResponseDistanceBreakdownItem::getDistance() const
{
    return m_Distance;
}

void ResponseDistanceBreakdownItem::setDistance(int32_t value)
{
    m_Distance = value;
    m_DistanceIsSet = true;
}

bool ResponseDistanceBreakdownItem::distanceIsSet() const
{
    return m_DistanceIsSet;
}

void ResponseDistanceBreakdownItem::unsetDistance()
{
    m_DistanceIsSet = false;
}
}
}
}
}


