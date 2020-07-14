/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTravelTimeStatistics.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTravelTimeStatistics_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTravelTimeStatistics_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTravelTimeStatistics
    : public ModelBase
{
public:
    ResponseTravelTimeStatistics();
    virtual ~ResponseTravelTimeStatistics();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTravelTimeStatistics members

    /// <summary>
    /// 
    /// </summary>
    int32_t getMin() const;
    bool minIsSet() const;
    void unsetMin();

    void setMin(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMax() const;
    bool maxIsSet() const;
    void unsetMax();

    void setMax(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMean() const;
    bool meanIsSet() const;
    void unsetMean();

    void setMean(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getMedian() const;
    bool medianIsSet() const;
    void unsetMedian();

    void setMedian(int32_t value);


protected:
    int32_t m_Min;
    bool m_MinIsSet;
    int32_t m_Max;
    bool m_MaxIsSet;
    int32_t m_Mean;
    bool m_MeanIsSet;
    int32_t m_Median;
    bool m_MedianIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTravelTimeStatistics_H_ */
