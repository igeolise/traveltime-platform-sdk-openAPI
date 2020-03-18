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



#include "ResponseRoutePart.h"

#include <string>
#include <sstream>
#include <algorithm>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>

using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseRoutePart::ResponseRoutePart()
{
	m_Id = "";
	m_Type = "";
	m_TypeEnum = { "basic", "start_end", "road", "public_transport" };
	m_Directions = "";
	m_Distance = 0;
	m_Travel_time = 0;
	m_Direction = "";
	m_Road = "";
	m_Turn = "";
	m_Line = "";
	m_Departure_station = "";
	m_Arrival_station = "";
	m_Departs_at = "";
	m_Arrives_at = "";
	m_Num_stops = 0;
}

ResponseRoutePart::~ResponseRoutePart()
{
}

std::string ResponseRoutePart::toJsonString(bool prettyJson)
{
	std::stringstream ss;
	write_json(ss, this->toPropertyTree(), prettyJson);
	return ss.str();
}

void ResponseRoutePart::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	this->fromPropertyTree(pt);
}

ptree ResponseRoutePart::toPropertyTree()
{
	ptree pt;
	ptree tmp_node;
	pt.put("id", m_Id);
	pt.put("type", m_Type);
	pt.put("directions", m_Directions);
	pt.put("distance", m_Distance);
	pt.put("travel_time", m_Travel_time);
	// generate tree for Coords
	if (!m_Coords.empty()) {
		for (const auto &childEntry : m_Coords) {
			ptree Coords_node;
			Coords_node.put("", childEntry);
			tmp_node.push_back(std::make_pair("", Coords_node));
		}
		pt.add_child("coords", tmp_node);
		tmp_node.clear();
	}
	pt.put("direction", m_Direction);
	pt.put("road", m_Road);
	pt.put("turn", m_Turn);
	pt.put("line", m_Line);
	pt.put("departure_station", m_Departure_station);
	pt.put("arrival_station", m_Arrival_station);
	pt.put("departs_at", m_Departs_at);
	pt.put("arrives_at", m_Arrives_at);
	pt.put("num_stops", m_Num_stops);
	return pt;
}

void ResponseRoutePart::fromPropertyTree(ptree const &pt)
{
	ptree tmp_node;
	m_Id = pt.get("id", "");
	setType(pt.get("type", ""));
	m_Directions = pt.get("directions", "");
	m_Distance = pt.get("distance", 0);
	m_Travel_time = pt.get("travel_time", 0);
	// push all items of Coords into member vector
	if (pt.get_child_optional("coords")) {
		for (const auto &childTree : pt.get_child("coords")) {
			m_Coords.emplace_back(childTree.second.data());
		}
	}
	m_Direction = pt.get("direction", "");
	m_Road = pt.get("road", "");
	m_Turn = pt.get("turn", "");
	m_Line = pt.get("line", "");
	m_Departure_station = pt.get("departure_station", "");
	m_Arrival_station = pt.get("arrival_station", "");
	m_Departs_at = pt.get("departs_at", "");
	m_Arrives_at = pt.get("arrives_at", "");
	m_Num_stops = pt.get("num_stops", 0);
}

std::string ResponseRoutePart::getId() const
{
    return m_Id;
}
void ResponseRoutePart::setId(std::string value)
{
	m_Id = value;
}
std::string ResponseRoutePart::getType() const
{
    return m_Type;
}
void ResponseRoutePart::setType(std::string value)
{
	if (std::find(m_TypeEnum.begin(), m_TypeEnum.end(), value) != m_TypeEnum.end()) {
		m_Type = value;
	}
}
std::shared_ptr<ResponseTransportationMode> ResponseRoutePart::getMode() const
{
    return m_Mode;
}
void ResponseRoutePart::setMode(std::shared_ptr<ResponseTransportationMode> value)
{
	m_Mode = value;
}
std::string ResponseRoutePart::getDirections() const
{
    return m_Directions;
}
void ResponseRoutePart::setDirections(std::string value)
{
	m_Directions = value;
}
int32_t ResponseRoutePart::getDistance() const
{
    return m_Distance;
}
void ResponseRoutePart::setDistance(int32_t value)
{
	m_Distance = value;
}
int32_t ResponseRoutePart::getTravelTime() const
{
    return m_Travel_time;
}
void ResponseRoutePart::setTravelTime(int32_t value)
{
	m_Travel_time = value;
}
std::vector<std::shared_ptr<Coords>> ResponseRoutePart::getCoords() const
{
    return m_Coords;
}
void ResponseRoutePart::setCoords(std::vector<std::shared_ptr<Coords>> value)
{
	m_Coords = value;
}
std::string ResponseRoutePart::getDirection() const
{
    return m_Direction;
}
void ResponseRoutePart::setDirection(std::string value)
{
	m_Direction = value;
}
std::string ResponseRoutePart::getRoad() const
{
    return m_Road;
}
void ResponseRoutePart::setRoad(std::string value)
{
	m_Road = value;
}
std::string ResponseRoutePart::getTurn() const
{
    return m_Turn;
}
void ResponseRoutePart::setTurn(std::string value)
{
	m_Turn = value;
}
std::string ResponseRoutePart::getLine() const
{
    return m_Line;
}
void ResponseRoutePart::setLine(std::string value)
{
	m_Line = value;
}
std::string ResponseRoutePart::getDepartureStation() const
{
    return m_Departure_station;
}
void ResponseRoutePart::setDepartureStation(std::string value)
{
	m_Departure_station = value;
}
std::string ResponseRoutePart::getArrivalStation() const
{
    return m_Arrival_station;
}
void ResponseRoutePart::setArrivalStation(std::string value)
{
	m_Arrival_station = value;
}
std::string ResponseRoutePart::getDepartsAt() const
{
    return m_Departs_at;
}
void ResponseRoutePart::setDepartsAt(std::string value)
{
	m_Departs_at = value;
}
std::string ResponseRoutePart::getArrivesAt() const
{
    return m_Arrives_at;
}
void ResponseRoutePart::setArrivesAt(std::string value)
{
	m_Arrives_at = value;
}
int32_t ResponseRoutePart::getNumStops() const
{
    return m_Num_stops;
}
void ResponseRoutePart::setNumStops(int32_t value)
{
	m_Num_stops = value;
}

}
}
}
}

