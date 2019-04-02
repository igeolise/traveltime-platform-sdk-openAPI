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


#include "OAIRequestArrivalTimePeriod.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestArrivalTimePeriod::OAIRequestArrivalTimePeriod(QString json) {
    init();
    this->fromJson(json);
}

OAIRequestArrivalTimePeriod::OAIRequestArrivalTimePeriod() {
    init();
}

OAIRequestArrivalTimePeriod::~OAIRequestArrivalTimePeriod() {
    this->cleanup();
}

void
OAIRequestArrivalTimePeriod::init() {
}

void
OAIRequestArrivalTimePeriod::cleanup() {
}

OAIRequestArrivalTimePeriod*
OAIRequestArrivalTimePeriod::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIRequestArrivalTimePeriod::fromJsonObject(QJsonObject pJson) {
}

QString
OAIRequestArrivalTimePeriod::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestArrivalTimePeriod::asJsonObject() {
    QJsonObject obj;

    return obj;
}


bool
OAIRequestArrivalTimePeriod::isSet(){
    bool isObjectUpdated = false;
    do{
    }while(false);
    return isObjectUpdated;
}
}

