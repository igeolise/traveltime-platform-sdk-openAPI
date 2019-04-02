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


#include "ResponseGeocodingGeometry.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ResponseGeocodingGeometry::ResponseGeocodingGeometry()
{
    m_Type = "";
    
}

ResponseGeocodingGeometry::~ResponseGeocodingGeometry()
{
}

void ResponseGeocodingGeometry::validate()
{
    // TODO: implement validation
}

nlohmann::json ResponseGeocodingGeometry::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["type"] = ModelBase::toJson(m_Type);
    {
        nlohmann::json jsonArray;
        for( auto& item : m_Coordinates )
        {
            jsonArray.push_back(ModelBase::toJson(item));
        }
        val["coordinates"] = jsonArray;
        
    }
    

    return val;
}

void ResponseGeocodingGeometry::fromJson(const nlohmann::json& val)
{
    setType(val.at("type"));
    {
        m_Coordinates.clear();
                    for( auto& item : val["coordinates"] )
            {
                m_Coordinates.push_back(item);
                
            }
    }
    
}


std::string ResponseGeocodingGeometry::getType() const
{
    return m_Type;
}
void ResponseGeocodingGeometry::setType(std::string const& value)
{
    m_Type = value;
    
}
std::vector<double>& ResponseGeocodingGeometry::getCoordinates()
{
    return m_Coordinates;
}

}
}
}
}

