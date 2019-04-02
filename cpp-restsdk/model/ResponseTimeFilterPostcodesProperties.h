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
 * ResponseTimeFilterPostcodesProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodesProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodesProperties_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodesProperties
    : public ModelBase
{
public:
    ResponseTimeFilterPostcodesProperties();
    virtual ~ResponseTimeFilterPostcodesProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodesProperties members

    /// <summary>
    /// 
    /// </summary>
    int32_t getTravelTime() const;
    bool travelTimeIsSet() const;
    void unsetTravel_time();

    void setTravelTime(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getDistance() const;
    bool distanceIsSet() const;
    void unsetDistance();

    void setDistance(int32_t value);


protected:
    int32_t m_Travel_time;
    bool m_Travel_timeIsSet;
    int32_t m_Distance;
    bool m_DistanceIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodesProperties_H_ */
