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



#include "RequestRoutes.h"

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

RequestRoutes::RequestRoutes()
{
}

RequestRoutes::~RequestRoutes()
{
}

std::string RequestRoutes::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void RequestRoutes::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree RequestRoutes::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Locations
	if (!m_Locations.empty()) {
		for (const auto &childEntry : m_Locations) {
			ptree Locations_node;
			Locations_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Locations_node));
		}
		pt.add_child("locations", tmp_node);
		tmp_node.clear();
	}
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

void RequestRoutes::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Locations into member vector
	if (pt.get_child_optional("locations")) {
		for (const auto &childTree : pt.get_child("locations")) {
			m_Locations.emplace_back(childTree.second.data());
		}
	}
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

std::vector<std::shared_ptr<RequestLocation>> RequestRoutes::getLocations() const
{
    return m_Locations;
}
void RequestRoutes::setLocations(std::vector<std::shared_ptr<RequestLocation>> value)
{
	m_Locations = value;
}
std::vector<std::shared_ptr<RequestRoutesDepartureSearch>> RequestRoutes::getDepartureSearches() const
{
    return m_Departure_searches;
}
void RequestRoutes::setDepartureSearches(std::vector<std::shared_ptr<RequestRoutesDepartureSearch>> value)
{
	m_Departure_searches = value;
}
std::vector<std::shared_ptr<RequestRoutesArrivalSearch>> RequestRoutes::getArrivalSearches() const
{
    return m_Arrival_searches;
}
void RequestRoutes::setArrivalSearches(std::vector<std::shared_ptr<RequestRoutesArrivalSearch>> value)
{
	m_Arrival_searches = value;
}

}
}
}
}

