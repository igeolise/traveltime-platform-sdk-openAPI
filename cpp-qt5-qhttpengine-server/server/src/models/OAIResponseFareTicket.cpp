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


#include "OAIResponseFareTicket.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIResponseFareTicket::OAIResponseFareTicket(QString json) {
    this->fromJson(json);
}

OAIResponseFareTicket::OAIResponseFareTicket() {
    this->init();
}

OAIResponseFareTicket::~OAIResponseFareTicket() {

}

void
OAIResponseFareTicket::init() {
    m_type_isSet = false;
    m_price_isSet = false;
    m_currency_isSet = false;
}

void
OAIResponseFareTicket::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIResponseFareTicket::fromJsonObject(QJsonObject json) {
    ::OpenAPI::fromJsonValue(type, json[QString("type")]);
    
    ::OpenAPI::fromJsonValue(price, json[QString("price")]);
    
    ::OpenAPI::fromJsonValue(currency, json[QString("currency")]);
    
}

QString
OAIResponseFareTicket::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIResponseFareTicket::asJsonObject() const {
    QJsonObject obj;
	if(m_type_isSet){
        obj.insert(QString("type"), ::OpenAPI::toJsonValue(type));
    }
	if(m_price_isSet){
        obj.insert(QString("price"), ::OpenAPI::toJsonValue(price));
    }
	if(m_currency_isSet){
        obj.insert(QString("currency"), ::OpenAPI::toJsonValue(currency));
    }
    return obj;
}

QString
OAIResponseFareTicket::getType() const {
    return type;
}
void
OAIResponseFareTicket::setType(const QString &type) {
    this->type = type;
    this->m_type_isSet = true;
}

double
OAIResponseFareTicket::getPrice() const {
    return price;
}
void
OAIResponseFareTicket::setPrice(const double &price) {
    this->price = price;
    this->m_price_isSet = true;
}

QString
OAIResponseFareTicket::getCurrency() const {
    return currency;
}
void
OAIResponseFareTicket::setCurrency(const QString &currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}


bool
OAIResponseFareTicket::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(m_type_isSet){ isObjectUpdated = true; break;}
    
        if(m_price_isSet){ isObjectUpdated = true; break;}
    
        if(m_currency_isSet){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

}

