package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseTimeFilterPostcodes.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class ResponseTimeFilterPostcodes(
  results: List[ResponseTimeFilterPostcodesResult]
)

object ResponseTimeFilterPostcodes {
  implicit lazy val responseTimeFilterPostcodesJsonFormat: Format[ResponseTimeFilterPostcodes] = Json.format[ResponseTimeFilterPostcodes]
}

