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

import org.openapitools.server.api.model.ResponseMapInfoFeaturesPublicTransport

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param fares 
 * @param postcodes 
 * @param publicTransport 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseMapInfoFeatures (
    @SerializedName("fares") private val _fares: kotlin.Boolean?,
    @SerializedName("postcodes") private val _postcodes: kotlin.Boolean?,
    val publicTransport: ResponseMapInfoFeaturesPublicTransport? = null
) {

        val fares get() = _fares ?: throw IllegalArgumentException("fares is required")
                    
        val postcodes get() = _postcodes ?: throw IllegalArgumentException("postcodes is required")
                    
}

