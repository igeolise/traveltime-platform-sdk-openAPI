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



#include "ResponseTimeFilterPostcodeDistrict.h"

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

ResponseTimeFilterPostcodeDistrict::ResponseTimeFilterPostcodeDistrict()
{
}

ResponseTimeFilterPostcodeDistrict::~ResponseTimeFilterPostcodeDistrict()
{
}

std::string ResponseTimeFilterPostcodeDistrict::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseTimeFilterPostcodeDistrict::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseTimeFilterPostcodeDistrict::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	if (m_Properties != nullptr) {
		pt.add_child("properties", m_Properties->toPropertyTree());
	}
	return pt;
}

void ResponseTimeFilterPostcodeDistrict::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	if (pt.get_child_optional("properties")) {
		m_Properties = std::make_shared<ResponseTimeFilterPostcodeDistrictProperties>();
		m_Properties->fromPropertyTree(pt.get_child("properties"));
	}
}

std::shared_ptr<String> ResponseTimeFilterPostcodeDistrict::getCode() const
{
    return m_Code;
}
void ResponseTimeFilterPostcodeDistrict::setCode(std::shared_ptr<String> value)
{
	m_Code = value;
}
std::shared_ptr<ResponseTimeFilterPostcodeDistrictProperties> ResponseTimeFilterPostcodeDistrict::getProperties() const
{
    return m_Properties;
}
void ResponseTimeFilterPostcodeDistrict::setProperties(std::shared_ptr<ResponseTimeFilterPostcodeDistrictProperties> value)
{
	m_Properties = value;
}

}
}
}
}

