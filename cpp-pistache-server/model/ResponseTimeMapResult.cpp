/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* OpenAPI spec version: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "ResponseTimeMapResult.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeMapResult::ResponseTimeMapResult()
{
    m_Search_id = "";
    
}

ResponseTimeMapResult::~ResponseTimeMapResult()
{
}

void ResponseTimeMapResult::validate()
{
    // TODO: implement validation
}

nlohmann::json ResponseTimeMapResult::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["search_id"] = ModelBase::toJson(m_Search_id);
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Shapes )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["shapes"] = jsonArray;
        
    }
    val["properties"] = ModelBase::toJson(m_Properties);
    

    return val;
}

void ResponseTimeMapResult::fromJson(const nlohmann::json& val)
{
    setSearchId(val.at("search_id"));
    {
        m_Shapes.clear();
                    for( auto& item : val["shapes"] )
            {
                
                if(item.is_null())
                {
                    m_Shapes.push_back( ResponseShape() );
                }
                else
                {
                    ResponseShape newItem;
                    newItem.fromJson(item);
                    m_Shapes.push_back( newItem );
                }
                
            }
    }
    
}


std::string ResponseTimeMapResult::getSearchId() const
{
    return m_Search_id;
}
void ResponseTimeMapResult::setSearchId(std::string const& value)
{
    m_Search_id = value;
    
}
std::vector<ResponseShape>& ResponseTimeMapResult::getShapes()
{
    return m_Shapes;
}
ResponseTimeMapProperties ResponseTimeMapResult::getProperties() const
{
    return m_Properties;
}
void ResponseTimeMapResult::setProperties(ResponseTimeMapProperties const& value)
{
    m_Properties = value;
    
}

}
}
}
}

