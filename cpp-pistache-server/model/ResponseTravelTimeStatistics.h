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
 * ResponseTravelTimeStatistics.h
 *
 * 
 */

#ifndef ResponseTravelTimeStatistics_H_
#define ResponseTravelTimeStatistics_H_


#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTravelTimeStatistics
{
public:
    ResponseTravelTimeStatistics();
    virtual ~ResponseTravelTimeStatistics();

    void validate();

    /////////////////////////////////////////////
    /// ResponseTravelTimeStatistics members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMin() const;
    void setMin(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMax() const;
    void setMax(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMean() const;
    void setMean(int32_t const value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMedian() const;
    void setMedian(int32_t const value);

    friend void to_json(nlohmann::json& j, const ResponseTravelTimeStatistics& o);
    friend void from_json(const nlohmann::json& j, ResponseTravelTimeStatistics& o);
protected:
    int32_t m_Min;

    int32_t m_Max;

    int32_t m_Mean;

    int32_t m_Median;

};

}
}
}
}

#endif /* ResponseTravelTimeStatistics_H_ */
