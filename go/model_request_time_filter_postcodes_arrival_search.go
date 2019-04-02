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
import (
	"time"
)

type RequestTimeFilterPostcodesArrivalSearch struct {
	Id string `json:"id"`
	Transportation RequestTransportation `json:"transportation"`
	TravelTime int32 `json:"travel_time"`
	ArrivalTime time.Time `json:"arrival_time"`
	Properties []RequestTimeFilterPostcodesProperty `json:"properties"`
	Range RequestRangeFull `json:"range,omitempty"`
}
