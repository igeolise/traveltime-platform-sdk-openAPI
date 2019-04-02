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
 * ResponseTimeFilterProperties.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterProperties_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterProperties_H_


#include "../ModelBase.h"

#include "ResponseRoute.h"
#include "ResponseDistanceBreakdownItem.h"
#include "ResponseFares.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterProperties
    : public ModelBase
{
public:
    ResponseTimeFilterProperties();
    virtual ~ResponseTimeFilterProperties();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterProperties members

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

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>>& getDistanceBreakdown();
    bool distanceBreakdownIsSet() const;
    void unsetDistance_breakdown();

    void setDistanceBreakdown(const std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseFares> getFares() const;
    bool faresIsSet() const;
    void unsetFares();

    void setFares(const std::shared_ptr<ResponseFares>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseRoute> getRoute() const;
    bool routeIsSet() const;
    void unsetRoute();

    void setRoute(const std::shared_ptr<ResponseRoute>& value);


protected:
    int32_t m_Travel_time;
    bool m_Travel_timeIsSet;
    int32_t m_Distance;
    bool m_DistanceIsSet;
    std::vector<std::shared_ptr<ResponseDistanceBreakdownItem>> m_Distance_breakdown;
    bool m_Distance_breakdownIsSet;
    std::shared_ptr<ResponseFares> m_Fares;
    bool m_FaresIsSet;
    std::shared_ptr<ResponseRoute> m_Route;
    bool m_RouteIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterProperties_H_ */
