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


#include "ResponseGeocoding.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseGeocoding::ResponseGeocoding()
{
    m_Type = "";
    
}

ResponseGeocoding::~ResponseGeocoding()
{
}

void ResponseGeocoding::validate()
{
    // TODO: implement validation
}

nlohmann::json ResponseGeocoding::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["type"] = ModelBase::toJson(m_Type);
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Features )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["features"] = jsonArray;
        
    }
    

    return val;
}

void ResponseGeocoding::fromJson(const nlohmann::json& val)
{
    setType(val.at("type"));
    {
        m_Features.clear();
                    for( auto& item : val["features"] )
            {
                
                if(item.is_null())
                {
                    m_Features.push_back( ResponseGeocodingGeoJsonFeature() );
                }
                else
                {
                    ResponseGeocodingGeoJsonFeature newItem;
                    newItem.fromJson(item);
                    m_Features.push_back( newItem );
                }
                
            }
    }
    
}


std::string ResponseGeocoding::getType() const
{
    return m_Type;
}
void ResponseGeocoding::setType(std::string const& value)
{
    m_Type = value;
    
}
std::vector<ResponseGeocodingGeoJsonFeature>& ResponseGeocoding::getFeatures()
{
    return m_Features;
}

}
}
}
}

