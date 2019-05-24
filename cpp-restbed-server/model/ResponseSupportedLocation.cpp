/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseSupportedLocation.h"

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

ResponseSupportedLocation::ResponseSupportedLocation()
{
    m_Id = "";
    m_Map_name = "";
    
}

ResponseSupportedLocation::~ResponseSupportedLocation()
{
}

std::string ResponseSupportedLocation::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Map_name", m_Map_name);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseSupportedLocation::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", "");
	m_Map_name = pt.get("Map_name", "");
}

std::string ResponseSupportedLocation::getId() const
{
    return m_Id;
}
void ResponseSupportedLocation::setId(std::string value)
{
    m_Id = value;
}
std::string ResponseSupportedLocation::getMapName() const
{
    return m_Map_name;
}
void ResponseSupportedLocation::setMapName(std::string value)
{
    m_Map_name = value;
}

}
}
}
}

