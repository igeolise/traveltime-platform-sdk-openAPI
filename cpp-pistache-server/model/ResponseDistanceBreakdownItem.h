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
 * ResponseDistanceBreakdownItem.h
 *
 * 
 */

#ifndef ResponseDistanceBreakdownItem_H_
#define ResponseDistanceBreakdownItem_H_


#include "ResponseTransportationMode.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseDistanceBreakdownItem
{
public:
    ResponseDistanceBreakdownItem();
    virtual ~ResponseDistanceBreakdownItem();

    void validate();

    /////////////////////////////////////////////
    /// ResponseDistanceBreakdownItem members

    /// <summary>
    /// 
    /// </summary>
    ResponseTransportationMode getMode() const;
    void setMode(ResponseTransportationMode const& value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getDistance() const;
    void setDistance(int32_t const value);
    
    friend void to_json(nlohmann::json& j, const ResponseDistanceBreakdownItem& o);
    friend void from_json(const nlohmann::json& j, ResponseDistanceBreakdownItem& o);
protected:
    ResponseTransportationMode m_Mode;

    int32_t m_Distance;

};

}
}
}
}

#endif /* ResponseDistanceBreakdownItem_H_ */
