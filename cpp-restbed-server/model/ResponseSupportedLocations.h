/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseSupportedLocations.h
 *
 * 
 */

#ifndef ResponseSupportedLocations_H_
#define ResponseSupportedLocations_H_



#include <string>
#include <vector>
#include "ResponseSupportedLocation.h"
#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseSupportedLocations 
{
public:
    ResponseSupportedLocations();
    virtual ~ResponseSupportedLocations();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseSupportedLocations members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseSupportedLocation>> getLocations() const;
    void setLocations(std::vector<std::shared_ptr<ResponseSupportedLocation>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getUnsupportedLocations() const;
    void setUnsupportedLocations(std::vector<std::string> value);
protected:
    std::vector<std::shared_ptr<ResponseSupportedLocation>> m_Locations;
    std::vector<std::string> m_Unsupported_locations;
};

}
}
}
}

#endif /* ResponseSupportedLocations_H_ */
