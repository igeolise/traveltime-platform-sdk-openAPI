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

#include "OAIResponseGeocodingGeoJsonFeature.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseGeocodingGeoJsonFeature::OAIResponseGeocodingGeoJsonFeature(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseGeocodingGeoJsonFeature::OAIResponseGeocodingGeoJsonFeature() {
    this->initializeModel();
}

OAIResponseGeocodingGeoJsonFeature::~OAIResponseGeocodingGeoJsonFeature() {}

void OAIResponseGeocodingGeoJsonFeature::initializeModel() {

    m_type_isSet = false;
    m_type_isValid = false;

    m_geometry_isSet = false;
    m_geometry_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;
}

void OAIResponseGeocodingGeoJsonFeature::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseGeocodingGeoJsonFeature::fromJsonObject(QJsonObject json) {

    m_type_isValid = ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    m_type_isSet = !json[QString("type")].isNull() && m_type_isValid;

    m_geometry_isValid = ::OpenAPI::fromJsonValue(geometry, json[QString("geometry")]);
    m_geometry_isSet = !json[QString("geometry")].isNull() && m_geometry_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;
}

QString OAIResponseGeocodingGeoJsonFeature::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseGeocodingGeoJsonFeature::asJsonObject() const {
    QJsonObject obj;
    if (m_type_isSet) {
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
    if (geometry.isSet()) {
        obj.insert(QString("geometry"), ::OpenAPI::toJsonValue(geometry));
    }
    if (properties.isSet()) {
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    return obj;
}

QString OAIResponseGeocodingGeoJsonFeature::getType() const {
    return type;
}
void OAIResponseGeocodingGeoJsonFeature::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

bool OAIResponseGeocodingGeoJsonFeature::is_type_Set() const{
    return m_type_isSet;
}

bool OAIResponseGeocodingGeoJsonFeature::is_type_Valid() const{
    return m_type_isValid;
}

OAIResponseGeocodingGeometry OAIResponseGeocodingGeoJsonFeature::getGeometry() const {
    return geometry;
}
void OAIResponseGeocodingGeoJsonFeature::setGeometry(const OAIResponseGeocodingGeometry &geometry) {
    this->geometry = geometry;
    this->m_geometry_isSet = true;
}

bool OAIResponseGeocodingGeoJsonFeature::is_geometry_Set() const{
    return m_geometry_isSet;
}

bool OAIResponseGeocodingGeoJsonFeature::is_geometry_Valid() const{
    return m_geometry_isValid;
}

OAIResponseGeocodingProperties OAIResponseGeocodingGeoJsonFeature::getProperties() const {
    return properties;
}
void OAIResponseGeocodingGeoJsonFeature::setProperties(const OAIResponseGeocodingProperties &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIResponseGeocodingGeoJsonFeature::is_properties_Set() const{
    return m_properties_isSet;
}

bool OAIResponseGeocodingGeoJsonFeature::is_properties_Valid() const{
    return m_properties_isValid;
}

bool OAIResponseGeocodingGeoJsonFeature::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_type_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (geometry.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (properties.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseGeocodingGeoJsonFeature::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_type_isValid && m_geometry_isValid && m_properties_isValid && true;
}

} // namespace OpenAPI
