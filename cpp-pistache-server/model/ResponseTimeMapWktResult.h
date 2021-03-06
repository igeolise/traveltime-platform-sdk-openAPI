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
 * ResponseTimeMapWktResult.h
 *
 * 
 */

#ifndef ResponseTimeMapWktResult_H_
#define ResponseTimeMapWktResult_H_


#include <string>
#include "ResponseTimeMapProperties.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeMapWktResult
{
public:
    ResponseTimeMapWktResult();
    virtual ~ResponseTimeMapWktResult();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTimeMapWktResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getShape() const;
    void setShape(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    ResponseTimeMapProperties getProperties() const;
    void setProperties(ResponseTimeMapProperties const& value);

    friend void to_json(nlohmann::json& j, const ResponseTimeMapWktResult& o);
    friend void from_json(const nlohmann::json& j, ResponseTimeMapWktResult& o);
protected:
    std::string m_Search_id;

    std::string m_Shape;

    ResponseTimeMapProperties m_Properties;

};

}
}
}
}

#endif /* ResponseTimeMapWktResult_H_ */
