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
/*
 * RequestTimeFilterPostcodeSectorsArrivalSearch.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodeSectorsArrivalSearch_H_
#define RequestTimeFilterPostcodeSectorsArrivalSearch_H_


#include "ModelBase.h"

#include "RequestTimeFilterPostcodeSectorsProperty.h"
#include "RequestRangeFull.h"
#include <string>
#include "RequestTransportation.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodeSectorsArrivalSearch
    : public ModelBase
{
public:
    RequestTimeFilterPostcodeSectorsArrivalSearch();
    virtual ~RequestTimeFilterPostcodeSectorsArrivalSearch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeSectorsArrivalSearch members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    RequestTransportation getTransportation() const;
    void setTransportation(RequestTransportation const& value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    std::string getArrivalTime() const;
    void setArrivalTime(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    double getReachablePostcodesThreshold() const;
    void setReachablePostcodesThreshold(double const value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<RequestTimeFilterPostcodeSectorsProperty>& getProperties();
        /// <summary>
    /// 
    /// </summary>
    RequestRangeFull getRange() const;
    void setRange(RequestRangeFull const& value);
    bool rangeIsSet() const;
    void unsetRange();

protected:
    std::string m_Id;

    RequestTransportation m_Transportation;

    int32_t m_Travel_time;

    std::string m_Arrival_time;

    double m_Reachable_postcodes_threshold;

    std::vector<RequestTimeFilterPostcodeSectorsProperty> m_Properties;

    RequestRangeFull m_Range;
    bool m_RangeIsSet;
};

}
}
}
}

#endif /* RequestTimeFilterPostcodeSectorsArrivalSearch_H_ */
