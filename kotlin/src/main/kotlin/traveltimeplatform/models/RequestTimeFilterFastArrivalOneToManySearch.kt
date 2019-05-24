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

import traveltimeplatform.models.RequestArrivalTimePeriod
import traveltimeplatform.models.RequestTimeFilterFastProperty
import traveltimeplatform.models.RequestTransportationFast

import com.squareup.moshi.Json
/**
 * 
 * @param id 
 * @param departureLocationId 
 * @param arrivalLocationIds 
 * @param transportation 
 * @param travelTime 
 * @param arrivalTimePeriod 
 * @param properties 
 */
data class RequestTimeFilterFastArrivalOneToManySearch (
    @Json(name = "id")
    val id: kotlin.String,
    @Json(name = "departure_location_id")
    val departureLocationId: kotlin.String,
    @Json(name = "arrival_location_ids")
    val arrivalLocationIds: kotlin.Array<kotlin.String>,
    @Json(name = "transportation")
    val transportation: RequestTransportationFast,
    @Json(name = "travel_time")
    val travelTime: kotlin.Int,
    @Json(name = "arrival_time_period")
    val arrivalTimePeriod: RequestArrivalTimePeriod,
    @Json(name = "properties")
    val properties: kotlin.Array<RequestTimeFilterFastProperty>
) {

}

