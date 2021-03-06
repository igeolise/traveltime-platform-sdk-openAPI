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

import org.openapitools.server.api.model.Coords

        
import com.google.gson.annotations.SerializedName
import com.fasterxml.jackson.annotation.JsonIgnoreProperties
import com.fasterxml.jackson.annotation.JsonInclude
/**
 * 
 * @param shell 
 * @param holes 
 */
@JsonInclude(JsonInclude.Include.NON_NULL)
@JsonIgnoreProperties(ignoreUnknown = true)
data class ResponseShape (
    @SerializedName("shell") private val _shell: kotlin.Array<Coords>?,
    @SerializedName("holes") private val _holes: kotlin.Array<kotlin.Array<Coords>>?
) {

        val shell get() = _shell ?: throw IllegalArgumentException("shell is required")
                    
        val holes get() = _holes ?: throw IllegalArgumentException("holes is required")
                    
}

