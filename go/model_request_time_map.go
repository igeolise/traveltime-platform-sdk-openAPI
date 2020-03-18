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
// RequestTimeMap struct for RequestTimeMap
type RequestTimeMap struct {
	DepartureSearches []RequestTimeMapDepartureSearch `json:"departure_searches,omitempty"`
	ArrivalSearches []RequestTimeMapArrivalSearch `json:"arrival_searches,omitempty"`
	Unions []RequestUnionOnIntersection `json:"unions,omitempty"`
	Intersections []RequestUnionOnIntersection `json:"intersections,omitempty"`
}
