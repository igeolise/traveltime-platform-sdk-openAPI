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
package traveltimeplatform.models

import traveltimeplatform.models.ResponseFareTicket
import traveltimeplatform.models.ResponseTransportationMode

/**
 * 
 * @param modes 
 * @param routePartIds 
 * @param tickets 
 */
data class ResponseFaresBreakdownItem (
    val modes: kotlin.Array<ResponseTransportationMode>,
    val routePartIds: kotlin.Array<kotlin.Int>,
    val tickets: kotlin.Array<ResponseFareTicket>
) {

}

