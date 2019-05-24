package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseRoutesResult.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2019-05-24T09:07:50.761Z[Etc/UTC]")
case class ResponseRoutesResult(
  searchUnderscoreid: String,
  locations: List[ResponseRoutesLocation],
  unreachable: List[String]
)

object ResponseRoutesResult {
  implicit lazy val responseRoutesResultJsonFormat: Format[ResponseRoutesResult] = Json.format[ResponseRoutesResult]
}
