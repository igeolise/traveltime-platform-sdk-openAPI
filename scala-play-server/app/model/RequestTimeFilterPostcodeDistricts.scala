package model

import play.api.libs.json._

/**
  * Represents the Swagger definition for RequestTimeFilterPostcodeDistricts.
  */
@javax.annotation.Generated(value = Array("org.openapitools.codegen.languages.ScalaPlayFrameworkServerCodegen"), date = "2020-07-14T11:29:17.777Z[Etc/UTC]")
case class RequestTimeFilterPostcodeDistricts(
  departureSearches: Option[List[RequestTimeFilterPostcodeDistrictsDepartureSearch]],
  arrivalSearches: Option[List[RequestTimeFilterPostcodeDistrictsArrivalSearch]]
)

object RequestTimeFilterPostcodeDistricts {
  implicit lazy val requestTimeFilterPostcodeDistrictsJsonFormat: Format[RequestTimeFilterPostcodeDistricts] = Json.format[RequestTimeFilterPostcodeDistricts]
}

