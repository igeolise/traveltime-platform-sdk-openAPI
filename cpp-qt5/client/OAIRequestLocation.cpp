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


#include "OAIRequestLocation.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestLocation::OAIRequestLocation(QString json) {
    init();
    this->fromJson(json);
}

OAIRequestLocation::OAIRequestLocation() {
    init();
}

OAIRequestLocation::~OAIRequestLocation() {
    this->cleanup();
}

void
OAIRequestLocation::init() {
    id = new QString("");
    m_id_isSet = false;
    coords = new OAICoords();
    m_coords_isSet = false;
}

void
OAIRequestLocation::cleanup() {
    if(id != nullptr) { 
        delete id;
    }
    if(coords != nullptr) { 
        delete coords;
    }
}

OAIRequestLocation*
OAIRequestLocation::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIRequestLocation::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&id, pJson["id"], "QString", "QString");
    
    ::OpenAPI::setValue(&coords, pJson["coords"], "OAICoords", "OAICoords");
    
}

QString
OAIRequestLocation::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestLocation::asJsonObject() {
    QJsonObject obj;
    if(id != nullptr && *id != QString("")){
        toJsonValue(QString("id"), id, obj, QString("QString"));
    }
    if((coords != nullptr) && (coords->isSet())){
        toJsonValue(QString("coords"), coords, obj, QString("OAICoords"));
    }

    return obj;
}

QString*
OAIRequestLocation::getId() {
    return id;
}
void
OAIRequestLocation::setId(QString* id) {
    this->id = id;
    this->m_id_isSet = true;
}

OAICoords*
OAIRequestLocation::getCoords() {
    return coords;
}
void
OAIRequestLocation::setCoords(OAICoords* coords) {
    this->coords = coords;
    this->m_coords_isSet = true;
}


bool
OAIRequestLocation::isSet(){
    bool isObjectUpdated = false;
    do{
        if(id != nullptr && *id != QString("")){ isObjectUpdated = true; break;}
        if(coords != nullptr && coords->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

