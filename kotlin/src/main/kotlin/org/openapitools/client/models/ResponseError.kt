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
 * @param httpStatus 
 * @param errorCode 
 * @param description 
 * @param documentationLink 
 * @param additionalInfo 
 */

data class ResponseError (
    @Json(name = "http_status")
    val httpStatus: kotlin.Int? = null,
    @Json(name = "error_code")
    val errorCode: kotlin.Int? = null,
    @Json(name = "description")
    val description: kotlin.String? = null,
    @Json(name = "documentation_link")
    val documentationLink: kotlin.String? = null,
    @Json(name = "additional_info")
    val additionalInfo: kotlin.collections.Map<kotlin.String, kotlin.collections.List<kotlin.String>>? = null
)

