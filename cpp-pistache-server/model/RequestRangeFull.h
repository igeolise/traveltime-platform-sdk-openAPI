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
 * RequestRangeFull.h
 *
 * 
 */

#ifndef RequestRangeFull_H_
#define RequestRangeFull_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestRangeFull
{
public:
    RequestRangeFull();
    virtual ~RequestRangeFull();

    void validate();

    /////////////////////////////////////////////
    /// RequestRangeFull members

    /// <summary>
    /// 
    /// </summary>
    bool isEnabled() const;
    void setEnabled(bool const value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMaxResults() const;
    void setMaxResults(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getWidth() const;
    void setWidth(int32_t const value);

    friend void to_json(nlohmann::json& j, const RequestRangeFull& o);
    friend void from_json(const nlohmann::json& j, RequestRangeFull& o);
protected:
    bool m_Enabled;

    int32_t m_Max_results;

    int32_t m_Width;

};

}
}
}
}

#endif /* RequestRangeFull_H_ */
