/*
 * TravelTime Platform API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.0.0
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi
// RequestTimeFilterFastArrivalManyToOneSearch struct for RequestTimeFilterFastArrivalManyToOneSearch
type RequestTimeFilterFastArrivalManyToOneSearch struct {
	Id string `json:"id"`
	ArrivalLocationId string `json:"arrival_location_id"`
	DepartureLocationIds []string `json:"departure_location_ids"`
	Transportation RequestTransportationFast `json:"transportation"`
	TravelTime int32 `json:"travel_time"`
	ArrivalTimePeriod RequestArrivalTimePeriod `json:"arrival_time_period"`
	Properties []RequestTimeFilterFastProperty `json:"properties"`
}
