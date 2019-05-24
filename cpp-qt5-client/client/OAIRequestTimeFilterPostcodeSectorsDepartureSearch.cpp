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


#include "OAIRequestTimeFilterPostcodeSectorsDepartureSearch.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTimeFilterPostcodeSectorsDepartureSearch::OAIRequestTimeFilterPostcodeSectorsDepartureSearch(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestTimeFilterPostcodeSectorsDepartureSearch::OAIRequestTimeFilterPostcodeSectorsDepartureSearch() {
    this->init();
}

OAIRequestTimeFilterPostcodeSectorsDepartureSearch::~OAIRequestTimeFilterPostcodeSectorsDepartureSearch() {

}

void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_transportation_isSet = false;
    m_transportation_isValid = false;
    
    m_travel_time_isSet = false;
    m_travel_time_isValid = false;
    
    m_departure_time_isSet = false;
    m_departure_time_isValid = false;
    
    m_reachable_postcodes_threshold_isSet = false;
    m_reachable_postcodes_threshold_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    
    m_range_isSet = false;
    m_range_isValid = false;
    }

void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    
    
    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    
    
    m_departure_time_isValid = ::OpenAPI::fromJsonValue(departure_time, json[QString("departure_time")]);
    
    
    m_reachable_postcodes_threshold_isValid = ::OpenAPI::fromJsonValue(reachable_postcodes_threshold, json[QString("reachable_postcodes_threshold")]);
    
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    
    
}

QString
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
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
	if(m_reachable_postcodes_threshold_isSet){
        obj.insert(QString("reachable_postcodes_threshold"), ::OpenAPI::toJsonValue(reachable_postcodes_threshold));
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
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getId() const {
    return id;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


OAIRequestTransportation
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getTransportation() const {
    return transportation;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}


qint32
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getTravelTime() const {
    return travel_time;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}


QDateTime
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getDepartureTime() const {
    return departure_time;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setDepartureTime(const QDateTime &departure_time) {
    this->departure_time = departure_time;
    this->m_departure_time_isSet = true;
}


double
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getReachablePostcodesThreshold() const {
    return reachable_postcodes_threshold;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setReachablePostcodesThreshold(const double &reachable_postcodes_threshold) {
    this->reachable_postcodes_threshold = reachable_postcodes_threshold;
    this->m_reachable_postcodes_threshold_isSet = true;
}


QList<OAIRequestTimeFilterPostcodeSectorsProperty>
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getProperties() const {
    return properties;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setProperties(const QList<OAIRequestTimeFilterPostcodeSectorsProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}


OAIRequestRangeFull
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getRange() const {
    return range;
}
void
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setRange(const OAIRequestRangeFull &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(transportation.isSet()){ isObjectUpdated = true; break;}
    
        if(m_travel_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_departure_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_reachable_postcodes_threshold_isSet){ isObjectUpdated = true; break;}
    
        if(properties.size() > 0){ isObjectUpdated = true; break;}
    
        if(range.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestTimeFilterPostcodeSectorsDepartureSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_transportation_isValid && m_travel_time_isValid && m_departure_time_isValid && m_reachable_postcodes_threshold_isValid && m_properties_isValid && true;
}

}

