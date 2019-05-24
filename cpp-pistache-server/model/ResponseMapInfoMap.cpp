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


#include "ResponseMapInfoMap.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseMapInfoMap::ResponseMapInfoMap()
{
    m_Name = "";
    
}

ResponseMapInfoMap::~ResponseMapInfoMap()
{
}

void ResponseMapInfoMap::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseMapInfoMap& o)
{
    j = nlohmann::json();
    j["name"] = o.m_Name;
    j["features"] = o.m_Features;
}

void from_json(const nlohmann::json& j, ResponseMapInfoMap& o)
{
    j.at("name").get_to(o.m_Name);
    j.at("features").get_to(o.m_Features);
}

std::string ResponseMapInfoMap::getName() const
{
    return m_Name;
}
void ResponseMapInfoMap::setName(std::string const& value)
{
    m_Name = value;
    
}
ResponseMapInfoFeatures ResponseMapInfoMap::getFeatures() const
{
    return m_Features;
}
void ResponseMapInfoMap::setFeatures(ResponseMapInfoFeatures const& value)
{
    m_Features = value;
    
}

}
}
}
}

