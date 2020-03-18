/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ResponseTimeFilterPostcodeSector.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterPostcodeSector::ResponseTimeFilterPostcodeSector()
{
    
}

ResponseTimeFilterPostcodeSector::~ResponseTimeFilterPostcodeSector()
{
}

void ResponseTimeFilterPostcodeSector::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterPostcodeSector& o)
{
    j = nlohmann::json();
    j["code"] = o.m_Code;
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterPostcodeSector& o)
{
    j.at("code").get_to(o.m_Code);
    j.at("properties").get_to(o.m_Properties);
}

String ResponseTimeFilterPostcodeSector::getCode() const
{
    return m_Code;
}
void ResponseTimeFilterPostcodeSector::setCode(String const& value)
{
    m_Code = value;
}
ResponseTimeFilterPostcodeSectorProperties ResponseTimeFilterPostcodeSector::getProperties() const
{
    return m_Properties;
}
void ResponseTimeFilterPostcodeSector::setProperties(ResponseTimeFilterPostcodeSectorProperties const& value)
{
    m_Properties = value;
}

}
}
}
}

