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

type ResponseRoutesResult struct {

	SearchId string `json:"search_id"`

	Locations []ResponseRoutesLocation `json:"locations"`

	Unreachable []string `json:"unreachable"`
}
