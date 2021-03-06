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
 * ResponseTimeFilterPostcodesResult.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodesResult_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodesResult_H_


#include "../ModelBase.h"

#include "ResponseTimeFilterPostcode.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodesResult
    : public ModelBase
{
public:
    ResponseTimeFilterPostcodesResult();
    virtual ~ResponseTimeFilterPostcodesResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodesResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSearchId() const;
    bool searchIdIsSet() const;
    void unsetSearch_id();

    void setSearchId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcode>>& getPostcodes();
    bool postcodesIsSet() const;
    void unsetPostcodes();

    void setPostcodes(const std::vector<std::shared_ptr<ResponseTimeFilterPostcode>>& value);


protected:
    utility::string_t m_Search_id;
    bool m_Search_idIsSet;
    std::vector<std::shared_ptr<ResponseTimeFilterPostcode>> m_Postcodes;
    bool m_PostcodesIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodesResult_H_ */
