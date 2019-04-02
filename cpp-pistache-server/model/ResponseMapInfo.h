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
 * ResponseMapInfo.h
 *
 * 
 */

#ifndef ResponseMapInfo_H_
#define ResponseMapInfo_H_


#include "ModelBase.h"

#include "ResponseMapInfoMap.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseMapInfo
    : public ModelBase
{
public:
    ResponseMapInfo();
    virtual ~ResponseMapInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ResponseMapInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseMapInfoMap>& getMaps();
    
protected:
    std::vector<ResponseMapInfoMap> m_Maps;

};

}
}
}
}

#endif /* ResponseMapInfo_H_ */
