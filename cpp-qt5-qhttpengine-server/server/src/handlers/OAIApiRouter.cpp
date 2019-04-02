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

#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QVariantMap>


#include "OAIApiRouter.h"
#include "OAIDefaultApiRequest.h"


namespace OpenAPI {

OAIApiRouter::OAIApiRouter() {
    createApiHandlers();
}

OAIApiRouter::~OAIApiRouter(){
    
    delete OAIDefaultApiApiHandler;
}

void OAIApiRouter::createApiHandlers() { 
    OAIDefaultApiApiHandler = new OAIDefaultApiHandler();
}

void OAIApiRouter::setUpRoutes() {
    
    Routes.insert(QString("%1 %2").arg("GET").arg("/v4/geocoding/reverse").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->geocodingReverseSearchRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v4/geocoding/search").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->geocodingSearchRequest();
    });
    Routes.insert(QString("%1 %2").arg("GET").arg("/v4/map-info").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->mapInfoRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/routes").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->routesRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/supported-locations").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->supportedLocationsRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/time-filter").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->timeFilterRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/time-filter/fast").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->timeFilterFastRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/time-filter/postcode-districts").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->timeFilterPostcodeDistrictsRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/time-filter/postcode-sectors").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->timeFilterPostcodeSectorsRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/time-filter/postcodes").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->timeFilterPostcodesRequest();
    });
    Routes.insert(QString("%1 %2").arg("POST").arg("/v4/time-map").toLower(), [this](QHttpEngine::Socket *socket) {
            auto reqObj = new OAIDefaultApiRequest(socket, OAIDefaultApiApiHandler);
            reqObj->timeMapRequest();
    });
}

void OAIApiRouter::processRequest(QHttpEngine::Socket *socket){
    if( handleRequest(socket) ){
        return;
    }
    if( handleRequestAndExtractPathParam(socket) ){
        return;
    }
    socket->setStatusCode(QHttpEngine::Socket::NotFound);
    if(socket->isOpen()){
        socket->writeHeaders();
        socket->close();
    }
}

bool OAIApiRouter::handleRequest(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    if ( Routes.contains(reqPath) ) {
        Routes.value(reqPath).operator()(socket);
        return true;
    }
    return false;
}

bool OAIApiRouter::handleRequestAndExtractPathParam(QHttpEngine::Socket *socket){
    auto reqPath = QString("%1 %2").arg(fromQHttpEngineMethod(socket->method())).arg(socket->path()).toLower();
    return false;
}

}
