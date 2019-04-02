/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model
import java.util.Date

case class RequestTimeFilterArrivalSearch(
  id: String,

  departureUnderscorelocationUnderscoreids: List[String],

  arrivalUnderscorelocationUnderscoreid: String,

  transportation: RequestTransportation,

  travelUnderscoretime: Int,

  arrivalUnderscoretime: Date,

  properties: List[RequestTimeFilterProperty],

  range: Option[RequestRangeFull]

 )
