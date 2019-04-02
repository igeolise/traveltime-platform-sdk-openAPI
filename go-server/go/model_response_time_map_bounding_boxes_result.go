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

type ResponseTimeMapBoundingBoxesResult struct {

	SearchId string `json:"search_id"`

	BoundingBoxes []ResponseBoundingBox `json:"bounding_boxes"`

	Properties *ResponseTimeMapProperties `json:"properties"`
}
