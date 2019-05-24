/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * RequestTimeFilterPostcodesArrivalSearch.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodesArrivalSearch_H_
#define RequestTimeFilterPostcodesArrivalSearch_H_



#include "RequestRangeFull.h"
#include <string>
#include "RequestTransportation.h"
#include "RequestTimeFilterPostcodesProperty.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodesArrivalSearch
{
public:
    RequestTimeFilterPostcodesArrivalSearch();
    virtual ~RequestTimeFilterPostcodesArrivalSearch();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodesArrivalSearch members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestTransportation> getTransportation() const;
    void setTransportation(std::shared_ptr<RequestTransportation> value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    void setTravelTime(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    std::string getArrivalTime() const;
    void setArrivalTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterPostcodesProperty>> getProperties() const;
    void setProperties(std::vector<std::shared_ptr<RequestTimeFilterPostcodesProperty>> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<RequestRangeFull> getRange() const;
    void setRange(std::shared_ptr<RequestRangeFull> value);

protected:
    std::string m_Id;
    std::shared_ptr<RequestTransportation> m_Transportation;
    int32_t m_Travel_time;
    std::string m_Arrival_time;
    std::vector<std::shared_ptr<RequestTimeFilterPostcodesProperty>> m_Properties;
    std::shared_ptr<RequestRangeFull> m_Range;
};

}
}
}
}

#endif /* RequestTimeFilterPostcodesArrivalSearch_H_ */
