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
 * RequestTimeFilterPostcodeSectorsProperty.h
 *
 * 
 */

#ifndef RequestTimeFilterPostcodeSectorsProperty_H_
#define RequestTimeFilterPostcodeSectorsProperty_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodeSectorsProperty
{
public:
    RequestTimeFilterPostcodeSectorsProperty();
    virtual ~RequestTimeFilterPostcodeSectorsProperty();

    void validate();

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeSectorsProperty members


    friend void to_json(nlohmann::json& j, const RequestTimeFilterPostcodeSectorsProperty& o);
    friend void from_json(const nlohmann::json& j, RequestTimeFilterPostcodeSectorsProperty& o);
protected:
};

}
}
}
}

#endif /* RequestTimeFilterPostcodeSectorsProperty_H_ */
