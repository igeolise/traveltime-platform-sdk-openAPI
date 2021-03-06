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


#include "ResponseSupportedLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseSupportedLocation::ResponseSupportedLocation()
{
    m_Id = "";
    m_Map_name = "";
    
}

ResponseSupportedLocation::~ResponseSupportedLocation()
{
}

void ResponseSupportedLocation::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseSupportedLocation& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["map_name"] = o.m_Map_name;
}

void from_json(const nlohmann::json& j, ResponseSupportedLocation& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("map_name").get_to(o.m_Map_name);
}

std::string ResponseSupportedLocation::getId() const
{
    return m_Id;
}
void ResponseSupportedLocation::setId(std::string const& value)
{
    m_Id = value;
}
std::string ResponseSupportedLocation::getMapName() const
{
    return m_Map_name;
}
void ResponseSupportedLocation::setMapName(std::string const& value)
{
    m_Map_name = value;
}

}
}
}
}

