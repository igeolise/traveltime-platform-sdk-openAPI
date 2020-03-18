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


#include "ResponseTimeFilterPostcodesProperties.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterPostcodesProperties::ResponseTimeFilterPostcodesProperties()
{
    m_Travel_time = 0;
    m_Travel_timeIsSet = false;
    m_Distance = 0;
    m_DistanceIsSet = false;
    
}

ResponseTimeFilterPostcodesProperties::~ResponseTimeFilterPostcodesProperties()
{
}

void ResponseTimeFilterPostcodesProperties::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterPostcodesProperties& o)
{
    j = nlohmann::json();
    if(o.travelTimeIsSet())
        j["travel_time"] = o.m_Travel_time;
    if(o.distanceIsSet())
        j["distance"] = o.m_Distance;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterPostcodesProperties& o)
{
    if(j.find("travel_time") != j.end())
    {
        j.at("travel_time").get_to(o.m_Travel_time);
        o.m_Travel_timeIsSet = true;
    } 
    if(j.find("distance") != j.end())
    {
        j.at("distance").get_to(o.m_Distance);
        o.m_DistanceIsSet = true;
    } 
}

int32_t ResponseTimeFilterPostcodesProperties::getTravelTime() const
{
    return m_Travel_time;
}
void ResponseTimeFilterPostcodesProperties::setTravelTime(int32_t const value)
{
    m_Travel_time = value;
    m_Travel_timeIsSet = true;
}
bool ResponseTimeFilterPostcodesProperties::travelTimeIsSet() const
{
    return m_Travel_timeIsSet;
}
void ResponseTimeFilterPostcodesProperties::unsetTravel_time()
{
    m_Travel_timeIsSet = false;
}
int32_t ResponseTimeFilterPostcodesProperties::getDistance() const
{
    return m_Distance;
}
void ResponseTimeFilterPostcodesProperties::setDistance(int32_t const value)
{
    m_Distance = value;
    m_DistanceIsSet = true;
}
bool ResponseTimeFilterPostcodesProperties::distanceIsSet() const
{
    return m_DistanceIsSet;
}
void ResponseTimeFilterPostcodesProperties::unsetDistance()
{
    m_DistanceIsSet = false;
}

}
}
}
}

