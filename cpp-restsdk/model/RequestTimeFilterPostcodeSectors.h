/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RequestTimeFilterPostcodeSectors.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterPostcodeSectors_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterPostcodeSectors_H_


#include "../ModelBase.h"

#include "RequestTimeFilterPostcodeSectorsArrivalSearch.h"
#include "RequestTimeFilterPostcodeSectorsDepartureSearch.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodeSectors
    : public ModelBase
{
public:
    RequestTimeFilterPostcodeSectors();
    virtual ~RequestTimeFilterPostcodeSectors();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeSectors members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>>& getDepartureSearches();
    bool departureSearchesIsSet() const;
    void unsetDeparture_searches();

    void setDepartureSearches(const std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>>& getArrivalSearches();
    bool arrivalSearchesIsSet() const;
    void unsetArrival_searches();

    void setArrivalSearches(const std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>>& value);


protected:
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsDepartureSearch>> m_Departure_searches;
    bool m_Departure_searchesIsSet;
    std::vector<std::shared_ptr<RequestTimeFilterPostcodeSectorsArrivalSearch>> m_Arrival_searches;
    bool m_Arrival_searchesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterPostcodeSectors_H_ */
