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


#include "ResponseGeocodingGeoJsonFeature.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseGeocodingGeoJsonFeature::ResponseGeocodingGeoJsonFeature()
{
    m_Type = "";
    
}

ResponseGeocodingGeoJsonFeature::~ResponseGeocodingGeoJsonFeature()
{
}

void ResponseGeocodingGeoJsonFeature::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseGeocodingGeoJsonFeature& o)
{
    j = nlohmann::json();
    j["type"] = o.m_Type;
    j["geometry"] = o.m_Geometry;
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json& j, ResponseGeocodingGeoJsonFeature& o)
{
    j.at("type").get_to(o.m_Type);
    j.at("geometry").get_to(o.m_Geometry);
    j.at("properties").get_to(o.m_Properties);
}

std::string ResponseGeocodingGeoJsonFeature::getType() const
{
    return m_Type;
}
void ResponseGeocodingGeoJsonFeature::setType(std::string const& value)
{
    m_Type = value;
}
ResponseGeocodingGeometry ResponseGeocodingGeoJsonFeature::getGeometry() const
{
    return m_Geometry;
}
void ResponseGeocodingGeoJsonFeature::setGeometry(ResponseGeocodingGeometry const& value)
{
    m_Geometry = value;
}
ResponseGeocodingProperties ResponseGeocodingGeoJsonFeature::getProperties() const
{
    return m_Properties;
}
void ResponseGeocodingGeoJsonFeature::setProperties(ResponseGeocodingProperties const& value)
{
    m_Properties = value;
}

}
}
}
}

