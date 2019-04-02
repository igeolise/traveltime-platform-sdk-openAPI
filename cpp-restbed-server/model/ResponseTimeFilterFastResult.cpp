/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseTimeFilterFastResult.h"

#include <string>
#include <sstream>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterFastResult::ResponseTimeFilterFastResult()
{
    m_Search_id = "";
    
}

ResponseTimeFilterFastResult::~ResponseTimeFilterFastResult()
{
}

std::string ResponseTimeFilterFastResult::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Search_id", m_Search_id);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseTimeFilterFastResult::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Search_id = pt.get("Search_id", "");
}

std::string ResponseTimeFilterFastResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseTimeFilterFastResult::setSearchId(std::string value)
{
    m_Search_id = value;
}
std::vector<std::shared_ptr<ResponseTimeFilterFastLocation>> ResponseTimeFilterFastResult::getLocations() const
{
    return m_Locations;
}
void ResponseTimeFilterFastResult::setLocations(std::vector<std::shared_ptr<ResponseTimeFilterFastLocation>> value)
{
    m_Locations = value;
}
std::vector<std::string> ResponseTimeFilterFastResult::getUnreachable() const
{
    return m_Unreachable;
}
void ResponseTimeFilterFastResult::setUnreachable(std::vector<std::string> value)
{
    m_Unreachable = value;
}

}
}
}
}

