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
 * RequestTimeFilterPostcodeDistrictsProperty.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodeDistrictsProperty_H_
#define RequestTimeFilterPostcodeDistrictsProperty_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodeDistrictsProperty
{
public:
    RequestTimeFilterPostcodeDistrictsProperty();
    virtual ~RequestTimeFilterPostcodeDistrictsProperty();

    void validate();

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeDistrictsProperty members


    friend void to_json(nlohmann::json& j, const RequestTimeFilterPostcodeDistrictsProperty& o);
    friend void from_json(const nlohmann::json& j, RequestTimeFilterPostcodeDistrictsProperty& o);
protected:
};

}
}
}
}

#endif /* RequestTimeFilterPostcodeDistrictsProperty_H_ */
