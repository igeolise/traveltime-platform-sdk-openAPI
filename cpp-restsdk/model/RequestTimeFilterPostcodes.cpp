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



#include "RequestTimeFilterPostcodes.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {

RequestTimeFilterPostcodes::RequestTimeFilterPostcodes()
{
    m_Departure_searchesIsSet = false;
    m_Arrival_searchesIsSet = false;
}

RequestTimeFilterPostcodes::~RequestTimeFilterPostcodes()
{
}

void RequestTimeFilterPostcodes::validate()
{
    // TODO: implement validation
}

web::json::value RequestTimeFilterPostcodes::toJson() const
{
    web::json::value val = web::json::value::object();

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Departure_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("departure_searches")] = web::json::value::array(jsonArray);
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arrival_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        if(jsonArray.size() > 0)
        {
            val[utility::conversions::to_string_t("arrival_searches")] = web::json::value::array(jsonArray);
        }
    }

    return val;
}

void RequestTimeFilterPostcodes::fromJson(const web::json::value& val)
{
    {
        m_Departure_searches.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("departure_searches")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("departure_searches")).as_array() )
        {
            if(item.is_null())
            {
                m_Departure_searches.push_back( std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch> newItem(new RequestTimeFilterPostcodesDepartureSearch());
                newItem->fromJson(item);
                m_Departure_searches.push_back( newItem );
            }
        }
        }
    }
    {
        m_Arrival_searches.clear();
        std::vector<web::json::value> jsonArray;
        if(val.has_field(utility::conversions::to_string_t("arrival_searches")))
        {
        for( auto& item : val.at(utility::conversions::to_string_t("arrival_searches")).as_array() )
        {
            if(item.is_null())
            {
                m_Arrival_searches.push_back( std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch> newItem(new RequestTimeFilterPostcodesArrivalSearch());
                newItem->fromJson(item);
                m_Arrival_searches.push_back( newItem );
            }
        }
        }
    }
}

void RequestTimeFilterPostcodes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Departure_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("departure_searches"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
    {
        std::vector<web::json::value> jsonArray;
        for( auto& item : m_Arrival_searches )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        
        if(jsonArray.size() > 0)
        {
            multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("arrival_searches"), web::json::value::array(jsonArray), utility::conversions::to_string_t("application/json")));
        }
    }
}

void RequestTimeFilterPostcodes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    {
        m_Departure_searches.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("departure_searches")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("departure_searches"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Departure_searches.push_back( std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch> newItem(new RequestTimeFilterPostcodesDepartureSearch());
                newItem->fromJson(item);
                m_Departure_searches.push_back( newItem );
            }
        }
        }
    }
    {
        m_Arrival_searches.clear();
        if(multipart->hasContent(utility::conversions::to_string_t("arrival_searches")))
        {

        web::json::value jsonArray = web::json::value::parse(ModelBase::stringFromHttpContent(multipart->getContent(utility::conversions::to_string_t("arrival_searches"))));
        for( auto& item : jsonArray.as_array() )
        {
            if(item.is_null())
            {
                m_Arrival_searches.push_back( std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>(nullptr) );
            }
            else
            {
                std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch> newItem(new RequestTimeFilterPostcodesArrivalSearch());
                newItem->fromJson(item);
                m_Arrival_searches.push_back( newItem );
            }
        }
        }
    }
}

std::vector<std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>>& RequestTimeFilterPostcodes::getDepartureSearches()
{
    return m_Departure_searches;
}

void RequestTimeFilterPostcodes::setDepartureSearches(const std::vector<std::shared_ptr<RequestTimeFilterPostcodesDepartureSearch>>& value)
{
    m_Departure_searches = value;
    m_Departure_searchesIsSet = true;
}

bool RequestTimeFilterPostcodes::departureSearchesIsSet() const
{
    return m_Departure_searchesIsSet;
}

void RequestTimeFilterPostcodes::unsetDeparture_searches()
{
    m_Departure_searchesIsSet = false;
}

std::vector<std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>>& RequestTimeFilterPostcodes::getArrivalSearches()
{
    return m_Arrival_searches;
}

void RequestTimeFilterPostcodes::setArrivalSearches(const std::vector<std::shared_ptr<RequestTimeFilterPostcodesArrivalSearch>>& value)
{
    m_Arrival_searches = value;
    m_Arrival_searchesIsSet = true;
}

bool RequestTimeFilterPostcodes::arrivalSearchesIsSet() const
{
    return m_Arrival_searchesIsSet;
}

void RequestTimeFilterPostcodes::unsetArrival_searches()
{
    m_Arrival_searchesIsSet = false;
}

}
}
}
}

