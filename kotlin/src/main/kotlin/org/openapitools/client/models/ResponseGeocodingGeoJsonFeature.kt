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
package org.openapitools.client.models

import org.openapitools.client.models.ResponseGeocodingGeometry
import org.openapitools.client.models.ResponseGeocodingProperties

import com.squareup.moshi.Json

/**
 * 
 * @param type 
 * @param geometry 
 * @param properties 
 */

data class ResponseGeocodingGeoJsonFeature (
    @Json(name = "type")
    val type: kotlin.String,
    @Json(name = "geometry")
    val geometry: ResponseGeocodingGeometry,
    @Json(name = "properties")
    val properties: ResponseGeocodingProperties
)

