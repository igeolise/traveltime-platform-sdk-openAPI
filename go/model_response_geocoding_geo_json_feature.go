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
// ResponseGeocodingGeoJsonFeature struct for ResponseGeocodingGeoJsonFeature
type ResponseGeocodingGeoJsonFeature struct {
	Type string `json:"type"`
	Geometry ResponseGeocodingGeometry `json:"geometry"`
	Properties ResponseGeocodingProperties `json:"properties"`
}
