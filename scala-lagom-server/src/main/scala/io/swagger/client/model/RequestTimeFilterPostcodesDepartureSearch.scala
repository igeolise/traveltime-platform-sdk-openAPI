/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package io.swagger.client.model
import play.api.libs.json._
import org.joda.time.DateTime

case class RequestTimeFilterPostcodesDepartureSearch (
                  id: String,
                  transportation: RequestTransportation,
                  travelTime: Int,
                  departureTime: DateTime,
                  properties: Seq[RequestTimeFilterPostcodesProperty],
                  range: Option[RequestRangeFull]
)

object RequestTimeFilterPostcodesDepartureSearch {
implicit val format: Format[RequestTimeFilterPostcodesDepartureSearch] = Json.format
}

