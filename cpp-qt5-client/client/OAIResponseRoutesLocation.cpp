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


#include "OAIResponseRoutesLocation.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseRoutesLocation::OAIResponseRoutesLocation(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseRoutesLocation::OAIResponseRoutesLocation() {
    this->init();
}

OAIResponseRoutesLocation::~OAIResponseRoutesLocation() {

}

void
OAIResponseRoutesLocation::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    }

void
OAIResponseRoutesLocation::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseRoutesLocation::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
}

QString
OAIResponseRoutesLocation::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseRoutesLocation::asJsonObject() const {
    QJsonObject obj;
	if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
	
    if(properties.size() > 0){
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    } 
    return obj;
}


QString
OAIResponseRoutesLocation::getId() const {
    return id;
}
void
OAIResponseRoutesLocation::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


QList<OAIResponseRoutesProperties>
OAIResponseRoutesLocation::getProperties() const {
    return properties;
}
void
OAIResponseRoutesLocation::setProperties(const QList<OAIResponseRoutesProperties> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool
OAIResponseRoutesLocation::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(properties.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseRoutesLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_properties_isValid && true;
}

}

