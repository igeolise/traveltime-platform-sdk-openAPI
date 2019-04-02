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


#include "OAIResponseTimeFilterPostcodeSectorProperties.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeFilterPostcodeSectorProperties::OAIResponseTimeFilterPostcodeSectorProperties(QString json) {
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodeSectorProperties::OAIResponseTimeFilterPostcodeSectorProperties() {
    this->init();
}

OAIResponseTimeFilterPostcodeSectorProperties::~OAIResponseTimeFilterPostcodeSectorProperties() {

}

void
OAIResponseTimeFilterPostcodeSectorProperties::init() {
    m_travel_time_reachable_isSet = false;
    m_travel_time_all_isSet = false;
    m_coverage_isSet = false;
}

void
OAIResponseTimeFilterPostcodeSectorProperties::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodeSectorProperties::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(travel_time_reachable, json[QString("travel_time_reachable")]);
    
    ::OpenAPI::fromJsonValue(travel_time_all, json[QString("travel_time_all")]);
    
    ::OpenAPI::fromJsonValue(coverage, json[QString("coverage")]);
    
}

QString
OAIResponseTimeFilterPostcodeSectorProperties::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodeSectorProperties::asJsonObject() const {
    QJsonObject obj;
	if(travel_time_reachable.isSet()){
        obj.insert(QString("travel_time_reachable"), ::OpenAPI::toJsonValue(travel_time_reachable));
    }
	if(travel_time_all.isSet()){
        obj.insert(QString("travel_time_all"), ::OpenAPI::toJsonValue(travel_time_all));
    }
	if(m_coverage_isSet){
        obj.insert(QString("coverage"), ::OpenAPI::toJsonValue(coverage));
    }
    return obj;
}

OAIResponseTravelTimeStatistics
OAIResponseTimeFilterPostcodeSectorProperties::getTravelTimeReachable() const {
    return travel_time_reachable;
}
void
OAIResponseTimeFilterPostcodeSectorProperties::setTravelTimeReachable(const OAIResponseTravelTimeStatistics &travel_time_reachable) {
    this->travel_time_reachable = travel_time_reachable;
    this->m_travel_time_reachable_isSet = true;
}

OAIResponseTravelTimeStatistics
OAIResponseTimeFilterPostcodeSectorProperties::getTravelTimeAll() const {
    return travel_time_all;
}
void
OAIResponseTimeFilterPostcodeSectorProperties::setTravelTimeAll(const OAIResponseTravelTimeStatistics &travel_time_all) {
    this->travel_time_all = travel_time_all;
    this->m_travel_time_all_isSet = true;
}

double
OAIResponseTimeFilterPostcodeSectorProperties::getCoverage() const {
    return coverage;
}
void
OAIResponseTimeFilterPostcodeSectorProperties::setCoverage(const double &coverage) {
    this->coverage = coverage;
    this->m_coverage_isSet = true;
}


bool
OAIResponseTimeFilterPostcodeSectorProperties::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(travel_time_reachable.isSet()){ isObjectUpdated = true; break;}
    
        if(travel_time_all.isSet()){ isObjectUpdated = true; break;}
    
        if(m_coverage_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

