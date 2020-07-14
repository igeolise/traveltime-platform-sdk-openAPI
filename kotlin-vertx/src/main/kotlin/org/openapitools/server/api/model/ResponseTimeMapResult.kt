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

import org.openapitools.server.api.model.ResponseShape
import org.openapitools.server.api.model.ResponseTimeMapProperties

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param searchId 
 * @param shapes 
 * @param properties 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseTimeMapResult (
    @SerializedName("searchId") private val _searchId: kotlin.String?,
    @SerializedName("shapes") private val _shapes: kotlin.Array<ResponseShape>?,
    @SerializedName("properties") private val _properties: ResponseTimeMapProperties?
) {

        val searchId get() = _searchId ?: throw IllegalArgumentException("searchId is required")
                    
        val shapes get() = _shapes ?: throw IllegalArgumentException("shapes is required")
                    
        val properties get() = _properties ?: throw IllegalArgumentException("properties is required")
                    
}
