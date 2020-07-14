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



#include "ResponseFaresFast.h"

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

ResponseFaresFast::ResponseFaresFast()
{
}

ResponseFaresFast::~ResponseFaresFast()
{
}

std::string ResponseFaresFast::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseFaresFast::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseFaresFast::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	// generate tree for Tickets_total
	if (!m_Tickets_total.empty()) {
		for (const auto &childEntry : m_Tickets_total) {
			ptree Tickets_total_node;
			Tickets_total_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Tickets_total_node));
		}
		pt.add_child("tickets_total", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseFaresFast::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Tickets_total into member vector
	if (pt.get_child_optional("tickets_total")) {
		for (const auto &childTree : pt.get_child("tickets_total")) {
			m_Tickets_total.emplace_back(childTree.second.data());
		}
	}
}

std::vector<std::shared_ptr<ResponseFareTicket>> ResponseFaresFast::getTicketsTotal() const
{
    return m_Tickets_total;
}
void ResponseFaresFast::setTicketsTotal(std::vector<std::shared_ptr<ResponseFareTicket>> value)
{
	m_Tickets_total = value;
}

}
}
}
}

