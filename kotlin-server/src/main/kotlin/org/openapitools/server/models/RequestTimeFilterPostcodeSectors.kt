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
package org.openapitools.server.models

import org.openapitools.server.models.RequestTimeFilterPostcodeSectorsArrivalSearch
import org.openapitools.server.models.RequestTimeFilterPostcodeSectorsDepartureSearch

/**
 * 
 * @param departureSearches 
 * @param arrivalSearches 
 */
data class RequestTimeFilterPostcodeSectors (
    val departureSearches: kotlin.Array<RequestTimeFilterPostcodeSectorsDepartureSearch>? = null,
    val arrivalSearches: kotlin.Array<RequestTimeFilterPostcodeSectorsArrivalSearch>? = null
) 
