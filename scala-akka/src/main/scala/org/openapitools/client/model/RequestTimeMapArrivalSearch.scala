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
package org.openapitools.client.model

import org.openapitools.client.core.ApiModel
import org.joda.time.DateTime
import java.util.UUID

case class RequestTimeMapArrivalSearch (
  id: String,
  coords: Coords,
  transportation: RequestTransportation,
  travelTime: Int,
  arrivalTime: DateTime,
  properties: Option[Seq[RequestTimeMapProperty]] = None,
  range: Option[RequestRangeNoMaxResults] = None
) extends ApiModel


