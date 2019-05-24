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



#include "RequestTimeFilterDepartureSearch.h"

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

RequestTimeFilterDepartureSearch::RequestTimeFilterDepartureSearch()
{
    m_Id = "";
    m_Departure_location_id = "";
    m_Travel_time = 0;
    m_Departure_time = "";
    
}

RequestTimeFilterDepartureSearch::~RequestTimeFilterDepartureSearch()
{
}

std::string RequestTimeFilterDepartureSearch::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Departure_location_id", m_Departure_location_id);
	pt.put("Travel_time", m_Travel_time);
	pt.put("Departure_time", m_Departure_time);
	write_json(ss, pt, false);
	return ss.str();
}

void RequestTimeFilterDepartureSearch::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", "");
	m_Departure_location_id = pt.get("Departure_location_id", "");
	m_Travel_time = pt.get("Travel_time", 0);
	m_Departure_time = pt.get("Departure_time", "");
}

std::string RequestTimeFilterDepartureSearch::getId() const
{
    return m_Id;
}
void RequestTimeFilterDepartureSearch::setId(std::string value)
{
    m_Id = value;
}
std::string RequestTimeFilterDepartureSearch::getDepartureLocationId() const
{
    return m_Departure_location_id;
}
void RequestTimeFilterDepartureSearch::setDepartureLocationId(std::string value)
{
    m_Departure_location_id = value;
}
std::vector<std::string> RequestTimeFilterDepartureSearch::getArrivalLocationIds() const
{
    return m_Arrival_location_ids;
}
void RequestTimeFilterDepartureSearch::setArrivalLocationIds(std::vector<std::string> value)
{
    m_Arrival_location_ids = value;
}
std::shared_ptr<RequestTransportation> RequestTimeFilterDepartureSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeFilterDepartureSearch::setTransportation(std::shared_ptr<RequestTransportation> value)
{
    m_Transportation = value;
}
int32_t RequestTimeFilterDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeFilterDepartureSearch::setTravelTime(int32_t value)
{
    m_Travel_time = value;
}
std::string RequestTimeFilterDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}
void RequestTimeFilterDepartureSearch::setDepartureTime(std::string value)
{
    m_Departure_time = value;
}
std::vector<std::shared_ptr<RequestTimeFilterProperty>> RequestTimeFilterDepartureSearch::getProperties() const
{
    return m_Properties;
}
void RequestTimeFilterDepartureSearch::setProperties(std::vector<std::shared_ptr<RequestTimeFilterProperty>> value)
{
    m_Properties = value;
}
std::shared_ptr<RequestRangeFull> RequestTimeFilterDepartureSearch::getRange() const
{
    return m_Range;
}
void RequestTimeFilterDepartureSearch::setRange(std::shared_ptr<RequestRangeFull> value)
{
    m_Range = value;
}

}
}
}
}

