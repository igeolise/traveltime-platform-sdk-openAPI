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

case class ResponseError (
  httpStatus: Option[Int] = None,
  errorCode: Option[Int] = None,
  description: Option[String] = None,
  documentationLink: Option[String] = None,
  additionalInfo: Option[Map[String, Seq[String]]] = None
) extends ApiModel


