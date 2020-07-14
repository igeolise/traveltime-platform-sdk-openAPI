/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
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
#include <QDebug>

#include "OAIDefaultApiHandler.h"
#include "OAIDefaultApiRequest.h"

namespace OpenAPI {

OAIDefaultApiHandler::OAIDefaultApiHandler(){

}

OAIDefaultApiHandler::~OAIDefaultApiHandler(){

}

void OAIDefaultApiHandler::geocodingReverseSearch(double lat, double lng, QString within_country) {
    Q_UNUSED(lat);
    Q_UNUSED(lng);
    Q_UNUSED(within_country);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseGeocoding res;
        reqObj->geocodingReverseSearchResponse(res);
    }    
}
void OAIDefaultApiHandler::geocodingSearch(QString query, double focus_lat, double focus_lng, QString within_country) {
    Q_UNUSED(query);
    Q_UNUSED(focus_lat);
    Q_UNUSED(focus_lng);
    Q_UNUSED(within_country);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseGeocoding res;
        reqObj->geocodingSearchResponse(res);
    }    
}
void OAIDefaultApiHandler::mapInfo() {
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseMapInfo res;
        reqObj->mapInfoResponse(res);
    }    
}
void OAIDefaultApiHandler::routes(OAIRequestRoutes oai_request_routes) {
    Q_UNUSED(oai_request_routes);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseRoutes res;
        reqObj->routesResponse(res);
    }    
}
void OAIDefaultApiHandler::supportedLocations(OAIRequestSupportedLocations oai_request_supported_locations) {
    Q_UNUSED(oai_request_supported_locations);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseSupportedLocations res;
        reqObj->supportedLocationsResponse(res);
    }    
}
void OAIDefaultApiHandler::timeFilter(OAIRequestTimeFilter oai_request_time_filter) {
    Q_UNUSED(oai_request_time_filter);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseTimeFilter res;
        reqObj->timeFilterResponse(res);
    }    
}
void OAIDefaultApiHandler::timeFilterFast(OAIRequestTimeFilterFast oai_request_time_filter_fast) {
    Q_UNUSED(oai_request_time_filter_fast);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseTimeFilterFast res;
        reqObj->timeFilterFastResponse(res);
    }    
}
void OAIDefaultApiHandler::timeFilterPostcodeDistricts(OAIRequestTimeFilterPostcodeDistricts oai_request_time_filter_postcode_districts) {
    Q_UNUSED(oai_request_time_filter_postcode_districts);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseTimeFilterPostcodeDistricts res;
        reqObj->timeFilterPostcodeDistrictsResponse(res);
    }    
}
void OAIDefaultApiHandler::timeFilterPostcodeSectors(OAIRequestTimeFilterPostcodeSectors oai_request_time_filter_postcode_sectors) {
    Q_UNUSED(oai_request_time_filter_postcode_sectors);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseTimeFilterPostcodeSectors res;
        reqObj->timeFilterPostcodeSectorsResponse(res);
    }    
}
void OAIDefaultApiHandler::timeFilterPostcodes(OAIRequestTimeFilterPostcodes oai_request_time_filter_postcodes) {
    Q_UNUSED(oai_request_time_filter_postcodes);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseTimeFilterPostcodes res;
        reqObj->timeFilterPostcodesResponse(res);
    }    
}
void OAIDefaultApiHandler::timeMap(OAIRequestTimeMap oai_request_time_map) {
    Q_UNUSED(oai_request_time_map);
    auto reqObj = qobject_cast<OAIDefaultApiRequest*>(sender());
    if( reqObj != nullptr ) 
    { 
        OAIResponseTimeMap res;
        reqObj->timeMapResponse(res);
    }    
}


}
