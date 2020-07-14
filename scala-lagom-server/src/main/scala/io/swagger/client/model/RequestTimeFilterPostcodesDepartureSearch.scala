/**
 * TravelTime API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package io.swagger.client.model
import play.api.libs.json._
import java.time.OffsetDateTime

case class RequestTimeFilterPostcodesDepartureSearch (
                  id: String,
                  transportation: RequestTransportation,
                  travelTime: Int,
                  departureTime: OffsetDateTime,
                  properties: Seq[RequestTimeFilterPostcodesProperty],
                  range: Option[RequestRangeFull]
)

object RequestTimeFilterPostcodesDepartureSearch {
implicit val format: Format[RequestTimeFilterPostcodesDepartureSearch] = Json.format
}

