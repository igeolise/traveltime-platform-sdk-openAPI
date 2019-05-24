package model

import play.api.libs.json._
import java.time.OffsetDateTime

/**
  * Represents the Swagger definition for RequestTimeFilterPostcodeDistrictsDepartureSearch.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2019-05-24T09:07:50.761Z[Etc/UTC]")
case class RequestTimeFilterPostcodeDistrictsDepartureSearch(
  id: String,
  transportation: RequestTransportation,
  travelUnderscoretime: Int,
  departureUnderscoretime: OffsetDateTime,
  reachableUnderscorepostcodesUnderscorethreshold: Double,
  properties: List[RequestTimeFilterPostcodeDistrictsProperty],
  range: Option[RequestRangeFull]
)

object RequestTimeFilterPostcodeDistrictsDepartureSearch {
  implicit lazy val requestTimeFilterPostcodeDistrictsDepartureSearchJsonFormat: Format[RequestTimeFilterPostcodeDistrictsDepartureSearch] = Json.format[RequestTimeFilterPostcodeDistrictsDepartureSearch]
}

