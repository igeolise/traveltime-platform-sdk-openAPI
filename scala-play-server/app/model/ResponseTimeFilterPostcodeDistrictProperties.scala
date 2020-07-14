package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseTimeFilterPostcodeDistrictProperties.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-07-14T11:29:17.777Z[Etc/UTC]")
case class ResponseTimeFilterPostcodeDistrictProperties(
  travelTimeReachable: Option[ResponseTravelTimeStatistics],
  travelTimeAll: Option[ResponseTravelTimeStatistics],
  coverage: Option[Double]
)

object ResponseTimeFilterPostcodeDistrictProperties {
  implicit lazy val responseTimeFilterPostcodeDistrictPropertiesJsonFormat: Format[ResponseTimeFilterPostcodeDistrictProperties] = Json.format[ResponseTimeFilterPostcodeDistrictProperties]
}

