/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "ResponseRoutePart.h"

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

ResponseRoutePart::ResponseRoutePart()
{
    m_Id = "";
    m_Type = "";
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

std::string ResponseRoutePart::toJsonString()
{
	std::stringstream ss;
	ptree pt;
	pt.put("Id", m_Id);
	pt.put("Type", m_Type);
	pt.put("Directions", m_Directions);
	pt.put("Distance", m_Distance);
	pt.put("Travel_time", m_Travel_time);
	pt.put("Direction", m_Direction);
	pt.put("Road", m_Road);
	pt.put("Turn", m_Turn);
	pt.put("Line", m_Line);
	pt.put("Departure_station", m_Departure_station);
	pt.put("Arrival_station", m_Arrival_station);
	pt.put("Departs_at", m_Departs_at);
	pt.put("Arrives_at", m_Arrives_at);
	pt.put("Num_stops", m_Num_stops);
	write_json(ss, pt, false);
	return ss.str();
}

void ResponseRoutePart::fromJsonString(std::string const& jsonString)
{
	std::stringstream ss(jsonString);
	ptree pt;
	read_json(ss,pt);
	m_Id = pt.get("Id", "");
	m_Type = pt.get("Type", "");
	m_Directions = pt.get("Directions", "");
	m_Distance = pt.get("Distance", 0);
	m_Travel_time = pt.get("Travel_time", 0);
	m_Direction = pt.get("Direction", "");
	m_Road = pt.get("Road", "");
	m_Turn = pt.get("Turn", "");
	m_Line = pt.get("Line", "");
	m_Departure_station = pt.get("Departure_station", "");
	m_Arrival_station = pt.get("Arrival_station", "");
	m_Departs_at = pt.get("Departs_at", "");
	m_Arrives_at = pt.get("Arrives_at", "");
	m_Num_stops = pt.get("Num_stops", 0);
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
    m_Type = value;
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

