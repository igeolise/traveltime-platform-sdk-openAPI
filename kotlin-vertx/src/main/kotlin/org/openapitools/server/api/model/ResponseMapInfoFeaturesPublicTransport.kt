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
 * @param dateStart 
 * @param dateEnd 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseMapInfoFeaturesPublicTransport (
    @SerializedName("dateStart") private val _dateStart: java.time.LocalDateTime?,
    @SerializedName("dateEnd") private val _dateEnd: java.time.LocalDateTime?
) {

        val dateStart get() = _dateStart ?: throw IllegalArgumentException("dateStart is required")
                    
        val dateEnd get() = _dateEnd ?: throw IllegalArgumentException("dateEnd is required")
                    
}

