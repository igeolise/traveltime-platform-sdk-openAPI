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



#include "ResponseMapInfoMap.h"

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

ResponseMapInfoMap::ResponseMapInfoMap()
{
	m_Name = "";
}

ResponseMapInfoMap::~ResponseMapInfoMap()
{
}

std::string ResponseMapInfoMap::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseMapInfoMap::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseMapInfoMap::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("name", m_Name);
	if (m_Features != nullptr) {
		pt.add_child("features", m_Features->toPropertyTree());
	}
	return pt;
}

void ResponseMapInfoMap::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Name = pt.get("name", "");
	if (pt.get_child_optional("features")) {
		m_Features = std::make_shared<ResponseMapInfoFeatures>();
		m_Features->fromPropertyTree(pt.get_child("features"));
	}
}

std::string ResponseMapInfoMap::getName() const
{
    return m_Name;
}
void ResponseMapInfoMap::setName(std::string value)
{
	m_Name = value;
}
std::shared_ptr<ResponseMapInfoFeatures> ResponseMapInfoMap::getFeatures() const
{
    return m_Features;
}
void ResponseMapInfoMap::setFeatures(std::shared_ptr<ResponseMapInfoFeatures> value)
{
	m_Features = value;
}

}
}
}
}

