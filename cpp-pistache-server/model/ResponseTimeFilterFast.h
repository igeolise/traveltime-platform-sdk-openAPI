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
 * ResponseTimeFilterFast.h
 *
 * 
 */

#ifndef ResponseTimeFilterFast_H_
#define ResponseTimeFilterFast_H_


#include "ModelBase.h"

#include "ResponseTimeFilterFastResult.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterFast
    : public ModelBase
{
public:
    ResponseTimeFilterFast();
    virtual ~ResponseTimeFilterFast();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterFast members

    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseTimeFilterFastResult>& getResults();
    
protected:
    std::vector<ResponseTimeFilterFastResult> m_Results;

};

}
}
}
}

#endif /* ResponseTimeFilterFast_H_ */
