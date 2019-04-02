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

import traveltimeplatform.models.RequestRangeFull
import traveltimeplatform.models.RequestTimeFilterProperty
import traveltimeplatform.models.RequestTransportation

/**
 * 
 * @param id 
 * @param departureLocationIds 
 * @param arrivalLocationId 
 * @param transportation 
 * @param travelTime 
 * @param arrivalTime 
 * @param properties 
 * @param range 
 */
data class RequestTimeFilterArrivalSearch (
    val id: kotlin.String,
    val departureLocationIds: kotlin.Array<kotlin.String>,
    val arrivalLocationId: kotlin.String,
    val transportation: RequestTransportation,
    val travelTime: kotlin.Int,
    val arrivalTime: java.time.LocalDateTime,
    val properties: kotlin.Array<RequestTimeFilterProperty>,
    val range: RequestRangeFull? = null
) {

}

