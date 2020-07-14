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

#include "OAIRequestTimeFilterPostcodeDistrictsArrivalSearch.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::OAIRequestTimeFilterPostcodeDistrictsArrivalSearch(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::OAIRequestTimeFilterPostcodeDistrictsArrivalSearch() {
    this->initializeModel();
}

OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::~OAIRequestTimeFilterPostcodeDistrictsArrivalSearch() {}

void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::initializeModel() {

    m_id_isSet = false;
    m_id_isValid = false;

    m_transportation_isSet = false;
    m_transportation_isValid = false;

    m_travel_time_isSet = false;
    m_travel_time_isValid = false;

    m_arrival_time_isSet = false;
    m_arrival_time_isValid = false;

    m_reachable_postcodes_threshold_isSet = false;
    m_reachable_postcodes_threshold_isValid = false;

    m_properties_isSet = false;
    m_properties_isValid = false;

    m_range_isSet = false;
    m_range_isValid = false;
}

void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::fromJsonObject(QJsonObject json) {

    m_id_isValid = ::OpenAPI::fromJsonValue(id, json[QString("id")]);
    m_id_isSet = !json[QString("id")].isNull() && m_id_isValid;

    m_transportation_isValid = ::OpenAPI::fromJsonValue(transportation, json[QString("transportation")]);
    m_transportation_isSet = !json[QString("transportation")].isNull() && m_transportation_isValid;

    m_travel_time_isValid = ::OpenAPI::fromJsonValue(travel_time, json[QString("travel_time")]);
    m_travel_time_isSet = !json[QString("travel_time")].isNull() && m_travel_time_isValid;

    m_arrival_time_isValid = ::OpenAPI::fromJsonValue(arrival_time, json[QString("arrival_time")]);
    m_arrival_time_isSet = !json[QString("arrival_time")].isNull() && m_arrival_time_isValid;

    m_reachable_postcodes_threshold_isValid = ::OpenAPI::fromJsonValue(reachable_postcodes_threshold, json[QString("reachable_postcodes_threshold")]);
    m_reachable_postcodes_threshold_isSet = !json[QString("reachable_postcodes_threshold")].isNull() && m_reachable_postcodes_threshold_isValid;

    m_properties_isValid = ::OpenAPI::fromJsonValue(properties, json[QString("properties")]);
    m_properties_isSet = !json[QString("properties")].isNull() && m_properties_isValid;

    m_range_isValid = ::OpenAPI::fromJsonValue(range, json[QString("range")]);
    m_range_isSet = !json[QString("range")].isNull() && m_range_isValid;
}

QString OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::asJsonObject() const {
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
    if (m_arrival_time_isSet) {
        obj.insert(QString("arrival_time"), ::OpenAPI::toJsonValue(arrival_time));
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

QString OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getId() const {
    return id;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setId(const QString &id) {
    this->id = id;
    this->m_id_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_id_Set() const{
    return m_id_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_id_Valid() const{
    return m_id_isValid;
}

OAIRequestTransportation OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getTransportation() const {
    return transportation;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setTransportation(const OAIRequestTransportation &transportation) {
    this->transportation = transportation;
    this->m_transportation_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_transportation_Set() const{
    return m_transportation_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_transportation_Valid() const{
    return m_transportation_isValid;
}

qint32 OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getTravelTime() const {
    return travel_time;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setTravelTime(const qint32 &travel_time) {
    this->travel_time = travel_time;
    this->m_travel_time_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_travel_time_Set() const{
    return m_travel_time_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_travel_time_Valid() const{
    return m_travel_time_isValid;
}

QDateTime OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getArrivalTime() const {
    return arrival_time;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setArrivalTime(const QDateTime &arrival_time) {
    this->arrival_time = arrival_time;
    this->m_arrival_time_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_arrival_time_Set() const{
    return m_arrival_time_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_arrival_time_Valid() const{
    return m_arrival_time_isValid;
}

double OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getReachablePostcodesThreshold() const {
    return reachable_postcodes_threshold;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setReachablePostcodesThreshold(const double &reachable_postcodes_threshold) {
    this->reachable_postcodes_threshold = reachable_postcodes_threshold;
    this->m_reachable_postcodes_threshold_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_reachable_postcodes_threshold_Set() const{
    return m_reachable_postcodes_threshold_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_reachable_postcodes_threshold_Valid() const{
    return m_reachable_postcodes_threshold_isValid;
}

QList<OAIRequestTimeFilterPostcodeDistrictsProperty> OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getProperties() const {
    return properties;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setProperties(const QList<OAIRequestTimeFilterPostcodeDistrictsProperty> &properties) {
    this->properties = properties;
    this->m_properties_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_properties_Set() const{
    return m_properties_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_properties_Valid() const{
    return m_properties_isValid;
}

OAIRequestRangeFull OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::getRange() const {
    return range;
}
void OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::setRange(const OAIRequestRangeFull &range) {
    this->range = range;
    this->m_range_isSet = true;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_range_Set() const{
    return m_range_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::is_range_Valid() const{
    return m_range_isValid;
}

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::isSet() const {
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

        if (m_arrival_time_isSet) {
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

bool OAIRequestTimeFilterPostcodeDistrictsArrivalSearch::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_id_isValid && m_transportation_isValid && m_travel_time_isValid && m_arrival_time_isValid && m_reachable_postcodes_threshold_isValid && m_properties_isValid && true;
}

} // namespace OpenAPI
