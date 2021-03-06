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
 * ResponseSupportedLocation.h
 *
 * 
 */

#ifndef ResponseSupportedLocation_H_
#define ResponseSupportedLocation_H_


#include <string>
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseSupportedLocation
{
public:
    ResponseSupportedLocation();
    virtual ~ResponseSupportedLocation();

    void validate();

    /////////////////////////////////////////////
    /// ResponseSupportedLocation members

    /// <summary>
    /// 
    /// </summary>
    std::string getId() const;
    void setId(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    std::string getMapName() const;
    void setMapName(std::string const& value);

    friend void to_json(nlohmann::json& j, const ResponseSupportedLocation& o);
    friend void from_json(const nlohmann::json& j, ResponseSupportedLocation& o);
protected:
    std::string m_Id;

    std::string m_Map_name;

};

}
}
}
}

#endif /* ResponseSupportedLocation_H_ */
