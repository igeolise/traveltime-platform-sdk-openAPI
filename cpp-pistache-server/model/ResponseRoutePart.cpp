/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ResponseRoutePart.h"

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
    m_DirectionIsSet = false;
    m_Road = "";
    m_RoadIsSet = false;
    m_Turn = "";
    m_TurnIsSet = false;
    m_Line = "";
    m_LineIsSet = false;
    m_Departure_station = "";
    m_Departure_stationIsSet = false;
    m_Arrival_station = "";
    m_Arrival_stationIsSet = false;
    m_Departs_at = "";
    m_Departs_atIsSet = false;
    m_Arrives_at = "";
    m_Arrives_atIsSet = false;
    m_Num_stops = 0;
    m_Num_stopsIsSet = false;
    
}

ResponseRoutePart::~ResponseRoutePart()
{
}

void ResponseRoutePart::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseRoutePart& o)
{
    j = nlohmann::json();
    j["id"] = o.m_Id;
    j["type"] = o.m_Type;
    j["mode"] = o.m_Mode;
    j["directions"] = o.m_Directions;
    j["distance"] = o.m_Distance;
    j["travel_time"] = o.m_Travel_time;
    j["coords"] = o.m_Coords;
    if(o.directionIsSet())
        j["direction"] = o.m_Direction;
    if(o.roadIsSet())
        j["road"] = o.m_Road;
    if(o.turnIsSet())
        j["turn"] = o.m_Turn;
    if(o.lineIsSet())
        j["line"] = o.m_Line;
    if(o.departureStationIsSet())
        j["departure_station"] = o.m_Departure_station;
    if(o.arrivalStationIsSet())
        j["arrival_station"] = o.m_Arrival_station;
    if(o.departsAtIsSet())
        j["departs_at"] = o.m_Departs_at;
    if(o.arrivesAtIsSet())
        j["arrives_at"] = o.m_Arrives_at;
    if(o.numStopsIsSet())
        j["num_stops"] = o.m_Num_stops;
}

void from_json(const nlohmann::json& j, ResponseRoutePart& o)
{
    j.at("id").get_to(o.m_Id);
    j.at("type").get_to(o.m_Type);
    j.at("mode").get_to(o.m_Mode);
    j.at("directions").get_to(o.m_Directions);
    j.at("distance").get_to(o.m_Distance);
    j.at("travel_time").get_to(o.m_Travel_time);
    j.at("coords").get_to(o.m_Coords);
    if(j.contains("direction"))
    {
        j.at("direction").get_to(o.m_Direction);
        o.m_DirectionIsSet = true;
    } 
    if(j.contains("road"))
    {
        j.at("road").get_to(o.m_Road);
        o.m_RoadIsSet = true;
    } 
    if(j.contains("turn"))
    {
        j.at("turn").get_to(o.m_Turn);
        o.m_TurnIsSet = true;
    } 
    if(j.contains("line"))
    {
        j.at("line").get_to(o.m_Line);
        o.m_LineIsSet = true;
    } 
    if(j.contains("departure_station"))
    {
        j.at("departure_station").get_to(o.m_Departure_station);
        o.m_Departure_stationIsSet = true;
    } 
    if(j.contains("arrival_station"))
    {
        j.at("arrival_station").get_to(o.m_Arrival_station);
        o.m_Arrival_stationIsSet = true;
    } 
    if(j.contains("departs_at"))
    {
        j.at("departs_at").get_to(o.m_Departs_at);
        o.m_Departs_atIsSet = true;
    } 
    if(j.contains("arrives_at"))
    {
        j.at("arrives_at").get_to(o.m_Arrives_at);
        o.m_Arrives_atIsSet = true;
    } 
    if(j.contains("num_stops"))
    {
        j.at("num_stops").get_to(o.m_Num_stops);
        o.m_Num_stopsIsSet = true;
    } 
}

