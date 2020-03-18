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


#include "OAIRequestLocation.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestLocation::OAIRequestLocation(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestLocation::OAIRequestLocation() {
    this->init();
}

OAIRequestLocation::~OAIRequestLocation() {

}

void
OAIRequestLocation::init() {
    
    m_id_isSet = false;
    m_id_isValid = false;
    
    m_coords_isSet = false;
    m_coords_isValid = false;
    }

void
OAIRequestLocation::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestLocation::fromJsonObject(QJsonObject json) {
    
    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    
    
    m_coords_isValid = ::OpenAPI::fromJsonValue(coords, json[QString("coords")]);
    
    
}

QString
OAIRequestLocation::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestLocation::asJsonObject() const {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if(coords.isSet()){
        obj.insert(QString("coords"), ::OpenAPI::toJsonValue(coords));
    }
    return obj;
}


QString
OAIRequestLocation::getId() const {
    return id;
}
void
OAIRequestLocation::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}


OAICoords
OAIRequestLocation::getCoords() const {
    return coords;
}
void
OAIRequestLocation::setCoords(const OAICoords &coords) {
    this->coords = coords;
    this->m_coords_isSet = true;
}

bool
OAIRequestLocation::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_id_isSet){ isObjectUpdated = true; break;}
    
        if(coords.isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestLocation::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_coords_isValid && true;
}

}

