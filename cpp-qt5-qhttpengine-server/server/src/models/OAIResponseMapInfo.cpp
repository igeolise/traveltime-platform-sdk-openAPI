/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIResponseMapInfo.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseMapInfo::OAIResponseMapInfo(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseMapInfo::OAIResponseMapInfo() {
    this->initializeModel();
}

OAIResponseMapInfo::~OAIResponseMapInfo() {}

void OAIResponseMapInfo::initializeModel() {

    m_maps_isSet = false;
    m_maps_isValid = false;
}

void OAIResponseMapInfo::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseMapInfo::fromJsonObject(QJsonObject json) {

    m_maps_isValid = ::OpenAPI::fromJsonValue(maps, json[QString("maps")]);
    m_maps_isSet = !json[QString("maps")].isNull() && m_maps_isValid;
}

QString OAIResponseMapInfo::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseMapInfo::asJsonObject() const {
    QJsonObject obj;
    if (maps.size() > 0) {
        obj.insert(QString("maps"), ::OpenAPI::toJsonValue(maps));
    }
    return obj;
}

QList<OAIResponseMapInfoMap> OAIResponseMapInfo::getMaps() const {
    return maps;
}
void OAIResponseMapInfo::setMaps(const QList<OAIResponseMapInfoMap> &maps) {
    this->maps = maps;
    this->m_maps_isSet = true;
}

bool OAIResponseMapInfo::is_maps_Set() const{
    return m_maps_isSet;
}

bool OAIResponseMapInfo::is_maps_Valid() const{
    return m_maps_isValid;
}

bool OAIResponseMapInfo::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (maps.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseMapInfo::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_maps_isValid && true;
}

} // namespace OpenAPI
