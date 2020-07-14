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


#include "ResponseRoutes.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseRoutes::ResponseRoutes()
{
    
}

ResponseRoutes::~ResponseRoutes()
{
}

void ResponseRoutes::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseRoutes& o)
{
    j = nlohmann::json();
    j["results"] = o.m_Results;
}

void from_json(const nlohmann::json& j, ResponseRoutes& o)
{
    j.at("results").get_to(o.m_Results);
}

std::vector<ResponseRoutesResult>& ResponseRoutes::getResults()
{
    return m_Results;
}
void ResponseRoutes::setResults(std::vector<ResponseRoutesResult> const& value)
{
    m_Results = value;
}

}
}
}
}

