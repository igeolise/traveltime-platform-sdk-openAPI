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


#include "OAIRequestTransportation.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTransportation::OAIRequestTransportation(QString json) {
    this->fromJson(json);
}

OAIRequestTransportation::OAIRequestTransportation() {
    this->init();
}

OAIRequestTransportation::~OAIRequestTransportation() {

}

void
OAIRequestTransportation::init() {
    m_type_isSet = false;
    m_pt_change_delay_isSet = false;
    m_walking_time_isSet = false;
    m_driving_time_to_station_isSet = false;
    m_parking_time_isSet = false;
    m_boarding_time_isSet = false;
}

void
OAIRequestTransportation::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestTransportation::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
    ::OpenAPI::fromJsonValue(pt_change_delay, json[QString("pt_change_delay")]);
    
    ::OpenAPI::fromJsonValue(walking_time, json[QString("walking_time")]);
    
    ::OpenAPI::fromJsonValue(driving_time_to_station, json[QString("driving_time_to_station")]);
    
    ::OpenAPI::fromJsonValue(parking_time, json[QString("parking_time")]);
    
    ::OpenAPI::fromJsonValue(boarding_time, json[QString("boarding_time")]);
    
}

QString
OAIRequestTransportation::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTransportation::asJsonObject() const {
    QJsonObject obj;
	if(m_type_isSet){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
	if(m_pt_change_delay_isSet){
        obj.insert(QString("pt_change_delay"), ::OpenAPI::toJsonValue(pt_change_delay));
    }
	if(m_walking_time_isSet){
        obj.insert(QString("walking_time"), ::OpenAPI::toJsonValue(walking_time));
    }
	if(m_driving_time_to_station_isSet){
        obj.insert(QString("driving_time_to_station"), ::OpenAPI::toJsonValue(driving_time_to_station));
    }
	if(m_parking_time_isSet){
        obj.insert(QString("parking_time"), ::OpenAPI::toJsonValue(parking_time));
    }
	if(m_boarding_time_isSet){
        obj.insert(QString("boarding_time"), ::OpenAPI::toJsonValue(boarding_time));
    }
    return obj;
}

QString
OAIRequestTransportation::getType() const {
    return type;
}
void
OAIRequestTransportation::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

qint32
OAIRequestTransportation::getPtChangeDelay() const {
    return pt_change_delay;
}
void
OAIRequestTransportation::setPtChangeDelay(const qint32 &pt_change_delay) {
    this->pt_change_delay = pt_change_delay;
    this->m_pt_change_delay_isSet = true;
}

qint32
OAIRequestTransportation::getWalkingTime() const {
    return walking_time;
}
void
OAIRequestTransportation::setWalkingTime(const qint32 &walking_time) {
    this->walking_time = walking_time;
    this->m_walking_time_isSet = true;
}

qint32
OAIRequestTransportation::getDrivingTimeToStation() const {
    return driving_time_to_station;
}
void
OAIRequestTransportation::setDrivingTimeToStation(const qint32 &driving_time_to_station) {
    this->driving_time_to_station = driving_time_to_station;
    this->m_driving_time_to_station_isSet = true;
}

qint32
OAIRequestTransportation::getParkingTime() const {
    return parking_time;
}
void
OAIRequestTransportation::setParkingTime(const qint32 &parking_time) {
    this->parking_time = parking_time;
    this->m_parking_time_isSet = true;
}

qint32
OAIRequestTransportation::getBoardingTime() const {
    return boarding_time;
}
void
OAIRequestTransportation::setBoardingTime(const qint32 &boarding_time) {
    this->boarding_time = boarding_time;
    this->m_boarding_time_isSet = true;
}


bool
OAIRequestTransportation::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_type_isSet){ isObjectUpdated = true; break;}
    
        if(m_pt_change_delay_isSet){ isObjectUpdated = true; break;}
    
        if(m_walking_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_driving_time_to_station_isSet){ isObjectUpdated = true; break;}
    
        if(m_parking_time_isSet){ isObjectUpdated = true; break;}
    
        if(m_boarding_time_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

