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
 * ResponseRoutesResult.h
 *
 * 
 */

#ifndef ResponseRoutesResult_H_
#define ResponseRoutesResult_H_


#include "ResponseRoutesLocation.h"
#include <string>
#include <vector>
#include <nlohmann/json.hpp>

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

    void validate();

    /////////////////////////////////////////////
    /// ResponseRoutesResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseRoutesLocation>& getLocations();
    void setLocations(std::vector<ResponseRoutesLocation> const& value);
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string>& getUnreachable();
    void setUnreachable(std::vector<std::string> const& value);

    friend void to_json(nlohmann::json& j, const ResponseRoutesResult& o);
    friend void from_json(const nlohmann::json& j, ResponseRoutesResult& o);
protected:
    std::string m_Search_id;

    std::vector<ResponseRoutesLocation> m_Locations;

    std::vector<std::string> m_Unreachable;

};

}
}
}
}

#endif /* ResponseRoutesResult_H_ */
