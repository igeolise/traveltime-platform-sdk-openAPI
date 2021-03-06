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

std::string RequestTimeFilterPostcodeSectors::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestTimeFilterPostcodeSectors::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestTimeFilterPostcodeSectors::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Departure_searches
	if (!m_Departure_searches.empty()) {
		for (const auto &childEntry : m_Departure_searches) {
			ptree Departure_searches_node;
			Departure_searches_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Departure_searches_node));
		}
		pt.add_child("departure_searches", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Arrival_searches
	if (!m_Arrival_searches.empty()) {
		for (const auto &childEntry : m_Arrival_searches) {
			ptree Arrival_searches_node;
			Arrival_searches_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Arrival_searches_node));
		}
		pt.add_child("arrival_searches", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void RequestTimeFilterPostcodeSectors::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Departure_searches into member vector
	if (pt.get_child_optional("departure_searches")) {
		for (const auto &childTree : pt.get_child("departure_searches")) {
			m_Departure_searches.emplace_back(childTree.second.data());
		}
	}
	// push all items of Arrival_searches into member vector
	if (pt.get_child_optional("arrival_searches")) {
		for (const auto &childTree : pt.get_child("arrival_searches")) {
			m_Arrival_searches.emplace_back(childTree.second.data());
		}
	}
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

