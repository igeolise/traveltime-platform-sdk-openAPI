/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTimeFilterPostcodeSectorsResult.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodeSectorsResult_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodeSectorsResult_H_


#include "../ModelBase.h"

#include "ResponseTimeFilterPostcodeSector.h"
#include <cpprest/details/basic_types.h>
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeSectorsResult
    : public ModelBase
{
public:
    ResponseTimeFilterPostcodeSectorsResult();
    virtual ~ResponseTimeFilterPostcodeSectorsResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeSectorsResult members

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
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>>& getSectors();
    bool sectorsIsSet() const;
    void unsetSectors();

    void setSectors(const std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>>& value);


protected:
    utility::string_t m_Search_id;
    bool m_Search_idIsSet;
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSector>> m_Sectors;
    bool m_SectorsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodeSectorsResult_H_ */
