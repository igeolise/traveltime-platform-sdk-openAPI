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


#include "ResponseRoutesLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseRoutesLocation::ResponseRoutesLocation()
{
    m_Id = "";
    
}

ResponseRoutesLocation::~ResponseRoutesLocation()
{
}

void ResponseRoutesLocation::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseRoutesLocation& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json& j, ResponseRoutesLocation& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("properties").get_to(o.m_Properties);
}

std::string ResponseRoutesLocation::getId() const
{
    return m_Id;
}
void ResponseRoutesLocation::setId(std::string const& value)
{
    m_Id = value;
    
}
std::vector<ResponseRoutesProperties>& ResponseRoutesLocation::getProperties()
{
    return m_Properties;
}

}
}
}
}

