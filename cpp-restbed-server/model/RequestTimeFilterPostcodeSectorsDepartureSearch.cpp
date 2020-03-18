/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "RequestTimeFilterPostcodeSectorsDepartureSearch.h"

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

RequestTimeFilterPostcodeSectorsDepartureSearch::RequestTimeFilterPostcodeSectorsDepartureSearch()
{
	m_Id = "";
	m_Travel_time = 0;
	m_Departure_time = "";
	m_Reachable_postcodes_threshold = 0.0;
}

RequestTimeFilterPostcodeSectorsDepartureSearch::~RequestTimeFilterPostcodeSectorsDepartureSearch()
{
}

std::string RequestTimeFilterPostcodeSectorsDepartureSearch::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestTimeFilterPostcodeSectorsDepartureSearch::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	if (m_Transportation != nullptr) {
		pt.add_child("transportation", m_Transportation->toPropertyTree());
	}
	pt.put("travel_time", m_Travel_time);
	pt.put("departure_time", m_Departure_time);
	pt.put("reachable_postcodes_threshold", m_Reachable_postcodes_threshold);
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
	if (m_Range != nullptr) {
		pt.add_child("range", m_Range->toPropertyTree());
	}
	return pt;
}

void RequestTimeFilterPostcodeSectorsDepartureSearch::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", "");
	if (pt.get_child_optional("transportation")) {
		m_Transportation = std::make_shared<RequestTransportation>();
		m_Transportation->fromPropertyTree(pt.get_child("transportation"));
	}
	m_Travel_time = pt.get("travel_time", 0);
	m_Departure_time = pt.get("departure_time", "");
	m_Reachable_postcodes_threshold = pt.get("reachable_postcodes_threshold", 0.0);
	// push all items of Properties into member vector
	if (pt.get_child_optional("properties")) {
		for (const auto &childTree : pt.get_child("properties")) {
			m_Properties.emplace_back(childTree.second.data());
		}
	}
	if (pt.get_child_optional("range")) {
		m_Range = std::make_shared<RequestRangeFull>();
		m_Range->fromPropertyTree(pt.get_child("range"));
	}
}

std::string RequestTimeFilterPostcodeSectorsDepartureSearch::getId() const
{
    return m_Id;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setId(std::string value)
{
	m_Id = value;
}
std::shared_ptr<RequestTransportation> RequestTimeFilterPostcodeSectorsDepartureSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setTransportation(std::shared_ptr<RequestTransportation> value)
{
	m_Transportation = value;
}
int32_t RequestTimeFilterPostcodeSectorsDepartureSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setTravelTime(int32_t value)
{
	m_Travel_time = value;
}
std::string RequestTimeFilterPostcodeSectorsDepartureSearch::getDepartureTime() const
{
    return m_Departure_time;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setDepartureTime(std::string value)
{
	m_Departure_time = value;
}
double RequestTimeFilterPostcodeSectorsDepartureSearch::getReachablePostcodesThreshold() const
{
    return m_Reachable_postcodes_threshold;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setReachablePostcodesThreshold(double value)
{
	m_Reachable_postcodes_threshold = value;
}
std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsProperty>> RequestTimeFilterPostcodeSectorsDepartureSearch::getProperties() const
{
    return m_Properties;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setProperties(std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsProperty>> value)
{
	m_Properties = value;
}
std::shared_ptr<RequestRangeFull> RequestTimeFilterPostcodeSectorsDepartureSearch::getRange() const
{
    return m_Range;
}
void RequestTimeFilterPostcodeSectorsDepartureSearch::setRange(std::shared_ptr<RequestRangeFull> value)
{
	m_Range = value;
}

}
}
}
}

