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



#include "ResponseFaresBreakdownItem.h"

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

ResponseFaresBreakdownItem::ResponseFaresBreakdownItem()
{
}

ResponseFaresBreakdownItem::~ResponseFaresBreakdownItem()
{
}

std::string ResponseFaresBreakdownItem::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseFaresBreakdownItem::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseFaresBreakdownItem::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Modes
	if (!m_Modes.empty()) {
		for (const auto &childEntry : m_Modes) {
			ptree Modes_node;
			Modes_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Modes_node));
		}
		pt.add_child("modes", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Route_part_ids
	if (!m_Route_part_ids.empty()) {
		for (const auto &childEntry : m_Route_part_ids) {
			ptree Route_part_ids_node;
			Route_part_ids_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Route_part_ids_node));
		}
		pt.add_child("route_part_ids", tmp_node);
		tmp_node.clear();
	}
	// generate tree for Tickets
	if (!m_Tickets.empty()) {
		for (const auto &childEntry : m_Tickets) {
			ptree Tickets_node;
			Tickets_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Tickets_node));
		}
		pt.add_child("tickets", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseFaresBreakdownItem::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Modes into member vector
	if (pt.get_child_optional("modes")) {
		for (const auto &childTree : pt.get_child("modes")) {
			m_Modes.emplace_back(childTree.second.data());
		}
	}
	// push all items of Route_part_ids into member vector
	if (pt.get_child_optional("route_part_ids")) {
		for (const auto &childTree : pt.get_child("route_part_ids")) {
			m_Route_part_ids.emplace_back(std::stoi(childTree.second.data()));
		}
	}
	// push all items of Tickets into member vector
	if (pt.get_child_optional("tickets")) {
		for (const auto &childTree : pt.get_child("tickets")) {
			m_Tickets.emplace_back(childTree.second.data());
		}
	}
}

std::vector<std::shared_ptr<ResponseTransportationMode>> ResponseFaresBreakdownItem::getModes() const
{
    return m_Modes;
}
void ResponseFaresBreakdownItem::setModes(std::vector<std::shared_ptr<ResponseTransportationMode>> value)
{
	m_Modes = value;
}
std::vector<int32_t> ResponseFaresBreakdownItem::getRoutePartIds() const
{
    return m_Route_part_ids;
}
void ResponseFaresBreakdownItem::setRoutePartIds(std::vector<int32_t> value)
{
	m_Route_part_ids = value;
}
std::vector<std::shared_ptr<ResponseFareTicket>> ResponseFaresBreakdownItem::getTickets() const
{
    return m_Tickets;
}
void ResponseFaresBreakdownItem::setTickets(std::vector<std::shared_ptr<ResponseFareTicket>> value)
{
	m_Tickets = value;
}

}
}
}
}

