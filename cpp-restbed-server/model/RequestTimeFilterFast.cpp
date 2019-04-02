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



#include "RequestTimeFilterFast.h"

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

RequestTimeFilterFast::RequestTimeFilterFast()
{
    
}

RequestTimeFilterFast::~RequestTimeFilterFast()
{
}

std::string RequestTimeFilterFast::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void RequestTimeFilterFast::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::vector<std::shared_ptr<RequestLocation>> RequestTimeFilterFast::getLocations() const
{
    return m_Locations;
}
void RequestTimeFilterFast::setLocations(std::vector<std::shared_ptr<RequestLocation>> value)
{
    m_Locations = value;
}
std::shared_ptr<RequestTimeFilterFastArrivalSearches> RequestTimeFilterFast::getArrivalSearches() const
{
    return m_Arrival_searches;
}
void RequestTimeFilterFast::setArrivalSearches(std::shared_ptr<RequestTimeFilterFastArrivalSearches> value)
{
    m_Arrival_searches = value;
}

}
}
}
}

