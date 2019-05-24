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


#include "OAIResponseMapInfoMap.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseMapInfoMap::OAIResponseMapInfoMap(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseMapInfoMap::OAIResponseMapInfoMap() {
    this->init();
}

OAIResponseMapInfoMap::~OAIResponseMapInfoMap() {

}

void
OAIResponseMapInfoMap::init() {
    
    m_name_isSet = false;
    m_name_isValid = false;
    
    m_features_isSet = false;
    m_features_isValid = false;
    }

void
OAIResponseMapInfoMap::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseMapInfoMap::fromJsonObject(QJsonObject json) {
    
    m_name_isValid = ::OpenAPI::fromJsonValue(name, json[QString("name")]);
    
    
    m_features_isValid = ::OpenAPI::fromJsonValue(features, json[QString("features")]);
    
    
}

QString
OAIResponseMapInfoMap::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseMapInfoMap::asJsonObject() const {
    QJsonObject obj;
	if(m_name_isSet){
        obj.insert(QString("name"), ::OpenAPI::toJsonValue(name));
    }
	if(features.isSet()){
        obj.insert(QString("features"), ::OpenAPI::toJsonValue(features));
    }
    return obj;
}


QString
OAIResponseMapInfoMap::getName() const {
    return name;
}
void
OAIResponseMapInfoMap::setName(const QString &name) {
    this->name = name;
    this->m_name_isSet = true;
}


OAIResponseMapInfoFeatures
OAIResponseMapInfoMap::getFeatures() const {
    return features;
}
void
OAIResponseMapInfoMap::setFeatures(const OAIResponseMapInfoFeatures &features) {
    this->features = features;
    this->m_features_isSet = true;
}

bool
OAIResponseMapInfoMap::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_name_isSet){ isObjectUpdated = true; break;}
    
        if(features.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseMapInfoMap::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_name_isValid && m_features_isValid && true;
}

}

