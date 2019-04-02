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
 * ResponseTimeFilterFastResult.h
 *
 * 
 */

#ifndef ResponseTimeFilterFastResult_H_
#define ResponseTimeFilterFastResult_H_


#include "ModelBase.h"

#include <string>
#include "ResponseTimeFilterFastLocation.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterFastResult
    : public ModelBase
{
public:
    ResponseTimeFilterFastResult();
    virtual ~ResponseTimeFilterFastResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterFastResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseTimeFilterFastLocation>& getLocations();
        /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getUnreachable();
    
protected:
    std::string m_Search_id;

    std::vector<ResponseTimeFilterFastLocation> m_Locations;

    std::vector<std::string> m_Unreachable;

};

}
}
}
}

#endif /* ResponseTimeFilterFastResult_H_ */
