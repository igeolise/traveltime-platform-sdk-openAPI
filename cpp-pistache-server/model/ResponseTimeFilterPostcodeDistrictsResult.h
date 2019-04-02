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
 * ResponseTimeFilterPostcodeDistrictsResult.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodeDistrictsResult_H_
#define ResponseTimeFilterPostcodeDistrictsResult_H_


#include "ModelBase.h"

#include <string>
#include "ResponseTimeFilterPostcodeDistrict.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeDistrictsResult
    : public ModelBase
{
public:
    ResponseTimeFilterPostcodeDistrictsResult();
    virtual ~ResponseTimeFilterPostcodeDistrictsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeDistrictsResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseTimeFilterPostcodeDistrict>& getDistricts();
    
protected:
    std::string m_Search_id;

    std::vector<ResponseTimeFilterPostcodeDistrict> m_Districts;

};

}
}
}
}

#endif /* ResponseTimeFilterPostcodeDistrictsResult_H_ */
