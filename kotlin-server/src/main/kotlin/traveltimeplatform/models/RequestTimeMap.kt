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

import traveltimeplatform.models.RequestTimeMapArrivalSearch
import traveltimeplatform.models.RequestTimeMapDepartureSearch
import traveltimeplatform.models.RequestUnionOnIntersection

/**
 * 
 * @param departureSearches 
 * @param arrivalSearches 
 * @param unions 
 * @param intersections 
 */
data class RequestTimeMap (
    val departureSearches: kotlin.Array<RequestTimeMapDepartureSearch>? = null,
    val arrivalSearches: kotlin.Array<RequestTimeMapArrivalSearch>? = null,
    val unions: kotlin.Array<RequestUnionOnIntersection>? = null,
    val intersections: kotlin.Array<RequestUnionOnIntersection>? = null
) {

}

