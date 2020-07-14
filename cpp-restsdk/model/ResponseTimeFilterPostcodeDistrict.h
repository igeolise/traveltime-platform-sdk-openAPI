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
 * ResponseTimeFilterPostcodeDistrict.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodeDistrict_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodeDistrict_H_


#include "../ModelBase.h"

#include "ResponseTimeFilterPostcodeDistrictProperties.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeDistrict
    : public ModelBase
{
public:
    ResponseTimeFilterPostcodeDistrict();
    virtual ~ResponseTimeFilterPostcodeDistrict();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeDistrict members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<String> getCode() const;
    bool codeIsSet() const;
    void unsetCode();

    void setCode(const std::shared_ptr<String>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseTimeFilterPostcodeDistrictProperties> getProperties() const;
    bool propertiesIsSet() const;
    void unsetProperties();

    void setProperties(const std::shared_ptr<ResponseTimeFilterPostcodeDistrictProperties>& value);


protected:
    std::shared_ptr<String> m_Code;
    bool m_CodeIsSet;
    std::shared_ptr<ResponseTimeFilterPostcodeDistrictProperties> m_Properties;
    bool m_PropertiesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodeDistrict_H_ */
