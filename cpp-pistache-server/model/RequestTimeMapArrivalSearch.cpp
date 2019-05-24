/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "RequestTimeMapArrivalSearch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeMapArrivalSearch::RequestTimeMapArrivalSearch()
{
    m_Id = "";
    m_Travel_time = 0;
    m_Arrival_time = "";
    m_PropertiesIsSet = false;
    m_RangeIsSet = false;
    
}

RequestTimeMapArrivalSearch::~RequestTimeMapArrivalSearch()
{
}

void RequestTimeMapArrivalSearch::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestTimeMapArrivalSearch& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["coords"] = o.m_Coords;
    j["transportation"] = o.m_Transportation;
    j["travel_time"] = o.m_Travel_time;
    j["arrival_time"] = o.m_Arrival_time;
    if(o.propertiesIsSet())
        j["properties"] = o.m_Properties;
    if(o.rangeIsSet())
        j["range"] = o.m_Range;
}

void from_json(const nlohmann::json& j, RequestTimeMapArrivalSearch& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("coords").get_to(o.m_Coords);
    j.at("transportation").get_to(o.m_Transportation);
    j.at("travel_time").get_to(o.m_Travel_time);
    j.at("arrival_time").get_to(o.m_Arrival_time);
    if(j.contains("properties"))
    {
        j.at("properties").get_to(o.m_Properties);
        o.m_PropertiesIsSet = true;
    } 
    if(j.contains("range"))
    {
        j.at("range").get_to(o.m_Range);
        o.m_RangeIsSet = true;
    } 
}

std::string RequestTimeMapArrivalSearch::getId() const
{
    return m_Id;
}
void RequestTimeMapArrivalSearch::setId(std::string const& value)
{
    m_Id = value;
    
}
Coords RequestTimeMapArrivalSearch::getCoords() const
{
    return m_Coords;
}
void RequestTimeMapArrivalSearch::setCoords(Coords const& value)
{
    m_Coords = value;
    
}
RequestTransportation RequestTimeMapArrivalSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeMapArrivalSearch::setTransportation(RequestTransportation const& value)
{
    m_Transportation = value;
    
}
int32_t RequestTimeMapArrivalSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeMapArrivalSearch::setTravelTime(int32_t const value)
{
    m_Travel_time = value;
    
}
std::string RequestTimeMapArrivalSearch::getArrivalTime() const
{
    return m_Arrival_time;
}
void RequestTimeMapArrivalSearch::setArrivalTime(std::string const& value)
{
    m_Arrival_time = value;
    
}
std::vector<RequestTimeMapProperty>& RequestTimeMapArrivalSearch::getProperties()
{
    return m_Properties;
}
bool RequestTimeMapArrivalSearch::propertiesIsSet() const
{
    return m_PropertiesIsSet;
}
void RequestTimeMapArrivalSearch::unsetProperties()
{
    m_PropertiesIsSet = false;
}
RequestRangeNoMaxResults RequestTimeMapArrivalSearch::getRange() const
{
    return m_Range;
}
void RequestTimeMapArrivalSearch::setRange(RequestRangeNoMaxResults const& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}
bool RequestTimeMapArrivalSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}
void RequestTimeMapArrivalSearch::unsetRange()
{
    m_RangeIsSet = false;
}

}
}
}
}

