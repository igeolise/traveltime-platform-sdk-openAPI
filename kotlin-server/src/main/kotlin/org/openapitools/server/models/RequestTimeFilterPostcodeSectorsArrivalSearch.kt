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

import org.openapitools.server.models.RequestRangeFull
import org.openapitools.server.models.RequestTimeFilterPostcodeSectorsProperty
import org.openapitools.server.models.RequestTransportation

/**
 * 
 * @param id 
 * @param transportation 
 * @param travelTime 
 * @param arrivalTime 
 * @param reachablePostcodesThreshold 
 * @param properties 
 * @param range 
 */
data class RequestTimeFilterPostcodeSectorsArrivalSearch (
    val id: kotlin.String,
    val transportation: RequestTransportation,
    val travelTime: kotlin.Int,
    val arrivalTime: java.time.LocalDateTime,
    val reachablePostcodesThreshold: kotlin.Double,
    val properties: kotlin.Array<RequestTimeFilterPostcodeSectorsProperty>,
    val range: RequestRangeFull? = null
) 

