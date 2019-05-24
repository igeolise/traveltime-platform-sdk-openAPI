package traveltimeplatform.models

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonProperty
import traveltimeplatform.models.ResponseTravelTimeStatistics
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
 * 
 * @param travelTimeReachable 
 * @param travelTimeAll 
 * @param coverage 
 */
data class ResponseTimeFilterPostcodeSectorProperties (

        @JsonProperty("travel_time_reachable") val travelTimeReachable: ResponseTravelTimeStatistics? = null,

        @JsonProperty("travel_time_all") val travelTimeAll: ResponseTravelTimeStatistics? = null,

        @JsonProperty("coverage") val coverage: Double? = null
) {

}

