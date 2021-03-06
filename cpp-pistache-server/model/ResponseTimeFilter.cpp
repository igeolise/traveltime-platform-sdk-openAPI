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


#include "ResponseTimeFilter.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilter::ResponseTimeFilter()
{
    
}

ResponseTimeFilter::~ResponseTimeFilter()
{
}

void ResponseTimeFilter::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeFilter& o)
{
    j = nlohmann::json();
    j["results"] = o.m_Results;
}

void from_json(const nlohmann::json& j, ResponseTimeFilter& o)
{
    j.at("results").get_to(o.m_Results);
}

std::vector<ResponseTimeFilterResult>& ResponseTimeFilter::getResults()
{
    return m_Results;
}
void ResponseTimeFilter::setResults(std::vector<ResponseTimeFilterResult> const& value)
{
    m_Results = value;
}

}
}
}
}

