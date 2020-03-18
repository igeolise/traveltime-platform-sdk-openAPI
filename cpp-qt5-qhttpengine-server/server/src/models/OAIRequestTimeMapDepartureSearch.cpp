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


#include "OAIRequestTimeMapDepartureSearch.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeMapDepartureSearch::OAIRequestTimeMapDepartureSearch(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeMapDepartureSearch::OAIRequestTimeMapDepartureSearch() {
    this->init();
}

OAIRequestTimeMapDepartureSearch::~OAIRequestTimeMapDepartureSearch() {

}

void
OAIRequestTimeMapDepartureSearch::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_coords_isSet = false;
    m_coords_isValid = false;
    
    m_transportation_isSet = false;
    m_transportation_isValid = false;
    
    m_travel_time_isSet = false;
    m_travel_time_isValid = false;
    
    m_departure_time_isSet = false;
    m_departure_time_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    
    m_range_isSet = false;
    m_range_isValid = false;
    }

void
OAIRequestTimeMapDepartureSearch::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestTimeMapDepartureSearch::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_coords_isValid = ::OpenAPI::fromJsonValue(coords, json[QString("coords")]);
    
    
    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    
    
    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    
    
    m_departure_time_isValid = ::OpenAPI::fromJsonValue(departure_time, json[QString("departure_time")]);
    
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    
    
}

QString
OAIRequestTimeMapDepartureSearch::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTimeMapDepartureSearch::asJsonObject() const {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if(coords.isSet()){
        obj.insert(QString("coords"), ::OpenAPI::toJsonValue(coords));
    }
    if(transportation.isSet()){
        obj.insert(QString("transportation"), ::OpenAPI::toJsonValue(transportation));
    }
    if(m_travel_time_isSet){
        obj.insert(QString("travel_time"), ::OpenAPI::toJsonValue(travel_time));
    }
    if(m_departure_time_isSet){
        obj.insert(QString("departure_time"), ::OpenAPI::toJsonValue(departure_time));
    }
    
    if(properties.size() > 0){
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    } 
    if(range.isSet()){
        obj.insert(QString("range"), ::OpenAPI::toJsonValue(range));
    }
    return obj;
}


QString
OAIRequestTimeMapDepartureSearch::getId() const {
    return id;
}
void
OAIRequestTimeMapDepartureSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


OAICoords
OAIRequestTimeMapDepartureSearch::getCoords() const {
    return coords;
}
void
OAIRequestTimeMapDepartureSearch::setCoords(const OAICoords &coords) {
    this->coords = coords;
    this->m_coords_isSet = true;
}


OAIRequestTransportation
OAIRequestTimeMapDepartureSearch::getTransportation() const {
    return transportation;
}
void
OAIRequestTimeMapDepartureSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}


qint32
OAIRequestTimeMapDepartureSearch::getTravelTime() const {
    return travel_time;
}
void
OAIRequestTimeMapDepartureSearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}


QDateTime
OAIRequestTimeMapDepartureSearch::getDepartureTime() const {
    return departure_time;
}
void
OAIRequestTimeMapDepartureSearch::setDepartureTime(const QDateTime &departure_time) {
    this->departure_time = departure_time;
    this->m_departure_time_isSet = true;
}


QList<OAIRequestTimeMapProperty>
OAIRequestTimeMapDepartureSearch::getProperties() const {
    return properties;
}
void
OAIRequestTimeMapDepartureSearch::setProperties(const QList<OAIRequestTimeMapProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


OAIRequestRangeNoMaxResults
OAIRequestTimeMapDepartureSearch::getRange() const {
    return range;
}
void
OAIRequestTimeMapDepartureSearch::setRange(const OAIRequestRangeNoMaxResults &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool
OAIRequestTimeMapDepartureSearch::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(coords.isSet()){ isObjectUpdated = true; break;}
    
        if(transportation.isSet()){ isObjectUpdated = true; break;}
    
        if(m_travel_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_departure_time_isSet){ isObjectUpdated = true; break;}
    
        if(properties.size() > 0){ isObjectUpdated = true; break;}
    
        if(range.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestTimeMapDepartureSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_coords_isValid && m_transportation_isValid && m_travel_time_isValid && m_departure_time_isValid && true;
}

}

