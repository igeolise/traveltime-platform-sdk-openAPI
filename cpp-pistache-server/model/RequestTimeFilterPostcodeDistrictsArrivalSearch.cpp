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


#include "RequestTimeFilterPostcodeDistrictsArrivalSearch.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestTimeFilterPostcodeDistrictsArrivalSearch::RequestTimeFilterPostcodeDistrictsArrivalSearch()
{
    m_Id = "";
    m_Travel_time = 0;
    m_Arrival_time = "";
    m_Reachable_postcodes_threshold = 0.0;
    m_RangeIsSet = false;
    
}

RequestTimeFilterPostcodeDistrictsArrivalSearch::~RequestTimeFilterPostcodeDistrictsArrivalSearch()
{
}

void RequestTimeFilterPostcodeDistrictsArrivalSearch::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestTimeFilterPostcodeDistrictsArrivalSearch& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["transportation"] = o.m_Transportation;
    j["travel_time"] = o.m_Travel_time;
    j["arrival_time"] = o.m_Arrival_time;
    j["reachable_postcodes_threshold"] = o.m_Reachable_postcodes_threshold;
    j["properties"] = o.m_Properties;
    if(o.rangeIsSet())
        j["range"] = o.m_Range;
}

void from_json(const nlohmann::json& j, RequestTimeFilterPostcodeDistrictsArrivalSearch& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("transportation").get_to(o.m_Transportation);
    j.at("travel_time").get_to(o.m_Travel_time);
    j.at("arrival_time").get_to(o.m_Arrival_time);
    j.at("reachable_postcodes_threshold").get_to(o.m_Reachable_postcodes_threshold);
    j.at("properties").get_to(o.m_Properties);
    if(j.find("range") != j.end())
    {
        j.at("range").get_to(o.m_Range);
        o.m_RangeIsSet = true;
    } 
}

std::string RequestTimeFilterPostcodeDistrictsArrivalSearch::getId() const
{
    return m_Id;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setId(std::string const& value)
{
    m_Id = value;
}
RequestTransportation RequestTimeFilterPostcodeDistrictsArrivalSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setTransportation(RequestTransportation const& value)
{
    m_Transportation = value;
}
int32_t RequestTimeFilterPostcodeDistrictsArrivalSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setTravelTime(int32_t const value)
{
    m_Travel_time = value;
}
std::string RequestTimeFilterPostcodeDistrictsArrivalSearch::getArrivalTime() const
{
    return m_Arrival_time;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setArrivalTime(std::string const& value)
{
    m_Arrival_time = value;
}
double RequestTimeFilterPostcodeDistrictsArrivalSearch::getReachablePostcodesThreshold() const
{
    return m_Reachable_postcodes_threshold;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setReachablePostcodesThreshold(double const value)
{
    m_Reachable_postcodes_threshold = value;
}
std::vector<RequestTimeFilterPostcodeDistrictsProperty>& RequestTimeFilterPostcodeDistrictsArrivalSearch::getProperties()
{
    return m_Properties;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setProperties(std::vector<RequestTimeFilterPostcodeDistrictsProperty> const& value)
{
    m_Properties = value;
}
RequestRangeFull RequestTimeFilterPostcodeDistrictsArrivalSearch::getRange() const
{
    return m_Range;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::setRange(RequestRangeFull const& value)
{
    m_Range = value;
    m_RangeIsSet = true;
}
bool RequestTimeFilterPostcodeDistrictsArrivalSearch::rangeIsSet() const
{
    return m_RangeIsSet;
}
void RequestTimeFilterPostcodeDistrictsArrivalSearch::unsetRange()
{
    m_RangeIsSet = false;
}

}
}
}
}

