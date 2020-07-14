/**
* TravelTime API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.2.1
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ResponseGeocodingGeoJsonFeature.h
 *
 * 
 */

#ifndef ResponseGeocodingGeoJsonFeature_H_
#define ResponseGeocodingGeoJsonFeature_H_


#include "ResponseGeocodingGeometry.h"
#include <string>
#include "ResponseGeocodingProperties.h"
#include <nlohmann/json.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseGeocodingGeoJsonFeature
{
public:
    ResponseGeocodingGeoJsonFeature();
    virtual ~ResponseGeocodingGeoJsonFeature();

    void validate();

    /////////////////////////////////////////////
    /// ResponseGeocodingGeoJsonFeature members

    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string const& value);
    /// <summary>
    /// 
    /// </summary>
    ResponseGeocodingGeometry getGeometry() const;
    void setGeometry(ResponseGeocodingGeometry const& value);
    /// <summary>
    /// 
    /// </summary>
    ResponseGeocodingProperties getProperties() const;
    void setProperties(ResponseGeocodingProperties const& value);

    friend void to_json(nlohmann::json& j, const ResponseGeocodingGeoJsonFeature& o);
    friend void from_json(const nlohmann::json& j, ResponseGeocodingGeoJsonFeature& o);
protected:
    std::string m_Type;

    ResponseGeocodingGeometry m_Geometry;

    ResponseGeocodingProperties m_Properties;

};

}
}
}
}

#endif /* ResponseGeocodingGeoJsonFeature_H_ */
