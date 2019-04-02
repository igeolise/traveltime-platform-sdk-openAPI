/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIResponseRoutePart.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseRoutePart::OAIResponseRoutePart(QString json) {
    this->fromJson(json);
}

OAIResponseRoutePart::OAIResponseRoutePart() {
    this->init();
}

OAIResponseRoutePart::~OAIResponseRoutePart() {

}

void
OAIResponseRoutePart::init() {
    m_id_isSet = false;
    m_type_isSet = false;
    m_mode_isSet = false;
    m_directions_isSet = false;
    m_distance_isSet = false;
    m_travel_time_isSet = false;
    m_coords_isSet = false;
    m_direction_isSet = false;
    m_road_isSet = false;
    m_turn_isSet = false;
    m_line_isSet = false;
    m_departure_station_isSet = false;
    m_arrival_station_isSet = false;
    m_departs_at_isSet = false;
    m_arrives_at_isSet = false;
    m_num_stops_isSet = false;
}

void
OAIResponseRoutePart::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseRoutePart::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
    ::OpenAPI::fromJsonValue(mode, json[QString("mode")]);
    
    ::OpenAPI::fromJsonValue(directions, json[QString("directions")]);
    
    ::OpenAPI::fromJsonValue(distance, json[QString("distance")]);
    
    ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    
    
    ::OpenAPI::fromJsonValue(coords, json[QString("coords")]);
    ::OpenAPI::fromJsonValue(direction, json[QString("direction")]);
    
    ::OpenAPI::fromJsonValue(road, json[QString("road")]);
    
    ::OpenAPI::fromJsonValue(turn, json[QString("turn")]);
    
    ::OpenAPI::fromJsonValue(line, json[QString("line")]);
    
    ::OpenAPI::fromJsonValue(departure_station, json[QString("departure_station")]);
    
    ::OpenAPI::fromJsonValue(arrival_station, json[QString("arrival_station")]);
    
    ::OpenAPI::fromJsonValue(departs_at, json[QString("departs_at")]);
    
    ::OpenAPI::fromJsonValue(arrives_at, json[QString("arrives_at")]);
    
    ::OpenAPI::fromJsonValue(num_stops, json[QString("num_stops")]);
    
}

QString
OAIResponseRoutePart::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseRoutePart::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	if(m_type_isSet){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
	if(mode.isSet()){
        obj.insert(QString("mode"), ::OpenAPI::toJsonValue(mode));
    }
	if(m_directions_isSet){
        obj.insert(QString("directions"), ::OpenAPI::toJsonValue(directions));
    }
	if(m_distance_isSet){
        obj.insert(QString("distance"), ::OpenAPI::toJsonValue(distance));
    }
	if(m_travel_time_isSet){
        obj.insert(QString("travel_time"), ::OpenAPI::toJsonValue(travel_time));
    }
	
    if(coords.size() > 0){
        obj.insert(QString("coords"), ::OpenAPI::toJsonValue(coords));
    } 
	if(m_direction_isSet){
        obj.insert(QString("direction"), ::OpenAPI::toJsonValue(direction));
    }
	if(m_road_isSet){
        obj.insert(QString("road"), ::OpenAPI::toJsonValue(road));
    }
	if(m_turn_isSet){
        obj.insert(QString("turn"), ::OpenAPI::toJsonValue(turn));
    }
	if(m_line_isSet){
        obj.insert(QString("line"), ::OpenAPI::toJsonValue(line));
    }
	if(m_departure_station_isSet){
        obj.insert(QString("departure_station"), ::OpenAPI::toJsonValue(departure_station));
    }
	if(m_arrival_station_isSet){
        obj.insert(QString("arrival_station"), ::OpenAPI::toJsonValue(arrival_station));
    }
	if(m_departs_at_isSet){
        obj.insert(QString("departs_at"), ::OpenAPI::toJsonValue(departs_at));
    }
	if(m_arrives_at_isSet){
        obj.insert(QString("arrives_at"), ::OpenAPI::toJsonValue(arrives_at));
    }
	if(m_num_stops_isSet){
        obj.insert(QString("num_stops"), ::OpenAPI::toJsonValue(num_stops));
    }
    return obj;
}

QString
OAIResponseRoutePart::getId() const {
    return id;
}
void
OAIResponseRoutePart::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString
OAIResponseRoutePart::getType() const {
    return type;
}
void
OAIResponseRoutePart::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

