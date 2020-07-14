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



#include "ResponseRoutesLocation.h"

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

ResponseRoutesLocation::ResponseRoutesLocation()
{
	m_Id = "";
}

ResponseRoutesLocation::~ResponseRoutesLocation()
{
}

std::string ResponseRoutesLocation::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseRoutesLocation::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseRoutesLocation::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
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

void ResponseRoutesLocation::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", "");
	// push all items of Properties into member vector
	if (pt.get_child_optional("properties")) {
		for (const auto &childTree : pt.get_child("properties")) {
			m_Properties.emplace_back(childTree.second.data());
		}
	}
}

std::string ResponseRoutesLocation::getId() const
{
    return m_Id;
}
void ResponseRoutesLocation::setId(std::string value)
{
	m_Id = value;
}
std::vector<std::shared_ptr<ResponseRoutesProperties>> ResponseRoutesLocation::getProperties() const
{
    return m_Properties;
}
void ResponseRoutesLocation::setProperties(std::vector<std::shared_ptr<ResponseRoutesProperties>> value)
{
	m_Properties = value;
}

}
}
}
}

