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



#include "ResponseGeocodingGeoJsonFeature.h"

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

ResponseGeocodingGeoJsonFeature::ResponseGeocodingGeoJsonFeature()
{
	m_Type = "";
}

ResponseGeocodingGeoJsonFeature::~ResponseGeocodingGeoJsonFeature()
{
}

std::string ResponseGeocodingGeoJsonFeature::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseGeocodingGeoJsonFeature::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseGeocodingGeoJsonFeature::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("type", m_Type);
	if (m_Geometry != nullptr) {
		pt.add_child("geometry", m_Geometry->toPropertyTree());
	}
	if (m_Properties != nullptr) {
		pt.add_child("properties", m_Properties->toPropertyTree());
	}
	return pt;
}

void ResponseGeocodingGeoJsonFeature::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Type = pt.get("type", "");
	if (pt.get_child_optional("geometry")) {
		m_Geometry = std::make_shared<ResponseGeocodingGeometry>();
		m_Geometry->fromPropertyTree(pt.get_child("geometry"));
	}
	if (pt.get_child_optional("properties")) {
		m_Properties = std::make_shared<ResponseGeocodingProperties>();
		m_Properties->fromPropertyTree(pt.get_child("properties"));
	}
}

std::string ResponseGeocodingGeoJsonFeature::getType() const
{
    return m_Type;
}
void ResponseGeocodingGeoJsonFeature::setType(std::string value)
{
	m_Type = value;
}
std::shared_ptr<ResponseGeocodingGeometry> ResponseGeocodingGeoJsonFeature::getGeometry() const
{
    return m_Geometry;
}
void ResponseGeocodingGeoJsonFeature::setGeometry(std::shared_ptr<ResponseGeocodingGeometry> value)
{
	m_Geometry = value;
}
std::shared_ptr<ResponseGeocodingProperties> ResponseGeocodingGeoJsonFeature::getProperties() const
{
    return m_Properties;
}
void ResponseGeocodingGeoJsonFeature::setProperties(std::shared_ptr<ResponseGeocodingProperties> value)
{
	m_Properties = value;
}

}
}
}
}

