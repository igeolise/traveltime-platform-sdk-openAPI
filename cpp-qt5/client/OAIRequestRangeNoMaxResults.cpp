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


#include "OAIRequestRangeNoMaxResults.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestRangeNoMaxResults::OAIRequestRangeNoMaxResults(QString json) {
    init();
    this->fromJson(json);
}

OAIRequestRangeNoMaxResults::OAIRequestRangeNoMaxResults() {
    init();
}

OAIRequestRangeNoMaxResults::~OAIRequestRangeNoMaxResults() {
    this->cleanup();
}

void
OAIRequestRangeNoMaxResults::init() {
    enabled = false;
    m_enabled_isSet = false;
    width = 0;
    m_width_isSet = false;
}

void
OAIRequestRangeNoMaxResults::cleanup() {


}

OAIRequestRangeNoMaxResults*
OAIRequestRangeNoMaxResults::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIRequestRangeNoMaxResults::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&enabled, pJson["enabled"], "bool", "");
    
    ::OpenAPI::setValue(&width, pJson["width"], "qint32", "");
    
}

QString
OAIRequestRangeNoMaxResults::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestRangeNoMaxResults::asJsonObject() {
    QJsonObject obj;
    if(m_enabled_isSet){
        obj.insert("enabled", QJsonValue(enabled));
    }
    if(m_width_isSet){
        obj.insert("width", QJsonValue(width));
    }

    return obj;
}

bool
OAIRequestRangeNoMaxResults::isEnabled() {
    return enabled;
}
void
OAIRequestRangeNoMaxResults::setEnabled(bool enabled) {
    this->enabled = enabled;
    this->m_enabled_isSet = true;
}

qint32
OAIRequestRangeNoMaxResults::getWidth() {
    return width;
}
void
OAIRequestRangeNoMaxResults::setWidth(qint32 width) {
    this->width = width;
    this->m_width_isSet = true;
}


bool
OAIRequestRangeNoMaxResults::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_enabled_isSet){ isObjectUpdated = true; break;}
        if(m_width_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

