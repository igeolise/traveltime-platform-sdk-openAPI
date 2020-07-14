package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseTimeFilterPostcodeSectorProperties.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-07-14T11:29:17.777Z[Etc/UTC]")
case class ResponseTimeFilterPostcodeSectorProperties(
  travelTimeReachable: Option[ResponseTravelTimeStatistics],
  travelTimeAll: Option[ResponseTravelTimeStatistics],
  coverage: Option[Double]
)

object ResponseTimeFilterPostcodeSectorProperties {
  implicit lazy val responseTimeFilterPostcodeSectorPropertiesJsonFormat: Format[ResponseTimeFilterPostcodeSectorProperties] = Json.format[ResponseTimeFilterPostcodeSectorProperties]
}

