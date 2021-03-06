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


        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param min 
 * @param max 
 * @param mean 
 * @param median 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseTravelTimeStatistics (
    @SerializedName("min") private val _min: kotlin.Int?,
    @SerializedName("max") private val _max: kotlin.Int?,
    @SerializedName("mean") private val _mean: kotlin.Int?,
    @SerializedName("median") private val _median: kotlin.Int?
) {

        val min get() = _min ?: throw IllegalArgumentException("min is required")
                    
        val max get() = _max ?: throw IllegalArgumentException("max is required")
                    
        val mean get() = _mean ?: throw IllegalArgumentException("mean is required")
                    
        val median get() = _median ?: throw IllegalArgumentException("median is required")
                    
}

