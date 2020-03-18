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


#include "OAIResponseTimeFilterPostcodeSector.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeFilterPostcodeSector::OAIResponseTimeFilterPostcodeSector(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodeSector::OAIResponseTimeFilterPostcodeSector() {
    this->init();
}

OAIResponseTimeFilterPostcodeSector::~OAIResponseTimeFilterPostcodeSector() {

}

void
OAIResponseTimeFilterPostcodeSector::init() {
    
    m_code_isSet = false;
    m_code_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    }

void
OAIResponseTimeFilterPostcodeSector::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodeSector::fromJsonObject(QJsonObject json) {
    
    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
    
}

QString
OAIResponseTimeFilterPostcodeSector::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodeSector::asJsonObject() const {
    QJsonObject obj;
    if(code.isSet()){
        obj.insert(QString("code"), ::OpenAPI::toJsonValue(code));
    }
    if(properties.isSet()){
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    return obj;
}


String
OAIResponseTimeFilterPostcodeSector::getCode() const {
    return code;
}
void
OAIResponseTimeFilterPostcodeSector::setCode(const String &code) {
    this->code = code;
    this->m_code_isSet = true;
}


OAIResponseTimeFilterPostcodeSectorProperties
OAIResponseTimeFilterPostcodeSector::getProperties() const {
    return properties;
}
void
OAIResponseTimeFilterPostcodeSector::setProperties(const OAIResponseTimeFilterPostcodeSectorProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool
OAIResponseTimeFilterPostcodeSector::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(code.isSet()){ isObjectUpdated = true; break;}
    
        if(properties.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeFilterPostcodeSector::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_properties_isValid && true;
}

}

