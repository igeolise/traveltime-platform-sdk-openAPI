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

import org.openapitools.server.api.model.ResponseRoutesProperties

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param id 
 * @param properties 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseRoutesLocation (
    @SerializedName("id") private val _id: kotlin.String?,
    @SerializedName("properties") private val _properties: kotlin.Array<ResponseRoutesProperties>?
) {

        val id get() = _id ?: throw IllegalArgumentException("id is required")
                    
        val properties get() = _properties ?: throw IllegalArgumentException("properties is required")
                    
}

