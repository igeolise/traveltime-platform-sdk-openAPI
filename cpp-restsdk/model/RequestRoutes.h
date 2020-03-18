/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RequestRoutes.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestRoutes_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestRoutes_H_


#include "../ModelBase.h"

#include "RequestRoutesArrivalSearch.h"
#include "RequestRoutesDepartureSearch.h"
#include "RequestLocation.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestRoutes
    : public ModelBase
{
public:
    RequestRoutes();
    virtual ~RequestRoutes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestRoutes members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestLocation>>& getLocations();
    bool locationsIsSet() const;
    void unsetLocations();

    void setLocations(const std::vector<std::shared_ptr<RequestLocation>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestRoutesDepartureSearch>>& getDepartureSearches();
    bool departureSearchesIsSet() const;
    void unsetDeparture_searches();

    void setDepartureSearches(const std::vector<std::shared_ptr<RequestRoutesDepartureSearch>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestRoutesArrivalSearch>>& getArrivalSearches();
    bool arrivalSearchesIsSet() const;
    void unsetArrival_searches();

    void setArrivalSearches(const std::vector<std::shared_ptr<RequestRoutesArrivalSearch>>& value);


protected:
    std::vector<std::shared_ptr<RequestLocation>> m_Locations;
    bool m_LocationsIsSet;
    std::vector<std::shared_ptr<RequestRoutesDepartureSearch>> m_Departure_searches;
    bool m_Departure_searchesIsSet;
    std::vector<std::shared_ptr<RequestRoutesArrivalSearch>> m_Arrival_searches;
    bool m_Arrival_searchesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestRoutes_H_ */
