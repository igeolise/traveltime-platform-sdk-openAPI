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


import com.squareup.moshi.Json

/**
 * 
 * @param travelTime 
 * @param distance 
 */

data class ResponseTimeFilterPostcodesProperties (
    @Json(name = "travel_time")
    val travelTime: kotlin.Int? = null,
    @Json(name = "distance")
    val distance: kotlin.Int? = null
)

