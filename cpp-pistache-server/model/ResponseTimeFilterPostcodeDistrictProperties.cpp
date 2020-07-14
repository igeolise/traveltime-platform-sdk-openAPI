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


#include "ResponseTimeFilterPostcodeDistrictProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterPostcodeDistrictProperties::ResponseTimeFilterPostcodeDistrictProperties()
{
    m_Travel_time_reachableIsSet = false;
    m_Travel_time_allIsSet = false;
    m_Coverage = 0.0;
    m_CoverageIsSet = false;
    
}

ResponseTimeFilterPostcodeDistrictProperties::~ResponseTimeFilterPostcodeDistrictProperties()
{
}

void ResponseTimeFilterPostcodeDistrictProperties::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterPostcodeDistrictProperties& o)
{
    j = nlohmann::json();
    if(o.travelTimeReachableIsSet())
        j["travel_time_reachable"] = o.m_Travel_time_reachable;
    if(o.travelTimeAllIsSet())
        j["travel_time_all"] = o.m_Travel_time_all;
    if(o.coverageIsSet())
        j["coverage"] = o.m_Coverage;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterPostcodeDistrictProperties& o)
{
    if(j.find("travel_time_reachable") != j.end())
    {
        j.at("travel_time_reachable").get_to(o.m_Travel_time_reachable);
        o.m_Travel_time_reachableIsSet = true;
    } 
    if(j.find("travel_time_all") != j.end())
    {
        j.at("travel_time_all").get_to(o.m_Travel_time_all);
        o.m_Travel_time_allIsSet = true;
    } 
    if(j.find("coverage") != j.end())
    {
        j.at("coverage").get_to(o.m_Coverage);
        o.m_CoverageIsSet = true;
    } 
}

ResponseTravelTimeStatistics ResponseTimeFilterPostcodeDistrictProperties::getTravelTimeReachable() const
{
    return m_Travel_time_reachable;
}
void ResponseTimeFilterPostcodeDistrictProperties::setTravelTimeReachable(ResponseTravelTimeStatistics const& value)
{
    m_Travel_time_reachable = value;
    m_Travel_time_reachableIsSet = true;
}
bool ResponseTimeFilterPostcodeDistrictProperties::travelTimeReachableIsSet() const
{
    return m_Travel_time_reachableIsSet;
}
void ResponseTimeFilterPostcodeDistrictProperties::unsetTravel_time_reachable()
{
    m_Travel_time_reachableIsSet = false;
}
ResponseTravelTimeStatistics ResponseTimeFilterPostcodeDistrictProperties::getTravelTimeAll() const
{
    return m_Travel_time_all;
}
void ResponseTimeFilterPostcodeDistrictProperties::setTravelTimeAll(ResponseTravelTimeStatistics const& value)
{
    m_Travel_time_all = value;
    m_Travel_time_allIsSet = true;
}
bool ResponseTimeFilterPostcodeDistrictProperties::travelTimeAllIsSet() const
{
    return m_Travel_time_allIsSet;
}
void ResponseTimeFilterPostcodeDistrictProperties::unsetTravel_time_all()
{
    m_Travel_time_allIsSet = false;
}
double ResponseTimeFilterPostcodeDistrictProperties::getCoverage() const
{
    return m_Coverage;
}
void ResponseTimeFilterPostcodeDistrictProperties::setCoverage(double const value)
{
    m_Coverage = value;
    m_CoverageIsSet = true;
}
bool ResponseTimeFilterPostcodeDistrictProperties::coverageIsSet() const
{
    return m_CoverageIsSet;
}
void ResponseTimeFilterPostcodeDistrictProperties::unsetCoverage()
{
    m_CoverageIsSet = false;
}

}
}
}
}

