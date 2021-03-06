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


#include "RequestLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RequestLocation::RequestLocation()
{
    m_Id = "";
    
}

RequestLocation::~RequestLocation()
{
}

void RequestLocation::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const RequestLocation& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["coords"] = o.m_Coords;
}

void from_json(const nlohmann::json& j, RequestLocation& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("coords").get_to(o.m_Coords);
}

std::string RequestLocation::getId() const
{
    return m_Id;
}
void RequestLocation::setId(std::string const& value)
{
    m_Id = value;
}
Coords RequestLocation::getCoords() const
{
    return m_Coords;
}
void RequestLocation::setCoords(Coords const& value)
{
    m_Coords = value;
}

}
}
}
}

