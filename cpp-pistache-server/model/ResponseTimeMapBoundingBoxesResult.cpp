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


#include "ResponseTimeMapBoundingBoxesResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeMapBoundingBoxesResult::ResponseTimeMapBoundingBoxesResult()
{
    m_Search_id = "";
    
}

ResponseTimeMapBoundingBoxesResult::~ResponseTimeMapBoundingBoxesResult()
{
}

void ResponseTimeMapBoundingBoxesResult::validate()
{
    // TODO: implement validation
}

void to_json(nlohmann::json& j, const ResponseTimeMapBoundingBoxesResult& o)
{
    j = nlohmann::json();
    j["search_id"] = o.m_Search_id;
    j["bounding_boxes"] = o.m_Bounding_boxes;
    j["properties"] = o.m_Properties;
}

void from_json(const nlohmann::json& j, ResponseTimeMapBoundingBoxesResult& o)
{
    j.at("search_id").get_to(o.m_Search_id);
    j.at("bounding_boxes").get_to(o.m_Bounding_boxes);
    j.at("properties").get_to(o.m_Properties);
}

std::string ResponseTimeMapBoundingBoxesResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseTimeMapBoundingBoxesResult::setSearchId(std::string const& value)
{
    m_Search_id = value;
    
}
std::vector<ResponseBoundingBox>& ResponseTimeMapBoundingBoxesResult::getBoundingBoxes()
{
    return m_Bounding_boxes;
}
ResponseTimeMapProperties ResponseTimeMapBoundingBoxesResult::getProperties() const
{
    return m_Properties;
}
void ResponseTimeMapBoundingBoxesResult::setProperties(ResponseTimeMapProperties const& value)
{
    m_Properties = value;
    
}

}
}
}
}

