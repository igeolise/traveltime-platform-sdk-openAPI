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

#include "OAIRequestTimeMapDepartureSearch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeMapDepartureSearch::OAIRequestTimeMapDepartureSearch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRequestTimeMapDepartureSearch::OAIRequestTimeMapDepartureSearch() {
    this->initializeModel();
}

OAIRequestTimeMapDepartureSearch::~OAIRequestTimeMapDepartureSearch() {}

void OAIRequestTimeMapDepartureSearch::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_coords_isSet = false;
    m_coords_isValid = false;

    m_transportation_isSet = false;
    m_transportation_isValid = false;

    m_travel_time_isSet = false;
    m_travel_time_isValid = false;

    m_departure_time_isSet = false;
    m_departure_time_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;

    m_range_isSet = false;
    m_range_isValid = false;
}

void OAIRequestTimeMapDepartureSearch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRequestTimeMapDepartureSearch::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_coords_isValid = ::OpenAPI::fromJsonValue(coords, json[QString("coords")]);
    m_coords_isSet = !json[QString("coords")].isNull() && m_coords_isValid;

    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    m_transportation_isSet = !json[QString("transportation")].isNull() && m_transportation_isValid;

    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    m_travel_time_isSet = !json[QString("travel_time")].isNull() && m_travel_time_isValid;

    m_departure_time_isValid = ::OpenAPI::fromJsonValue(departure_time, json[QString("departure_time")]);
    m_departure_time_isSet = !json[QString("departure_time")].isNull() && m_departure_time_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;

    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    m_range_isSet = !json[QString("range")].isNull() && m_range_isValid;
}

QString OAIRequestTimeMapDepartureSearch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRequestTimeMapDepartureSearch::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (coords.isSet()) {
        obj.insert(QString("coords"), ::OpenAPI::toJsonValue(coords));
    }
    if (transportation.isSet()) {
        obj.insert(QString("transportation"), ::OpenAPI::toJsonValue(transportation));
    }
    if (m_travel_time_isSet) {
        obj.insert(QString("travel_time"), ::OpenAPI::toJsonValue(travel_time));
    }
    if (m_departure_time_isSet) {
        obj.insert(QString("departure_time"), ::OpenAPI::toJsonValue(departure_time));
    }
    if (properties.size() > 0) {
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    if (range.isSet()) {
        obj.insert(QString("range"), ::OpenAPI::toJsonValue(range));
    }
    return obj;
}

QString OAIRequestTimeMapDepartureSearch::getId() const {
    return id;
}
void OAIRequestTimeMapDepartureSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_id_Set() const{
    return m_id_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_id_Valid() const{
    return m_id_isValid;
}

OAICoords OAIRequestTimeMapDepartureSearch::getCoords() const {
    return coords;
}
void OAIRequestTimeMapDepartureSearch::setCoords(const OAICoords &coords) {
    this->coords = coords;
    this->m_coords_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_coords_Set() const{
    return m_coords_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_coords_Valid() const{
    return m_coords_isValid;
}

OAIRequestTransportation OAIRequestTimeMapDepartureSearch::getTransportation() const {
    return transportation;
}
void OAIRequestTimeMapDepartureSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_transportation_Set() const{
    return m_transportation_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_transportation_Valid() const{
    return m_transportation_isValid;
}

qint32 OAIRequestTimeMapDepartureSearch::getTravelTime() const {
    return travel_time;
}
void OAIRequestTimeMapDepartureSearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_travel_time_Set() const{
    return m_travel_time_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_travel_time_Valid() const{
    return m_travel_time_isValid;
}

QDateTime OAIRequestTimeMapDepartureSearch::getDepartureTime() const {
    return departure_time;
}
void OAIRequestTimeMapDepartureSearch::setDepartureTime(const QDateTime &departure_time) {
    this->departure_time = departure_time;
    this->m_departure_time_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_departure_time_Set() const{
    return m_departure_time_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_departure_time_Valid() const{
    return m_departure_time_isValid;
}

QList<OAIRequestTimeMapProperty> OAIRequestTimeMapDepartureSearch::getProperties() const {
    return properties;
}
void OAIRequestTimeMapDepartureSearch::setProperties(const QList<OAIRequestTimeMapProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_properties_Set() const{
    return m_properties_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_properties_Valid() const{
    return m_properties_isValid;
}

OAIRequestRangeNoMaxResults OAIRequestTimeMapDepartureSearch::getRange() const {
    return range;
}
void OAIRequestTimeMapDepartureSearch::setRange(const OAIRequestRangeNoMaxResults &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool OAIRequestTimeMapDepartureSearch::is_range_Set() const{
    return m_range_isSet;
}

bool OAIRequestTimeMapDepartureSearch::is_range_Valid() const{
    return m_range_isValid;
}

bool OAIRequestTimeMapDepartureSearch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (coords.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (transportation.isSet()) {
            isObjectUpdated = true;
            break;
        }

        if (m_travel_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_departure_time_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (properties.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (range.isSet()) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIRequestTimeMapDepartureSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_coords_isValid && m_transportation_isValid && m_travel_time_isValid && m_departure_time_isValid && true;
}

} // namespace OpenAPI
