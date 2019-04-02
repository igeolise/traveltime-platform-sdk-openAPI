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


#include "OAIResponseSupportedLocation.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseSupportedLocation::OAIResponseSupportedLocation(QString json) {
    init();
    this->fromJson(json);
}

OAIResponseSupportedLocation::OAIResponseSupportedLocation() {
    init();
}

OAIResponseSupportedLocation::~OAIResponseSupportedLocation() {
    this->cleanup();
}

void
OAIResponseSupportedLocation::init() {
    id = new QString("");
    m_id_isSet = false;
    map_name = new QString("");
    m_map_name_isSet = false;
}

void
OAIResponseSupportedLocation::cleanup() {
    if(id != nullptr) { 
        delete id;
    }
    if(map_name != nullptr) { 
        delete map_name;
    }
}

OAIResponseSupportedLocation*
OAIResponseSupportedLocation::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIResponseSupportedLocation::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&map_name, pJson["map_name"], "QString", "QString");
    
}

QString
OAIResponseSupportedLocation::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseSupportedLocation::asJsonObject() {
    QJsonObject obj;
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if(map_name != nullptr && *map_name != QString("")){
        toJsonValue(QString("map_name"), map_name, obj, QString("QString"));
    }

    return obj;
}

QString*
OAIResponseSupportedLocation::getId() {
    return id;
}
void
OAIResponseSupportedLocation::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
OAIResponseSupportedLocation::getMapName() {
    return map_name;
}
void
OAIResponseSupportedLocation::setMapName(QString* map_name) {
    this->map_name = map_name;
    this->m_map_name_isSet = true;
}


bool
OAIResponseSupportedLocation::isSet(){
    bool isObjectUpdated = false;
    do{
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(map_name != nullptr && *map_name != QString("")){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

