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


#include "ResponseTimeFilterResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterResult::ResponseTimeFilterResult()
{
    m_Search_id = "";
    
}

ResponseTimeFilterResult::~ResponseTimeFilterResult()
{
}

void ResponseTimeFilterResult::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterResult& o)
{
    j = nlohmann::json();
    j["search_id"] = o.m_Search_id;
    j["locations"] = o.m_Locations;
    j["unreachable"] = o.m_Unreachable;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterResult& o)
{
    j.at("search_id").get_to(o.m_Search_id);
    j.at("locations").get_to(o.m_Locations);
    j.at("unreachable").get_to(o.m_Unreachable);
}

std::string ResponseTimeFilterResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseTimeFilterResult::setSearchId(std::string const& value)
{
    m_Search_id = value;
}
std::vector<ResponseTimeFilterLocation>& ResponseTimeFilterResult::getLocations()
{
    return m_Locations;
}
void ResponseTimeFilterResult::setLocations(std::vector<ResponseTimeFilterLocation> const& value)
{
    m_Locations = value;
}
std::vector<std::string>& ResponseTimeFilterResult::getUnreachable()
{
    return m_Unreachable;
}
void ResponseTimeFilterResult::setUnreachable(std::vector<std::string> const& value)
{
    m_Unreachable = value;
}

}
}
}
}

