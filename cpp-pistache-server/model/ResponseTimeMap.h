/**
* TravelTime API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.2.1
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ResponseTimeMap.h
 *
 * 
 */

#ifndef ResponseTimeMap_H_
#define ResponseTimeMap_H_


#include "ResponseTimeMapResult.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeMap
{
public:
    ResponseTimeMap();
    virtual ~ResponseTimeMap();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTimeMap members

    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseTimeMapResult>& getResults();
    void setResults(std::vector<ResponseTimeMapResult> const& value);

    friend void to_json(nlohmann::json& j, const ResponseTimeMap& o);
    friend void from_json(const nlohmann::json& j, ResponseTimeMap& o);
protected:
    std::vector<ResponseTimeMapResult> m_Results;

};

}
}
}
}

#endif /* ResponseTimeMap_H_ */
