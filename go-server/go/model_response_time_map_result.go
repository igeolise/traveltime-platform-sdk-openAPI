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

type ResponseTimeMapResult struct {

	SearchId string `json:"search_id"`

	Shapes []ResponseShape `json:"shapes"`

	Properties *ResponseTimeMapProperties `json:"properties"`
}
