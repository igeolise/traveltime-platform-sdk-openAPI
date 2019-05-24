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


#include "OAIResponseTimeFilterFast.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeFilterFast::OAIResponseTimeFilterFast(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseTimeFilterFast::OAIResponseTimeFilterFast() {
    this->init();
}

OAIResponseTimeFilterFast::~OAIResponseTimeFilterFast() {

}

void
OAIResponseTimeFilterFast::init() {
    
    m_results_isSet = false;
    m_results_isValid = false;
    }

void
OAIResponseTimeFilterFast::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterFast::fromJsonObject(QJsonObject json) {
    
    
    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    
}

QString
OAIResponseTimeFilterFast::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterFast::asJsonObject() const {
    QJsonObject obj;
	
    if(results.size() > 0){
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    } 
    return obj;
}


QList<OAIResponseTimeFilterFastResult>
OAIResponseTimeFilterFast::getResults() const {
    return results;
}
void
OAIResponseTimeFilterFast::setResults(const QList<OAIResponseTimeFilterFastResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool
OAIResponseTimeFilterFast::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(results.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseTimeFilterFast::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_results_isValid && true;
}

}

