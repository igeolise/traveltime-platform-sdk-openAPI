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
/*
 * RequestTimeFilterFast.h
 *
 * 
 */

#ifndef RequestTimeFilterFast_H_
#define RequestTimeFilterFast_H_


#include "RequestTimeFilterFastArrivalSearches.h"
#include "RequestLocation.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterFast
{
public:
    RequestTimeFilterFast();
    virtual ~RequestTimeFilterFast();

    void validate();

    /////////////////////////////////////////////
    /// RequestTimeFilterFast members

    /// <summary>
    /// 
    /// </summary>
    std::vector<RequestLocation>& getLocations();
    void setLocations(std::vector<RequestLocation> const& value);
    /// <summary>
    /// 
    /// </summary>
    RequestTimeFilterFastArrivalSearches getArrivalSearches() const;
    void setArrivalSearches(RequestTimeFilterFastArrivalSearches const& value);

    friend void to_json(nlohmann::json& j, const RequestTimeFilterFast& o);
    friend void from_json(const nlohmann::json& j, RequestTimeFilterFast& o);
protected:
    std::vector<RequestLocation> m_Locations;

    RequestTimeFilterFastArrivalSearches m_Arrival_searches;

};

}
}
}
}

#endif /* RequestTimeFilterFast_H_ */
