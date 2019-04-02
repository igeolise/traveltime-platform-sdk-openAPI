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


#include "OAIResponseTimeFilterPostcodesResult.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseTimeFilterPostcodesResult::OAIResponseTimeFilterPostcodesResult(QString json) {
    this->fromJson(json);
}

OAIResponseTimeFilterPostcodesResult::OAIResponseTimeFilterPostcodesResult() {
    this->init();
}

OAIResponseTimeFilterPostcodesResult::~OAIResponseTimeFilterPostcodesResult() {

}

void
OAIResponseTimeFilterPostcodesResult::init() {
    m_search_id_isSet = false;
    m_postcodes_isSet = false;
}

void
OAIResponseTimeFilterPostcodesResult::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseTimeFilterPostcodesResult::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(search_id, json[QString("search_id")]);
    
    
    ::OpenAPI::fromJsonValue(postcodes, json[QString("postcodes")]);
}

QString
OAIResponseTimeFilterPostcodesResult::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseTimeFilterPostcodesResult::asJsonObject() const {
    QJsonObject obj;
	if(m_search_id_isSet){
        obj.insert(QString("search_id"), ::OpenAPI::toJsonValue(search_id));
    }
	
    if(postcodes.size() > 0){
        obj.insert(QString("postcodes"), ::OpenAPI::toJsonValue(postcodes));
    } 
    return obj;
}

QString
OAIResponseTimeFilterPostcodesResult::getSearchId() const {
    return search_id;
}
void
OAIResponseTimeFilterPostcodesResult::setSearchId(const QString &search_id) {
    this->search_id = search_id;
    this->m_search_id_isSet = true;
}

QList<OAIResponseTimeFilterPostcode>
OAIResponseTimeFilterPostcodesResult::getPostcodes() const {
    return postcodes;
}
void
OAIResponseTimeFilterPostcodesResult::setPostcodes(const QList<OAIResponseTimeFilterPostcode> &postcodes) {
    this->postcodes = postcodes;
    this->m_postcodes_isSet = true;
}


bool
OAIResponseTimeFilterPostcodesResult::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_search_id_isSet){ isObjectUpdated = true; break;}
    
        if(postcodes.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

