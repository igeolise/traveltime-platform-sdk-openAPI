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
 * ResponseTimeFilterPostcodeSectorProperties.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodeSectorProperties_H_
#define ResponseTimeFilterPostcodeSectorProperties_H_


#include "ResponseTravelTimeStatistics.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeSectorProperties
{
public:
    ResponseTimeFilterPostcodeSectorProperties();
    virtual ~ResponseTimeFilterPostcodeSectorProperties();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeSectorProperties members

    /// <summary>
    /// 
    /// </summary>
    ResponseTravelTimeStatistics getTravelTimeReachable() const;
    void setTravelTimeReachable(ResponseTravelTimeStatistics const& value);
    bool travelTimeReachableIsSet() const;
    void unsetTravel_time_reachable();
    /// <summary>
    /// 
    /// </summary>
    ResponseTravelTimeStatistics getTravelTimeAll() const;
    void setTravelTimeAll(ResponseTravelTimeStatistics const& value);
    bool travelTimeAllIsSet() const;
    void unsetTravel_time_all();
    /// <summary>
    /// 
    /// </summary>
    double getCoverage() const;
    void setCoverage(double const value);
    bool coverageIsSet() const;
    void unsetCoverage();

    friend void to_json(nlohmann::json& j, const ResponseTimeFilterPostcodeSectorProperties& o);
    friend void from_json(const nlohmann::json& j, ResponseTimeFilterPostcodeSectorProperties& o);
protected:
    ResponseTravelTimeStatistics m_Travel_time_reachable;
    bool m_Travel_time_reachableIsSet;
    ResponseTravelTimeStatistics m_Travel_time_all;
    bool m_Travel_time_allIsSet;
    double m_Coverage;
    bool m_CoverageIsSet;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcodeSectorProperties_H_ */
