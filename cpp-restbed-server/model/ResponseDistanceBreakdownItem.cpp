/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseDistanceBreakdownItem.h"

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

ResponseDistanceBreakdownItem::ResponseDistanceBreakdownItem()
{
    m_Distance = 0;
    
}

ResponseDistanceBreakdownItem::~ResponseDistanceBreakdownItem()
{
}

std::string ResponseDistanceBreakdownItem::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Distance", m_Distance);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseDistanceBreakdownItem::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Distance = pt.get("Distance", 0);
}

std::shared_ptr<ResponseTransportationMode> ResponseDistanceBreakdownItem::getMode() const
{
    return m_Mode;
}
void ResponseDistanceBreakdownItem::setMode(std::shared_ptr<ResponseTransportationMode> value)
{
    m_Mode = value;
}
int32_t ResponseDistanceBreakdownItem::getDistance() const
{
    return m_Distance;
}
void ResponseDistanceBreakdownItem::setDistance(int32_t value)
{
    m_Distance = value;
}

}
}
}
}

