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
package traveltimeplatform.models


import com.squareup.moshi.Json

/**
* 
* Values: travelTime,fares
*/
enum class RequestTimeFilterFastProperty(val value: kotlin.String){

    @Json(name = "travel_time") travelTime("travel_time"),

    @Json(name = "fares") fares("fares");

}

