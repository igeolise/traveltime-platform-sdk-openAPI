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
 * ResponseTimeMapProperties.h
 *
 * 
 */

#ifndef ResponseTimeMapProperties_H_
#define ResponseTimeMapProperties_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeMapProperties
{
public:
    ResponseTimeMapProperties();
    virtual ~ResponseTimeMapProperties();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTimeMapProperties members

    /// <summary>
    /// 
    /// </summary>
    bool isIsOnlyWalking() const;
    void setIsOnlyWalking(bool const value);
    bool isOnlyWalkingIsSet() const;
    void unsetIs_only_walking();

    friend void to_json(nlohmann::json& j, const ResponseTimeMapProperties& o);
    friend void from_json(const nlohmann::json& j, ResponseTimeMapProperties& o);
protected:
    bool m_Is_only_walking;
    bool m_Is_only_walkingIsSet;
};

}
}
}
}

#endif /* ResponseTimeMapProperties_H_ */
