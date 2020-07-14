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


#include "ResponseShape.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseShape::ResponseShape()
{
    
}

ResponseShape::~ResponseShape()
{
}

void ResponseShape::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseShape& o)
{
    j = nlohmann::json();
    j["shell"] = o.m_Shell;
    j["holes"] = o.m_Holes;
}

void from_json(const nlohmann::json& j, ResponseShape& o)
{
    j.at("shell").get_to(o.m_Shell);
    j.at("holes").get_to(o.m_Holes);
}

std::vector<Coords>& ResponseShape::getShell()
{
    return m_Shell;
}
void ResponseShape::setShell(std::vector<Coords> const& value)
{
    m_Shell = value;
}
std::vector<std::vector<Coords>>& ResponseShape::getHoles()
{
    return m_Holes;
}
void ResponseShape::setHoles(std::vector<std::vector<Coords>> const& value)
{
    m_Holes = value;
}

}
}
}
}

