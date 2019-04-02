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


#include "OAIResponseTimeFilterFastResult.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeFilterFastResult::OAIResponseTimeFilterFastResult(QString json) {
    this->fromJson(json);
}

OAIResponseTimeFilterFastResult::OAIResponseTimeFilterFastResult() {
    this->init();
}

OAIResponseTimeFilterFastResult::~OAIResponseTimeFilterFastResult() {

}

void
OAIResponseTimeFilterFastResult::init() {
    m_search_id_isSet = false;
    m_locations_isSet = false;
    m_unreachable_isSet = false;
}

void
OAIResponseTimeFilterFastResult::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterFastResult::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(search_id, json[QString("search_id")]);
    
    
    ::OpenAPI::fromJsonValue(locations, json[QString("locations")]);
    
    ::OpenAPI::fromJsonValue(unreachable, json[QString("unreachable")]);
}

QString
OAIResponseTimeFilterFastResult::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterFastResult::asJsonObject() const {
    QJsonObject obj;
	if(m_search_id_isSet){
        obj.insert(QString("search_id"), ::OpenAPI::toJsonValue(search_id));
    }
	
    if(locations.size() > 0){
        obj.insert(QString("locations"), ::OpenAPI::toJsonValue(locations));
    } 
	
    if(unreachable.size() > 0){
        obj.insert(QString("unreachable"), ::OpenAPI::toJsonValue(unreachable));
    } 
    return obj;
}

QString
OAIResponseTimeFilterFastResult::getSearchId() const {
    return search_id;
}
void
OAIResponseTimeFilterFastResult::setSearchId(const QString &search_id) {
    this->search_id = search_id;
    this->m_search_id_isSet = true;
}

QList<OAIResponseTimeFilterFastLocation>
OAIResponseTimeFilterFastResult::getLocations() const {
    return locations;
}
void
OAIResponseTimeFilterFastResult::setLocations(const QList<OAIResponseTimeFilterFastLocation> &locations) {
    this->locations = locations;
    this->m_locations_isSet = true;
}

QList<QString>
OAIResponseTimeFilterFastResult::getUnreachable() const {
    return unreachable;
}
void
OAIResponseTimeFilterFastResult::setUnreachable(const QList<QString> &unreachable) {
    this->unreachable = unreachable;
    this->m_unreachable_isSet = true;
}


bool
OAIResponseTimeFilterFastResult::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_search_id_isSet){ isObjectUpdated = true; break;}
    
        if(locations.size() > 0){ isObjectUpdated = true; break;}
    
        if(unreachable.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

