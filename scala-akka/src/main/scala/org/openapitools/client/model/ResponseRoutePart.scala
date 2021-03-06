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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel

case class ResponseRoutePart (
  id: String,
  `type`: ResponseRoutePartEnums.`Type`,
  mode: ResponseTransportationMode,
  directions: String,
  distance: Int,
  travelTime: Int,
  coords: Seq[Coords],
  direction: Option[String] = None,
  road: Option[String] = None,
  turn: Option[String] = None,
  line: Option[String] = None,
  departureStation: Option[String] = None,
  arrivalStation: Option[String] = None,
  departsAt: Option[String] = None,
  arrivesAt: Option[String] = None,
  numStops: Option[Int] = None
) extends ApiModel

object ResponseRoutePartEnums {

  type `Type` = `Type`.Value
  object `Type` extends Enumeration {
    val Basic = Value("basic")
    val StartEnd = Value("start_end")
    val Road = Value("road")
    val PublicTransport = Value("public_transport")
  }

}

