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
package traveltimeplatform.models

import traveltimeplatform.models.RequestRangeFull
import traveltimeplatform.models.RequestTimeFilterPostcodesProperty
import traveltimeplatform.models.RequestTransportation

import com.squareup.moshi.Json
/**
 * 
 * @param id 
 * @param transportation 
 * @param travelTime 
 * @param arrivalTime 
 * @param properties 
 * @param range 
 */
data class RequestTimeFilterPostcodesArrivalSearch (
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "transportation")
    val transportation: RequestTransportation,
    @Json(name = "travel_time")
    val travelTime: kotlin.Int,
    @Json(name = "arrival_time")
    val arrivalTime: java.time.LocalDateTime,
    @Json(name = "properties")
    val properties: kotlin.Array<RequestTimeFilterPostcodesProperty>,
    @Json(name = "range")
    val range: RequestRangeFull? = null
) {

}

