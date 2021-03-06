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
#include <boost/property_tree/ptree.hpp>

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
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

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
