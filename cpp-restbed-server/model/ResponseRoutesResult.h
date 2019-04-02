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
 * ResponseRoutesResult.h
 *
 * 
 */

#ifndef ResponseRoutesResult_H_
#define ResponseRoutesResult_H_



#include "ResponseRoutesLocation.h"
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
class  ResponseRoutesResult
{
public:
    ResponseRoutesResult();
    virtual ~ResponseRoutesResult();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseRoutesResult members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseRoutesLocation>> getLocations() const;
    void setLocations(std::vector<std::shared_ptr<ResponseRoutesLocation>> value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getUnreachable() const;
    void setUnreachable(std::vector<std::string> value);

protected:
    std::string m_Search_id;
    std::vector<std::shared_ptr<ResponseRoutesLocation>> m_Locations;
    std::vector<std::string> m_Unreachable;
};

}
}
}
}

#endif /* ResponseRoutesResult_H_ */
