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

case class ResponseRoutePart (
                  id: String,
                  `type`:  Option[ResponseRoutePart&#x60;type&#x60;Enum.ResponseRoutePart&#x60;type&#x60;Enum],
                  mode: ResponseTransportationMode,
                  directions: String,
                  distance: Int,
                  travelTime: Int,
                  coords: Seq[Coords],
                  direction: Option[String],
                  road: Option[String],
                  turn: Option[String],
                  line: Option[String],
                  departureStation: Option[String],
                  arrivalStation: Option[String],
                  departsAt: Option[String],
                  arrivesAt: Option[String],
                  numStops: Option[Int]
)

object ResponseRoutePart {
implicit val format: Format[ResponseRoutePart] = Json.format
}

object ResponseRoutePart&#x60;type&#x60;Enum extends Enumeration {
  val   basic, start_end, road, public_transport = Value
  type ResponseRoutePart&#x60;type&#x60;Enum = Value
  implicit val format: Format[Value] = Format(Reads.enumNameReads(this), Writes.enumNameWrites[ResponseRoutePart&#x60;type&#x60;Enum.type])
}
