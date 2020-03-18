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



#include "ResponseTimeFilterPostcode.h"

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

ResponseTimeFilterPostcode::ResponseTimeFilterPostcode()
{
}

ResponseTimeFilterPostcode::~ResponseTimeFilterPostcode()
{
}

std::string ResponseTimeFilterPostcode::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseTimeFilterPostcode::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseTimeFilterPostcode::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
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

void ResponseTimeFilterPostcode::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	// push all items of Properties into member vector
	if (pt.get_child_optional("properties")) {
		for (const auto &childTree : pt.get_child("properties")) {
			m_Properties.emplace_back(childTree.second.data());
		}
	}
}

std::shared_ptr<String> ResponseTimeFilterPostcode::getCode() const
{
    return m_Code;
}
void ResponseTimeFilterPostcode::setCode(std::shared_ptr<String> value)
{
	m_Code = value;
}
std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>> ResponseTimeFilterPostcode::getProperties() const
{
    return m_Properties;
}
void ResponseTimeFilterPostcode::setProperties(std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>> value)
{
	m_Properties = value;
}

}
}
}
}

