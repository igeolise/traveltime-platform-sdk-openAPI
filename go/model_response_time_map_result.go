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
// ResponseTimeMapResult struct for ResponseTimeMapResult
type ResponseTimeMapResult struct {
	SearchId string `json:"search_id"`
	Shapes []ResponseShape `json:"shapes"`
	Properties ResponseTimeMapProperties `json:"properties"`
}
