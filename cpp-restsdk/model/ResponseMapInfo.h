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
 * ResponseMapInfo.h
 *
 * 
 */

#ifndef ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseMapInfo_H_
#define ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseMapInfo_H_


#include "../ModelBase.h"

#include "ResponseMapInfoMap.h"
#include <vector>

namespace org {
namespace openapitools {
namespace client {
namespace model {


/// <summary>
/// 
/// </summary>
class  ResponseMapInfo
    : public ModelBase
{
public:
    ResponseMapInfo();
    virtual ~ResponseMapInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    bool fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// ResponseMapInfo members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseMapInfoMap>>& getMaps();
    bool mapsIsSet() const;
    void unsetMaps();

    void setMaps(const std::vector<std::shared_ptr<ResponseMapInfoMap>>& value);


protected:
    std::vector<std::shared_ptr<ResponseMapInfoMap>> m_Maps;
    bool m_MapsIsSet;
};


}
}
}
}

#endif /* ORG_OPENAPITOOLS_CLIENT_MODEL_ResponseMapInfo_H_ */
