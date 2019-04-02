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

case class RequestTimeFilterFastArrivalManyToOneSearch(
  id: String,

  arrivalUnderscorelocationUnderscoreid: String,

  departureUnderscorelocationUnderscoreids: List[String],

  transportation: RequestTransportationFast,

  travelUnderscoretime: Int,

  arrivalUnderscoretimeUnderscoreperiod: RequestArrivalTimePeriod,

  properties: List[RequestTimeFilterFastProperty]

 )
