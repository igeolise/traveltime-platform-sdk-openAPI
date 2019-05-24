/**
* TravelTime Platform API
* No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
*
* The version of the OpenAPI document: 1.0.0
* Contact: support@igeolise.com
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
package traveltimeplatform.models

import traveltimeplatform.models.ResponseTimeFilterPostcodeDistrict

import com.squareup.moshi.Json
/**
 * 
 * @param searchId 
 * @param districts 
 */
data class ResponseTimeFilterPostcodeDistrictsResult (
    @Json(name = "search_id")
    val searchId: kotlin.String,
    @Json(name = "districts")
    val districts: kotlin.Array<ResponseTimeFilterPostcodeDistrict>
) {

}

