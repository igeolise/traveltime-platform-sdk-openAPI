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
 * ResponseTimeFilterPostcodes.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodes_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodes_H_


#include "../ModelBase.h"

#include "ResponseTimeFilterPostcodesResult.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodes
    : public ModelBase
{
public:
    ResponseTimeFilterPostcodes();
    virtual ~ResponseTimeFilterPostcodes();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodes members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodesResult>>& getResults();
    bool resultsIsSet() const;
    void unsetResults();

    void setResults(const std::vector<std::shared_ptr<ResponseTimeFilterPostcodesResult>>& value);


protected:
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodesResult>> m_Results;
    bool m_ResultsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeFilterPostcodes_H_ */
