/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 3.3.4.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * ResponseTimeFilterPostcodeSectors.h
 *
 * 
 */

#ifndef ResponseTimeFilterPostcodeSectors_H_
#define ResponseTimeFilterPostcodeSectors_H_



#include "ResponseTimeFilterPostcodeSectorsResult.h"
#include <vector>
#include <memory>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseTimeFilterPostcodeSectors
{
public:
    ResponseTimeFilterPostcodeSectors();
    virtual ~ResponseTimeFilterPostcodeSectors();
    
    std::string toJsonString();
    void fromJsonString(std::string const& jsonString);

    /////////////////////////////////////////////
    /// ResponseTimeFilterPostcodeSectors members
    
    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>> getResults() const;
    void setResults(std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>> value);

protected:
    std::vector<std::shared_ptr<ResponseTimeFilterPostcodeSectorsResult>> m_Results;
};

}
}
}
}

#endif /* ResponseTimeFilterPostcodeSectors_H_ */
