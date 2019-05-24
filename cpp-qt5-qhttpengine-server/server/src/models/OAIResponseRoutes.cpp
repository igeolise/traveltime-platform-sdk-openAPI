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


#include "OAIResponseRoutes.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseRoutes::OAIResponseRoutes(QString json) {
    this->init();
    this->fromJson(json);
}

OAIResponseRoutes::OAIResponseRoutes() {
    this->init();
}

OAIResponseRoutes::~OAIResponseRoutes() {

}

void
OAIResponseRoutes::init() {
    
    m_results_isSet = false;
    m_results_isValid = false;
    }

void
OAIResponseRoutes::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseRoutes::fromJsonObject(QJsonObject json) {
    
    
    m_results_isValid = ::OpenAPI::fromJsonValue(results, json[QString("results")]);
    
}

QString
OAIResponseRoutes::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseRoutes::asJsonObject() const {
    QJsonObject obj;
	
    if(results.size() > 0){
        obj.insert(QString("results"), ::OpenAPI::toJsonValue(results));
    } 
    return obj;
}


QList<OAIResponseRoutesResult>
OAIResponseRoutes::getResults() const {
    return results;
}
void
OAIResponseRoutes::setResults(const QList<OAIResponseRoutesResult> &results) {
    this->results = results;
    this->m_results_isSet = true;
}

bool
OAIResponseRoutes::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(results.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIResponseRoutes::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_results_isValid && true;
}

}

