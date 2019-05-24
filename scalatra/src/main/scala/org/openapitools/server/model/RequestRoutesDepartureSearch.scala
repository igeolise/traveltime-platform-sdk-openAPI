/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 */

package org.openapitools.server.model
import java.util.Date

case class RequestRoutesDepartureSearch(
  id: String,

  departureUnderscorelocationUnderscoreid: String,

  arrivalUnderscorelocationUnderscoreids: List[String],

  transportation: RequestTransportation,

  departureUnderscoretime: Date,

  properties: List[RequestRoutesProperty],

  range: Option[RequestRangeFull]

 )
