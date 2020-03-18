package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseTimeFilterResult.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-03-18T08:51:49.713Z[Etc/UTC]")
case class ResponseTimeFilterResult(
  searchId: String,
  locations: List[ResponseTimeFilterLocation],
  unreachable: List[String]
)

object ResponseTimeFilterResult {
  implicit lazy val responseTimeFilterResultJsonFormat: Format[ResponseTimeFilterResult] = Json.format[ResponseTimeFilterResult]
}

