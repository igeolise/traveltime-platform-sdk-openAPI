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

import org.openapitools.server.models.ResponseDistanceBreakdownItem
import org.openapitools.server.models.ResponseFares
import org.openapitools.server.models.ResponseRoute

/**
 * 
 * @param travelTime 
 * @param distance 
 * @param distanceBreakdown 
 * @param fares 
 * @param route 
 */
data class ResponseTimeFilterProperties (
    val travelTime: kotlin.Int? = null,
    val distance: kotlin.Int? = null,
    val distanceBreakdown: kotlin.Array<ResponseDistanceBreakdownItem>? = null,
    val fares: ResponseFares? = null,
    val route: ResponseRoute? = null
) 

