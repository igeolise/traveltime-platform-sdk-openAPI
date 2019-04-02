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


#include "ResponseTimeFilterFastLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseTimeFilterFastLocation::ResponseTimeFilterFastLocation()
{
    m_Id = "";
    
}

ResponseTimeFilterFastLocation::~ResponseTimeFilterFastLocation()
{
}

void ResponseTimeFilterFastLocation::validate()
{
    // TODO: implement validation
}

nlohmann::json ResponseTimeFilterFastLocation::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["id"] = ModelBase::toJson(m_Id);
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Properties )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["properties"] = jsonArray;
        
    }
    

    return val;
}

void ResponseTimeFilterFastLocation::fromJson(const nlohmann::json& val)
{
    setId(val.at("id"));
    {
        m_Properties.clear();
                    for( auto& item : val["properties"] )
            {
                
                if(item.is_null())
                {
                    m_Properties.push_back( ResponseTimeFilterFastProperties() );
                }
                else
                {
                    ResponseTimeFilterFastProperties newItem;
                    newItem.fromJson(item);
                    m_Properties.push_back( newItem );
                }
                
            }
    }
    
}


std::string ResponseTimeFilterFastLocation::getId() const
{
    return m_Id;
}
void ResponseTimeFilterFastLocation::setId(std::string const& value)
{
    m_Id = value;
    
}
std::vector<ResponseTimeFilterFastProperties>& ResponseTimeFilterFastLocation::getProperties()
{
    return m_Properties;
}

}
}
}
}

