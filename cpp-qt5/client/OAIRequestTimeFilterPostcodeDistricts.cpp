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


#include "OAIRequestTimeFilterPostcodeDistricts.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestTimeFilterPostcodeDistricts::OAIRequestTimeFilterPostcodeDistricts(QString json) {
    init();
    this->fromJson(json);
}

OAIRequestTimeFilterPostcodeDistricts::OAIRequestTimeFilterPostcodeDistricts() {
    init();
}

OAIRequestTimeFilterPostcodeDistricts::~OAIRequestTimeFilterPostcodeDistricts() {
    this->cleanup();
}

void
OAIRequestTimeFilterPostcodeDistricts::init() {
    departure_searches = new QList<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch*>();
    m_departure_searches_isSet = false;
    arrival_searches = new QList<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch*>();
    m_arrival_searches_isSet = false;
}

void
OAIRequestTimeFilterPostcodeDistricts::cleanup() {
    if(departure_searches != nullptr) { 
        auto arr = departure_searches;
        for(auto o: *arr) { 
            delete o;
        }
        delete departure_searches;
    }
    if(arrival_searches != nullptr) { 
        auto arr = arrival_searches;
        for(auto o: *arr) { 
            delete o;
        }
        delete arrival_searches;
    }
}

OAIRequestTimeFilterPostcodeDistricts*
OAIRequestTimeFilterPostcodeDistricts::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIRequestTimeFilterPostcodeDistricts::fromJsonObject(QJsonObject pJson) {
    
    ::OpenAPI::setValue(&departure_searches, pJson["departure_searches"], "QList", "OAIRequestTimeFilterPostcodeDistrictsDepartureSearch");
    
    ::OpenAPI::setValue(&arrival_searches, pJson["arrival_searches"], "QList", "OAIRequestTimeFilterPostcodeDistrictsArrivalSearch");
}

QString
OAIRequestTimeFilterPostcodeDistricts::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestTimeFilterPostcodeDistricts::asJsonObject() {
    QJsonObject obj;
    if(departure_searches->size() > 0){
        toJsonArray((QList<void*>*)departure_searches, obj, "departure_searches", "OAIRequestTimeFilterPostcodeDistrictsDepartureSearch");
    }
    if(arrival_searches->size() > 0){
        toJsonArray((QList<void*>*)arrival_searches, obj, "arrival_searches", "OAIRequestTimeFilterPostcodeDistrictsArrivalSearch");
    }

    return obj;
}

QList<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch*>*
OAIRequestTimeFilterPostcodeDistricts::getDepartureSearches() {
    return departure_searches;
}
void
OAIRequestTimeFilterPostcodeDistricts::setDepartureSearches(QList<OAIRequestTimeFilterPostcodeDistrictsDepartureSearch*>* departure_searches) {
    this->departure_searches = departure_searches;
    this->m_departure_searches_isSet = true;
}

QList<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch*>*
OAIRequestTimeFilterPostcodeDistricts::getArrivalSearches() {
    return arrival_searches;
}
void
OAIRequestTimeFilterPostcodeDistricts::setArrivalSearches(QList<OAIRequestTimeFilterPostcodeDistrictsArrivalSearch*>* arrival_searches) {
    this->arrival_searches = arrival_searches;
    this->m_arrival_searches_isSet = true;
}


bool
OAIRequestTimeFilterPostcodeDistricts::isSet(){
    bool isObjectUpdated = false;
    do{
        if(departure_searches->size() > 0){ isObjectUpdated = true; break;}
        if(arrival_searches->size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

