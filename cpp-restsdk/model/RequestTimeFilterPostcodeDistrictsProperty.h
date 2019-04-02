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
 * RequestTimeFilterPostcodeDistrictsProperty.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterPostcodeDistrictsProperty_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterPostcodeDistrictsProperty_H_


#include "../ModelBase.h"


namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RequestTimeFilterPostcodeDistrictsProperty
    : public ModelBase
{
public:
    RequestTimeFilterPostcodeDistrictsProperty();
    virtual ~RequestTimeFilterPostcodeDistrictsProperty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestTimeFilterPostcodeDistrictsProperty members


protected:
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestTimeFilterPostcodeDistrictsProperty_H_ */
