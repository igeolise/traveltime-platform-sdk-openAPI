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
 * ResponseRoutesResult.h
 *
 * 
 */

#ifndef ResponseRoutesResult_H_
#define ResponseRoutesResult_H_



#include "ResponseRoutesLocation.h"
#include <string>
#include <vector>
#include <memory>
#include <boost/property_tree/ptree.hpp>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseRoutesResult 
{
public:
    ResponseRoutesResult();
    virtual ~ResponseRoutesResult();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseRoutesResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseRoutesLocation>> getLocations() const;
    void setLocations(std::vector<std::shared_ptr<ResponseRoutesLocation>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::string> getUnreachable() const;
    void setUnreachable(std::vector<std::string> value);
protected:
    std::string m_Search_id;
    std::vector<std::shared_ptr<ResponseRoutesLocation>> m_Locations;
    std::vector<std::string> m_Unreachable;
};

}
}
}
}

#endif /* ResponseRoutesResult_H_ */
