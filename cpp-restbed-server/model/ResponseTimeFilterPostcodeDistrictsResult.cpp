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



#include "ResponseTimeFilterPostcodeDistrictsResult.h"

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

ResponseTimeFilterPostcodeDistrictsResult::ResponseTimeFilterPostcodeDistrictsResult()
{
	m_Search_id = "";
}

ResponseTimeFilterPostcodeDistrictsResult::~ResponseTimeFilterPostcodeDistrictsResult()
{
}

std::string ResponseTimeFilterPostcodeDistrictsResult::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseTimeFilterPostcodeDistrictsResult::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseTimeFilterPostcodeDistrictsResult::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("search_id", m_Search_id);
	// generate tree for Districts
	if (!m_Districts.empty()) {
		for (const auto &childEntry : m_Districts) {
			ptree Districts_node;
			Districts_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Districts_node));
		}
		pt.add_child("districts", tmp_node);
		tmp_node.clear();
	}
	return pt;
}

void ResponseTimeFilterPostcodeDistrictsResult::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Search_id = pt.get("search_id", "");
	// push all items of Districts into member vector
	if (pt.get_child_optional("districts")) {
		for (const auto &childTree : pt.get_child("districts")) {
			m_Districts.emplace_back(childTree.second.data());
		}
	}
}

std::string ResponseTimeFilterPostcodeDistrictsResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseTimeFilterPostcodeDistrictsResult::setSearchId(std::string value)
{
	m_Search_id = value;
}
std::vector<std::shared_ptr<ResponseTimeFilterPostcodeDistrict>> ResponseTimeFilterPostcodeDistrictsResult::getDistricts() const
{
    return m_Districts;
}
void ResponseTimeFilterPostcodeDistrictsResult::setDistricts(std::vector<std::shared_ptr<ResponseTimeFilterPostcodeDistrict>> value)
{
	m_Districts = value;
}

}
}
}
}

