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
 * ResponseFareTicket.h
 *
 * 
 */

#ifndef ResponseFareTicket_H_
#define ResponseFareTicket_H_



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
class  ResponseFareTicket 
{
public:
    ResponseFareTicket();
    virtual ~ResponseFareTicket();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// ResponseFareTicket members

    /// <summary>
    /// 
    /// </summary>
    std::string getType() const;
    void setType(std::string value);

    /// <summary>
    /// 
    /// </summary>
    double getPrice() const;
    void setPrice(double value);

    /// <summary>
    /// 
    /// </summary>
    std::string getCurrency() const;
    void setCurrency(std::string value);
protected:
    std::string m_Type;
    double m_Price;
    std::string m_Currency;
    std::vector<std::string> m_TypeEnum;
};

}
}
}
}

#endif /* ResponseFareTicket_H_ */
