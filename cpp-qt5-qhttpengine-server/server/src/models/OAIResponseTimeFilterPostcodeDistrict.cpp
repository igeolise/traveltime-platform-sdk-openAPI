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


#include "OAIResponseTimeFilterPostcodeDistrict.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeFilterPostcodeDistrict::OAIResponseTimeFilterPostcodeDistrict(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodeDistrict::OAIResponseTimeFilterPostcodeDistrict() {
    this->init();
}

OAIResponseTimeFilterPostcodeDistrict::~OAIResponseTimeFilterPostcodeDistrict() {

}

void
OAIResponseTimeFilterPostcodeDistrict::init() {
    
    m_code_isSet = false;
    m_code_isValid = false;
    
    m_properties_isSet = false;
    m_properties_isValid = false;
    }

void
OAIResponseTimeFilterPostcodeDistrict::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodeDistrict::fromJsonObject(QJsonObject json) {
    
    m_code_isValid = ::OpenAPI::fromJsonValue(code, json[QString("code")]);
    
    
    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    
    
}

QString
OAIResponseTimeFilterPostcodeDistrict::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodeDistrict::asJsonObject() const {
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
OAIResponseTimeFilterPostcodeDistrict::getCode() const {
    return code;
}
void
OAIResponseTimeFilterPostcodeDistrict::setCode(const String &code) {
    this->code = code;
    this->m_code_isSet = true;
}


OAIResponseTimeFilterPostcodeDistrictProperties
OAIResponseTimeFilterPostcodeDistrict::getProperties() const {
    return properties;
}
void
OAIResponseTimeFilterPostcodeDistrict::setProperties(const OAIResponseTimeFilterPostcodeDistrictProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool
OAIResponseTimeFilterPostcodeDistrict::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(code.isSet()){ isObjectUpdated = true; break;}
    
        if(properties.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeFilterPostcodeDistrict::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_code_isValid && m_properties_isValid && true;
}

}

