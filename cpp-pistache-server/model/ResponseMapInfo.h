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
 * ResponseMapInfo.h
 *
 * 
 */

#ifndef ResponseMapInfo_H_
#define ResponseMapInfo_H_


#include "ResponseMapInfoMap.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseMapInfo
{
public:
    ResponseMapInfo();
    virtual ~ResponseMapInfo();

    void validate();

    /////////////////////////////////////////////
    /// ResponseMapInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseMapInfoMap>& getMaps();
    void setMaps(std::vector<ResponseMapInfoMap> const& value);

    friend void to_json(nlohmann::json& j, const ResponseMapInfo& o);
    friend void from_json(const nlohmann::json& j, ResponseMapInfo& o);
protected:
    std::vector<ResponseMapInfoMap> m_Maps;

};

}
}
}
}

#endif /* ResponseMapInfo_H_ */
