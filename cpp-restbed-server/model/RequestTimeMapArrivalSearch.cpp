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



#include "RequestTimeMapArrivalSearch.h"

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

RequestTimeMapArrivalSearch::RequestTimeMapArrivalSearch()
{
	m_Id = "";
	m_Travel_time = 0;
	m_Arrival_time = "";
}

RequestTimeMapArrivalSearch::~RequestTimeMapArrivalSearch()
{
}

std::string RequestTimeMapArrivalSearch::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestTimeMapArrivalSearch::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestTimeMapArrivalSearch::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	if (m_Coords != nullptr) {
		pt.add_child("coords", m_Coords->toPropertyTree());
	}
	if (m_Transportation != nullptr) {
		pt.add_child("transportation", m_Transportation->toPropertyTree());
	}
	pt.put("travel_time", m_Travel_time);
	pt.put("arrival_time", m_Arrival_time);
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

void RequestTimeMapArrivalSearch::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", "");
	if (pt.get_child_optional("coords")) {
		m_Coords = std::make_shared<Coords>();
		m_Coords->fromPropertyTree(pt.get_child("coords"));
	}
	if (pt.get_child_optional("transportation")) {
		m_Transportation = std::make_shared<RequestTransportation>();
		m_Transportation->fromPropertyTree(pt.get_child("transportation"));
	}
	m_Travel_time = pt.get("travel_time", 0);
	m_Arrival_time = pt.get("arrival_time", "");
	// push all items of Properties into member vector
	if (pt.get_child_optional("properties")) {
		for (const auto &childTree : pt.get_child("properties")) {
			m_Properties.emplace_back(childTree.second.data());
		}
	}
	if (pt.get_child_optional("range")) {
		m_Range = std::make_shared<RequestRangeNoMaxResults>();
		m_Range->fromPropertyTree(pt.get_child("range"));
	}
}

std::string RequestTimeMapArrivalSearch::getId() const
{
    return m_Id;
}
void RequestTimeMapArrivalSearch::setId(std::string value)
{
	m_Id = value;
}
std::shared_ptr<Coords> RequestTimeMapArrivalSearch::getCoords() const
{
    return m_Coords;
}
void RequestTimeMapArrivalSearch::setCoords(std::shared_ptr<Coords> value)
{
	m_Coords = value;
}
std::shared_ptr<RequestTransportation> RequestTimeMapArrivalSearch::getTransportation() const
{
    return m_Transportation;
}
void RequestTimeMapArrivalSearch::setTransportation(std::shared_ptr<RequestTransportation> value)
{
	m_Transportation = value;
}
int32_t RequestTimeMapArrivalSearch::getTravelTime() const
{
    return m_Travel_time;
}
void RequestTimeMapArrivalSearch::setTravelTime(int32_t value)
{
	m_Travel_time = value;
}
std::string RequestTimeMapArrivalSearch::getArrivalTime() const
{
    return m_Arrival_time;
}
void RequestTimeMapArrivalSearch::setArrivalTime(std::string value)
{
	m_Arrival_time = value;
}
std::vector<std::shared_ptr<RequestTimeMapProperty>> RequestTimeMapArrivalSearch::getProperties() const
{
    return m_Properties;
}
void RequestTimeMapArrivalSearch::setProperties(std::vector<std::shared_ptr<RequestTimeMapProperty>> value)
{
	m_Properties = value;
}
std::shared_ptr<RequestRangeNoMaxResults> RequestTimeMapArrivalSearch::getRange() const
{
    return m_Range;
}
void RequestTimeMapArrivalSearch::setRange(std::shared_ptr<RequestRangeNoMaxResults> value)
{
	m_Range = value;
}

}
}
}
}

