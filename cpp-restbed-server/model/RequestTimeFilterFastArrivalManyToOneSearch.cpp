/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeFilterFastArrivalManyToOneSearch.h"

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

RequestTimeFilterFastArrivalManyToOneSearch::RequestTimeFilterFastArrivalManyToOneSearch()
{
	m_Id = "";
	m_Arrival_location_id = "";
	m_Travel_time = 0;
}

RequestTimeFilterFastArrivalManyToOneSearch::~RequestTimeFilterFastArrivalManyToOneSearch()
{
}

std::string RequestTimeFilterFastArrivalManyToOneSearch::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestTimeFilterFastArrivalManyToOneSearch::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestTimeFilterFastArrivalManyToOneSearch::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	pt.put("arrival_location_id", m_Arrival_location_id);
	// generate tree for Departure_location_ids
	if (!m_Departure_location_ids.empty()) {
		for (const auto &childEntry : m_Departure_location_ids) {
			ptree Departure_location_ids_node;
			Departure_location_ids_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Departure_location_ids_node));
		}
		pt.add_child("departure_location_ids", tmp_node);
		tmp_node.clear();
	}
	if (m_Transportation != nullptr) {
		pt.add_child("transportation", m_Transportation->toPropertyTree());
	}
	pt.put("travel_time", m_Travel_time);
	// generate tree for Properties
	if (!m_Properties.empty()) {
		for (const auto &childEntry : m_Properties) {
			ptree Properties_node;
			Properties_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Properties_node));
		}
		pt.add_child("properties", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void RequestTimeFilterFastArrivalManyToOneSearch::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", "");
	m_Arrival_location_id = pt.get("arrival_location_id", "");
	// push all items of Departure_location_ids into member vector
	if (pt.get_child_optional("departure_location_ids")) {
		for (const auto &childTree : pt.get_child("departure_location_ids")) {
			m_Departure_location_ids.emplace_back(childTree.second.data());
		}
	}
	if (pt.get_child_optional("transportation")) {
		m_Transportation = std::make_shared<RequestTransportationFast>();
		m_Transportation->fromPropertyTree(pt.get_child("transportation"));
	}
	m_Travel_time = pt.get("travel_time", 0);
	// push all items of Properties into member vector
	if (pt.get_child_optional("properties")) {
		for (const auto &childTree : pt.get_child("properties")) {
			m_Properties.emplace_back(childTree.second.data());
		}
	}
}

std::string RequestTimeFilterFastArrivalManyToOneSearch::getId() const
{
    return m_Id;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setId(std::string value)
{
	m_Id = value;
}
std::string RequestTimeFilterFastArrivalManyToOneSearch::getArrivalLocationId() const
{
    return m_Arrival_location_id;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setArrivalLocationId(std::string value)
{
	m_Arrival_location_id = value;
}
std::vector<std::string> RequestTimeFilterFastArrivalManyToOneSearch::getDepartureLocationIds() const
{
    return m_Departure_location_ids;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setDepartureLocationIds(std::vector<std::string> value)
{
	m_Departure_location_ids = value;
}
std::shared_ptr<RequestTransportationFast> RequestTimeFilterFastArrivalManyToOneSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setTransportation(std::shared_ptr<RequestTransportationFast> value)
{
	m_Transportation = value;
}
int32_t RequestTimeFilterFastArrivalManyToOneSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setTravelTime(int32_t value)
{
	m_Travel_time = value;
}
std::shared_ptr<RequestArrivalTimePeriod> RequestTimeFilterFastArrivalManyToOneSearch::getArrivalTimePeriod() const
{
    return m_Arrival_time_period;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setArrivalTimePeriod(std::shared_ptr<RequestArrivalTimePeriod> value)
{
	m_Arrival_time_period = value;
}
std::vector<std::shared_ptr<RequestTimeFilterFastProperty>> RequestTimeFilterFastArrivalManyToOneSearch::getProperties() const
{
    return m_Properties;
}
void RequestTimeFilterFastArrivalManyToOneSearch::setProperties(std::vector<std::shared_ptr<RequestTimeFilterFastProperty>> value)
{
	m_Properties = value;
}

}
}
}
}

