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
 * ResponseTimeMapWkt.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMapWkt_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMapWkt_H_


#include "../ModelBase.h"

#include "ResponseTimeMapWktResult.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeMapWkt
    : public ModelBase
{
public:
    ResponseTimeMapWkt();
    virtual ~ResponseTimeMapWkt();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeMapWkt members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeMapWktResult>>& getResults();
    bool resultsIsSet() const;
    void unsetResults();

    void setResults(const std::vector<std::shared_ptr<ResponseTimeMapWktResult>>& value);


protected:
    std::vector<std::shared_ptr<ResponseTimeMapWktResult>> m_Results;
    bool m_ResultsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMapWkt_H_ */
