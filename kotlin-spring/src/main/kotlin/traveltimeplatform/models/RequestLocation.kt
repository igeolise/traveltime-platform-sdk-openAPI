package traveltimeplatform.models

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import traveltimeplatform.models.Coords
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param id 
 * @param coords 
 */
data class RequestLocation (

        @get:NotNull 
        @JsonProperty("id") val id: String,

        @get:NotNull 
        @JsonProperty("coords") val coords: Coords
) {

}

