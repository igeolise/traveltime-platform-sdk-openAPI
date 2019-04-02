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


#include "OAIRequestSupportedLocations.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestSupportedLocations::OAIRequestSupportedLocations(QString json) {
    init();
    this->fromJson(json);
}

OAIRequestSupportedLocations::OAIRequestSupportedLocations() {
    init();
}

OAIRequestSupportedLocations::~OAIRequestSupportedLocations() {
    this->cleanup();
}

void
OAIRequestSupportedLocations::init() {
    locations = new QList<OAIRequestLocation*>();
    m_locations_isSet = false;
}

void
OAIRequestSupportedLocations::cleanup() {
    if(locations != nullptr) { 
        auto arr = locations;
        for(auto o: *arr) { 
            delete o;
        }
        delete locations;
    }
}

OAIRequestSupportedLocations*
OAIRequestSupportedLocations::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIRequestSupportedLocations::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&locations, pJson["locations"], "QList", "OAIRequestLocation");
}

QString
OAIRequestSupportedLocations::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestSupportedLocations::asJsonObject() {
    QJsonObject obj;
    if(locations->size() > 0){
        toJsonArray((QList<void*>*)locations, obj, "locations", "OAIRequestLocation");
    }

    return obj;
}

QList<OAIRequestLocation*>*
OAIRequestSupportedLocations::getLocations() {
    return locations;
}
void
OAIRequestSupportedLocations::setLocations(QList<OAIRequestLocation*>* locations) {
    this->locations = locations;
    this->m_locations_isSet = true;
}


bool
OAIRequestSupportedLocations::isSet(){
    bool isObjectUpdated = false;
    do{
        if(locations->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

