package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param lat 
 * @param lng 
 */
data class Coords(

    @get:NotNull 
    @field:JsonProperty("lat") val lat: kotlin.Double,

    @get:NotNull 
    @field:JsonProperty("lng") val lng: kotlin.Double
) {

}

