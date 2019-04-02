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


#include "ResponseMapInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseMapInfo::ResponseMapInfo()
{
    
}

ResponseMapInfo::~ResponseMapInfo()
{
}

void ResponseMapInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json ResponseMapInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    {
        nlohmann::json jsonArray;
        for( auto& item : m_Maps )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["maps"] = jsonArray;
        
    }
    

    return val;
}

void ResponseMapInfo::fromJson(const nlohmann::json& val)
{
    {
        m_Maps.clear();
                    for( auto& item : val["maps"] )
            {
                
                if(item.is_null())
                {
                    m_Maps.push_back( ResponseMapInfoMap() );
                }
                else
                {
                    ResponseMapInfoMap newItem;
                    newItem.fromJson(item);
                    m_Maps.push_back( newItem );
                }
                
            }
    }
    
}


std::vector<ResponseMapInfoMap>& ResponseMapInfo::getMaps()
{
    return m_Maps;
}

}
}
}
}

