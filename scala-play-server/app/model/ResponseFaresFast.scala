package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for ResponseFaresFast.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-07-14T11:29:17.777Z[Etc/UTC]")
case class ResponseFaresFast(
  ticketsTotal: List[ResponseFareTicket]
)

object ResponseFaresFast {
  implicit lazy val responseFaresFastJsonFormat: Format[ResponseFaresFast] = Json.format[ResponseFaresFast]
}

