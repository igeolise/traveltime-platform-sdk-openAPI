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

type RequestRoutesArrivalSearch struct {
	Id string `json:"id"`
	DepartureLocationIds []string `json:"departure_location_ids"`
	ArrivalLocationId string `json:"arrival_location_id"`
	Transportation RequestTransportation `json:"transportation"`
	ArrivalTime time.Time `json:"arrival_time"`
	Properties []RequestRoutesProperty `json:"properties"`
	Range RequestRangeFull `json:"range,omitempty"`
}
