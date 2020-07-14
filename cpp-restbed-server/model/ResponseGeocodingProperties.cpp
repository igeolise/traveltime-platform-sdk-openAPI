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



#include "ResponseGeocodingProperties.h"

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

ResponseGeocodingProperties::ResponseGeocodingProperties()
{
	m_Name = "";
	m_Label = "";
	m_Score = 0.0;
	m_House_number = "";
	m_Street = "";
	m_Region = "";
	m_Region_code = "";
	m_Neighbourhood = "";
	m_County = "";
	m_Macroregion = "";
	m_City = "";
	m_Country = "";
	m_Country_code = "";
	m_Continent = "";
	m_Postcode = "";
}

ResponseGeocodingProperties::~ResponseGeocodingProperties()
{
}

std::string ResponseGeocodingProperties::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseGeocodingProperties::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseGeocodingProperties::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("name", m_Name);
	pt.put("label", m_Label);
	pt.put("score", m_Score);
	pt.put("house_number", m_House_number);
	pt.put("street", m_Street);
	pt.put("region", m_Region);
	pt.put("region_code", m_Region_code);
	pt.put("neighbourhood", m_Neighbourhood);
	pt.put("county", m_County);
	pt.put("macroregion", m_Macroregion);
	pt.put("city", m_City);
	pt.put("country", m_Country);
	pt.put("country_code", m_Country_code);
	pt.put("continent", m_Continent);
	pt.put("postcode", m_Postcode);
	if (m_Features != nullptr) {
		pt.add_child("features", m_Features->toPropertyTree());
	}
	return pt;
}

void ResponseGeocodingProperties::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Name = pt.get("name", "");
	m_Label = pt.get("label", "");
	m_Score = pt.get("score", 0.0);
	m_House_number = pt.get("house_number", "");
	m_Street = pt.get("street", "");
	m_Region = pt.get("region", "");
	m_Region_code = pt.get("region_code", "");
	m_Neighbourhood = pt.get("neighbourhood", "");
	m_County = pt.get("county", "");
	m_Macroregion = pt.get("macroregion", "");
	m_City = pt.get("city", "");
	m_Country = pt.get("country", "");
	m_Country_code = pt.get("country_code", "");
	m_Continent = pt.get("continent", "");
	m_Postcode = pt.get("postcode", "");
	if (pt.get_child_optional("features")) {
		m_Features = std::make_shared<ResponseMapInfoFeatures>();
		m_Features->fromPropertyTree(pt.get_child("features"));
	}
}

std::string ResponseGeocodingProperties::getName() const
{
    return m_Name;
}
void ResponseGeocodingProperties::setName(std::string value)
{
	m_Name = value;
}
std::string ResponseGeocodingProperties::getLabel() const
{
    return m_Label;
}
void ResponseGeocodingProperties::setLabel(std::string value)
{
	m_Label = value;
}
double ResponseGeocodingProperties::getScore() const
{
    return m_Score;
}
void ResponseGeocodingProperties::setScore(double value)
{
	m_Score = value;
}
std::string ResponseGeocodingProperties::getHouseNumber() const
{
    return m_House_number;
}
void ResponseGeocodingProperties::setHouseNumber(std::string value)
{
	m_House_number = value;
}
std::string ResponseGeocodingProperties::getStreet() const
{
    return m_Street;
}
void ResponseGeocodingProperties::setStreet(std::string value)
{
	m_Street = value;
}
std::string ResponseGeocodingProperties::getRegion() const
{
    return m_Region;
}
void ResponseGeocodingProperties::setRegion(std::string value)
{
	m_Region = value;
}
std::string ResponseGeocodingProperties::getRegionCode() const
{
    return m_Region_code;
}
void ResponseGeocodingProperties::setRegionCode(std::string value)
{
	m_Region_code = value;
}
std::string ResponseGeocodingProperties::getNeighbourhood() const
{
    return m_Neighbourhood;
}
void ResponseGeocodingProperties::setNeighbourhood(std::string value)
{
	m_Neighbourhood = value;
}
std::string ResponseGeocodingProperties::getCounty() const
{
    return m_County;
}
void ResponseGeocodingProperties::setCounty(std::string value)
{
	m_County = value;
}
std::string ResponseGeocodingProperties::getMacroregion() const
{
    return m_Macroregion;
}
void ResponseGeocodingProperties::setMacroregion(std::string value)
{
	m_Macroregion = value;
}
std::string ResponseGeocodingProperties::getCity() const
{
    return m_City;
}
void ResponseGeocodingProperties::setCity(std::string value)
{
	m_City = value;
}
std::string ResponseGeocodingProperties::getCountry() const
{
    return m_Country;
}
void ResponseGeocodingProperties::setCountry(std::string value)
{
	m_Country = value;
}
std::string ResponseGeocodingProperties::getCountryCode() const
{
    return m_Country_code;
}
void ResponseGeocodingProperties::setCountryCode(std::string value)
{
	m_Country_code = value;
}
std::string ResponseGeocodingProperties::getContinent() const
{
    return m_Continent;
}
void ResponseGeocodingProperties::setContinent(std::string value)
{
	m_Continent = value;
}
std::string ResponseGeocodingProperties::getPostcode() const
{
    return m_Postcode;
}
void ResponseGeocodingProperties::setPostcode(std::string value)
{
	m_Postcode = value;
}
std::shared_ptr<ResponseMapInfoFeatures> ResponseGeocodingProperties::getFeatures() const
{
    return m_Features;
}
void ResponseGeocodingProperties::setFeatures(std::shared_ptr<ResponseMapInfoFeatures> value)
{
	m_Features = value;
}

}
}
}
}

