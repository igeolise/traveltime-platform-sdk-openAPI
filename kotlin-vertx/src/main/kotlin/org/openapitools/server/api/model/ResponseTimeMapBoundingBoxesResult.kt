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

import org.openapitools.server.api.model.ResponseBoundingBox
import org.openapitools.server.api.model.ResponseTimeMapProperties

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param searchId 
 * @param boundingBoxes 
 * @param properties 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseTimeMapBoundingBoxesResult (
    @SerializedName("searchId") private val _searchId: kotlin.String?,
    @SerializedName("boundingBoxes") private val _boundingBoxes: kotlin.Array<ResponseBoundingBox>?,
    @SerializedName("properties") private val _properties: ResponseTimeMapProperties?
) {

        val searchId get() = _searchId ?: throw IllegalArgumentException("searchId is required")
                    
        val boundingBoxes get() = _boundingBoxes ?: throw IllegalArgumentException("boundingBoxes is required")
                    
        val properties get() = _properties ?: throw IllegalArgumentException("properties is required")
                    
}

