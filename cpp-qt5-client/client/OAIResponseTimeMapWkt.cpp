/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#include "OAIResponseTimeMapWkt.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace OpenAPI {

OAIResponseTimeMapWkt::OAIResponseTimeMapWkt(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIResponseTimeMapWkt::OAIResponseTimeMapWkt() {
    this->initializeModel();
}

OAIResponseTimeMapWkt::~OAIResponseTimeMapWkt() {}

void OAIResponseTimeMapWkt::initializeModel() {

    m_results_isSet = false;
    m_results_isValid = false;
}

void OAIResponseTimeMapWkt::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIResponseTimeMapWkt::fromJsonObject(QJsonObject json) {

    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    m_results_isSet = !json[QString("results")].isNull() && m_results_isValid;
}

QString OAIResponseTimeMapWkt::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIResponseTimeMapWkt::asJsonObject() const {
    QJsonObject obj;
    if (results.size() > 0) {
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    }
    return obj;
}

QList<OAIResponseTimeMapWktResult> OAIResponseTimeMapWkt::getResults() const {
    return results;
}
void OAIResponseTimeMapWkt::setResults(const QList<OAIResponseTimeMapWktResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool OAIResponseTimeMapWkt::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (results.size() > 0) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIResponseTimeMapWkt::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_results_isValid && true;
}

} // namespace OpenAPI
