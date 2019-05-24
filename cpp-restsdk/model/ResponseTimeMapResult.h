/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.0.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTimeMapResult.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMapResult_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMapResult_H_


#include "../ModelBase.h"

#include "ResponseShape.h"
#include <cpprest/details/basic_types.h>
#include "ResponseTimeMapProperties.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseTimeMapResult
    : public ModelBase
{
public:
    ResponseTimeMapResult();
    virtual ~ResponseTimeMapResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseTimeMapResult members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSearchId() const;
    
    void setSearchId(const utility::string_t& value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseShape>>& getShapes();
    
    void setShapes(const std::vector<std::shared_ptr<ResponseShape>>& value);

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<ResponseTimeMapProperties> getProperties() const;
    
    void setProperties(const std::shared_ptr<ResponseTimeMapProperties>& value);


protected:
    utility::string_t m_Search_id;
        std::vector<std::shared_ptr<ResponseShape>> m_Shapes;
        std::shared_ptr<ResponseTimeMapProperties> m_Properties;
    };


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseTimeMapResult_H_ */