OAIResponseTransportationMode
OAIResponseRoutePart::getMode() const {
    return mode;
}
void
OAIResponseRoutePart::setMode(const OAIResponseTransportationMode &mode) {
    this->mode = mode;
    this->m_mode_isSet = true;
}

QString
OAIResponseRoutePart::getDirections() const {
    return directions;
}
void
OAIResponseRoutePart::setDirections(const QString &directions) {
    this->directions = directions;
    this->m_directions_isSet = true;
}

qint32
OAIResponseRoutePart::getDistance() const {
    return distance;
}
void
OAIResponseRoutePart::setDistance(const qint32 &distance) {
    this->distance = distance;
    this->m_distance_isSet = true;
}

qint32
OAIResponseRoutePart::getTravelTime() const {
    return travel_time;
}
void
OAIResponseRoutePart::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}

QList<OAICoords>
OAIResponseRoutePart::getCoords() const {
    return coords;
}
void
OAIResponseRoutePart::setCoords(const QList<OAICoords> &coords) {
    this->coords = coords;
    this->m_coords_isSet = true;
}

QString
OAIResponseRoutePart::getDirection() const {
    return direction;
}
void
OAIResponseRoutePart::setDirection(const QString &direction) {
    this->direction = direction;
    this->m_direction_isSet = true;
}

QString
OAIResponseRoutePart::getRoad() const {
    return road;
}
void
OAIResponseRoutePart::setRoad(const QString &road) {
    this->road = road;
    this->m_road_isSet = true;
}

QString
OAIResponseRoutePart::getTurn() const {
    return turn;
}
void
OAIResponseRoutePart::setTurn(const QString &turn) {
    this->turn = turn;
    this->m_turn_isSet = true;
}

QString
OAIResponseRoutePart::getLine() const {
    return line;
}
void
OAIResponseRoutePart::setLine(const QString &line) {
    this->line = line;
    this->m_line_isSet = true;
}

QString
OAIResponseRoutePart::getDepartureStation() const {
    return departure_station;
}
void
OAIResponseRoutePart::setDepartureStation(const QString &departure_station) {
    this->departure_station = departure_station;
    this->m_departure_station_isSet = true;
}

QString
OAIResponseRoutePart::getArrivalStation() const {
    return arrival_station;
}
void
OAIResponseRoutePart::setArrivalStation(const QString &arrival_station) {
    this->arrival_station = arrival_station;
    this->m_arrival_station_isSet = true;
}

QString
OAIResponseRoutePart::getDepartsAt() const {
    return departs_at;
}
void
OAIResponseRoutePart::setDepartsAt(const QString &departs_at) {
    this->departs_at = departs_at;
    this->m_departs_at_isSet = true;
}

QString
OAIResponseRoutePart::getArrivesAt() const {
    return arrives_at;
}
void
OAIResponseRoutePart::setArrivesAt(const QString &arrives_at) {
    this->arrives_at = arrives_at;
    this->m_arrives_at_isSet = true;
}

qint32
OAIResponseRoutePart::getNumStops() const {
    return num_stops;
}
void
OAIResponseRoutePart::setNumStops(const qint32 &num_stops) {
    this->num_stops = num_stops;
    this->m_num_stops_isSet = true;
}


bool
OAIResponseRoutePart::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_type_isSet){ isObjectUpdated = true; break;}
    
        if(mode.isSet()){ isObjectUpdated = true; break;}
    
        if(m_directions_isSet){ isObjectUpdated = true; break;}
    
        if(m_distance_isSet){ isObjectUpdated = true; break;}
    
        if(m_travel_time_isSet){ isObjectUpdated = true; break;}
    
        if(coords.size() > 0){ isObjectUpdated = true; break;}
    
        if(m_direction_isSet){ isObjectUpdated = true; break;}
    
        if(m_road_isSet){ isObjectUpdated = true; break;}
    
        if(m_turn_isSet){ isObjectUpdated = true; break;}
    
        if(m_line_isSet){ isObjectUpdated = true; break;}
    
        if(m_departure_station_isSet){ isObjectUpdated = true; break;}
    
        if(m_arrival_station_isSet){ isObjectUpdated = true; break;}
    
        if(m_departs_at_isSet){ isObjectUpdated = true; break;}
    
        if(m_arrives_at_isSet){ isObjectUpdated = true; break;}
    
        if(m_num_stops_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

