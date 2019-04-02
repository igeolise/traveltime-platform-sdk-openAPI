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
 * ResponseError.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseError_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseError_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <map>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseError
    : public ModelBase
{
public:
    ResponseError();
    virtual ~ResponseError();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseError members

    /// <summary>
    /// 
    /// </summary>
    int32_t getHttpStatus() const;
    bool httpStatusIsSet() const;
    void unsetHttp_status();

    void setHttpStatus(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    int32_t getErrorCode() const;
    bool errorCodeIsSet() const;
    void unsetError_code();

    void setErrorCode(int32_t value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDescription() const;
    bool descriptionIsSet() const;
    void unsetDescription();

    void setDescription(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getDocumentationLink() const;
    bool documentationLinkIsSet() const;
    void unsetDocumentation_link();

    void setDocumentationLink(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::map<utility::string_t, std::vector<utility::string_t>>& getAdditionalInfo();
    bool additionalInfoIsSet() const;
    void unsetAdditional_info();

    void setAdditionalInfo(const std::map<utility::string_t, std::vector<utility::string_t>>& value);


protected:
    int32_t m_Http_status;
    bool m_Http_statusIsSet;
    int32_t m_Error_code;
    bool m_Error_codeIsSet;
    utility::string_t m_Description;
    bool m_DescriptionIsSet;
    utility::string_t m_Documentation_link;
    bool m_Documentation_linkIsSet;
    std::map<utility::string_t, std::vector<utility::string_t>> m_Additional_info;
    bool m_Additional_infoIsSet;
};

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseError_H_ */
