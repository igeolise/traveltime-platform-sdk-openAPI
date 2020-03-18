/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package org.openapitools.client.models

import org.openapitools.client.models.RequestRangeFull
import org.openapitools.client.models.RequestTimeFilterPostcodeSectorsProperty
import org.openapitools.client.models.RequestTransportation

import com.squareup.moshi.Json
/**
 * 
 * @param id 
 * @param transportation 
 * @param travelTime 
 * @param departureTime 
 * @param reachablePostcodesThreshold 
 * @param properties 
 * @param range 
 */

data class RequestTimeFilterPostcodeSectorsDepartureSearch (
    @Json(name = "id")
    val id: kotlin.String
,
    @Json(name = "transportation")
    val transportation: RequestTransportation
,
    @Json(name = "travel_time")
    val travelTime: kotlin.Int
,
    @Json(name = "departure_time")
    val departureTime: java.time.OffsetDateTime
,
    @Json(name = "reachable_postcodes_threshold")
    val reachablePostcodesThreshold: kotlin.Double
,
    @Json(name = "properties")
    val properties: kotlin.Array<RequestTimeFilterPostcodeSectorsProperty>
,
    @Json(name = "range")
    val range: RequestRangeFull? = null

)

