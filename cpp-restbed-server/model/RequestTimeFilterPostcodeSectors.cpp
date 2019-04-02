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



#include "RequestTimeFilterPostcodeSectors.h"

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

RequestTimeFilterPostcodeSectors::RequestTimeFilterPostcodeSectors()
{
    
}

RequestTimeFilterPostcodeSectors::~RequestTimeFilterPostcodeSectors()
{
}

std::string RequestTimeFilterPostcodeSectors::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	write_json(ss, pt, false);
	return ss.str();
}

void RequestTimeFilterPostcodeSectors::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
}

std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>> RequestTimeFilterPostcodeSectors::getDepartureSearches() const
{
    return m_Departure_searches;
}
void RequestTimeFilterPostcodeSectors::setDepartureSearches(std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>> value)
{
    m_Departure_searches = value;
}
std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>> RequestTimeFilterPostcodeSectors::getArrivalSearches() const
{
    return m_Arrival_searches;
}
void RequestTimeFilterPostcodeSectors::setArrivalSearches(std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>> value)
{
    m_Arrival_searches = value;
}

}
}
}
}

