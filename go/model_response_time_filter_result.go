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
// ResponseTimeFilterResult struct for ResponseTimeFilterResult
type ResponseTimeFilterResult struct {
	SearchId string `json:"search_id"`
	Locations []ResponseTimeFilterLocation `json:"locations"`
	Unreachable []string `json:"unreachable"`
}
