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
package org.openapitools.client.models

import org.openapitools.client.models.Coords
import org.openapitools.client.models.RequestRangeNoMaxResults
import org.openapitools.client.models.RequestTimeMapProperty
import org.openapitools.client.models.RequestTransportation

import com.squareup.moshi.Json

/**
 * 
 * @param id 
 * @param coords 
 * @param transportation 
 * @param travelTime 
 * @param departureTime 
 * @param properties 
 * @param range 
 */

data class RequestTimeMapDepartureSearch (
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "coords")
    val coords: Coords,
    @Json(name = "transportation")
    val transportation: RequestTransportation,
    @Json(name = "travel_time")
    val travelTime: kotlin.Int,
    @Json(name = "departure_time")
    val departureTime: java.time.OffsetDateTime,
    @Json(name = "properties")
    val properties: kotlin.collections.List<RequestTimeMapProperty>? = null,
    @Json(name = "range")
    val range: RequestRangeNoMaxResults? = null
)

