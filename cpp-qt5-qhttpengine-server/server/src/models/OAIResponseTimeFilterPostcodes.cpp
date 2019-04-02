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


#include "OAIResponseTimeFilterPostcodes.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeFilterPostcodes::OAIResponseTimeFilterPostcodes(QString json) {
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodes::OAIResponseTimeFilterPostcodes() {
    this->init();
}

OAIResponseTimeFilterPostcodes::~OAIResponseTimeFilterPostcodes() {

}

void
OAIResponseTimeFilterPostcodes::init() {
    m_results_isSet = false;
}

void
OAIResponseTimeFilterPostcodes::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodes::fromJsonObject(QJsonObject json) {
    
    ::OpenAPI::fromJsonValue(results, json[QString("results")]);
}

QString
OAIResponseTimeFilterPostcodes::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodes::asJsonObject() const {
    QJsonObject obj;
	
    if(results.size() > 0){
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    } 
    return obj;
}

QList<OAIResponseTimeFilterPostcodesResult>
OAIResponseTimeFilterPostcodes::getResults() const {
    return results;
}
void
OAIResponseTimeFilterPostcodes::setResults(const QList<OAIResponseTimeFilterPostcodesResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}


bool
OAIResponseTimeFilterPostcodes::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(results.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

