/**
* TravelTime API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.2.1
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.server.models

import org.openapitools.server.models.ResponseFareTicket
import org.openapitools.server.models.ResponseFaresBreakdownItem

/**
 * 
 * @param breakdown 
 * @param ticketsTotal 
 */
data class ResponseFares (
    val breakdown: kotlin.Array<ResponseFaresBreakdownItem>,
    val ticketsTotal: kotlin.Array<ResponseFareTicket>
) 

