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
 * ResponseTimeFilterPostcodeDistrictsResult.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodeDistrictsResult_H_
#define ResponseTimeFilterPostcodeDistrictsResult_H_



#include <string>
#include "ResponseTimeFilterPostcodeDistrict.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeDistrictsResult
{
public:
    ResponseTimeFilterPostcodeDistrictsResult();
    virtual ~ResponseTimeFilterPostcodeDistrictsResult();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeDistrictsResult members
    
    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeDistrict>> getDistricts() const;
    void setDistricts(std::vector<std::shared_ptr<ResponseTimeFilterPostcodeDistrict>> value);

protected:
    std::string m_Search_id;
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeDistrict>> m_Districts;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcodeDistrictsResult_H_ */
