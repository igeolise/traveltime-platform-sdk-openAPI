package org.openapitools.model

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import org.openapitools.model.ResponseMapInfoFeatures
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param name 
 * @param features 
 */
data class ResponseMapInfoMap(

    @get:NotNull 
    @field:JsonProperty("name") val name: kotlin.String,

    @get:NotNull 
    @field:JsonProperty("features") val features: ResponseMapInfoFeatures
) {

}

