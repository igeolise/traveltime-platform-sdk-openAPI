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
 * RequestTimeFilterPostcodesProperty.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodesProperty_H_
#define RequestTimeFilterPostcodesProperty_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodesProperty
{
public:
    RequestTimeFilterPostcodesProperty();
    virtual ~RequestTimeFilterPostcodesProperty();

    void validate();

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodesProperty members


    friend void to_json(nlohmann::json& j, const RequestTimeFilterPostcodesProperty& o);
    friend void from_json(const nlohmann::json& j, RequestTimeFilterPostcodesProperty& o);
protected:
};

}
}
}
}

#endif /* RequestTimeFilterPostcodesProperty_H_ */
