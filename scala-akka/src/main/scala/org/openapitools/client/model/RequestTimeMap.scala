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

case class RequestTimeMap (
  departureSearches: Option[Seq[RequestTimeMapDepartureSearch]] = None,
  arrivalSearches: Option[Seq[RequestTimeMapArrivalSearch]] = None,
  unions: Option[Seq[RequestUnionOnIntersection]] = None,
  intersections: Option[Seq[RequestUnionOnIntersection]] = None
) extends ApiModel