std::string ResponseRoutePart::getId() const
{
    return m_Id;
}
void ResponseRoutePart::setId(std::string const& value)
{
    m_Id = value;
    
}
std::string ResponseRoutePart::getType() const
{
    return m_Type;
}
void ResponseRoutePart::setType(std::string const& value)
{
    m_Type = value;
    
}
ResponseTransportationMode ResponseRoutePart::getMode() const
{
    return m_Mode;
}
void ResponseRoutePart::setMode(ResponseTransportationMode const& value)
{
    m_Mode = value;
    
}
std::string ResponseRoutePart::getDirections() const
{
    return m_Directions;
}
void ResponseRoutePart::setDirections(std::string const& value)
{
    m_Directions = value;
    
}
int32_t ResponseRoutePart::getDistance() const
{
    return m_Distance;
}
void ResponseRoutePart::setDistance(int32_t const value)
{
    m_Distance = value;
    
}
int32_t ResponseRoutePart::getTravelTime() const
{
    return m_Travel_time;
}
void ResponseRoutePart::setTravelTime(int32_t const value)
{
    m_Travel_time = value;
    
}
std::vector<Coords>& ResponseRoutePart::getCoords()
{
    return m_Coords;
}
std::string ResponseRoutePart::getDirection() const
{
    return m_Direction;
}
void ResponseRoutePart::setDirection(std::string const& value)
{
    m_Direction = value;
    m_DirectionIsSet = true;
}
bool ResponseRoutePart::directionIsSet() const
{
    return m_DirectionIsSet;
}
void ResponseRoutePart::unsetDirection()
{
    m_DirectionIsSet = false;
}
std::string ResponseRoutePart::getRoad() const
{
    return m_Road;
}
void ResponseRoutePart::setRoad(std::string const& value)
{
    m_Road = value;
    m_RoadIsSet = true;
}
bool ResponseRoutePart::roadIsSet() const
{
    return m_RoadIsSet;
}
void ResponseRoutePart::unsetRoad()
{
    m_RoadIsSet = false;
}
std::string ResponseRoutePart::getTurn() const
{
    return m_Turn;
}
void ResponseRoutePart::setTurn(std::string const& value)
{
    m_Turn = value;
    m_TurnIsSet = true;
}
bool ResponseRoutePart::turnIsSet() const
{
    return m_TurnIsSet;
}
void ResponseRoutePart::unsetTurn()
{
    m_TurnIsSet = false;
}
std::string ResponseRoutePart::getLine() const
{
    return m_Line;
}
void ResponseRoutePart::setLine(std::string const& value)
{
    m_Line = value;
    m_LineIsSet = true;
}
bool ResponseRoutePart::lineIsSet() const
{
    return m_LineIsSet;
}
void ResponseRoutePart::unsetLine()
{
    m_LineIsSet = false;
}
std::string ResponseRoutePart::getDepartureStation() const
{
    return m_Departure_station;
}
void ResponseRoutePart::setDepartureStation(std::string const& value)
{
    m_Departure_station = value;
    m_Departure_stationIsSet = true;
}
bool ResponseRoutePart::departureStationIsSet() const
{
    return m_Departure_stationIsSet;
}
void ResponseRoutePart::unsetDeparture_station()
{
    m_Departure_stationIsSet = false;
}
std::string ResponseRoutePart::getArrivalStation() const
{
    return m_Arrival_station;
}
void ResponseRoutePart::setArrivalStation(std::string const& value)
{
    m_Arrival_station = value;
    m_Arrival_stationIsSet = true;
}
bool ResponseRoutePart::arrivalStationIsSet() const
{
    return m_Arrival_stationIsSet;
}
void ResponseRoutePart::unsetArrival_station()
{
    m_Arrival_stationIsSet = false;
}
std::string ResponseRoutePart::getDepartsAt() const
{
    return m_Departs_at;
}
void ResponseRoutePart::setDepartsAt(std::string const& value)
{
    m_Departs_at = value;
    m_Departs_atIsSet = true;
}
bool ResponseRoutePart::departsAtIsSet() const
{
    return m_Departs_atIsSet;
}
void ResponseRoutePart::unsetDeparts_at()
{
    m_Departs_atIsSet = false;
}
std::string ResponseRoutePart::getArrivesAt() const
{
    return m_Arrives_at;
}
void ResponseRoutePart::setArrivesAt(std::string const& value)
{
    m_Arrives_at = value;
    m_Arrives_atIsSet = true;
}
bool ResponseRoutePart::arrivesAtIsSet() const
{
    return m_Arrives_atIsSet;
}
void ResponseRoutePart::unsetArrives_at()
{
    m_Arrives_atIsSet = false;
}
int32_t ResponseRoutePart::getNumStops() const
{
    return m_Num_stops;
}
void ResponseRoutePart::setNumStops(int32_t const value)
{
    m_Num_stops = value;
    m_Num_stopsIsSet = true;
}
bool ResponseRoutePart::numStopsIsSet() const
{
    return m_Num_stopsIsSet;
}
void ResponseRoutePart::unsetNum_stops()
{
    m_Num_stopsIsSet = false;
}

}
}
}
}

