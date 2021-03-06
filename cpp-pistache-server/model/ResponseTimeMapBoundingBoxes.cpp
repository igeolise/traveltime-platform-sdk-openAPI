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


#include "ResponseTimeMapBoundingBoxes.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeMapBoundingBoxes::ResponseTimeMapBoundingBoxes()
{
    
}

ResponseTimeMapBoundingBoxes::~ResponseTimeMapBoundingBoxes()
{
}

void ResponseTimeMapBoundingBoxes::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeMapBoundingBoxes& o)
{
    j = nlohmann::json();
    j["results"] = o.m_Results;
}

void from_json(const nlohmann::json& j, ResponseTimeMapBoundingBoxes& o)
{
    j.at("results").get_to(o.m_Results);
}

std::vector<ResponseTimeMapBoundingBoxesResult>& ResponseTimeMapBoundingBoxes::getResults()
{
    return m_Results;
}
void ResponseTimeMapBoundingBoxes::setResults(std::vector<ResponseTimeMapBoundingBoxesResult> const& value)
{
    m_Results = value;
}

}
}
}
}

