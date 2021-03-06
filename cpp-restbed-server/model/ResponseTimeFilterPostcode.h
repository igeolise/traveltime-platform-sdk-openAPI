/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 5.0.0-SNAPSHOT.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTimeFilterPostcode.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcode_H_
#define ResponseTimeFilterPostcode_H_



#include "ResponseTimeFilterPostcodesProperties.h"
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
class  ResponseTimeFilterPostcode 
{
public:
    ResponseTimeFilterPostcode();
    virtual ~ResponseTimeFilterPostcode();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcode members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<String> getCode() const;
    void setCode(std::shared_ptr<String> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>> getProperties() const;
    void setProperties(std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>> value);
protected:
    std::shared_ptr<String> m_Code;
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodesProperties>> m_Properties;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcode_H_ */
