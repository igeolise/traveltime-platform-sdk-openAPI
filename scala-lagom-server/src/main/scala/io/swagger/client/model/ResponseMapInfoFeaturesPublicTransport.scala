/**
 * TravelTime Platform API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@igeolise.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package io.swagger.client.model
import play.api.libs.json._
import org.joda.time.DateTime

case class ResponseMapInfoFeaturesPublicTransport (
                  dateStart: DateTime,
                  dateEnd: DateTime
)

object ResponseMapInfoFeaturesPublicTransport {
implicit val format: Format[ResponseMapInfoFeaturesPublicTransport] = Json.format
}

