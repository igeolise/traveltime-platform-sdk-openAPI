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

import org.openapitools.client.models.ResponseTransportationMode

import com.squareup.moshi.Json

/**
 * 
 * @param mode 
 * @param distance 
 */

data class ResponseDistanceBreakdownItem (
    @Json(name = "mode")
    val mode: ResponseTransportationMode,
    @Json(name = "distance")
    val distance: kotlin.Int
)

