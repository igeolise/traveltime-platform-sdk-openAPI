/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package io.swagger.client.model
import play.api.libs.json._
import java.time.OffsetDateTime

case class RequestTimeFilterPostcodeSectorsArrivalSearch (
                  id: String,
                  transportation: RequestTransportation,
                  travelTime: Int,
                  arrivalTime: OffsetDateTime,
                  reachablePostcodesThreshold: Double,
                  properties: Seq[RequestTimeFilterPostcodeSectorsProperty],
                  range: Option[RequestRangeFull]
)

object RequestTimeFilterPostcodeSectorsArrivalSearch {
implicit val format: Format[RequestTimeFilterPostcodeSectorsArrivalSearch] = Json.format
}

