package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.ResponseTimeFilterFastLocation
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param searchId 
 * @param locations 
 * @param unreachable 
 */
data class ResponseTimeFilterFastResult(

    @get:NotNull 
    @field:JsonProperty("search_id") val searchId: kotlin.String,

    @get:NotNull 
    @field:JsonProperty("locations") val locations: kotlin.collections.List<ResponseTimeFilterFastLocation>,

    @get:NotNull 
    @field:JsonProperty("unreachable") val unreachable: kotlin.collections.List<kotlin.String>
) {

}

