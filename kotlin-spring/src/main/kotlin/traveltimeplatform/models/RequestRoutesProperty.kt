package traveltimeplatform.models

import java.util.Objects
import com.fasterxml.jackson.annotation.JsonValue
import javax.validation.constraints.DecimalMax
import javax.validation.constraints.DecimalMin
import javax.validation.constraints.Max
import javax.validation.constraints.Min
import javax.validation.constraints.NotNull
import javax.validation.constraints.Pattern
import javax.validation.constraints.Size

/**
* 
* Values: travelTime,distance,fares,route
*/
enum class RequestRoutesProperty(val value: String) {

    travelTime("travel_time"),

    distance("distance"),

    fares("fares"),

    route("route");

}

