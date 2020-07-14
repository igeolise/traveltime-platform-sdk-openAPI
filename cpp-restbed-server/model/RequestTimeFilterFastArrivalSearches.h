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
 * RequestTimeFilterFastArrivalSearches.h
 *
 * 
 */

#ifndef RequestTimeFilterFastArrivalSearches_H_
#define RequestTimeFilterFastArrivalSearches_H_



#include "RequestTimeFilterFastArrivalManyToOneSearch.h"
#include "RequestTimeFilterFastArrivalOneToManySearch.h"
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
class  RequestTimeFilterFastArrivalSearches 
{
public:
    RequestTimeFilterFastArrivalSearches();
    virtual ~RequestTimeFilterFastArrivalSearches();
    
    std::string toJsonString(bool prettyJson = false);
    void fromJsonString(std::string const& jsonString);
    boost::property_tree::ptree toPropertyTree();
    void fromPropertyTree(boost::property_tree::ptree const& pt);

    /////////////////////////////////////////////
    /// RequestTimeFilterFastArrivalSearches members

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> getManyToOne() const;
    void setManyToOne(std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> value);

    /// <summary>
    /// 
    /// </summary>
    std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> getOneToMany() const;
    void setOneToMany(std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> value);
protected:
    std::vector<std::shared_ptr<RequestTimeFilterFastArrivalManyToOneSearch>> m_Many_to_one;
    std::vector<std::shared_ptr<RequestTimeFilterFastArrivalOneToManySearch>> m_One_to_many;
};

}
}
}
}

#endif /* RequestTimeFilterFastArrivalSearches_H_ */
