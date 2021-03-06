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


#include "ResponseTimeFilterPostcode.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterPostcode::ResponseTimeFilterPostcode()
{
    
}

ResponseTimeFilterPostcode::~ResponseTimeFilterPostcode()
{
}

void ResponseTimeFilterPostcode::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilterPostcode& o)
{
    j = nlohmann::json();
    j["code"] = o.m_Code;
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json& j, ResponseTimeFilterPostcode& o)
{
    j.at("code").get_to(o.m_Code);
    j.at("properties").get_to(o.m_Properties);
}

String ResponseTimeFilterPostcode::getCode() const
{
    return m_Code;
}
void ResponseTimeFilterPostcode::setCode(String const& value)
{
    m_Code = value;
}
std::vector<ResponseTimeFilterPostcodesProperties>& ResponseTimeFilterPostcode::getProperties()
{
    return m_Properties;
}
void ResponseTimeFilterPostcode::setProperties(std::vector<ResponseTimeFilterPostcodesProperties> const& value)
{
    m_Properties = value;
}

}
}
}
}

