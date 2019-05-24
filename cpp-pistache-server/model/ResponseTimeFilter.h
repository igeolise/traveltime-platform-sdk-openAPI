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
 * ResponseTimeFilter.h
 *
 * 
 */

#ifndef ResponseTimeFilter_H_
#define ResponseTimeFilter_H_


#include "ResponseTimeFilterResult.h"
#include <vector>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilter
{
public:
    ResponseTimeFilter();
    virtual ~ResponseTimeFilter();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTimeFilter members

    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseTimeFilterResult>& getResults();
    
    friend void to_json(nlohmann::json& j, const ResponseTimeFilter& o);
    friend void from_json(const nlohmann::json& j, ResponseTimeFilter& o);
protected:
    std::vector<ResponseTimeFilterResult> m_Results;

};

}
}
}
}

#endif /* ResponseTimeFilter_H_ */
