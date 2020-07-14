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

#include "OAIRequestTimeFilterPostcodeSectorsDepartureSearch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeFilterPostcodeSectorsDepartureSearch::OAIRequestTimeFilterPostcodeSectorsDepartureSearch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRequestTimeFilterPostcodeSectorsDepartureSearch::OAIRequestTimeFilterPostcodeSectorsDepartureSearch() {
    this->initializeModel();
}

OAIRequestTimeFilterPostcodeSectorsDepartureSearch::~OAIRequestTimeFilterPostcodeSectorsDepartureSearch() {}

void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_transportation_isSet = false;
    m_transportation_isValid = false;

    m_travel_time_isSet = false;
    m_travel_time_isValid = false;

    m_departure_time_isSet = false;
    m_departure_time_isValid = false;

    m_reachable_postcodes_threshold_isSet = false;
    m_reachable_postcodes_threshold_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;

    m_range_isSet = false;
    m_range_isValid = false;
}

void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    m_transportation_isSet = !json[QString("transportation")].isNull() && m_transportation_isValid;

    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    m_travel_time_isSet = !json[QString("travel_time")].isNull() && m_travel_time_isValid;

    m_departure_time_isValid = ::OpenAPI::fromJsonValue(departure_time, json[QString("departure_time")]);
    m_departure_time_isSet = !json[QString("departure_time")].isNull() && m_departure_time_isValid;

    m_reachable_postcodes_threshold_isValid = ::OpenAPI::fromJsonValue(reachable_postcodes_threshold, json[QString("reachable_postcodes_threshold")]);
    m_reachable_postcodes_threshold_isSet = !json[QString("reachable_postcodes_threshold")].isNull() && m_reachable_postcodes_threshold_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;

    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    m_range_isSet = !json[QString("range")].isNull() && m_range_isValid;
}

QString OAIRequestTimeFilterPostcodeSectorsDepartureSearch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRequestTimeFilterPostcodeSectorsDepartureSearch::asJsonObject() const {
    QJsonObject obj;
    if (m_id_isSet) {
        obj.insert(QString("id"), ::OpenAPI::toJsonValue(id));
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
    if (m_reachable_postcodes_threshold_isSet) {
        obj.insert(QString("reachable_postcodes_threshold"), ::OpenAPI::toJsonValue(reachable_postcodes_threshold));
    }
    if (properties.size() > 0) {
        obj.insert(QString("properties"), ::OpenAPI::toJsonValue(properties));
    }
    if (range.isSet()) {
        obj.insert(QString("range"), ::OpenAPI::toJsonValue(range));
    }
    return obj;
}

QString OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getId() const {
    return id;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_id_Set() const{
    return m_id_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_id_Valid() const{
    return m_id_isValid;
}

OAIRequestTransportation OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getTransportation() const {
    return transportation;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_transportation_Set() const{
    return m_transportation_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_transportation_Valid() const{
    return m_transportation_isValid;
}

qint32 OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getTravelTime() const {
    return travel_time;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_travel_time_Set() const{
    return m_travel_time_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_travel_time_Valid() const{
    return m_travel_time_isValid;
}

QDateTime OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getDepartureTime() const {
    return departure_time;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setDepartureTime(const QDateTime &departure_time) {
    this->departure_time = departure_time;
    this->m_departure_time_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_departure_time_Set() const{
    return m_departure_time_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_departure_time_Valid() const{
    return m_departure_time_isValid;
}

double OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getReachablePostcodesThreshold() const {
    return reachable_postcodes_threshold;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setReachablePostcodesThreshold(const double &reachable_postcodes_threshold) {
    this->reachable_postcodes_threshold = reachable_postcodes_threshold;
    this->m_reachable_postcodes_threshold_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_reachable_postcodes_threshold_Set() const{
    return m_reachable_postcodes_threshold_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_reachable_postcodes_threshold_Valid() const{
    return m_reachable_postcodes_threshold_isValid;
}

QList<OAIRequestTimeFilterPostcodeSectorsProperty> OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getProperties() const {
    return properties;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setProperties(const QList<OAIRequestTimeFilterPostcodeSectorsProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_properties_Set() const{
    return m_properties_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_properties_Valid() const{
    return m_properties_isValid;
}

OAIRequestRangeFull OAIRequestTimeFilterPostcodeSectorsDepartureSearch::getRange() const {
    return range;
}
void OAIRequestTimeFilterPostcodeSectorsDepartureSearch::setRange(const OAIRequestRangeFull &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_range_Set() const{
    return m_range_isSet;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::is_range_Valid() const{
    return m_range_isValid;
}

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_id_isSet) {
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

        if (m_reachable_postcodes_threshold_isSet) {
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

bool OAIRequestTimeFilterPostcodeSectorsDepartureSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_transportation_isValid && m_travel_time_isValid && m_departure_time_isValid && m_reachable_postcodes_threshold_isValid && m_properties_isValid && true;
}

} // namespace OpenAPI
