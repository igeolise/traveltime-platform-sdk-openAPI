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
package org.openapitools.server.api.model

import org.openapitools.server.api.model.RequestArrivalTimePeriod
import org.openapitools.server.api.model.RequestTimeFilterFastProperty
import org.openapitools.server.api.model.RequestTransportationFast

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
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
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class RequestTimeFilterFastArrivalOneToManySearch (
    @SerializedName("id") private val _id: kotlin.String?,
    @SerializedName("departureLocationId") private val _departureLocationId: kotlin.String?,
    @SerializedName("arrivalLocationIds") private val _arrivalLocationIds: kotlin.Array<kotlin.String>?,
    @SerializedName("transportation") private val _transportation: RequestTransportationFast?,
    @SerializedName("travelTime") private val _travelTime: kotlin.Int?,
    @SerializedName("arrivalTimePeriod") private val _arrivalTimePeriod: RequestArrivalTimePeriod?,
    @SerializedName("properties") private val _properties: kotlin.Array<RequestTimeFilterFastProperty>?
) {

        val id get() = _id ?: throw IllegalArgumentException("id is required")
                    
        val departureLocationId get() = _departureLocationId ?: throw IllegalArgumentException("departureLocationId is required")
                    
        val arrivalLocationIds get() = _arrivalLocationIds ?: throw IllegalArgumentException("arrivalLocationIds is required")
                    
        val transportation get() = _transportation ?: throw IllegalArgumentException("transportation is required")
                    
        val travelTime get() = _travelTime ?: throw IllegalArgumentException("travelTime is required")
                    
        val arrivalTimePeriod get() = _arrivalTimePeriod ?: throw IllegalArgumentException("arrivalTimePeriod is required")
                    
        val properties get() = _properties ?: throw IllegalArgumentException("properties is required")
                    
}
