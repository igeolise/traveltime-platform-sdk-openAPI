/*
 * TravelTime API
 *
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * API version: 1.2.1
 * Contact: support@igeolise.com
 * Generated by: OpenAPI Generator (https://openapi-generator.tech)
 */

package openapi

type RequestTimeFilterPostcodeDistricts struct {

	DepartureSearches []RequestTimeFilterPostcodeDistrictsDepartureSearch `json:"departure_searches,omitempty"`

	ArrivalSearches []RequestTimeFilterPostcodeDistrictsArrivalSearch `json:"arrival_searches,omitempty"`
}
