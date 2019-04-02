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
 * RequestTimeMapDepartureSearch.h
 *
 * 
 */

#ifndef RequestTimeMapDepartureSearch_H_
#define RequestTimeMapDepartureSearch_H_


#include "ModelBase.h"

#include "RequestTimeMapProperty.h"
#include <string>
#include "RequestTransportation.h"
#include "Coords.h"
#include <vector>
#include "RequestRangeNoMaxResults.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeMapDepartureSearch
    : public ModelBase
{
public:
    RequestTimeMapDepartureSearch();
    virtual ~RequestTimeMapDepartureSearch();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// RequestTimeMapDepartureSearch members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    Coords getCoords() const;
    void setCoords(Coords const& value);
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
    std::string getDepartureTime() const;
    void setDepartureTime(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<RequestTimeMapProperty>& getProperties();
    bool propertiesIsSet() const;
    void unsetProperties();
    /// <summary>
    /// 
    /// </summary>
    RequestRangeNoMaxResults getRange() const;
    void setRange(RequestRangeNoMaxResults const& value);
    bool rangeIsSet() const;
    void unsetRange();

protected:
    std::string m_Id;

    Coords m_Coords;

    RequestTransportation m_Transportation;

    int32_t m_Travel_time;

    std::string m_Departure_time;

    std::vector<RequestTimeMapProperty> m_Properties;
    bool m_PropertiesIsSet;
    RequestRangeNoMaxResults m_Range;
    bool m_RangeIsSet;
};

}
}
}
}

#endif /* RequestTimeMapDepartureSearch_H_ */
