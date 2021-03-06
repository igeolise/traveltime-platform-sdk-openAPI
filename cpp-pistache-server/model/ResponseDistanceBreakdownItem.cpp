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


#include "ResponseDistanceBreakdownItem.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseDistanceBreakdownItem::ResponseDistanceBreakdownItem()
{
    m_Distance = 0;
    
}

ResponseDistanceBreakdownItem::~ResponseDistanceBreakdownItem()
{
}

void ResponseDistanceBreakdownItem::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseDistanceBreakdownItem& o)
{
    j = nlohmann::json();
    j["mode"] = o.m_Mode;
    j["distance"] = o.m_Distance;
}

void from_json(const nlohmann::json& j, ResponseDistanceBreakdownItem& o)
{
    j.at("mode").get_to(o.m_Mode);
    j.at("distance").get_to(o.m_Distance);
}

ResponseTransportationMode ResponseDistanceBreakdownItem::getMode() const
{
    return m_Mode;
}
void ResponseDistanceBreakdownItem::setMode(ResponseTransportationMode const& value)
{
    m_Mode = value;
}
int32_t ResponseDistanceBreakdownItem::getDistance() const
{
    return m_Distance;
}
void ResponseDistanceBreakdownItem::setDistance(int32_t const value)
{
    m_Distance = value;
}

}
}
}
}

