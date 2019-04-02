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


#include "OAIRequestRoutesProperty.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestRoutesProperty::OAIRequestRoutesProperty(QString json) {
    this->fromJson(json);
}

OAIRequestRoutesProperty::OAIRequestRoutesProperty() {
    this->init();
}

OAIRequestRoutesProperty::~OAIRequestRoutesProperty() {

}

void
OAIRequestRoutesProperty::init() {
}

void
OAIRequestRoutesProperty::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestRoutesProperty::fromJsonObject(QJsonObject json) {
}

QString
OAIRequestRoutesProperty::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestRoutesProperty::asJsonObject() const {
    QJsonObject obj;
    return obj;
}


bool
OAIRequestRoutesProperty::isSet() const {
    bool isObjectUpdated = false;
    do{ }while(false);
    return isObjectUpdated;
}

}

