/**
* TravelTime API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.2.1
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "RequestTimeFilterPostcodeSectors.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeFilterPostcodeSectors::RequestTimeFilterPostcodeSectors()
{
    m_Departure_searchesIsSet = false;
    m_Arrival_searchesIsSet = false;
    
}

RequestTimeFilterPostcodeSectors::~RequestTimeFilterPostcodeSectors()
{
}

void RequestTimeFilterPostcodeSectors::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestTimeFilterPostcodeSectors& o)
{
    j = nlohmann::json();
    if(o.departureSearchesIsSet() || !o.m_Departure_searches.empty())
        j["departure_searches"] = o.m_Departure_searches;
    if(o.arrivalSearchesIsSet() || !o.m_Arrival_searches.empty())
        j["arrival_searches"] = o.m_Arrival_searches;
}

void from_json(const nlohmann::json& j, RequestTimeFilterPostcodeSectors& o)
{
    if(j.find("departure_searches") != j.end())
    {
        j.at("departure_searches").get_to(o.m_Departure_searches);
        o.m_Departure_searchesIsSet = true;
    } 
    if(j.find("arrival_searches") != j.end())
    {
        j.at("arrival_searches").get_to(o.m_Arrival_searches);
        o.m_Arrival_searchesIsSet = true;
    } 
}

std::vector<RequestTimeFilterPostcodeSectorsDepartureSearch>& RequestTimeFilterPostcodeSectors::getDepartureSearches()
{
    return m_Departure_searches;
}
void RequestTimeFilterPostcodeSectors::setDepartureSearches(std::vector<RequestTimeFilterPostcodeSectorsDepartureSearch> const& value)
{
    m_Departure_searches = value;
    m_Departure_searchesIsSet = true;
}
bool RequestTimeFilterPostcodeSectors::departureSearchesIsSet() const
{
    return m_Departure_searchesIsSet;
}
void RequestTimeFilterPostcodeSectors::unsetDeparture_searches()
{
    m_Departure_searchesIsSet = false;
}
std::vector<RequestTimeFilterPostcodeSectorsArrivalSearch>& RequestTimeFilterPostcodeSectors::getArrivalSearches()
{
    return m_Arrival_searches;
}
void RequestTimeFilterPostcodeSectors::setArrivalSearches(std::vector<RequestTimeFilterPostcodeSectorsArrivalSearch> const& value)
{
    m_Arrival_searches = value;
    m_Arrival_searchesIsSet = true;
}
bool RequestTimeFilterPostcodeSectors::arrivalSearchesIsSet() const
{
    return m_Arrival_searchesIsSet;
}
void RequestTimeFilterPostcodeSectors::unsetArrival_searches()
{
    m_Arrival_searchesIsSet = false;
}

}
}
}
}

