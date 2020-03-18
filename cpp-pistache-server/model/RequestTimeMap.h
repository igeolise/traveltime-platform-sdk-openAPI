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
 * RequestTimeMap.h
 *
 * 
 */

#ifndef RequestTimeMap_H_
#define RequestTimeMap_H_


#include "RequestTimeMapDepartureSearch.h"
#include "RequestUnionOnIntersection.h"
#include "RequestTimeMapArrivalSearch.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeMap
{
public:
    RequestTimeMap();
    virtual ~RequestTimeMap();

    void validate();

    /////////////////////////////////////////////
    /// RequestTimeMap members

    /// <summary>
    /// 
    /// </summary>
    std::vector<RequestTimeMapDepartureSearch>& getDepartureSearches();
    void setDepartureSearches(std::vector<RequestTimeMapDepartureSearch> const& value);
    bool departureSearchesIsSet() const;
    void unsetDeparture_searches();
    /// <summary>
    /// 
    /// </summary>
    std::vector<RequestTimeMapArrivalSearch>& getArrivalSearches();
    void setArrivalSearches(std::vector<RequestTimeMapArrivalSearch> const& value);
    bool arrivalSearchesIsSet() const;
    void unsetArrival_searches();
    /// <summary>
    /// 
    /// </summary>
    std::vector<RequestUnionOnIntersection>& getUnions();
    void setUnions(std::vector<RequestUnionOnIntersection> const& value);
    bool unionsIsSet() const;
    void unsetUnions();
    /// <summary>
    /// 
    /// </summary>
    std::vector<RequestUnionOnIntersection>& getIntersections();
    void setIntersections(std::vector<RequestUnionOnIntersection> const& value);
    bool intersectionsIsSet() const;
    void unsetIntersections();

    friend void to_json(nlohmann::json& j, const RequestTimeMap& o);
    friend void from_json(const nlohmann::json& j, RequestTimeMap& o);
protected:
    std::vector<RequestTimeMapDepartureSearch> m_Departure_searches;
    bool m_Departure_searchesIsSet;
    std::vector<RequestTimeMapArrivalSearch> m_Arrival_searches;
    bool m_Arrival_searchesIsSet;
    std::vector<RequestUnionOnIntersection> m_Unions;
    bool m_UnionsIsSet;
    std::vector<RequestUnionOnIntersection> m_Intersections;
    bool m_IntersectionsIsSet;
};

}
}
}
}

#endif /* RequestTimeMap_H_ */
