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
 * ResponseTimeFilterPostcodesResult.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodesResult_H_
#define ResponseTimeFilterPostcodesResult_H_



#include "ResponseTimeFilterPostcode.h"
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
class  ResponseTimeFilterPostcodesResult 
{
public:
    ResponseTimeFilterPostcodesResult();
    virtual ~ResponseTimeFilterPostcodesResult();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodesResult members

    /// <summary>
    /// 
    /// </summary>
    std::string getSearchId() const;
    void setSearchId(std::string value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcode>> getPostcodes() const;
    void setPostcodes(std::vector<std::shared_ptr<ResponseTimeFilterPostcode>> value);
protected:
    std::string m_Search_id;
    std::vector<std::shared_ptr<ResponseTimeFilterPostcode>> m_Postcodes;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcodesResult_H_ */
