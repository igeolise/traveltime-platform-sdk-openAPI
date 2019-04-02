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
 * @param type 
 */
data class RequestTransportationFast (
    val type: RequestTransportationFast.Type
) {

    /**
    * 
    * Values: publicTransport,driving,drivingPluspublicTransport
    */
    enum class Type(val value: kotlin.String){
    
        @Json(name = "public_transport") publicTransport("public_transport"),
    
        @Json(name = "driving") driving("driving"),
    
        @Json(name = "driving+public_transport") drivingPluspublicTransport("driving+public_transport");
    
    }

}

