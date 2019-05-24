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
import traveltimeplatform.models.RequestTimeFilterPostcodeDistrictsProperty
import traveltimeplatform.models.RequestTransportation

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
data class RequestTimeFilterPostcodeDistrictsArrivalSearch (
    val id: kotlin.String,
    val transportation: RequestTransportation,
    val travelTime: kotlin.Int,
    val arrivalTime: java.time.LocalDateTime,
    val reachablePostcodesThreshold: kotlin.Double,
    val properties: kotlin.Array<RequestTimeFilterPostcodeDistrictsProperty>,
    val range: RequestRangeFull? = null
) {

}

