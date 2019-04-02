/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
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



#include <memory>

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
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseTravelTimeStatistics members
    
    /// <summary>
    /// 
    /// </summary>
    int32_t getMin() const;
    void setMin(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMax() const;
    void setMax(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMean() const;
    void setMean(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getMedian() const;
    void setMedian(int32_t value);

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
