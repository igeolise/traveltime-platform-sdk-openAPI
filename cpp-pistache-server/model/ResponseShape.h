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
/*
 * ResponseShape.h
 *
 * 
 */

#ifndef ResponseShape_H_
#define ResponseShape_H_


#include "ModelBase.h"

#include "Coords.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseShape
    : public ModelBase
{
public:
    ResponseShape();
    virtual ~ResponseShape();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ResponseShape members

    /// <summary>
    /// 
    /// </summary>
    std::vector<Coords>& getShell();
        /// <summary>
    /// 
    /// </summary>
    std::vector<std::vector<Coords>>& getHoles();
    
protected:
    std::vector<Coords> m_Shell;

    std::vector<std::vector<Coords>> m_Holes;

};

}
}
}
}

#endif /* ResponseShape_H_ */
