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

#include "OAIRequestRoutesDepartureSearch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestRoutesDepartureSearch::OAIRequestRoutesDepartureSearch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRequestRoutesDepartureSearch::OAIRequestRoutesDepartureSearch() {
    this->initializeModel();
}

OAIRequestRoutesDepartureSearch::~OAIRequestRoutesDepartureSearch() {}

void OAIRequestRoutesDepartureSearch::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_departure_location_id_isSet = false;
    m_departure_location_id_isValid = false;

    m_arrival_location_ids_isSet = false;
    m_arrival_location_ids_isValid = false;

    m_transportation_isSet = false;
    m_transportation_isValid = false;

    m_departure_time_isSet = false;
    m_departure_time_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;

    m_range_isSet = false;
    m_range_isValid = false;
}

void OAIRequestRoutesDepartureSearch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRequestRoutesDepartureSearch::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_departure_location_id_isValid = ::OpenAPI::fromJsonValue(departure_location_id, json[QString("departure_location_id")]);
    m_departure_location_id_isSet = !json[QString("departure_location_id")].isNull() && m_departure_location_id_isValid;

    m_arrival_location_ids_isValid = ::OpenAPI::fromJsonValue(arrival_location_ids, json[QString("arrival_location_ids")]);
    m_arrival_location_ids_isSet = !json[QString("arrival_location_ids")].isNull() && m_arrival_location_ids_isValid;

    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    m_transportation_isSet = !json[QString("transportation")].isNull() && m_transportation_isValid;

    m_departure_time_isValid = ::OpenAPI::fromJsonValue(departure_time, json[QString("departure_time")]);
    m_departure_time_isSet = !json[QString("departure_time")].isNull() && m_departure_time_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;

    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    m_range_isSet = !json[QString("range")].isNull() && m_range_isValid;
}

QString OAIRequestRoutesDepartureSearch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRequestRoutesDepartureSearch::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
    }
    if (m_departure_location_id_isSet) {
        obj.insert(QString("departure_location_id"), ::OpenAPI::toJsonValue(departure_location_id));
    }
    if (arrival_location_ids.size() > 0) {
        obj.insert(QString("arrival_location_ids"), ::OpenAPI::toJsonValue(arrival_location_ids));
    }
    if (transportation.isSet()) {
        obj.insert(QString("transportation"), ::OpenAPI::toJsonValue(transportation));
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

QString OAIRequestRoutesDepartureSearch::getId() const {
    return id;
}
void OAIRequestRoutesDepartureSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_id_Set() const{
    return m_id_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_id_Valid() const{
    return m_id_isValid;
}

QString OAIRequestRoutesDepartureSearch::getDepartureLocationId() const {
    return departure_location_id;
}
void OAIRequestRoutesDepartureSearch::setDepartureLocationId(const QString &departure_location_id) {
    this->departure_location_id = departure_location_id;
    this->m_departure_location_id_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_departure_location_id_Set() const{
    return m_departure_location_id_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_departure_location_id_Valid() const{
    return m_departure_location_id_isValid;
}

QList<QString> OAIRequestRoutesDepartureSearch::getArrivalLocationIds() const {
    return arrival_location_ids;
}
void OAIRequestRoutesDepartureSearch::setArrivalLocationIds(const QList<QString> &arrival_location_ids) {
    this->arrival_location_ids = arrival_location_ids;
    this->m_arrival_location_ids_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_arrival_location_ids_Set() const{
    return m_arrival_location_ids_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_arrival_location_ids_Valid() const{
    return m_arrival_location_ids_isValid;
}

OAIRequestTransportation OAIRequestRoutesDepartureSearch::getTransportation() const {
    return transportation;
}
void OAIRequestRoutesDepartureSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_transportation_Set() const{
    return m_transportation_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_transportation_Valid() const{
    return m_transportation_isValid;
}

QDateTime OAIRequestRoutesDepartureSearch::getDepartureTime() const {
    return departure_time;
}
void OAIRequestRoutesDepartureSearch::setDepartureTime(const QDateTime &departure_time) {
    this->departure_time = departure_time;
    this->m_departure_time_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_departure_time_Set() const{
    return m_departure_time_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_departure_time_Valid() const{
    return m_departure_time_isValid;
}

QList<OAIRequestRoutesProperty> OAIRequestRoutesDepartureSearch::getProperties() const {
    return properties;
}
void OAIRequestRoutesDepartureSearch::setProperties(const QList<OAIRequestRoutesProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_properties_Set() const{
    return m_properties_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_properties_Valid() const{
    return m_properties_isValid;
}

OAIRequestRangeFull OAIRequestRoutesDepartureSearch::getRange() const {
    return range;
}
void OAIRequestRoutesDepartureSearch::setRange(const OAIRequestRangeFull &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool OAIRequestRoutesDepartureSearch::is_range_Set() const{
    return m_range_isSet;
}

bool OAIRequestRoutesDepartureSearch::is_range_Valid() const{
    return m_range_isValid;
}

bool OAIRequestRoutesDepartureSearch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_departure_location_id_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (arrival_location_ids.size() > 0) {
            isObjectUpdated = true;
            break;
        }

        if (transportation.isSet()) {
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

bool OAIRequestRoutesDepartureSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_departure_location_id_isValid && m_arrival_location_ids_isValid && m_transportation_isValid && m_departure_time_isValid && m_properties_isValid && true;
}

} // namespace OpenAPI
