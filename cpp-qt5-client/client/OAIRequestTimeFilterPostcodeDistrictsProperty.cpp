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

#include "OAIRequestTimeFilterPostcodeDistrictsProperty.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIRequestTimeFilterPostcodeDistrictsProperty::OAIRequestTimeFilterPostcodeDistrictsProperty(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIRequestTimeFilterPostcodeDistrictsProperty::OAIRequestTimeFilterPostcodeDistrictsProperty() {
    this->initializeModel();
}

OAIRequestTimeFilterPostcodeDistrictsProperty::~OAIRequestTimeFilterPostcodeDistrictsProperty() {}

void OAIRequestTimeFilterPostcodeDistrictsProperty::initializeModel() {

    m_value_isSet = false;
    m_value_isValid = false;
    m_value = eOAIRequestTimeFilterPostcodeDistrictsProperty::INVALID_VALUE_OPENAPI_GENERATED;
}

void OAIRequestTimeFilterPostcodeDistrictsProperty::fromJson(QString jsonString) {
    
    if ( jsonString.compare("travel_time_reachable", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterPostcodeDistrictsProperty::TRAVEL_TIME_REACHABLE;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("travel_time_all", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterPostcodeDistrictsProperty::TRAVEL_TIME_ALL;
        m_value_isSet = m_value_isValid = true;
    }
    else if ( jsonString.compare("coverage", Qt::CaseInsensitive) == 0) {
        m_value = eOAIRequestTimeFilterPostcodeDistrictsProperty::COVERAGE;
        m_value_isSet = m_value_isValid = true;
    }
}

void OAIRequestTimeFilterPostcodeDistrictsProperty::fromJsonValue(QJsonValue json) {
fromJson(json.toString());
}

QString OAIRequestTimeFilterPostcodeDistrictsProperty::asJson() const {
    
    QString val;
    switch (m_value){
        case eOAIRequestTimeFilterPostcodeDistrictsProperty::TRAVEL_TIME_REACHABLE:
            val = "travel_time_reachable";
            break;
        case eOAIRequestTimeFilterPostcodeDistrictsProperty::TRAVEL_TIME_ALL:
            val = "travel_time_all";
            break;
        case eOAIRequestTimeFilterPostcodeDistrictsProperty::COVERAGE:
            val = "coverage";
            break;
        default:
            break;
    }
    return val;
}

QJsonValue OAIRequestTimeFilterPostcodeDistrictsProperty::asJsonValue() const {
    
    return QJsonValue(asJson());
}


OAIRequestTimeFilterPostcodeDistrictsProperty::eOAIRequestTimeFilterPostcodeDistrictsProperty OAIRequestTimeFilterPostcodeDistrictsProperty::getValue() const {
    return m_value;
}

void OAIRequestTimeFilterPostcodeDistrictsProperty::setValue(const OAIRequestTimeFilterPostcodeDistrictsProperty::eOAIRequestTimeFilterPostcodeDistrictsProperty& value){
    m_value = value;
    m_value_isSet = true;
}
bool OAIRequestTimeFilterPostcodeDistrictsProperty::isSet() const {
    
    return m_value_isSet;
}

bool OAIRequestTimeFilterPostcodeDistrictsProperty::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_value_isValid;
}

} // namespace OpenAPI
