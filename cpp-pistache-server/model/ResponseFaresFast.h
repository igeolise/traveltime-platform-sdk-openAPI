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
 * ResponseFaresFast.h
 *
 * 
 */

#ifndef ResponseFaresFast_H_
#define ResponseFaresFast_H_


#include "ModelBase.h"

#include "ResponseFareTicket.h"
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ResponseFaresFast
    : public ModelBase
{
public:
    ResponseFaresFast();
    virtual ~ResponseFaresFast();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ResponseFaresFast members

    /// <summary>
    /// 
    /// </summary>
    std::vector<ResponseFareTicket>& getTicketsTotal();
    
protected:
    std::vector<ResponseFareTicket> m_Tickets_total;

};

}
}
}
}

#endif /* ResponseFaresFast_H_ */
