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
 * ResponseTimeFilter.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilter_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilter_H_


#include "../ModelBase.h"

#include "ResponseTimeFilterResult.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilter
    : public ModelBase
{
public:
    ResponseTimeFilter();
    virtual ~ResponseTimeFilter();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilter members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterResult>>& getResults();
    
    void setResults(const std::vector<std::shared_ptr<ResponseTimeFilterResult>>& value);


protected:
    std::vector<std::shared_ptr<ResponseTimeFilterResult>> m_Results;
    };

}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilter_H_ */
