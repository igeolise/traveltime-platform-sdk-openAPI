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


#include "OAIRequestRoutes.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIRequestRoutes::OAIRequestRoutes(QString json) {
    this->init();
    this->fromJson(json);
}

OAIRequestRoutes::OAIRequestRoutes() {
    this->init();
}

OAIRequestRoutes::~OAIRequestRoutes() {

}

void
OAIRequestRoutes::init() {
    
    m_locations_isSet = false;
    m_locations_isValid = false;
    
    m_departure_searches_isSet = false;
    m_departure_searches_isValid = false;
    
    m_arrival_searches_isSet = false;
    m_arrival_searches_isValid = false;
    }

void
OAIRequestRoutes::fromJson(QString jsonString) {
    QByteArray array (jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void
OAIRequestRoutes::fromJsonObject(QJsonObject json) {
    
    
    m_locations_isValid = ::OpenAPI::fromJsonValue(locations, json[QString("locations")]);
    
    
    m_departure_searches_isValid = ::OpenAPI::fromJsonValue(departure_searches, json[QString("departure_searches")]);
    
    
    m_arrival_searches_isValid = ::OpenAPI::fromJsonValue(arrival_searches, json[QString("arrival_searches")]);
    
}

QString
OAIRequestRoutes::asJson () const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIRequestRoutes::asJsonObject() const {
    QJsonObject obj;
	
    if(locations.size() > 0){
        obj.insert(QString("locations"), ::OpenAPI::toJsonValue(locations));
    } 
	
    if(departure_searches.size() > 0){
        obj.insert(QString("departure_searches"), ::OpenAPI::toJsonValue(departure_searches));
    } 
	
    if(arrival_searches.size() > 0){
        obj.insert(QString("arrival_searches"), ::OpenAPI::toJsonValue(arrival_searches));
    } 
    return obj;
}


QList<OAIRequestLocation>
OAIRequestRoutes::getLocations() const {
    return locations;
}
void
OAIRequestRoutes::setLocations(const QList<OAIRequestLocation> &locations) {
    this->locations = locations;
    this->m_locations_isSet = true;
}


QList<OAIRequestRoutesDepartureSearch>
OAIRequestRoutes::getDepartureSearches() const {
    return departure_searches;
}
void
OAIRequestRoutes::setDepartureSearches(const QList<OAIRequestRoutesDepartureSearch> &departure_searches) {
    this->departure_searches = departure_searches;
    this->m_departure_searches_isSet = true;
}


QList<OAIRequestRoutesArrivalSearch>
OAIRequestRoutes::getArrivalSearches() const {
    return arrival_searches;
}
void
OAIRequestRoutes::setArrivalSearches(const QList<OAIRequestRoutesArrivalSearch> &arrival_searches) {
    this->arrival_searches = arrival_searches;
    this->m_arrival_searches_isSet = true;
}

bool
OAIRequestRoutes::isSet() const {
    bool isObjectUpdated = false;
    do{ 
        if(locations.size() > 0){ isObjectUpdated = true; break;}
    
        if(departure_searches.size() > 0){ isObjectUpdated = true; break;}
    
        if(arrival_searches.size() > 0){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}

bool
OAIRequestRoutes::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_locations_isValid && true;
}

}

