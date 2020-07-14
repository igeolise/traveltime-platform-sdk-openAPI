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
 * @param enabled 
 * @param width 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class RequestRangeNoMaxResults (
    @SerializedName("enabled") private val _enabled: kotlin.Boolean?,
    @SerializedName("width") private val _width: kotlin.Int?
) {

        val enabled get() = _enabled ?: throw IllegalArgumentException("enabled is required")
                    
        val width get() = _width ?: throw IllegalArgumentException("width is required")
                    
}

