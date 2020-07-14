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
 * RequestUnionOnIntersection.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_RequestUnionOnIntersection_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_RequestUnionOnIntersection_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  RequestUnionOnIntersection
    : public ModelBase
{
public:
    RequestUnionOnIntersection();
    virtual ~RequestUnionOnIntersection();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RequestUnionOnIntersection members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();

    void setId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<utility::string_t>& getSearchIds();
    bool searchIdsIsSet() const;
    void unsetSearch_ids();

    void setSearchIds(const std::vector<utility::string_t>& value);


protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::vector<utility::string_t> m_Search_ids;
    bool m_Search_idsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_RequestUnionOnIntersection_H_ */
