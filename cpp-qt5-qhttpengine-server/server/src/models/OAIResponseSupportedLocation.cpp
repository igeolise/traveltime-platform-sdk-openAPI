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


#include "OAIResponseSupportedLocation.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseSupportedLocation::OAIResponseSupportedLocation(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseSupportedLocation::OAIResponseSupportedLocation() {
    this->init();
}

OAIResponseSupportedLocation::~OAIResponseSupportedLocation() {

}

void
OAIResponseSupportedLocation::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_map_name_isSet = false;
    m_map_name_isValid = false;
    }

void
OAIResponseSupportedLocation::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseSupportedLocation::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_map_name_isValid = ::OpenAPI::fromJsonValue(map_name, json[QString("map_name")]);
    
    
}

QString
OAIResponseSupportedLocation::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseSupportedLocation::asJsonObject() const {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if(m_map_name_isSet){
        obj.insert(QString("map_name"), ::OpenAPI::toJsonValue(map_name));
    }
    return obj;
}


QString
OAIResponseSupportedLocation::getId() const {
    return id;
}
void
OAIResponseSupportedLocation::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QString
OAIResponseSupportedLocation::getMapName() const {
    return map_name;
}
void
OAIResponseSupportedLocation::setMapName(const QString &map_name) {
    this->map_name = map_name;
    this->m_map_name_isSet = true;
}

bool
OAIResponseSupportedLocation::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(m_map_name_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseSupportedLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_map_name_isValid && true;
}

}

