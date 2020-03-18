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
/*
 * DefaultApi.h
 *
 * 
 */

#ifndef DefaultApi_H_
#define DefaultApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "RequestRoutes.h"
#include "RequestSupportedLocations.h"
#include "RequestTimeFilter.h"
#include "RequestTimeFilterFast.h"
#include "RequestTimeFilterPostcodeDistricts.h"
#include "RequestTimeFilterPostcodeSectors.h"
#include "RequestTimeFilterPostcodes.h"
#include "RequestTimeMap.h"
#include "ResponseError.h"
#include "ResponseGeocoding.h"
#include "ResponseMapInfo.h"
#include "ResponseRoutes.h"
#include "ResponseSupportedLocations.h"
#include "ResponseTimeFilter.h"
#include "ResponseTimeFilterFast.h"
#include "ResponseTimeFilterPostcodeDistricts.h"
#include "ResponseTimeFilterPostcodeSectors.h"
#include "ResponseTimeFilterPostcodes.h"
#include "ResponseTimeMap.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  DefaultApi {
public:
    DefaultApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~DefaultApi() {}
    void init();

    const std::string base = "";

private:
    void setupRoutes();

    void geocoding_reverse_search_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void geocoding_search_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void map_info_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void routes_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void supported_locations_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void time_filter_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void time_filter_fast_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void time_filter_postcode_districts_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void time_filter_postcode_sectors_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void time_filter_postcodes_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void time_map_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void default_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="lat"></param>
    /// <param name="lng"></param>
    /// <param name="withinPeriodcountry"> (optional, default to &quot;&quot;)</param>
    virtual void geocoding_reverse_search(const Pistache::Optional<double> &lat, const Pistache::Optional<double> &lng, const Pistache::Optional<std::string> &withinPeriodcountry, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="query"></param>
    /// <param name="focusPeriodlat"> (optional, default to 0.0)</param>
    /// <param name="focusPeriodlng"> (optional, default to 0.0)</param>
    /// <param name="withinPeriodcountry"> (optional, default to &quot;&quot;)</param>
    virtual void geocoding_search(const Pistache::Optional<std::string> &query, const Pistache::Optional<double> &focusPeriodlat, const Pistache::Optional<double> &focusPeriodlng, const Pistache::Optional<std::string> &withinPeriodcountry, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    virtual void map_info(Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestRoutes"></param>
    virtual void routes(const RequestRoutes &requestRoutes, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestSupportedLocations"></param>
    virtual void supported_locations(const RequestSupportedLocations &requestSupportedLocations, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestTimeFilter"></param>
    virtual void time_filter(const RequestTimeFilter &requestTimeFilter, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestTimeFilterFast"></param>
    virtual void time_filter_fast(const RequestTimeFilterFast &requestTimeFilterFast, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestTimeFilterPostcodeDistricts"></param>
    virtual void time_filter_postcode_districts(const RequestTimeFilterPostcodeDistricts &requestTimeFilterPostcodeDistricts, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestTimeFilterPostcodeSectors"></param>
    virtual void time_filter_postcode_sectors(const RequestTimeFilterPostcodeSectors &requestTimeFilterPostcodeSectors, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestTimeFilterPostcodes"></param>
    virtual void time_filter_postcodes(const RequestTimeFilterPostcodes &requestTimeFilterPostcodes, Pistache::Http::ResponseWriter &response) = 0;

    /// <summary>
    /// 
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="requestTimeMap"></param>
    virtual void time_map(const RequestTimeMap &requestTimeMap, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* DefaultApi_H_ */

