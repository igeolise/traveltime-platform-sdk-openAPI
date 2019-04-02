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



#include "RequestTimeFilterDepartureSearch.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

RequestTimeFilterDepartureSearch::RequestTimeFilterDepartureSearch()
{
    m_Id = utility::conversions::to_string_t("");
    m_Departure_location_id = utility::conversions::to_string_t("");
    m_Travel_time = 0;
    m_Departure_time = utility::datetime();
    m_RangeIsSet = false;
}

RequestTimeFilterDepartureSearch::~RequestTimeFilterDepartureSearch()
{
}

void RequestTimeFilterDepartureSearch::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterDepartureSearch::toJson() const
{
    web::json::value val = web::json::value::object();

    val[utility::conversions::to_string_t("id")] = ModelBase::toJson(m_Id);
    val[utility::conversions::to_string_t("departure_location_id")] = ModelBase::toJson(m_Departure_location_id);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arrival_location_ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("arrival_location_ids")] = web::json::value::array(jsonArray);
    }
    val[utility::conversions::to_string_t("transportation")] = ModelBase::toJson(m_Transportation);
    val[utility::conversions::to_string_t("travel_time")] = ModelBase::toJson(m_Travel_time);
    val[utility::conversions::to_string_t("departure_time")] = ModelBase::toJson(m_Departure_time);
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val[utility::conversions::to_string_t("properties")] = web::json::value::array(jsonArray);
    }
    if(m_RangeIsSet)
    {
        val[utility::conversions::to_string_t("range")] = ModelBase::toJson(m_Range);
    }

    return val;
}

void RequestTimeFilterDepartureSearch::fromJson(const web::json::value& val)
{
    setId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("id"))));
    setDepartureLocationId(ModelBase::stringFromJson(val.at(utility::conversions::to_string_t("departure_location_id"))));
    {
        m_Arrival_location_ids.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("arrival_location_ids")).as_array() )
        {
            m_Arrival_location_ids.push_back(ModelBase::stringFromJson(item));
        }
    }
    std::shared_ptr<RequestTransportation> newTransportation(new RequestTransportation());
    newTransportation->fromJson(val.at(utility::conversions::to_string_t("transportation")));
    setTransportation( newTransportation );
    setTravelTime(ModelBase::int32_tFromJson(val.at(utility::conversions::to_string_t("travel_time"))));
    setDepartureTime
    (ModelBase::dateFromJson(val.at(utility::conversions::to_string_t("departure_time"))));
    {
        m_Properties.clear();
        std::vector<web::json::value> jsonArray;
        for( auto& item : val.at(utility::conversions::to_string_t("properties")).as_array() )
        {
            if(item.is_null())
            {
                m_Properties.push_back( std::shared_ptr<RequestTimeFilterProperty>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterProperty> newItem(new RequestTimeFilterProperty());
                newItem->fromJson(item);
                m_Properties.push_back( newItem );
            }
        }
    }
    if(val.has_field(utility::conversions::to_string_t("range")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("range"));
        if(!fieldValue.is_null())
        {
            std::shared_ptr<RequestRangeFull> newItem(new RequestRangeFull());
            newItem->fromJson(fieldValue);
            setRange( newItem );
        }
    }
}

void RequestTimeFilterDepartureSearch::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("id"), m_Id));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("departure_location_id"), m_Departure_location_id));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arrival_location_ids )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arrival_location_ids"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    m_Transportation->toMultipart(multipart, utility::conversions::to_string_t("transportation."));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("travel_time"), m_Travel_time));
    multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("departure_time"), m_Departure_time));
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("properties"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
            }
    if(m_RangeIsSet)
    {
        if (m_Range.get())
        {
            m_Range->toMultipart(multipart, utility::conversions::to_string_t("range."));
        }
    }
}

void RequestTimeFilterDepartureSearch::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    setId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("id"))));
    setDepartureLocationId(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("departure_location_id"))));
    {
        m_Arrival_location_ids.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("arrival_location_ids"))));
        for( auto& item : jsonArray.as_array() )
        {
            m_Arrival_location_ids.push_back(ModelBase::stringFromJson(item));
        }
    }
    std::shared_ptr<RequestTransportation> newTransportation(new RequestTransportation());
    newTransportation->fromMultiPart(multipart, utility::conversions::to_string_t("transportation."));
    setTransportation( newTransportation );
    setTravelTime(ModelBase::int32_tFromHttpContent(multipart->getContent(utility::conversions::to_string_t("travel_time"))));
    setDepartureTime(ModelBase::dateFromHttpContent(multipart->getContent(utility::conversions::to_string_t("departure_time"))));
    {
        m_Properties.clear();

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("properties"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Properties.push_back( std::shared_ptr<RequestTimeFilterProperty>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterProperty> newItem(new RequestTimeFilterProperty());
                newItem->fromJson(item);
                m_Properties.push_back( newItem );
            }
        }
    }
    if(multipart->hasContent(utility::conversions::to_string_t("range")))
    {
        if(multipart->hasContent(utility::conversions::to_string_t("range")))
        {
            std::shared_ptr<RequestRangeFull> newItem(new RequestRangeFull());
            newItem->fromMultiPart(multipart, utility::conversions::to_string_t("range."));
            setRange( newItem );
        }
    }
}

utility::string_t RequestTimeFilterDepartureSearch::getId() const
{
    return m_Id;
}

void RequestTimeFilterDepartureSearch::setId(const utility::string_t& value)
{
    m_Id = value;
    
}

utility::string_t RequestTimeFilterDepartureSearch::getDepartureLocationId() const
{
    return m_Departure_location_id;
}

void RequestTimeFilterDepartureSearch::setDepartureLocationId(const utility::string_t& value)
{
    m_Departure_location_id = value;
    
}

std::vector<utility::string_t>& RequestTimeFilterDepartureSearch::getArrivalLocationIds()
{
    return m_Arrival_location_ids;
}

void RequestTimeFilterDepartureSearch::setArrivalLocationIds(const std::vector<utility::string_t>& value)
{
    m_Arrival_location_ids = value;
    
}

std::shared_ptr<RequestTransportation> RequestTimeFilterDepartureSearch::getTransportation() const
{
    return m_Transportation;
}

void RequestTimeFilterDepartureSearch::setTransportation(const std::shared_ptr<RequestTransportation>& value)
{
    m_Transportation = value;
    
}

int32_t RequestTimeFilterDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}

void RequestTimeFilterDepartureSearch::setTravelTime(int32_t value)
{
    m_Travel_time = value;
    
}

utility::datetime RequestTimeFilterDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}

void RequestTimeFilterDepartureSearch::setDepartureTime(const utility::datetime& value)
{
    m_Departure_time = value;
    
}

std::vector<std::shared_ptr<RequestTimeFilterProperty>>& RequestTimeFilterDepartureSearch::getProperties()
{
    return m_Properties;
}

void RequestTimeFilterDepartureSearch::setProperties(const std::vector<std::shared_ptr<RequestTimeFilterProperty>>& value)
{
    m_Properties = value;
    
}

std::shared_ptr<RequestRangeFull> RequestTimeFilterDepartureSearch::getRange() const
{
    return m_Range;
}

void RequestTimeFilterDepartureSearch::setRange(const std::shared_ptr<RequestRangeFull>& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}

bool RequestTimeFilterDepartureSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}

void RequestTimeFilterDepartureSearch::unsetRange()
{
    m_RangeIsSet = false;
}

}
}
}
}

