package org.openapitools.server.model

import java.time.OffsetDateTime

/**
 * @param id  for example: ''null''
 * @param coords  for example: ''null''
 * @param transportation  for example: ''null''
 * @param travelTime  for example: ''null''
 * @param departureTime  for example: ''null''
 * @param properties  for example: ''null''
 * @param range  for example: ''null''
*/
final case class RequestTimeMapDepartureSearch (
  id: String,
  coords: Coords,
  transportation: RequestTransportation,
  travelTime: Int,
  departureTime: OffsetDateTime,
  properties: Option[Seq[RequestTimeMapProperty]],
  range: Option[RequestRangeNoMaxResults]
)

