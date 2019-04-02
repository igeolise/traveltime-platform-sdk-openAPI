/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseRoute.h
 *
 * 
 */

#ifndef ResponseRoute_H_
#define ResponseRoute_H_



#include "ResponseRoutePart.h"
#include <string>
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseRoute
{
public:
    ResponseRoute();
    virtual ~ResponseRoute();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseRoute members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getDepartureTime() const;
    void setDepartureTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::string getArrivalTime() const;
    void setArrivalTime(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseRoutePart>> getParts() const;
    void setParts(std::vector<std::shared_ptr<ResponseRoutePart>> value);

protected:
    std::string m_Departure_time;
    std::string m_Arrival_time;
    std::vector<std::shared_ptr<ResponseRoutePart>> m_Parts;
};

}
}
}
}

#endif /* ResponseRoute_H_ */
