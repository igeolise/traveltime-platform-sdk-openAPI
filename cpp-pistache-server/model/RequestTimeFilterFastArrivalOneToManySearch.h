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
 * RequestTimeFilterFastArrivalOneToManySearch.h
 *
 * 
 */

#ifndef RequestTimeFilterFastArrivalOneToManySearch_H_
#define RequestTimeFilterFastArrivalOneToManySearch_H_


#include "ModelBase.h"

#include "RequestTimeFilterFastProperty.h"
#include <string>
#include "RequestArrivalTimePeriod.h"
#include "RequestTransportationFast.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterFastArrivalOneToManySearch
    : public ModelBase
{
public:
    RequestTimeFilterFastArrivalOneToManySearch();
    virtual ~RequestTimeFilterFastArrivalOneToManySearch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RequestTimeFilterFastArrivalOneToManySearch members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getDepartureLocationId() const;
    void setDepartureLocationId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getArrivalLocationIds();
        /// <summary>
    /// 
    /// </summary>
    RequestTransportationFast getTransportation() const;
    void setTransportation(RequestTransportationFast const& value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    RequestArrivalTimePeriod getArrivalTimePeriod() const;
    void setArrivalTimePeriod(RequestArrivalTimePeriod const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<RequestTimeFilterFastProperty>& getProperties();
    
protected:
    std::string m_Id;

    std::string m_Departure_location_id;

    std::vector<std::string> m_Arrival_location_ids;

    RequestTransportationFast m_Transportation;

    int32_t m_Travel_time;

    RequestArrivalTimePeriod m_Arrival_time_period;

    std::vector<RequestTimeFilterFastProperty> m_Properties;

};

}
}
}
}

#endif /* RequestTimeFilterFastArrivalOneToManySearch_H_ */
