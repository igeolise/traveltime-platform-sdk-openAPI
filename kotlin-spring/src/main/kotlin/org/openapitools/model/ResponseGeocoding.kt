package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.ResponseGeocodingGeoJsonFeature
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param type 
 * @param features 
 */
data class ResponseGeocoding(

    @get:NotNull 
    @field:JsonProperty("type") val type: kotlin.String,

    @get:NotNull 
    @field:JsonProperty("features") val features: kotlin.collections.List<ResponseGeocodingGeoJsonFeature>
) {

}

