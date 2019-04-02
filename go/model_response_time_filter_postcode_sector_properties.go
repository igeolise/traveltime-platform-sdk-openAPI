/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package traveltimeplatform

type ResponseTimeFilterPostcodeSectorProperties struct {
	TravelTimeReachable ResponseTravelTimeStatistics `json:"travel_time_reachable,omitempty"`
	TravelTimeAll ResponseTravelTimeStatistics `json:"travel_time_all,omitempty"`
	Coverage float64 `json:"coverage,omitempty"`
}
